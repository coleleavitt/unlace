__int64 __fastcall sub_941420(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, char a5)
{
  unsigned int v6; // ecx
  int v8; // r15d
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  char v11; // dl
  unsigned __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // r15
  unsigned __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int8 **v29; // rax
  unsigned __int8 **v30; // r12
  __int64 v31; // [rsp+8h] [rbp-E0h] BYREF
  char v32; // [rsp+1Fh] [rbp-C9h] BYREF
  unsigned __int64 v33; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-C0h] BYREF
  unsigned int *v35[8]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v36[15]; // [rsp+70h] [rbp-78h] BYREF

  v6 = *a3;
  v31 = a2;
  if ( !v6 )
  {
    v20 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v20, a4);
    return 1;
  }
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, a2, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, v31, a4) )
  {
    return 0;
  }
  v8 = *(_DWORD *)(a4 + 48);
  v9 = (int)*a3;
  if ( v8 == 1 )
  {
    v24 = sub_8E55C0((__int64 *)a4);
    v25 = sub_8E9110(a4) * (int)v9;
    v26 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v27 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v26 = 0;
    *(_DWORD *)(v26 + 48) = 1;
    *(_QWORD *)(v26 + 32) = v24 + v25;
    *(_QWORD *)(v26 + 24) = v27;
    *(_OWORD *)(v26 + 8) = 0;
    return 1;
  }
  if ( v8 == 2 )
  {
    if ( (unsigned __int8)sub_8E9400(a4) )
    {
      v21 = v9 + 0xFFFFFFFFLL;
    }
    else
    {
      v21 = *(_QWORD *)a4 + v9;
      if ( v21 <= 1 )
      {
LABEL_21:
        v22 = *(_QWORD *)(a4 + 24);
        v23 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
        *(_QWORD *)v23 = v21;
        *(_DWORD *)(v23 + 48) = 2;
        *(_QWORD *)(v23 + 24) = v22;
        *(_QWORD *)(v23 + 32) = 0;
        *(_BYTE *)(v23 + 40) = 1;
        *(_OWORD *)(v23 + 8) = 0;
        return 1;
      }
    }
    v36[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), v31);
    v29 = (unsigned __int8 **)sub_A2E1B0(a1, v36, 2179, 0);
    v30 = v29;
    if ( v29 )
    {
      sub_8D6E40(v29, v21);
      sub_8D6BF0(v30, 1);
      sub_8D6BF0(v30, 0);
    }
    goto LABEL_21;
  }
  v10 = (unsigned int)sub_8E9270(a4);
  v33 = v10;
  v11 = sub_8E9400(a4);
  v12 = v10;
  if ( !v11 )
    v12 = sub_8E92E0(a4);
  v13 = v8 == 0;
  v34 = v12;
  v14 = (int)v9;
  v35[1] = (unsigned int *)&v34;
  v35[3] = (unsigned int *)&v31;
  v35[5] = (unsigned int *)&v33;
  v32 = 0;
  v35[0] = a3;
  v35[2] = (unsigned int *)a1;
  v35[4] = (unsigned int *)a4;
  v35[6] = (unsigned int *)&v32;
  if ( !v13 )
    goto LABEL_12;
  v15 = v10 - v12;
  if ( (int)v9 < 0 )
  {
    if ( (_DWORD)v9 != 0x80000000 && v12 >= -(__int64)(int)v9 )
      goto LABEL_33;
    sub_941240(v35);
    if ( (*a3 & 0x80000000) != 0 || v15 >= (int)v9 )
      goto LABEL_27;
  }
  else if ( v15 >= (int)v9 )
  {
LABEL_12:
    v16 = *(_QWORD *)(a1 + 184);
    v17 = v12 + v14;
    if ( !v17 && (unsigned __int8)sub_8E9400(a4) )
    {
      v28 = sub_A1A4E0(v16, 56);
      sub_A1BFA0(v28, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
    }
    else
    {
      sub_8E61F0((__int64)v36, a4, v17);
      v18 = sub_A1A4E0(v16, 56);
      sub_A1C070(v18, v36);
      sub_A1C0C0(v36);
    }
    return 1;
  }
  sub_941240(v35);
LABEL_27:
  if ( !v32 )
  {
    LODWORD(v9) = *a3;
LABEL_33:
    v12 = v34;
    v14 = (int)v9;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v12 = v34;
    v14 = (int)*a3;
    goto LABEL_12;
  }
  return 0;
}

