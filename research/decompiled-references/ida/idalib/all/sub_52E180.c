__int64 __fastcall sub_52E180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v9; // r13
  void *v10; // rdi
  unsigned int v11; // ebx
  _BYTE *v13; // rbp
  void *v14; // rsi
  char *v15; // r13
  char *v16; // r14
  void *v17; // rdi
  void *v18; // rax
  void *v19; // rdx
  __m128i v20; // xmm0
  void *src[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  void *v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v9 = a4;
  if ( a2 && (a4 & 1) == 0 )
  {
    memset(src, 0, sizeof(src));
    sub_35A790((char **)src);
    v13 = src[1];
    v14 = src[0];
    if ( src[1] )
    {
      v15 = (char *)src[1] + 1;
      v16 = (char *)src[1] - 1;
      if ( src[2] >= (char *)src[1] + 1 )
        goto LABEL_16;
    }
    else
    {
      if ( src[2] > (char *)&dword_0 + 1 )
      {
        src[1] = &dword_0 + 2;
        *((_BYTE *)src[0] + 1) = 0;
LABEL_18:
        *(_BYTE *)src[0] = 1;
        v18 = *(void **)(a2 + 16);
        v19 = src[0];
        v20 = _mm_loadu_si128((const __m128i *)&src[1]);
        src[0] = *(void **)a2;
        v17 = src[0];
        *(_QWORD *)a2 = v19;
        src[2] = v18;
        *(__m128i *)(a2 + 8) = v20;
        if ( v17 )
        {
          src[1] = nullptr;
          qfree(v17);
        }
        return 1;
      }
      v16 = nullptr;
      v15 = (_BYTE *)(&dword_0 + 2);
      v13 = (_BYTE *)(&dword_0 + 1);
    }
    src[0] = (void *)qvector_reserve(src, src[0], v15, 1);
    v14 = src[0];
LABEL_16:
    src[1] = v15;
    v13[(_QWORD)v14] = 0;
    if ( v16 )
      memmove((char *)src[0] + 1, src[0], (size_t)v16);
    goto LABEL_18;
  }
  v10 = *(void **)(a1 + 48);
  v22 = -1;
  v23 = 0;
  v24 = v10;
  memset(src, 0, sizeof(src));
  if ( v10 )
    v24 = (void *)(*(__int64 (__fastcall **)(void *, __int64, __int64, __int64, __int64, __int64, void *, void *, void *, __int64, __int64))(*(_QWORD *)v10 + 16LL))(
                    v10,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    src[0],
                    src[1],
                    src[2],
                    v22,
                    v23);
  if ( (unsigned int)bookmarks_t_get_by_inode((__int64)src, 0, a3, *(_QWORD *)(a1 + 56), 0.0) != -1 )
  {
    if ( !a2 || (v9 & 1) == 0 )
      goto LABEL_10;
    if ( v24 )
    {
      (**(void (__fastcall ***)(void *, __int64, _QWORD))v24)(v24, a2, *(_QWORD *)(a1 + 56));
LABEL_10:
      v11 = 1;
      goto LABEL_11;
    }
    return 1;
  }
  v11 = 0;
LABEL_11:
  if ( v24 )
    qfree(v24);
  return v11;
}
