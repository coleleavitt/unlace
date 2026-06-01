__int64 __fastcall sub_957E30(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, char a5)
{
  bool v6; // zf
  int v8; // ecx
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r13
  char v12; // al
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r12
  bool v23; // cf
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int8 **v31; // rax
  unsigned __int8 **v32; // r13
  int v33; // [rsp+0h] [rbp-E8h]
  __int64 v34; // [rsp+0h] [rbp-E8h]
  __int64 v35; // [rsp+8h] [rbp-E0h] BYREF
  char v36; // [rsp+1Fh] [rbp-C9h] BYREF
  unsigned __int64 v37; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v39[8]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v40[15]; // [rsp+70h] [rbp-78h] BYREF

  v6 = *a3 == 0;
  v35 = a2;
  if ( v6 )
  {
    v19 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v19, a4);
    return 1;
  }
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, a2, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, v35, a4) )
  {
    return 0;
  }
  v8 = *(_DWORD *)(a4 + 48);
  v9 = *a3;
  if ( v8 == 1 )
  {
    v26 = sub_8E55C0((__int64 *)a4);
    v27 = v26 - v9 * sub_8E9110(a4);
    v28 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v29 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v28 = 0;
    *(_DWORD *)(v28 + 48) = 1;
    *(_QWORD *)(v28 + 32) = v27;
    *(_QWORD *)(v28 + 24) = v29;
    *(_OWORD *)(v28 + 8) = 0;
    return 1;
  }
  if ( v8 == 2 )
  {
    v21 = 0xFFFFFFFFLL;
    if ( !(unsigned __int8)sub_8E9400(a4) )
      v21 = *(_QWORD *)a4;
    v23 = v21 == v9;
    v22 = v21 - v9;
    if ( !v23 && v22 != 1 )
    {
      v40[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), v35);
      v31 = (unsigned __int8 **)sub_A2E1B0(a1, v40, 2179, 0);
      v32 = v31;
      if ( v31 )
      {
        sub_8D6E40(v31, v22);
        sub_8D6BF0(v32, 1);
        sub_8D6BF0(v32, 0);
      }
    }
    v24 = *(_QWORD *)(a4 + 24);
    v25 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    *(_QWORD *)v25 = v22;
    *(_DWORD *)(v25 + 48) = 2;
    *(_QWORD *)(v25 + 24) = v24;
    *(_QWORD *)(v25 + 32) = 0;
    *(_BYTE *)(v25 + 40) = 1;
    *(_OWORD *)(v25 + 8) = 0;
    return 1;
  }
  v33 = *(_DWORD *)(a4 + 48);
  v10 = (unsigned int)sub_8E9270(a4);
  v37 = v10;
  v11 = v10;
  v12 = sub_8E9400(a4);
  v13 = v33;
  if ( !v12 )
  {
    v20 = sub_8E92E0(a4);
    v13 = v33;
    v11 = v20;
  }
  v38 = v11;
  v39[1] = &v38;
  v39[3] = &v35;
  v39[5] = &v37;
  v36 = 0;
  v39[0] = a3;
  v39[2] = a1;
  v39[4] = a4;
  v39[6] = &v36;
  if ( v13 )
    goto LABEL_17;
  v14 = v9;
  if ( v11 >= v9 )
  {
    if ( v9 >= 0 )
      goto LABEL_17;
  }
  else if ( v9 >= 0 )
  {
    v34 = v9;
    sub_957C10((__int64)v39);
    v9 = *a3;
    v14 = v34;
    if ( *a3 >= 0 )
      goto LABEL_14;
  }
  if ( v9 == 0x8000000000000000LL || v10 - v11 < -v14 )
    sub_957C10((__int64)v39);
LABEL_14:
  if ( !v36 || (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v11 = v38;
    v9 = *a3;
LABEL_17:
    v15 = *(_QWORD *)(a1 + 184);
    v16 = v11 - v9;
    if ( !v16 && (unsigned __int8)sub_8E9400(a4) )
    {
      v30 = sub_A1A4E0(v15, 56);
      sub_A1BFA0(v30, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
    }
    else
    {
      sub_8E61F0((__int64)v40, a4, v16);
      v17 = sub_A1A4E0(v15, 56);
      sub_A1C070(v17, v40);
      sub_A1C0C0(v40);
    }
    return 1;
  }
  return 0;
}

