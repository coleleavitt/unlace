__int64 __fastcall sub_176DBE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  unsigned __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r12
  _QWORD *v20; // r14
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  _DWORD *v23; // rdx
  __int64 v24; // rdi
  int v25; // eax
  void **v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  __int64 v29; // r15
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax

  v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 6) == 0
      || (v17 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(*v17 + 16) != 48) )
    {
      v10 = *a1;
      v11 = 0;
LABEL_4:
      sub_18C79B0(v10, v11, 0, 4);
      v12 = sub_175B800(a1, (unsigned __int16 *)v9);
      if ( v12 == 1 )
      {
        v15 = 1;
      }
      else
      {
        v13 = *a1;
        v14 = v12 & 0xFFFFFFFFFFFFFFFELL;
        if ( *(_DWORD *)(*a1 + 12632) || (v15 = a2, v14 != (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL)) )
          v15 = sub_19A8E90(v13, *(_QWORD *)(a2 + 8), *(unsigned int *)(a2 + 24), v14, *(unsigned int *)(a2 + 28));
      }
      sub_190D5E0(v10);
      return v15;
    }
    v18 = sub_F60F10(*v17, a2, a3, a4, a5, a6);
    v19 = v18[13];
    v20 = v18;
    v21 = *(_QWORD *)(v19 + 96);
    if ( (v21 & 1) != 0 )
    {
      v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v28 = v21 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v21 & 2) == 0 )
      {
LABEL_25:
        v10 = *a1;
        v11 = 0;
        if ( (*(_BYTE *)(v20[16] + 1LL) & 4) != 0 )
          v11 = *(unsigned int *)(*(_QWORD *)(v10 + 4616) + 640LL * *(unsigned int *)(v10 + 4624) - 640);
        goto LABEL_4;
      }
      v29 = *(_QWORD *)(v28 + 18360);
      v30 = v19 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v29 )
      {
        v31 = sub_1744E40((__int64 *)(v28 + 2352), 24, 3u);
        *(_QWORD *)v31 = v29;
        *(_DWORD *)(v31 + 8) = 0;
        *(_QWORD *)(v31 + 16) = v19;
        v30 = v31 | 4;
      }
      v22 = v30 & 0xFFFFFFFFFFFFFFFELL;
      v21 = v22 | 1;
      *(_QWORD *)(v19 + 96) = v22 | 1;
    }
    if ( v22 )
    {
      if ( (v22 & 4) != 0 )
      {
        v23 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v23 )
        {
          v24 = *(_QWORD *)v23;
          v25 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
          if ( v23[2] != v25 )
          {
            v23[2] = v25;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 152LL))(v24, v19);
          }
        }
      }
    }
    goto LABEL_25;
  }
  v26 = sub_176A140(a1, (void **)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL), a7);
  if ( !v26 )
    return 1;
  v27 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v15 = a2;
    if ( v26 == (void **)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
      return v15;
  }
  return sub_19A7F40(v27, *(_QWORD *)(a2 + 8), *(unsigned int *)(a2 + 24), v26, *(unsigned int *)(a2 + 28));
}
