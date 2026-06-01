__int64 __fastcall sub_E774E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 *v17; // rdx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  _DWORD *v25; // rax
  __int64 v26; // rdi
  int v27; // edx
  _QWORD *v28; // rdi
  __int64 v29; // r12
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // r12
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rdi
  int v42; // edx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_6;
  v7 = (__int64 **)sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  v8 = *v7;
  v9 = (unsigned __int64)&(*v7)[*((unsigned int *)v7 + 2)];
  if ( (unsigned __int64)v8 >= v9 )
  {
    if ( v8 != (__int64 *)v9 )
    {
      while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 248 )
      {
        v9 += 8LL;
        if ( v8 == (__int64 *)v9 )
          goto LABEL_6;
      }
      goto LABEL_13;
    }
LABEL_6:
    v11 = 0;
    goto LABEL_7;
  }
  v10 = v8;
  while ( *(_WORD *)(*v10 + 36) != 248 )
  {
    if ( (__int64 *)v9 == ++v10 )
      goto LABEL_6;
  }
  if ( (__int64 *)v9 == v10 )
    goto LABEL_6;
LABEL_13:
  v11 = *v8;
  if ( *(_WORD *)(*v8 + 36) != 248 )
  {
    v17 = v8 + 1;
    do
      v18 = *v17++;
    while ( *(_WORD *)(v18 + 36) != 248 );
    v19 = sub_B142D0(v18);
    v15 = 1;
    if ( v19 > 1 )
      return v15;
    goto LABEL_17;
  }
LABEL_7:
  v12 = sub_B142D0(v11);
  v15 = 1;
  if ( v12 > 1 )
    return v15;
LABEL_17:
  v20 = *(_QWORD *)(a1 + 104);
  v21 = *(_QWORD *)(a1 + 128);
  v22 = *(_QWORD *)(v20 + 96);
  v23 = v22 & 1;
  v24 = v22 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v21 )
  {
    if ( (v22 & 1) == 0 )
    {
      v34 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v22 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v22 & 2) == 0 )
          return 0;
        v35 = v34[2295];
        v36 = v20 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v35 )
        {
          v37 = v34[294];
          v34[304] += 24LL;
          v38 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v34[295] >= v38 + 24 && v37 )
          {
            v34[294] = v38 + 24;
            v39 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v39 = sub_986170((__int64)(v34 + 294), 24, 24, 3, v13, v14);
            v38 = v39 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v39 = v35;
          v36 = v38 | 4;
          *(_DWORD *)(v39 + 8) = 0;
          *(_QWORD *)(v39 + 16) = v20;
        }
        v24 = v36 & 0xFFFFFFFFFFFFFFFELL;
        v22 = v24 | 1;
        *(_QWORD *)(v20 + 96) = v24 | 1;
      }
    }
    if ( v24 )
    {
      if ( (v24 & 4) != 0 )
      {
        v40 = (_DWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v40 )
        {
          v41 = *(_QWORD *)v40;
          v42 = *(_DWORD *)(*(_QWORD *)v40 + 12LL);
          if ( v40[2] != v42 )
          {
            v40[2] = v42;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 152LL))(v41, v20);
          }
        }
      }
    }
    v21 = *(_QWORD *)(a1 + 128);
    if ( v21 )
    {
      v20 = *(_QWORD *)(a1 + 104);
      v22 = *(_QWORD *)(v20 + 96);
      v23 = v22 & 1;
      v24 = v22 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_18;
    }
    return 0;
  }
LABEL_18:
  if ( v23 || (v28 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL), (v22 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
LABEL_19:
    if ( v24 )
    {
      if ( (v24 & 4) != 0 )
      {
        v25 = (_DWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v25 )
        {
          v26 = *(_QWORD *)v25;
          v27 = *(_DWORD *)(*(_QWORD *)v25 + 12LL);
          if ( v25[2] != v27 )
          {
            v25[2] = v27;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 152LL))(v26, v20);
          }
        }
      }
    }
    v21 = *(_QWORD *)(a1 + 128);
    return (*(_BYTE *)(v21 + 1) & 4) != 0;
  }
  if ( (v22 & 2) != 0 )
  {
    v29 = v28[2295];
    v30 = v20 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v29 )
    {
      v31 = v28[294];
      v28[304] += 24LL;
      v32 = (v31 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28[295] >= v32 + 24 && v31 )
      {
        v28[294] = v32 + 24;
        v33 = (v31 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v33 = sub_986170((__int64)(v28 + 294), 24, 24, 3, v13, v14);
        v32 = v33 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v33 = v29;
      v30 = v32 | 4;
      *(_DWORD *)(v33 + 8) = 0;
      *(_QWORD *)(v33 + 16) = v20;
    }
    v24 = v30 & 0xFFFFFFFFFFFFFFFELL;
    v22 = v24 | 1;
    *(_QWORD *)(v20 + 96) = v24 | 1;
    goto LABEL_19;
  }
  return (*(_BYTE *)(v21 + 1) & 4) != 0;
}
