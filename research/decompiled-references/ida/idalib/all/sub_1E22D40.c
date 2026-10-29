__int64 __fastcall sub_1E22D40(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v10; // r13
  __int64 v11; // r12
  int v12; // esi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r12
  _QWORD *v28; // r14
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  _DWORD *v31; // rdx
  __int64 v32; // rdi
  int v33; // eax
  _QWORD *v34; // rax
  __int64 v35; // rdi
  _QWORD *v36; // rdi
  __int64 v37; // rdx

  v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 6) == 0
      || (v22 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(*v22 + 16) != 48) )
    {
      v11 = *a1;
      v12 = 0;
LABEL_4:
      sub_18C79B0(v11, v12, 0, 4);
      v16 = sub_1E11560(a1, (unsigned __int16 *)v10, a7, a8, v13, v14, v15);
      if ( v16 == 1 )
      {
        v20 = 1;
      }
      else
      {
        v18 = *a1;
        v19 = v16 & 0xFFFFFFFFFFFFFFFELL;
        if ( *(_DWORD *)(*a1 + 12632) || (v20 = a2, v19 != (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL)) )
          v20 = sub_19A8E90(
                  v18,
                  *(_QWORD *)(a2 + 8),
                  *(unsigned int *)(a2 + 24),
                  v19,
                  *(unsigned int *)(a2 + 28),
                  v17,
                  (__m128i)a7,
                  a8);
      }
      sub_190D5E0(v11, a7);
      return v20;
    }
    v23 = sub_F60F10(*v22, a2, a3, a4, a5, a6);
    v27 = v23[13];
    v28 = v23;
    v29 = *(_QWORD *)(v27 + 96);
    if ( (v29 & 1) != 0 )
    {
      v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v36 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v29 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v37 = *(_QWORD *)(v27 + 96) & 2LL, !(_DWORD)v37) )
      {
LABEL_25:
        v11 = *a1;
        v12 = 0;
        if ( (*(_BYTE *)(v28[16] + 1LL) & 4) != 0 )
          v12 = *(_DWORD *)(*(_QWORD *)(v11 + 4616) + 640LL * *(unsigned int *)(v11 + 4624) - 640);
        goto LABEL_4;
      }
      v30 = sub_6E2500(v36, v23[13], v37, v24, v25, v26) & 0xFFFFFFFFFFFFFFFELL;
      v29 = v30 | 1;
      *(_QWORD *)(v27 + 96) = v30 | 1;
    }
    if ( v30 )
    {
      if ( (v30 & 4) != 0 )
      {
        v31 = (_DWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v31 )
        {
          v32 = *(_QWORD *)v31;
          v33 = *(_DWORD *)(*(_QWORD *)v31 + 12LL);
          if ( v31[2] != v33 )
          {
            v31[2] = v33;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 152LL))(v32, v27);
          }
        }
      }
    }
    goto LABEL_25;
  }
  v34 = sub_1E1F330(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, a7, a8);
  if ( !v34 )
    return 1;
  v35 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v20 = a2;
    if ( v34 == (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
      return v20;
  }
  return sub_19A7F40(v35, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 24), (__int64)v34, *(unsigned int *)(a2 + 28));
}
