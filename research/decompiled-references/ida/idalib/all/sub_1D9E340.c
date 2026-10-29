__int64 __fastcall sub_1D9E340(
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
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  _QWORD *v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  _DWORD *v30; // rax
  __int64 v31; // rdi
  int v32; // edx
  _QWORD *v33; // rax
  __int64 v34; // rdi
  _QWORD *v35; // rcx
  __int64 v36; // r15
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax

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
      v16 = sub_1D8B300(a1, (unsigned __int16 *)v10, a7, a8, v13, v14, v15);
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
    v26 = v23[13];
    v27 = v23;
    v28 = *(_QWORD *)(v26 + 96);
    if ( (v28 & 1) != 0 )
    {
      v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v35 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v28 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v28 & 2) == 0 )
      {
LABEL_25:
        v11 = *a1;
        v12 = 0;
        if ( (*(_BYTE *)(v27[16] + 1LL) & 4) != 0 )
          v12 = *(_DWORD *)(*(_QWORD *)(v11 + 4616) + 640LL * *(unsigned int *)(v11 + 4624) - 640);
        goto LABEL_4;
      }
      v36 = v35[2295];
      v37 = v26 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v36 )
      {
        v38 = v35[294];
        v35[304] += 24LL;
        v39 = (v38 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v35[295] >= v39 + 24 && v38 )
        {
          v35[294] = v39 + 24;
          v40 = (v38 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v40 = sub_986170((__int64)(v35 + 294), 24, 24, 3, v24, v25);
          v39 = v40 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v40 = v36;
        v37 = v39 | 4;
        *(_DWORD *)(v40 + 8) = 0;
        *(_QWORD *)(v40 + 16) = v26;
      }
      v29 = v37 & 0xFFFFFFFFFFFFFFFELL;
      v28 = v29 | 1;
      *(_QWORD *)(v26 + 96) = v29 | 1;
    }
    if ( v29 )
    {
      if ( (v29 & 4) != 0 )
      {
        v30 = (_DWORD *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v30 )
        {
          v31 = *(_QWORD *)v30;
          v32 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
          if ( v30[2] != v32 )
          {
            v30[2] = v32;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 152LL))(v31, v26);
          }
        }
      }
    }
    goto LABEL_25;
  }
  v33 = sub_1D99A60(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, a7, a8);
  if ( !v33 )
    return 1;
  v34 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v20 = a2;
    if ( v33 == (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
      return v20;
  }
  return sub_19A7F40(v34, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 24), (__int64)v33, *(unsigned int *)(a2 + 28));
}
