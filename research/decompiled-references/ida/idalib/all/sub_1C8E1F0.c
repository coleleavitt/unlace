__int64 __fastcall sub_1C8E1F0(
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
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  _QWORD *v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  _DWORD *v19; // rax
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // r12
  int v23; // esi
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int16 *v27; // rax
  __int64 v28; // r9
  __int64 v29; // rbx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // r15
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax

  v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 6) == 0
      || (v11 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(*v11 + 16) != 48) )
    {
      v22 = *a1;
      v23 = 0;
LABEL_12:
      sub_18C79B0(v22, v23, 0, 4);
      v27 = sub_1C7CFE0(a1, v10, a7, a8, v24, v25, v26);
      if ( v27 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        v29 = 1;
      else
        v29 = sub_19A8E90(
                *a1,
                *(_QWORD *)(a2 + 8),
                *(unsigned int *)(a2 + 24),
                (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFELL,
                *(unsigned int *)(a2 + 28),
                v28,
                (__m128i)a7,
                a8);
      sub_190D5E0(v22, a7);
      return v29;
    }
    v12 = sub_F60F10(*v11, a2, a3, a4, a5, a6);
    v15 = v12[13];
    v16 = v12;
    v17 = *(_QWORD *)(v15 + 96);
    if ( (v17 & 1) != 0 )
    {
      v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v32 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v17 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v17 & 2) == 0 )
      {
LABEL_21:
        v22 = *a1;
        v23 = 0;
        if ( (*(_BYTE *)(v16[16] + 1LL) & 4) != 0 )
          v23 = *(_DWORD *)(*(_QWORD *)(v22 + 4616) + 640LL * *(unsigned int *)(v22 + 4624) - 640);
        goto LABEL_12;
      }
      v33 = v32[2295];
      v34 = v15 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v33 )
      {
        v35 = v32[294];
        v32[304] += 24LL;
        v36 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v32[295] >= v36 + 24 && v35 )
        {
          v32[294] = v36 + 24;
          v37 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v37 = sub_986170((__int64)(v32 + 294), 24, 24, 3, v13, v14);
          v36 = v37 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v37 = v33;
        v34 = v36 | 4;
        *(_DWORD *)(v37 + 8) = 0;
        *(_QWORD *)(v37 + 16) = v15;
      }
      v18 = v34 & 0xFFFFFFFFFFFFFFFELL;
      v17 = v18 | 1;
      *(_QWORD *)(v15 + 96) = v18 | 1;
    }
    if ( v18 )
    {
      if ( (v18 & 4) != 0 )
      {
        v19 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v19 )
        {
          v20 = *(_QWORD *)v19;
          v21 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
          if ( v19[2] != v21 )
          {
            v19[2] = v21;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 152LL))(v20, v15);
          }
        }
      }
    }
    goto LABEL_21;
  }
  v31 = sub_1C8AA80(a1, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL, a7, a8);
  if ( !v31 )
    return 1;
  return sub_19A7F40(*a1, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 24), (__int64)v31, *(unsigned int *)(a2 + 28));
}
