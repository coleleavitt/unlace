__int64 __fastcall sub_9EE50(
        __int64 a1,
        char *a2,
        char *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rbx
  unsigned int v12; // ebp
  int v13; // eax
  int v14; // eax
  int v16; // edi
  pthread_mutex_t *v17; // rdi
  _QWORD v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v18[3] = __readfsqword(0x28u);
  v18[0] = 0;
  sub_9EBF0((__int64)v18, a2, a3, 0, a4, a5, a6, a7, a8, a9, a10, a11);
  v11 = v18[0];
  v12 = sub_9CD70((__int64)v18, a1);
  sub_9BE30(v11);
  v13 = *(_DWORD *)(v11 + 5728);
  *(_QWORD *)(v11 + 5720) = 0;
  if ( v13 )
  {
    v14 = v13 - 1;
    *(_DWORD *)(v11 + 5728) = v14;
    if ( !v14 )
    {
      v16 = *(_DWORD *)(v11 + 5712);
      if ( v16 == -1 )
      {
        sub_98450(*(pthread_mutex_t **)v11);
      }
      else
      {
        sub_952F0(v16);
        v17 = *(pthread_mutex_t **)v11;
        *(_DWORD *)(v11 + 5712) = -1;
        sub_98450(v17);
      }
    }
  }
  return v12;
}

