__int64 __fastcall sub_1793110(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // ebp
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  unsigned __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 **v44; // rbx
  signed __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // r15
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // r15
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // r15
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // r15
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // r13
  __int64 i; // rbx
  __int64 v69; // rax
  _QWORD *v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rax
  _DWORD *v77; // rax
  __int64 v78; // rdi
  __int64 **v79; // [rsp+8h] [rbp-60h]
  __int64 v80; // [rsp+8h] [rbp-60h]
  __int64 **v81; // [rsp+10h] [rbp-58h]
  unsigned int v82; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned int *v83; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v84[8]; // [rsp+28h] [rbp-40h] BYREF

  v82 = a2;
  if ( !a3 )
    return 1;
  v6 = (__int64)&v83;
  if ( !(unsigned __int8)sub_B7D390(a3, (__int64)&v83, 0, a4) && sub_B77D90(a3) )
  {
    v6 = v82;
    sub_1E3D740(*a1, v82, *(_QWORD *)(a3 + 112), 0, 0, 0);
  }
  if ( *(char *)(a3 + 82) < 0 )
    return 1;
  LOBYTE(v11) = sub_B7F990((_QWORD *)a3, v6, v7, v8, v9, v10);
  v12 = v11;
  if ( !(_BYTE)v11 )
    return 0;
  v14 = a3 + 72;
  v18 = *(_QWORD *)(sub_B8C1B0(v14) + 16);
  if ( (v18 & 4) != 0 )
    v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v19 )
    BUG();
  v20 = *(_QWORD *)(v19 + 40);
  v21 = *(_QWORD *)(v20 + 96);
  v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v21 & 1) == 0 )
  {
    v15 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v21 & 2) == 0 )
        goto LABEL_16;
      v16 = v15[2295];
      v73 = v20 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v16 )
      {
        v74 = v15[294];
        v15[304] += 24LL;
        v75 = (v74 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v15[295] >= v75 + 24 && v74 )
        {
          v15[294] = v75 + 24;
          v76 = (v74 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v80 = v16;
          v76 = sub_986170((__int64)(v15 + 294), 24, 24, 3, v16, v17);
          v16 = v80;
          v75 = v76 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v76 = v16;
        v73 = v75 | 4;
        *(_DWORD *)(v76 + 8) = 0;
        *(_QWORD *)(v76 + 16) = v20;
      }
      v22 = v73 & 0xFFFFFFFFFFFFFFFELL;
      v21 = v22 | 1;
      *(_QWORD *)(v20 + 96) = v22 | 1;
    }
  }
  if ( v22 )
  {
    v22 &= 4u;
    if ( (_DWORD)v22 )
    {
      v77 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v77 )
      {
        v78 = *(_QWORD *)v77;
        v22 = *(unsigned int *)(*(_QWORD *)v77 + 12LL);
        if ( v77[2] != (_DWORD)v22 )
        {
          v77[2] = v22;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v78 + 152LL))(v78, v20);
        }
      }
    }
  }
