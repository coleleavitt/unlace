__int64 __fastcall sub_942480(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, char a5)
{
  int v8; // r15d
  unsigned __int64 v9; // r14
  char v10; // al
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // rdi
  unsigned __int8 **v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int8 **v17; // r13
  unsigned __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int8 **v34; // rax
  unsigned __int8 **v35; // r13
  __int64 v36; // rax
  char v37; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v38; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v39; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v41; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v42; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v43; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v44; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+0h] [rbp-C8h]
  __int64 v46; // [rsp+8h] [rbp-C0h]
  __int64 v47; // [rsp+18h] [rbp-B0h] BYREF
  void *v48; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+28h] [rbp-A0h]
  char v50; // [rsp+2Ch] [rbp-9Ch]
  void *v51; // [rsp+30h] [rbp-98h]
  unsigned int v52; // [rsp+38h] [rbp-90h]
  char v53; // [rsp+3Ch] [rbp-8Ch]
  void *v54; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-80h]
  char v56; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int8 **v57; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v58; // [rsp+58h] [rbp-70h]

  if ( !*a3 )
  {
    v24 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v24, a4);
    return 1;
  }
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, a2, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, a2, a4) )
  {
    return 0;
  }
  v8 = *(_DWORD *)(a4 + 48);
  v9 = *a3;
  if ( v8 == 1 )
  {
    v29 = sub_8E55C0((__int64 *)a4);
    v30 = v9 * sub_8E9110(a4) + v29;
    v31 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v32 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v31 = 0;
    *(_DWORD *)(v31 + 48) = 1;
    *(_QWORD *)(v31 + 32) = v30;
    *(_QWORD *)(v31 + 24) = v32;
    *(_OWORD *)(v31 + 8) = 0;
    return 1;
  }
  v10 = sub_8E9400(a4);
  if ( v8 == 2 )
  {
    v25 = 0xFFFFFFFFLL;
    if ( !v10 )
      v25 = *(_QWORD *)a4;
    v26 = v9 + v25;
    if ( v26 > 1 )
    {
      v57 = (unsigned __int8 **)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v34 = (unsigned __int8 **)sub_A2E1B0(a1, &v57, 2179, 0);
      v35 = v34;
      if ( v34 )
      {
        sub_8D6E40(v34, v26);
        sub_8D6BF0(v35, 1);
        sub_8D6BF0(v35, 0);
      }
    }
    v27 = *(_QWORD *)(a4 + 24);
    v28 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    *(_QWORD *)v28 = v26;
    *(_DWORD *)(v28 + 48) = 2;
    *(_QWORD *)(v28 + 24) = v27;
    *(_QWORD *)(v28 + 32) = 0;
    *(_BYTE *)(v28 + 40) = 1;
    *(_OWORD *)(v28 + 8) = 0;
    return 1;
  }
  v37 = v10;
  v46 = (unsigned int)sub_8E9270(a4);
  v11 = v46;
  if ( v37 )
  {
    if ( v8 )
    {
LABEL_30:
      v20 = *(_QWORD *)(a1 + 184);
      v21 = v11 + v9;
      if ( !v21 && (unsigned __int8)sub_8E9400(a4) )
      {
        v33 = sub_A1A4E0(v20, 56);
        sub_A1BFA0(v33, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
      }
      else
      {
        sub_8E61F0((__int64)&v57, a4, v21);
        v22 = sub_A1A4E0(v20, 56);
        sub_A1C070(v22, &v57);
        sub_A1C0C0(&v57);
      }
      return 1;
    }
  }
  else
  {
    v11 = sub_8E92E0(a4);
    if ( v8 )
      goto LABEL_30;
  }
  if ( v46 - v11 >= v9 )
    goto LABEL_30;
  v54 = (void *)v9;
  v38 = v11;
  v55 = 64;
  v56 = 1;
  sub_2587D60(&v57, &v54);
  v50 = 0;
  v12 = v38;
  v49 = v58;
  v48 = v57;
  if ( v55 > 0x40 && v54 )
  {
    operator delete[](v54);
    v12 = v38;
  }
  v39 = v12;
  v58 = 66;
  sub_2585A50(&v57, v12, 1);
  v53 = 0;
  v13 = v39;
  v52 = v58;
  v51 = v57;
  if ( v58 > 0x40 )
  {
    sub_2585B30(&v57);
    v13 = v39;
  }
  v40 = v13;
  sub_2586200(&v57, &v48);
  v14 = *(_QWORD *)(a1 + 200);
  v56 = 0;
  v55 = v58;
  v54 = v57;
  v47 = sub_A16CE0(v14, a2);
  v15 = (unsigned __int8 **)sub_A2E1B0(a1, &v47, 2179, 0);
  v16 = v40;
  v57 = v15;
  v17 = v15;
  if ( v15 )
  {
    sub_8DF340(&v57, (__int64)&v54);
    v18 = v40;
    if ( *(_DWORD *)(a4 + 48) )
    {
      v19 = 1;
    }
    else
    {
      v36 = sub_8E5480(a4);
      v18 = v40;
      v19 = *(_BYTE *)(v36 + 51) ^ 1u;
    }
    v41 = v18;
    sub_8D6BF0(v17, v19);
    sub_8D6E40(v17, v46);
    v16 = v41;
  }
  if ( v55 > 0x40 && v54 )
  {
    v42 = v16;
    operator delete[](v54);
    v16 = v42;
  }
  if ( v52 > 0x40 && v51 )
  {
    v43 = v16;
    operator delete[](v51);
    v16 = v43;
  }
  if ( v49 > 0x40 && v48 )
  {
    v44 = v16;
    operator delete[](v48);
    v16 = v44;
  }
  v45 = v16;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v9 = *a3;
    v11 = v45;
    goto LABEL_30;
  }
  return 0;
}

