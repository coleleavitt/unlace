__int64 __fastcall sub_9420E0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, char a5)
{
  bool v6; // zf
  __int64 v8; // r15
  int v9; // r13d
  unsigned __int64 v10; // r14
  char v11; // al
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int8 **v28; // rax
  unsigned __int8 **v29; // r13
  unsigned __int64 v30; // [rsp+0h] [rbp-E8h]
  __int64 v31; // [rsp+8h] [rbp-E0h] BYREF
  char v32; // [rsp+1Fh] [rbp-C9h] BYREF
  unsigned __int64 v33; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v35[8]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v36[15]; // [rsp+70h] [rbp-78h] BYREF

  v6 = *a3 == 0;
  v31 = a2;
  if ( v6 )
  {
    v18 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v18, a4);
    return 1;
  }
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, a2, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, v31, a4) )
  {
    return 0;
  }
  v8 = *a3;
  v9 = *(_DWORD *)(a4 + 48);
  v30 = *a3;
  if ( v9 == 1 )
  {
    v23 = sub_8E55C0((__int64 *)a4);
    v24 = v8 * sub_8E9110(a4) + v23;
    v25 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v26 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v25 = 0;
    *(_DWORD *)(v25 + 48) = 1;
    *(_QWORD *)(v25 + 32) = v24;
    *(_QWORD *)(v25 + 24) = v26;
    *(_OWORD *)(v25 + 8) = 0;
    return 1;
  }
  if ( v9 == 2 )
  {
    v19 = 0xFFFFFFFFLL;
    if ( !(unsigned __int8)sub_8E9400(a4) )
      v19 = *(_QWORD *)a4;
    v20 = v8 + v19;
    if ( v20 > 1 )
    {
      v36[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), v31);
      v28 = (unsigned __int8 **)sub_A2E1B0(a1, v36, 2179, 0);
      v29 = v28;
      if ( v28 )
      {
        sub_8D6E40(v28, v20);
        sub_8D6BF0(v29, 1);
        sub_8D6BF0(v29, 0);
      }
    }
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
  v10 = (unsigned int)sub_8E9270(a4);
  v33 = v10;
  v11 = sub_8E9400(a4);
  v12 = v10;
  if ( !v11 )
    v12 = sub_8E92E0(a4);
  v34 = v12;
  v35[1] = &v34;
  v35[3] = &v31;
  v35[5] = &v33;
  v32 = 0;
  v35[0] = a3;
  v35[2] = a1;
  v35[4] = a4;
  v35[6] = &v32;
  if ( v9 )
    goto LABEL_12;
  v13 = v10 - v12;
  if ( v8 < 0 )
  {
    if ( v8 != 0x8000000000000000LL && v12 >= -v8 )
      goto LABEL_35;
    sub_941EC0((__int64)v35);
    if ( *a3 < 0 || v13 >= v30 )
      goto LABEL_30;
  }
  else if ( v13 >= v8 )
  {
LABEL_12:
    v14 = *(_QWORD *)(a1 + 184);
    v15 = v12 + v30;
    if ( !(v12 + v30) && (unsigned __int8)sub_8E9400(a4) )
    {
      v27 = sub_A1A4E0(v14, 56);
      sub_A1BFA0(v27, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
    }
    else
    {
      sub_8E61F0((__int64)v36, a4, v15);
      v16 = sub_A1A4E0(v14, 56);
      sub_A1C070(v16, v36);
      sub_A1C0C0(v36);
    }
    return 1;
  }
  sub_941EC0((__int64)v35);
LABEL_30:
  if ( !v32 )
  {
    v8 = *a3;
LABEL_35:
    v30 = v8;
    v12 = v34;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v12 = v34;
    v30 = *a3;
    goto LABEL_12;
  }
  return 0;
}

