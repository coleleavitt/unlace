__int64 __fastcall sub_D0430(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 *v7; // rbx
  unsigned int tinfo_size; // eax
  int *v9; // rbx
  unsigned __int64 v10; // rbp
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 result; // rax
  __int64 *v18; // r14
  unsigned int v19; // eax
  int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  int v27; // eax
  bool v28; // zf
  int v29; // r14d
  int v30; // ecx
  unsigned int v31; // r14d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r8
  int v36; // edx
  int v37; // r10d
  char v38; // al
  char v39; // al
  unsigned int v40; // eax
  unsigned int v41; // eax
  int v42; // eax
  unsigned __int8 v43; // [rsp+8h] [rbp-90h]
  unsigned __int8 v44; // [rsp+13h] [rbp-85h]
  int v45; // [rsp+14h] [rbp-84h]
  __int64 v46; // [rsp+18h] [rbp-80h]
  __int64 v47; // [rsp+18h] [rbp-80h]
  int v48; // [rsp+20h] [rbp-78h]
  int v49; // [rsp+24h] [rbp-74h]
  int v50; // [rsp+24h] [rbp-74h]
  int v51; // [rsp+24h] [rbp-74h]
  int v52; // [rsp+24h] [rbp-74h]
  int v53; // [rsp+24h] [rbp-74h]
  int v54; // [rsp+24h] [rbp-74h]
  int v55; // [rsp+28h] [rbp-70h]
  int v56; // [rsp+28h] [rbp-70h]
  int v57; // [rsp+28h] [rbp-70h]
  int v58; // [rsp+28h] [rbp-70h]
  int v59; // [rsp+28h] [rbp-70h]
  int v60; // [rsp+2Ch] [rbp-6Ch]
  int v61; // [rsp+3Ch] [rbp-5Ch] BYREF
  int *v62; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+48h] [rbp-50h]
  __int64 v64; // [rsp+50h] [rbp-48h]
  unsigned __int64 v65; // [rsp+58h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v6 = *(int *)(a1 + 64);
  v64 = 0;
  v7 = (__int64 *)(*a2 + 104LL * *(int *)(*a3 + 4 * v6));
  tinfo_size = get_tinfo_size(0, v7[10], 0);
  v62 = nullptr;
  v63 = 0;
  v44 = sub_CF160(a1, (__int64 *)&v62, v7, tinfo_size, 0);
  v9 = v62;
  if ( !v44 )
    goto LABEL_26;
  v10 = v63;
  if ( !v63 )
  {
    if ( !under_debugger )
      sub_37EEE0(51190);
    BUG();
  }
  v11 = *v62;
  v48 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)a1 == 4 )
  {
    v23 = sub_D0290(a1, a2, a3, v11, 1);
    v13 = v23;
    if ( v23 != -1 )
    {
      v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
      if ( *(_DWORD *)(a1 + 64) == v23 )
        goto LABEL_6;
      goto LABEL_17;
    }
  }
  v12 = sub_D0290(a1, a2, a3, v11, 0);
  v13 = v12;
  v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
  if ( v12 == -1 )
  {
    v24 = *(_DWORD *)(a1 + 72);
    if ( v24 <= 0x10 )
      v24 = getinf(99);
    if ( v24 == 176 )
      goto LABEL_26;
    if ( v24 == 256 )
      goto LABEL_26;
    if ( !(unsigned __int8)getinf_flag(67, 4) )
      goto LABEL_26;
    v27 = *(_DWORD *)(a1 + 56);
    if ( (v27 & 1) == 0 )
      goto LABEL_26;
    v28 = *(_DWORD *)a1 == 4;
    *(_DWORD *)(a1 + 56) = v27 + 1;
    v29 = *v9;
    if ( !v28 || (v30 = sub_D0290(a1, a2, a3, v29, 1), v30 == -1) )
    {
      v30 = sub_D0290(a1, a2, a3, v29, 0);
      if ( v30 == -1 )
        goto LABEL_26;
    }
    v49 = v30;
    v31 = *(_DWORD *)(a1 + 72);
    v32 = *(int *)(*a3 + 4LL * v30);
    v61 = 0;
    v33 = *a2 + 104 * v32;
    v34 = *(_QWORD *)(v33 + 80);
    v47 = v33;
    get_tinfo_size(&v61, v34, 0);
    v36 = v61;
    v13 = v49;
    if ( (v61 & (v61 - 1)) != 0 )
      sub_CB770((__int64)&v61, v34, (unsigned int)v61, v49, v35);
    v37 = 2 * v45;
    if ( v61 <= 2 * v45 )
    {
      if ( v45 > v61 )
      {
        if ( v31 > 0x10 )
        {
LABEL_42:
          if ( v31 == 176 || v31 == 256 )
            goto LABEL_46;
          goto LABEL_44;
        }
LABEL_74:
        v58 = v13;
        v53 = v36;
        v41 = getinf(99);
        v13 = v58;
        v36 = v53;
        v31 = v41;
        goto LABEL_42;
      }
      if ( v31 > 0x10 )
        goto LABEL_55;
      goto LABEL_72;
    }
    if ( v31 <= 0x10 )
    {
      v59 = v49;
      v54 = v61;
      v42 = getinf(99);
      LODWORD(v13) = v59;
      v37 = 2 * v45;
      if ( v42 == 176 || v42 == 256 )
      {
        if ( v45 > v37 )
        {
LABEL_73:
          v36 = v37;
          goto LABEL_74;
        }
LABEL_71:
        v36 = v37;
LABEL_72:
        v57 = v13;
        v52 = v36;
        v40 = getinf(99);
        LODWORD(v13) = v57;
        v36 = v52;
        v31 = v40;
LABEL_55:
        if ( v31 == 176 || v31 == 256 )
          goto LABEL_26;
        goto LABEL_57;
      }
      v36 = v54;
    }
    else if ( v31 == 256 || v31 == 176 )
    {
      if ( v45 <= v37 )
        goto LABEL_26;
      v36 = 2 * v45;
      if ( (*(_BYTE *)(v47 + 27) & 4) == 0 )
        goto LABEL_26;
LABEL_67:
      if ( v36 > v45 )
        v36 = v45;
LABEL_47:
      if ( v45 < v36 )
      {
        ++v48;
        goto LABEL_5;
      }
LABEL_26:
      result = 0;
      goto LABEL_11;
    }
    v60 = v37;
    v56 = v13;
    v51 = v36;
    v39 = getinf_flag(67, 512);
    v36 = v51;
    v13 = v56;
    if ( v39 )
      goto LABEL_46;
    v37 = v60;
    if ( v45 > v60 )
    {
      if ( v31 > 0x10 )
      {
        v36 = v60;
LABEL_44:
        v55 = v13;
        v50 = v36;
        v38 = getinf_flag(67, 2);
        goto LABEL_45;
      }
      goto LABEL_73;
    }
    if ( v31 > 0x10 )
    {
      v36 = v60;
LABEL_57:
      v55 = v13;
      v50 = v36;
      v38 = getinf_flag(67, 4);
LABEL_45:
      v36 = v50;
      v13 = v55;
      if ( !v38 )
        goto LABEL_26;
LABEL_46:
      if ( (*(_BYTE *)(v47 + 27) & 4) == 0 )
        goto LABEL_47;
      goto LABEL_67;
    }
    goto LABEL_71;
  }