LABEL_16:
  if ( (*(_BYTE *)(*(_QWORD *)(v19 + 64) + 1LL) & 4) != 0 )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(v19 + 40) + 96LL), *(_QWORD *)(v19 + 40), v22, (__int64)v15, v16, v17);
  if ( *(_DWORD *)(*(_QWORD *)(v19 + 64) + 20LL) )
    return 0;
  v23 = *(_QWORD *)(sub_B8C1B0(v14) + 16);
  if ( (v23 & 4) != 0 )
    v28 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v28 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v28 )
    BUG();
  if ( *(_BYTE *)(v28 + 9) >> 5 == 2 )
    return 1;
  sub_7052B0((__int64 *)(*(_QWORD *)(v19 + 40) + 96LL), *(_QWORD *)(v19 + 40), v24, v25, v26, v27);
  v33 = *(_QWORD *)(v19 + 64);
  if ( (*(_BYTE *)(v33 + 24) & 1) != 0 )
    v34 = sub_B96980(v33);
  else
    v34 = *(_QWORD *)(v33 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v19 + 40) + 96LL), *(_QWORD *)(v19 + 40), v29, v30, v31, v32);
  v35 = *(_QWORD *)(v19 + 40);
  v81 = (__int64 **)(v34 + 24LL * *(unsigned int *)(*(_QWORD *)(v19 + 64) + 16LL));
  sub_7052B0((__int64 *)(v35 + 96), v35, v36, v37, v38, v39);
  v43 = *(_QWORD *)(v19 + 64);
  if ( (*(_BYTE *)(v43 + 24) & 1) != 0 )
    v44 = (__int64 **)sub_B96980(v43);
  else
    v44 = *(__int64 ***)(v43 + 24);
  v84[0] = a1;
  v83 = &v82;
  v45 = 0xAAAAAAAAAAAAAAABLL * (v81 - v44);
  v46 = v45 >> 2;
  if ( v45 >> 2 > 0 )
  {
    v79 = &v44[12 * v46];
    while ( 1 )
    {
      v59 = *(_QWORD *)(*v44[2] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v59 + 8) & 0xF) != 0 )
        v59 = sub_F64F00(*v44[2], v35, v46, v40, v41);
      v60 = sub_F63270(*(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL), v35, v46, v40, v41, v42);
      if ( v60 )
      {
        v61 = v84[0];
        v62 = sub_B97300((__int64)v60);
        v35 = *v83;
        if ( !(unsigned __int8)sub_1793110(v61, v35, v62) )
          goto LABEL_45;
      }
      v47 = *(_QWORD *)(*v44[5] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v47 + 8) & 0xF) != 0 )
        v47 = sub_F64F00(*v44[5], v35, v46, v40, v41);
      v48 = sub_F63270(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL), v35, v46, v40, v41, v42);
      if ( v48 )
      {
        v49 = v84[0];
        v50 = sub_B97300((__int64)v48);
        v35 = *v83;
        if ( !(unsigned __int8)sub_1793110(v49, v35, v50) )
        {
          v44 += 3;
          goto LABEL_45;
        }
      }
      v51 = *(_QWORD *)(*v44[8] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v51 + 8) & 0xF) != 0 )
        v51 = sub_F64F00(*v44[8], v35, v46, v40, v41);
      v52 = sub_F63270(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL), v35, v46, v40, v41, v42);
      if ( v52 )
      {
        v53 = v84[0];
        v54 = sub_B97300((__int64)v52);
        v35 = *v83;
        if ( !(unsigned __int8)sub_1793110(v53, v35, v54) )
        {
          v44 += 6;
          goto LABEL_45;
        }
      }
      v55 = *(_QWORD *)(*v44[11] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v55 + 8) & 0xF) != 0 )
        v55 = sub_F64F00(*v44[11], v35, v46, v40, v41);
      v56 = sub_F63270(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL), v35, v46, v40, v41, v42);
      if ( v56 )
      {
        v57 = v84[0];
        v58 = sub_B97300((__int64)v56);
        v35 = *v83;
        if ( !(unsigned __int8)sub_1793110(v57, v35, v58) )
        {
          v44 += 9;
          goto LABEL_45;
        }
      }
      v44 += 12;
      if ( v44 == v79 )
      {
        v46 = 0xAAAAAAAAAAAAAAABLL;
        v45 = 0xAAAAAAAAAAAAAAABLL * (v81 - v44);
        break;
      }
    }
  }
  if ( v45 != 2 )
  {
    if ( v45 != 3 )
    {
      if ( v45 != 1 )
        goto LABEL_46;
      goto LABEL_81;
    }
    v35 = (__int64)v84;
    if ( !(unsigned __int8)sub_1793730(&v83, v84, v44) )
      goto LABEL_45;
    v44 += 3;
  }
  v35 = (__int64)v84;
  if ( !(unsigned __int8)sub_1793730(&v83, v84, v44) )
    goto LABEL_45;
  v44 += 3;
LABEL_81:
  v35 = (__int64)v84;
  if ( !(unsigned __int8)sub_1793730(&v83, v84, v44) )
  {
LABEL_45:
    if ( v81 != v44 )
      return 0;
  }
LABEL_46:
  v67 = sub_B7E900(v19 - 64, v35, v46, v40, v41, v42);
  if ( !v67 )
    return v12;
LABEL_47:
  for ( i = *(_QWORD *)(*(_QWORD *)(v67 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        ;
        i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v69 = sub_F63050(i, v35, v63, v64);
    if ( !v69 )
      break;
    i = v69;
  }
  v70 = sub_F63270(i, v35, v63, v64, v65, v66);
  if ( v70 )
  {
    v71 = sub_B97300((__int64)v70);
    v35 = v82;
    if ( !(unsigned __int8)sub_1793110(a1, v82, v71) )
      return 0;
  }
  while ( 1 )
  {
    v72 = *(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v67 = v72;
    if ( !v72 )
      return v12;
    if ( (*(_BYTE *)(v72 + 28) & 0x7Fu) - 49 <= 2 )
      goto LABEL_47;
  }
}
