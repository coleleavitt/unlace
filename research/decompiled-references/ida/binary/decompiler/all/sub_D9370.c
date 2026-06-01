__int64 __fastcall sub_D9370(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rdx
  _DWORD *v5; // rbx
  unsigned int tinfo_size; // eax
  int *v7; // rbx
  unsigned __int64 v8; // rbp
  int v9; // r14d
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  _DWORD *v16; // r14
  unsigned int v17; // eax
  int *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  int v24; // eax
  bool v25; // zf
  int v26; // r14d
  int v27; // ecx
  unsigned int v28; // r14d
  __int64 v29; // rax
  int v30; // edx
  int v31; // r10d
  char v32; // al
  char v33; // al
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  unsigned __int8 v37; // [rsp+8h] [rbp-90h]
  unsigned __int8 v38; // [rsp+13h] [rbp-85h]
  int v39; // [rsp+14h] [rbp-84h]
  __int64 v40; // [rsp+18h] [rbp-80h]
  __int64 v41; // [rsp+18h] [rbp-80h]
  int v42; // [rsp+20h] [rbp-78h]
  int v43; // [rsp+24h] [rbp-74h]
  int v44; // [rsp+24h] [rbp-74h]
  int v45; // [rsp+24h] [rbp-74h]
  int v46; // [rsp+24h] [rbp-74h]
  int v47; // [rsp+24h] [rbp-74h]
  int v48; // [rsp+28h] [rbp-70h]
  int v49; // [rsp+28h] [rbp-70h]
  int v50; // [rsp+28h] [rbp-70h]
  int v51; // [rsp+28h] [rbp-70h]
  int v52; // [rsp+2Ch] [rbp-6Ch]
  int v53; // [rsp+3Ch] [rbp-5Ch]
  int *v54; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-50h]
  __int64 v56; // [rsp+50h] [rbp-48h]
  unsigned __int64 v57; // [rsp+58h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v4 = *(int *)(a1 + 64);
  v56 = 0;
  v5 = (_DWORD *)(*a2 + 104LL * *(int *)(*a3 + 4 * v4));
  tinfo_size = get_tinfo_size();
  v54 = 0;
  v55 = 0;
  v38 = sub_D80A0(a1, (__int64 *)&v54, v5, tinfo_size, 0);
  v7 = v54;
  if ( !v38 )
    goto LABEL_26;
  v8 = v55;
  if ( !v55 )
  {
    if ( !under_debugger )
      sub_37EA20(51190);
    BUG();
  }
  v9 = *v54;
  v42 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)a1 == 4 )
  {
    v21 = sub_D91D0(a1, a2, a3, v9, 1);
    v11 = v21;
    if ( v21 != -1 )
    {
      v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
      if ( *(_DWORD *)(a1 + 64) == v21 )
        goto LABEL_6;
      goto LABEL_17;
    }
  }
  v10 = sub_D91D0(a1, a2, a3, v9, 0);
  v11 = v10;
  v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
  if ( v10 == -1 )
  {
    v22 = *(_DWORD *)(a1 + 72);
    if ( v22 <= 0x10 )
      v22 = getinf();
    if ( v22 == 176 )
      goto LABEL_26;
    if ( v22 == 256 )
      goto LABEL_26;
    if ( !(unsigned __int8)getinf_flag() )
      goto LABEL_26;
    v24 = *(_DWORD *)(a1 + 56);
    if ( (v24 & 1) == 0 )
      goto LABEL_26;
    v25 = *(_DWORD *)a1 == 4;
    *(_DWORD *)(a1 + 56) = v24 + 1;
    v26 = *v7;
    if ( !v25 || (v27 = sub_D91D0(a1, a2, a3, v26, 1), v27 == -1) )
    {
      v27 = sub_D91D0(a1, a2, a3, v26, 0);
      if ( v27 == -1 )
        goto LABEL_26;
    }
    v43 = v27;
    v28 = *(_DWORD *)(a1 + 72);
    v29 = *(int *)(*a3 + 4LL * v27);
    v53 = 0;
    v41 = *a2 + 104 * v29;
    get_tinfo_size();
    v30 = 0;
    v11 = v43;
    v31 = 2 * v39;
    if ( (v39 & 0x40000000) == 0 )
    {
      if ( v39 > v53 )
      {
        if ( v28 > 0x10 )
        {
LABEL_41:
          if ( v28 == 176 || v28 == 256 )
            goto LABEL_44;
          goto LABEL_43;
        }
LABEL_72:
        v51 = v11;
        v47 = v30;
        v35 = getinf();
        v11 = v51;
        v30 = v47;
        v28 = v35;
        goto LABEL_41;
      }
      if ( v28 > 0x10 )
        goto LABEL_53;
      goto LABEL_70;
    }
    if ( v28 <= 0x10 )
    {
      v36 = getinf();
      LODWORD(v11) = v43;
      v31 = 2 * v39;
      if ( v36 == 176 || v36 == 256 )
      {
        if ( v39 > v31 )
          goto LABEL_71;
        goto LABEL_69;
      }
      v30 = v53;
    }
    else if ( v28 == 256 || v28 == 176 )
    {
      if ( v39 <= v31 )
        goto LABEL_26;
      v30 = 2 * v39;
      if ( (*(_BYTE *)(v41 + 27) & 4) == 0 )
        goto LABEL_26;
LABEL_65:
      if ( v30 > v39 )
        v30 = v39;
LABEL_45:
      if ( v39 < v30 )
      {
        ++v42;
        goto LABEL_5;
      }
LABEL_26:
      result = 0;
      goto LABEL_11;
    }
    v52 = v31;
    v49 = v11;
    v45 = v30;
    v33 = getinf_flag();
    v30 = v45;
    v11 = v49;
    if ( v33 )
      goto LABEL_44;
    v31 = v52;
    if ( v39 > v52 )
    {
      if ( v28 > 0x10 )
      {
        v30 = v52;
        goto LABEL_43;
      }
LABEL_71:
      v30 = v31;
      goto LABEL_72;
    }
    if ( v28 > 0x10 )
    {
      v30 = v52;
      goto LABEL_43;
    }
LABEL_69:
    v30 = v31;
LABEL_70:
    v50 = v11;
    v46 = v30;
    v34 = getinf();
    LODWORD(v11) = v50;
    v30 = v46;
    v28 = v34;
LABEL_53:
    if ( v28 == 176 || v28 == 256 )
      goto LABEL_26;
LABEL_43:
    v48 = v11;
    v44 = v30;
    v32 = getinf_flag();
    v30 = v44;
    v11 = v48;
    if ( !v32 )
      goto LABEL_26;
LABEL_44:
    if ( (*(_BYTE *)(v41 + 27) & 4) == 0 )
      goto LABEL_45;
    goto LABEL_65;
  }