LABEL_5:
  if ( *(_DWORD *)(a1 + 64) == (_DWORD)v13 )
    goto LABEL_6;
LABEL_17:
  v46 = 4 * v13;
  v18 = (__int64 *)(*a2 + 104LL * *(int *)(*a3 + 4 * v13));
  v19 = get_tinfo_size(0, v18[10], 0);
  v62 = v9;
  v63 = v10;
  result = sub_CF160(a1, (__int64 *)&v62, v18, v19, 0);
  v9 = v62;
  if ( !(_BYTE)result )
    goto LABEL_11;
  v10 = v63;
  v20 = (int *)(*a3 + v46);
  v21 = (int *)(*a3 + 4LL * *(int *)(a1 + 64));
  v22 = *v21;
  *v21 = *v20;
  *v20 = v22;
  *(_DWORD *)(a1 + 68) = 1;
LABEL_6:
  v14 = 1;
  v15 = 1;
  if ( v10 <= 1 )
  {
LABEL_7:
    if ( *(_DWORD *)a1 == 4 )
      *(_DWORD *)(a1 + 56) = v48
                           + ((v45 + *(_DWORD *)(*a2 + 104LL * *(int *)(*a3 + 4LL * *(int *)(a1 + 64)) + 88) - 1) & -v45)
                           / v45;
    v16 = *(_QWORD *)(a1 + 80);
    if ( *(_DWORD *)(*(_QWORD *)(v16 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
      goto LABEL_10;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 112) + 200LL))(
           *(_QWORD *)(v16 + 112),
           **(unsigned int **)(a1 + 112)) )
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
              **(unsigned int **)(a1 + 112));
      if ( *(_QWORD *)(a1 + 120) <= 1u
        || (v25 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112)),
            (unsigned int)v25 >= v26) )
      {
LABEL_32:
        if ( v26 <= 7 )
        {
          *(_DWORD *)(a1 + 60) = (*(_DWORD *)(a1 + 60) + 1) & 0xFFFFFFFE;
          result = v44;
          goto LABEL_11;
        }
LABEL_10:
        result = v44;
        goto LABEL_11;
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 120) <= 1u )
        goto LABEL_10;
      v25 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
      if ( (unsigned int)v25 > 7 )
        goto LABEL_10;
    }
    v26 = round_down_power2(v25);
    goto LABEL_32;
  }
  while ( 1 )
  {
    result = sub_CF020((int *)a1, v9[v15], 1, 0);
    if ( !(_BYTE)result )
      break;
    v15 = ++v14;
    if ( v14 >= v10 )
      goto LABEL_7;
  }
LABEL_11:
  if ( v9 )
  {
    v43 = result;
    qfree(v9);
    return v43;
  }
  return result;
}
