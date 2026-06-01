__int64 __fastcall sub_93FBD0(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, char a5)
{
  bool v6; // zf
  int v8; // r15d
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  char v11; // dl
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int8 **v28; // rax
  unsigned __int8 **v29; // r12
  __int64 v30; // [rsp+8h] [rbp-E0h] BYREF
  char v31; // [rsp+1Fh] [rbp-C9h] BYREF
  unsigned __int64 v32; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-C0h] BYREF
  unsigned __int8 *v34[8]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v35[15]; // [rsp+70h] [rbp-78h] BYREF

  v6 = *a3 == 0;
  v30 = a2;
  if ( v6 )
  {
    v19 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v19, a4);
    return 1;
  }
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, a2, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, v30, a4) )
  {
    return 0;
  }
  v8 = *(_DWORD *)(a4 + 48);
  v9 = (char)*a3;
  if ( v8 == 1 )
  {
    v23 = sub_8E55C0((__int64 *)a4);
    v24 = sub_8E9110(a4) * (char)v9;
    v25 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v26 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v25 = 0;
    *(_DWORD *)(v25 + 48) = 1;
    *(_QWORD *)(v25 + 32) = v23 + v24;
    *(_QWORD *)(v25 + 24) = v26;
    *(_OWORD *)(v25 + 8) = 0;
    return 1;
  }
  if ( v8 == 2 )
  {
    if ( (unsigned __int8)sub_8E9400(a4) )
    {
      v20 = v9 + 0xFFFFFFFFLL;
    }
    else
    {
      v20 = *(_QWORD *)a4 + v9;
      if ( v20 <= 1 )
      {
LABEL_21:
        v21 = *(_QWORD *)(a4 + 24);
        v22 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
        *(_QWORD *)v22 = v20;
        *(_DWORD *)(v22 + 48) = 2;
        *(_QWORD *)(v22 + 24) = v21;
        *(_QWORD *)(v22 + 32) = 0;
        *(_BYTE *)(v22 + 40) = 1;
        *(_OWORD *)(v22 + 8) = 0;
        return 1;
      }
    }
    v35[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), v30);
    v28 = (unsigned __int8 **)sub_A2E1B0(a1, v35, 2179, 0);
    v29 = v28;
    if ( v28 )
    {
      sub_8D6E40(v28, v20);
      sub_8D6BF0(v29, 1);
      sub_8D6BF0(v29, 0);
    }
    goto LABEL_21;
  }
  v10 = (unsigned int)sub_8E9270(a4);
  v32 = v10;
  v11 = sub_8E9400(a4);
  v12 = v10;
  if ( !v11 )
    v12 = sub_8E92E0(a4);
  v6 = v8 == 0;
  v33 = v12;
  v13 = (char)v9;
  v34[1] = (unsigned __int8 *)&v33;
  v34[3] = (unsigned __int8 *)&v30;
  v34[5] = (unsigned __int8 *)&v32;
  v31 = 0;
  v34[0] = a3;
  v34[2] = (unsigned __int8 *)a1;
  v34[4] = (unsigned __int8 *)a4;
  v34[6] = (unsigned __int8 *)&v31;
  if ( !v6 )
    goto LABEL_12;
  v14 = v10 - v12;
  if ( (v9 & 0x80u) != 0LL )
  {
    if ( (_BYTE)v9 != 0x80 && v12 >= -(__int64)(char)v9 )
      goto LABEL_33;
    sub_93FA00(v34);
    if ( (*a3 & 0x80u) != 0 || v14 >= (char)v9 )
      goto LABEL_27;
  }
  else if ( v14 >= (char)v9 )
  {
LABEL_12:
    v15 = *(_QWORD *)(a1 + 184);
    v16 = v12 + v13;
    if ( !v16 && (unsigned __int8)sub_8E9400(a4) )
    {
      v27 = sub_A1A4E0(v15, 56);
      sub_A1BFA0(v27, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
    }
    else
    {
      sub_8E61F0((__int64)v35, a4, v16);
      v17 = sub_A1A4E0(v15, 56);
      sub_A1C070(v17, v35);
      sub_A1C0C0(v35);
    }
    return 1;
  }
  sub_93FA00(v34);
LABEL_27:
  if ( !v31 )
  {
    LOBYTE(v9) = *a3;
LABEL_33:
    v12 = v33;
    v13 = (char)v9;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v12 = v33;
    v13 = (char)*a3;
    goto LABEL_12;
  }
  return 0;
}

