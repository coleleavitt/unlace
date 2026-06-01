__int64 __fastcall sub_957440(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, char a5)
{
  unsigned int v6; // eax
  int v8; // r15d
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  bool v11; // zf
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int8 **v26; // rax
  unsigned __int8 **v27; // r13
  unsigned __int64 v28; // [rsp+0h] [rbp-E8h]
  __int64 v29; // [rsp+8h] [rbp-E0h] BYREF
  char v30; // [rsp+1Fh] [rbp-C9h] BYREF
  unsigned __int64 v31; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-C0h] BYREF
  unsigned int *v33[8]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v34[15]; // [rsp+70h] [rbp-78h] BYREF

  v6 = *a3;
  v29 = a2;
  if ( !v6 )
  {
    v17 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v17, a4);
    return 1;
  }
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, a2, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, v29, a4) )
  {
    return 0;
  }
  v8 = *(_DWORD *)(a4 + 48);
  v9 = (int)*a3;
  if ( v8 == 1 )
  {
    v21 = sub_8E55C0((__int64 *)a4);
    v22 = v21 - sub_8E9110(a4) * (int)v9;
    v23 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v24 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v23 = 0;
    *(_DWORD *)(v23 + 48) = 1;
    *(_QWORD *)(v23 + 32) = v22;
    *(_QWORD *)(v23 + 24) = v24;
    *(_OWORD *)(v23 + 8) = 0;
    return 1;
  }
  if ( v8 == 2 )
  {
    v18 = 0xFFFFFFFFLL - v9;
    if ( (unsigned __int8)sub_8E9400(a4) || (v18 = *(_QWORD *)a4 - v9, v18 > 1) )
    {
      v34[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), v29);
      v26 = (unsigned __int8 **)sub_A2E1B0(a1, v34, 2179, 0);
      v27 = v26;
      if ( v26 )
      {
        sub_8D6E40(v26, v18);
        sub_8D6BF0(v27, 1);
        sub_8D6BF0(v27, 0);
      }
    }
    v19 = *(_QWORD *)(a4 + 24);
    v20 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    *(_QWORD *)v20 = v18;
    *(_DWORD *)(v20 + 48) = 2;
    *(_QWORD *)(v20 + 24) = v19;
    *(_QWORD *)(v20 + 32) = 0;
    *(_BYTE *)(v20 + 40) = 1;
    *(_OWORD *)(v20 + 8) = 0;
    return 1;
  }
  v10 = (unsigned int)sub_8E9270(a4);
  v28 = v10;
  v31 = v10;
  if ( !(unsigned __int8)sub_8E9400(a4) )
    v10 = sub_8E92E0(a4);
  v11 = v8 == 0;
  v32 = v10;
  v12 = (int)v9;
  v33[1] = (unsigned int *)&v32;
  v33[3] = (unsigned int *)&v29;
  v33[5] = (unsigned int *)&v31;
  v30 = 0;
  v33[0] = a3;
  v33[2] = (unsigned int *)a1;
  v33[4] = (unsigned int *)a4;
  v33[6] = (unsigned int *)&v30;
  if ( !v11 )
    goto LABEL_17;
  if ( v10 >= (int)v9 )
  {
    if ( (int)v9 >= 0 )
      goto LABEL_17;
  }
  else if ( (int)v9 >= 0 )
  {
    sub_957260(v33);
    LODWORD(v9) = *a3;
    if ( (*a3 & 0x80000000) == 0 )
      goto LABEL_14;
  }
  if ( (_DWORD)v9 == 0x80000000 || v28 - v10 < -v12 )
    sub_957260(v33);
LABEL_14:
  if ( !v30 || (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v10 = v32;
    v12 = (int)*a3;
LABEL_17:
    v13 = *(_QWORD *)(a1 + 184);
    v14 = v10 - v12;
    if ( !v14 && (unsigned __int8)sub_8E9400(a4) )
    {
      v25 = sub_A1A4E0(v13, 56);
      sub_A1BFA0(v25, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
    }
    else
    {
      sub_8E61F0((__int64)v34, a4, v14);
      v15 = sub_A1A4E0(v13, 56);
      sub_A1C070(v15, v34);
      sub_A1C0C0(v34);
    }
    return 1;
  }
  return 0;
}

