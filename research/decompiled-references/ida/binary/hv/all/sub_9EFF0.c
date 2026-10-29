__int64 __fastcall sub_9EFF0(
        char *a1,
        char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // ebp
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v15; // edi
  pthread_mutex_t *v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v18; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  sub_9EBF0((__int64)&v17, a1, a2, 3, a3, a4, a5, a6, a7, a8, a9, a10);
  v10 = v18;
  if ( !v18 )
    v10 = sub_9CE90((__int64)&v17);
  v11 = v17;
  sub_9BE30(v17);
  v12 = *(_DWORD *)(v11 + 5728);
  *(_QWORD *)(v11 + 5720) = 0;
  if ( v12 )
  {
    v13 = v12 - 1;
    *(_DWORD *)(v11 + 5728) = v13;
    if ( !v13 )
    {
      v15 = *(_DWORD *)(v11 + 5712);
      if ( v15 == -1 )
      {
        sub_98450(*(pthread_mutex_t **)v11);
      }
      else
      {
        sub_952F0(v15);
        v16 = *(pthread_mutex_t **)v11;
        *(_DWORD *)(v11 + 5712) = -1;
        sub_98450(v16);
      }
    }
  }
  return v10;
}

