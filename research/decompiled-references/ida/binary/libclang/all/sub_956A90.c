__int64 __fastcall sub_956A90(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, char a5)
{
  bool v6; // zf
  int v8; // r15d
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int8 **v25; // rax
  unsigned __int8 **v26; // r13
  unsigned __int64 v27; // [rsp+0h] [rbp-E8h]
  __int64 v28; // [rsp+8h] [rbp-E0h] BYREF
  char v29; // [rsp+1Fh] [rbp-C9h] BYREF
  unsigned __int64 v30; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-C0h] BYREF
  unsigned __int16 *v32[8]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v33[15]; // [rsp+70h] [rbp-78h] BYREF

  v6 = *a3 == 0;
  v28 = a2;
  if ( v6 )
  {
    v16 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v16, a4);
    return 1;
  }
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, a2, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, v28, a4) )
  {
    return 0;
  }
  v8 = *(_DWORD *)(a4 + 48);
  v9 = (__int16)*a3;
  if ( v8 == 1 )
  {
    v20 = sub_8E55C0((__int64 *)a4);
    v21 = v20 - sub_8E9110(a4) * (__int16)v9;
    v22 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v23 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v22 = 0;
    *(_DWORD *)(v22 + 48) = 1;
    *(_QWORD *)(v22 + 32) = v21;
    *(_QWORD *)(v22 + 24) = v23;
    *(_OWORD *)(v22 + 8) = 0;
    return 1;
  }
  if ( v8 == 2 )
  {
    v17 = 0xFFFFFFFFLL - v9;
    if ( (unsigned __int8)sub_8E9400(a4) || (v17 = *(_QWORD *)a4 - v9, v17 > 1) )
    {
      v33[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), v28);
      v25 = (unsigned __int8 **)sub_A2E1B0(a1, v33, 2179, 0);
      v26 = v25;
      if ( v25 )
      {
        sub_8D6E40(v25, v17);
        sub_8D6BF0(v26, 1);
        sub_8D6BF0(v26, 0);
      }
    }
    v18 = *(_QWORD *)(a4 + 24);
    v19 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    *(_QWORD *)v19 = v17;
    *(_DWORD *)(v19 + 48) = 2;
    *(_QWORD *)(v19 + 24) = v18;
    *(_QWORD *)(v19 + 32) = 0;
    *(_BYTE *)(v19 + 40) = 1;
    *(_OWORD *)(v19 + 8) = 0;
    return 1;
  }
  v10 = (unsigned int)sub_8E9270(a4);
  v27 = v10;
  v30 = v10;
  if ( !(unsigned __int8)sub_8E9400(a4) )
    v10 = sub_8E92E0(a4);
  v6 = v8 == 0;
  v31 = v10;
  v11 = (__int16)v9;
  v32[1] = (unsigned __int16 *)&v31;
  v32[3] = (unsigned __int16 *)&v28;
  v32[5] = (unsigned __int16 *)&v30;
  v29 = 0;
  v32[0] = a3;
  v32[2] = (unsigned __int16 *)a1;
  v32[4] = (unsigned __int16 *)a4;
  v32[6] = (unsigned __int16 *)&v29;
  if ( !v6 )
    goto LABEL_17;
  if ( v10 >= (__int16)v9 )
  {
    if ( (v9 & 0x8000u) == 0LL )
      goto LABEL_17;
  }
  else if ( (v9 & 0x8000u) == 0LL )
  {
    sub_9568C0(v32);
    LOWORD(v9) = *a3;
    if ( (*a3 & 0x8000u) == 0 )
      goto LABEL_14;
  }
  if ( (_WORD)v9 == 0x8000 || v27 - v10 < -v11 )
    sub_9568C0(v32);
LABEL_14:
  if ( !v29 || (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v10 = v31;
    v11 = (__int16)*a3;
LABEL_17:
    v12 = *(_QWORD *)(a1 + 184);
    v13 = v10 - v11;
    if ( !v13 && (unsigned __int8)sub_8E9400(a4) )
    {
      v24 = sub_A1A4E0(v12, 56);
      sub_A1BFA0(v24, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
    }
    else
    {
      sub_8E61F0((__int64)v33, a4, v13);
      v14 = sub_A1A4E0(v12, 56);
      sub_A1C070(v14, v33);
      sub_A1C0C0(v33);
    }
    return 1;
  }
  return 0;
}

