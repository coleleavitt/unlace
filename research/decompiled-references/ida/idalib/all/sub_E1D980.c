__int64 __fastcall sub_E1D980(__int64 a1, __int64 *a2, char a3, char a4)
{
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // r14d
  __int64 v9; // rbx
  int i; // eax
  char v11; // al
  __int64 v12; // r15
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // r10
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 *v19; // rsi
  __int64 v20; // r8
  unsigned __int64 v21; // r14
  __int64 *v22; // rsi
  unsigned __int8 v23; // dl
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r14
  __int64 (__fastcall *v28)(__int64); // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned __int8 **v32; // rax
  unsigned __int8 **v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int8 **v39; // rax
  unsigned __int8 **v40; // rbx
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r14
  unsigned int v44; // eax
  int v45; // eax
  int v46; // edx
  __int64 v47; // r15
  char v48; // r12
  char v49; // al
  char v50; // al
  unsigned __int8 **v51; // r13
  __int64 v52; // rax
  unsigned __int8 v53; // al
  int v54; // esi
  int v55; // r8d
  __int64 v56; // r9
  __int64 v58; // [rsp+0h] [rbp-F8h]
  __int64 v59; // [rsp+0h] [rbp-F8h]
  unsigned int v61; // [rsp+8h] [rbp-F0h]
  _QWORD *v62; // [rsp+8h] [rbp-F0h]
  char v63; // [rsp+8h] [rbp-F0h]
  __int64 v64; // [rsp+10h] [rbp-E8h]
  _WORD *v65; // [rsp+18h] [rbp-E0h]
  __int64 v66; // [rsp+20h] [rbp-D8h]
  unsigned int v67; // [rsp+20h] [rbp-D8h]
  __int64 v68; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v69; // [rsp+28h] [rbp-D0h]
  __int64 v70; // [rsp+28h] [rbp-D0h]
  _QWORD v71[6]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v72[6]; // [rsp+60h] [rbp-98h] BYREF
  int v73; // [rsp+78h] [rbp-80h]
  __int64 *v74; // [rsp+80h] [rbp-78h]
  __int64 v75; // [rsp+88h] [rbp-70h]
  __m128 v76; // [rsp+90h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-58h] BYREF

  v5 = a1;
  v6 = sub_DCAF70(a1, (__int64)a2);
  if ( !(_BYTE)v6 )
    return 0;
  v9 = *(_QWORD *)(a1 + 176);
  v7 = v6;
  sub_E21760(v9, 48);
  sub_E23260(v72);
  sub_E21790(v9, 48);
  if ( !v73 || v73 == 2 )
  {
    LOBYTE(v7) = v74 == nullptr;
    if ( !v74 )
    {
LABEL_8:
      sub_E232A0(v72);
      return v7;
    }
  }
  else if ( v73 != 3 && !(v75 | *(_QWORD *)v72) )
  {
    goto LABEL_8;
  }
  v69 = sub_CFE250((__int64)v72, 48);
  for ( i = v73; !v73; i = v73 )
  {
    v11 = sub_CFE580((__int64)v72);
    v12 = (__int64)v74;
    if ( v11 )
      goto LABEL_12;
    v34 = *(_QWORD *)sub_CFDF60((__int64)v72);
    if ( (v34 & 2) != 0 || (v34 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (*(_BYTE *)(v12 + (unsigned int)v75 + 28) & 4) == 0 )
      goto LABEL_12;
    if ( (_DWORD)v75 == -1 )
    {
      v36 = 0;
      v35 = 0xFFFFFFFFLL;
    }
    else
    {
      v35 = (unsigned int)(v75 - *(_DWORD *)(v12 + (unsigned int)v75 + 24));
      v36 = (unsigned int)v35;
    }
    sub_E23220(&v76, v12, v35, v36);
    sub_E23400(v72, &v76);
    sub_E232A0(&v76);
  }
  if ( i != 1 )
  {
    if ( (unsigned int)(i - 2) <= 1 )
      BUG();
    v12 = (__int64)v74;
LABEL_12:
    v13 = *(__int64 **)(v12 + 32);
    v66 = (__int64)v13;
    goto LABEL_13;
  }
  v13 = v74;
  v12 = (__int64)v74;
  v66 = v74[4];
LABEL_13:
  v14 = *v13;
  v15 = *(_QWORD *)(a1 + 48);
  v16 = 0;
  if ( (v14 & 2) != 0 )
    v16 = v14 & 0xFFFFFFFFFFFFFFFCLL;
  v64 = v5 + 48;
  v17 = *(unsigned int *)(v5 + 64);
  v65 = (_WORD *)v16;
  if ( (_DWORD)v17 )
  {
    v18 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
    v19 = (__int64 *)(v15 + 80LL * v18);
    v20 = *v19;
    if ( v16 == *v19 )
    {
LABEL_17:
      sub_D9C220(&v76, v19, (_QWORD *)(v15 + 80 * v17), v64, 1);
      v21 = v76.m128_u64[0];
      goto LABEL_18;
    }
    v54 = 1;
    if ( v20 != -4096 )
    {
      do
      {
        v55 = v54 + 1;
        v18 = (v17 - 1) & (v18 + v54);
        v19 = (__int64 *)(v15 + 80LL * v18);
        v56 = *v19;
        if ( v16 == *v19 )
          goto LABEL_17;
        v54 = v55;
      }
      while ( v56 != -4096 );
    }
  }
  sub_D9C220(&v76, (_QWORD *)(v15 + 80 * v17), (_QWORD *)(v15 + 80 * v17), v64, 1);
  v21 = v76.m128_u64[0];
LABEL_18:
  v22 = (__int64 *)(*(_QWORD *)(v5 + 48) + 80LL * *(unsigned int *)(v5 + 64));
  sub_D9C220(&v76, v22, v22, v64, 1);
  if ( v76.m128_u64[0] == v21 )
  {
    if ( a3 )
      goto LABEL_21;
    goto LABEL_49;
  }
  v23 = *(_BYTE *)(v21 + 72);
  if ( !a3 )
  {
    v22 = a2;
    if ( !(unsigned __int8)sub_DCBB50(v5, (__int64)a2, v23, 0, v66, (unsigned __int64)v65) )
      goto LABEL_55;
LABEL_49:
    if ( v69 != sub_CFE250((__int64)v72, (__int64)v22) )
    {
      v37 = sub_F63270(*(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v37 || (v38 = sub_B97300(v37)) == 0 || !sub_AED5B0(v38) )
      {
        v76.m128_u64[0] = sub_E1EEA0(*(_QWORD *)(v5 + 400), a2);
        v39 = (unsigned __int8 **)sub_E33BA0(v5, &v76, 2399, 0);
        v40 = v39;
        if ( v39 )
        {
          sub_AE9DF0(v39, v69, 8u);
          v41 = sub_CFE250((__int64)v72, v69);
          sub_AE9DF0(v40, v41, 8u);
        }
        else
        {
          sub_CFE250((__int64)v72, (__int64)&v76);
        }
        goto LABEL_55;
      }
    }
    goto LABEL_21;
  }
  if ( !(unsigned __int8)sub_DCBB50(v5, (__int64)a2, v23, 1u, v66, (unsigned __int64)v65) )
    goto LABEL_55;
LABEL_21:
  if ( !(unsigned __int8)sub_CFE580((__int64)v72)
    || (unsigned __int8)sub_CFE6D0((__int64)v72)
    || !v73
    && (*(_BYTE *)(sub_CFDF60((__int64)v72) + 60) && (unsigned int)v75 != *(_QWORD *)v72
     || (unsigned int)v75 > 0xF && *((char *)v74 + (unsigned int)v75 + 28) < 0)
    && sub_CFE630(v72) )
  {
    v71[0] = sub_E1EEA0(*(_QWORD *)(v5 + 400), a2);
    v51 = (unsigned __int8 **)sub_E33BA0(v5, v71, 2401, 0);
    v52 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 24) + 104LL))(*(_QWORD *)(v5 + 24));
    sub_E29020(&v76, v72, v52);
    if ( v51 )
    {
      sub_AEC220(v51, v76.m128_u64[0], v76.m128_i64[1]);
      v53 = sub_CFE6D0((__int64)v72);
      sub_AE9DF0(v51, v53, 2u);
    }
    if ( (__int64 *)v76.m128_u64[0] != &v77 )
      operator delete((void *)v76.m128_u64[0]);
    goto LABEL_55;
  }
  if ( !(unsigned __int8)sub_DCBCB0(v5, (__int64)a2, v65, (__int64)v72) )
  {
LABEL_55:
    v7 = 0;
    sub_E232A0(v72);
    return v7;
  }
  if ( !a3 && !a4 )
  {
    v24 = sub_CFE250((__int64)v72, (__int64)a2);
    v25 = sub_F63270(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v25 )
    {
      v26 = sub_B97300(v25);
      v27 = v26;
      if ( v26 )
      {
        if ( sub_AED5B0(v26) )
        {
          v28 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL);
          v29 = v28 == sub_B94CD0 ? sub_B709C0(v27) : v28(v27);
          v30 = *(_QWORD *)(v29 + 168);
          v58 = v30;
          if ( v30 )
          {
            LOBYTE(v31) = sub_B760E0(v30, nullptr, nullptr);
            v7 = v31;
            if ( !(_BYTE)v31 )
            {
              v76.m128_u64[0] = sub_E1EEA0(*(_QWORD *)(v5 + 400), a2);
              v32 = (unsigned __int8 **)sub_E33BA0(v5, &v76, 2449, 0);
              v33 = v32;
              if ( v32 )
              {
                sub_AE9DF0(v32, (*(_BYTE *)(v58 + 28) & 0x7Fu) - 35 <= 3, 2u);
                sub_AE9DF0(v33, v58, 0xAu);
              }
              goto LABEL_8;
            }
          }
        }
      }
    }
  }
  sub_E232A0(v72);
  v42 = *(_QWORD *)(v12 + 32);
  if ( *(_BYTE *)(v42 + 60) )
  {
    v43 = *(_QWORD *)(v42 + 40);
    if ( !v43 )
      goto LABEL_81;
    v44 = *(_DWORD *)(v42 + 20);
    if ( v44 == -1 )
      goto LABEL_81;
    v61 = *(_DWORD *)(v42 + 20);
    v67 = *(_DWORD *)(v42 + 16);
    if ( v44 < v67 )
      goto LABEL_81;
    sub_E23170(v71, v12);
    v45 = v61 / v67;
    v46 = v61 / v67 - 1;
    if ( v46 < 0 )
    {
      sub_E232A0(v71);
      goto LABEL_81;
    }
    v70 = v12;
    v47 = v46;
    v62 = (_QWORD *)v5;
    v68 = v45 - 2LL - (unsigned int)v46;
    do
    {
      sub_CFE430((__int64)v72, (__int64)v71, v47);
      sub_CFE7A0((__int64)&v76, v72);
      v48 = sub_E1D880(v62, a2, (__int64)&v76, *(__int64 **)(v43 + 32));
      sub_E232A0(&v76);
      sub_E232A0(v72);
      if ( !v48 )
        break;
      --v47;
    }
    while ( v68 != v47 );
    v49 = v48;
    v12 = v70;
    v5 = (__int64)v62;
    v63 = v49;
    sub_E232A0(v71);
    v50 = v63;
  }
  else
  {
    if ( !*(_QWORD *)(v42 + 32) && *(_BYTE *)(v42 + 52) )
      goto LABEL_81;
    v59 = *(_QWORD *)(v12 + 32);
    sub_E23170(&v76, v12);
    LOBYTE(v59) = sub_E1D880((_QWORD *)v5, a2, (__int64)&v76, *(__int64 **)(v59 + 32));
    sub_E232A0(&v76);
    v50 = v59;
  }
  if ( !v50 )
    return 0;
LABEL_81:
  v7 = sub_DAEE00(v64, (__int64)v65, v12, v5);
  if ( !(_BYTE)v7 )
  {
    v76.m128_u64[0] = sub_E1EEA0(*(_QWORD *)(v5 + 400), a2);
    sub_E33BA0(v5, &v76, 2405, 0);
  }
  return v7;
}