LABEL_5:
  if ( *(_DWORD *)(a1 + 64) == (_DWORD)v11 )
    goto LABEL_6;
LABEL_17:
  v40 = 4 * v11;
  v16 = (_DWORD *)(*a2 + 104LL * *(int *)(*a3 + 4 * v11));
  v17 = get_tinfo_size();
  v54 = v7;
  v55 = v8;
  result = sub_D80A0(a1, (__int64 *)&v54, v16, v17, 0);
  v7 = v54;
  if ( !(_BYTE)result )
    goto LABEL_11;
  v8 = v55;
  v18 = (int *)(*a3 + v40);
  v19 = (int *)(*a3 + 4LL * *(int *)(a1 + 64));
  v20 = *v19;
  *v19 = *v18;
  *v18 = v20;
  *(_DWORD *)(a1 + 68) = 1;
LABEL_6:
  v12 = 1;
  v13 = 1;
  if ( v8 <= 1 )
  {
LABEL_7:
    if ( *(_DWORD *)a1 == 4 )
      *(_DWORD *)(a1 + 56) = v42
                           + ((v39 + *(_DWORD *)(*a2 + 104LL * *(int *)(*a3 + 4LL * *(int *)(a1 + 64)) + 88) - 1) & -v39)
                           / v39;
    v14 = *(_QWORD *)(a1 + 80);
    if ( *(_DWORD *)(*(_QWORD *)(v14 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
      goto LABEL_10;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v14 + 112) + 200LL))(
           *(_QWORD *)(v14 + 112),
           **(unsigned int **)(a1 + 112)) )
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
              **(unsigned int **)(a1 + 112));
      if ( *(_QWORD *)(a1 + 120) <= 1u
        || *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) >= (unsigned int)v23 )
      {
LABEL_32:
        if ( v23 <= 7 )
        {
          *(_DWORD *)(a1 + 60) = (*(_DWORD *)(a1 + 60) + 1) & 0xFFFFFFFE;
          result = v38;
          goto LABEL_11;
        }
LABEL_10:
        result = v38;
        goto LABEL_11;
      }
    }
    else if ( *(_QWORD *)(a1 + 120) <= 1u
           || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112)) > 7 )
    {
      goto LABEL_10;
    }
    v23 = round_down_power2();
    goto LABEL_32;
  }
  while ( 1 )
  {
    result = sub_D7F60((int *)a1, v7[v13], 1, 0);
    if ( !(_BYTE)result )
      break;
    v13 = ++v12;
    if ( v12 >= v8 )
      goto LABEL_7;
  }
LABEL_11:
  if ( v7 )
  {
    v37 = result;
    qfree();
    return v37;
  }
  return result;
}
