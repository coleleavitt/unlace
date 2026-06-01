__int64 __fastcall sub_9F0B0(
        char **a1,
        char *a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rbp
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v17; // edi
  pthread_mutex_t *v18; // rdi
  int v19[2]; // [rsp+0h] [rbp-48h] BYREF
  void *v20; // [rsp+18h] [rbp-30h]

  v20 = (void *)__readfsqword(0x28u);
  *(_QWORD *)v19 = 0;
  sub_9EBF0((__int64)v19, nullptr, a2, 0, a4, a5, a6, a7, a8, a9, a10, a11);
  v12 = *(_QWORD *)v19;
  v13 = sub_9BB80(v19, a1, a3);
  sub_9BE30(v12);
  v14 = *(_DWORD *)(v12 + 5728);
  *(_QWORD *)(v12 + 5720) = 0;
  if ( v14 )
  {
    v15 = v14 - 1;
    *(_DWORD *)(v12 + 5728) = v15;
    if ( !v15 )
    {
      v17 = *(_DWORD *)(v12 + 5712);
      if ( v17 == -1 )
      {
        sub_98450(*(pthread_mutex_t **)v12);
      }
      else
      {
        sub_952F0(v17);
        v18 = *(pthread_mutex_t **)v12;
        *(_DWORD *)(v12 + 5712) = -1;
        sub_98450(v18);
      }
    }
  }
  return v13;
}

