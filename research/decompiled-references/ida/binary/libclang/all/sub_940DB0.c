__int64 __fastcall sub_940DB0(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, char a5)
{
  int v8; // r15d
  __int64 v9; // r14
  char v10; // al
  unsigned int v11; // eax
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  __int64 v17; // rdi
  unsigned __int8 **v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int8 **v20; // r13
  unsigned __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int8 **v39; // rax
  unsigned __int8 **v40; // r12
  char v41; // [rsp+0h] [rbp-B8h]
  __int64 v42; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v43; // [rsp+0h] [rbp-B8h]
  __int64 v44; // [rsp+0h] [rbp-B8h]
  __int64 v45; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v46; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v47; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v48; // [rsp+0h] [rbp-B8h]
  __int64 v49; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v50; // [rsp+8h] [rbp-B0h]
  __int64 v51; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v52; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v53; // [rsp+8h] [rbp-B0h]
  __int64 v54; // [rsp+18h] [rbp-A0h] BYREF
  void *v55; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v56; // [rsp+28h] [rbp-90h]
  char v57; // [rsp+2Ch] [rbp-8Ch]
  void *v58; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v59; // [rsp+38h] [rbp-80h]
  char v60; // [rsp+3Ch] [rbp-7Ch]
  unsigned __int8 **v61; // [rsp+40h] [rbp-78h] BYREF
  int v62; // [rsp+48h] [rbp-70h]

  if ( !*a3 )
  {
    v29 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    sub_A1BFE0(v29, a4);
    return 1;
  }
  if ( a5 && !(unsigned __int8)sub_9D4FE0(a1, a2, a4, 4) && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0
    || !(unsigned __int8)sub_9D4C70(a1, a2, a4) )
  {
    return 0;
  }
  v8 = *(_DWORD *)(a4 + 48);
  v9 = (unsigned __int16)*a3;
  if ( v8 == 1 )
  {
    v34 = sub_8E55C0((__int64 *)a4);
    v35 = sub_8E9110(a4) * (unsigned __int16)v9;
    v36 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
    v37 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)v36 = 0;
    *(_DWORD *)(v36 + 48) = 1;
    *(_QWORD *)(v36 + 32) = v34 + v35;
    *(_QWORD *)(v36 + 24) = v37;
    *(_OWORD *)(v36 + 8) = 0;
    return 1;
  }
  v10 = sub_8E9400(a4);
  if ( v8 == 2 )
  {
    if ( v10 )
    {
      v31 = v9 + 0xFFFFFFFFLL;
    }
    else
    {
      v31 = *(_QWORD *)a4 + v9;
      if ( v31 <= 1 )
      {
LABEL_36:
        v32 = *(_QWORD *)(a4 + 24);
        v33 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
        *(_QWORD *)v33 = v31;
        *(_DWORD *)(v33 + 48) = 2;
        *(_QWORD *)(v33 + 24) = v32;
        *(_QWORD *)(v33 + 32) = 0;
        *(_BYTE *)(v33 + 40) = 1;
        *(_OWORD *)(v33 + 8) = 0;
        return 1;
      }
    }
    v61 = (unsigned __int8 **)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v39 = (unsigned __int8 **)sub_A2E1B0(a1, &v61, 2179, 0);
    v40 = v39;
    if ( v39 )
    {
      sub_8D6E40(v39, v31);
      sub_8D6BF0(v40, 1);
      sub_8D6BF0(v40, 0);
    }
    goto LABEL_36;
  }
  v41 = v10;
  v11 = sub_8E9270(a4);
  v12 = v11;
  v13 = v11;
  if ( v41 )
  {
    v14 = (unsigned __int16)v9;
    if ( v8 )
    {
LABEL_25:
      v25 = *(_QWORD *)(a1 + 184);
      v26 = v14 + v13;
      if ( !(v14 + v13) && (unsigned __int8)sub_8E9400(a4) )
      {
        v38 = sub_A1A4E0(v25, 56);
        sub_A1BFA0(v38, *(_QWORD *)(a4 + 24), *(unsigned int *)(a4 + 32));
      }
      else
      {
        sub_8E61F0((__int64)&v61, a4, v26);
        v27 = sub_A1A4E0(v25, 56);
        sub_A1C070(v27, &v61);
        sub_A1C0C0(&v61);
      }
      return 1;
    }
  }
  else
  {
    v49 = v11;
    v30 = sub_8E92E0(a4);
    v12 = v49;
    v14 = (unsigned __int16)v9;
    v13 = v30;
    if ( v8 )
      goto LABEL_25;
  }
  if ( v12 - v13 >= v14 )
    goto LABEL_25;
  v58 = (void *)v14;
  v42 = v12;
  v50 = v13;
  v59 = 16;
  v60 = 1;
  sub_2587D60(&v61, &v58);
  v57 = 0;
  v15 = v42;
  v16 = v50;
  v56 = v62;
  v55 = v61;
  if ( v59 > 0x40 && v58 )
  {
    operator delete[](v58);
    v16 = v50;
    v15 = v42;
  }
  v43 = v16;
  v51 = v15;
  v62 = 18;
  v61 = (unsigned __int8 **)(v16 & 0x3FFFF);
  sub_2586200(&v61, &v55);
  v17 = *(_QWORD *)(a1 + 200);
  v60 = 0;
  v59 = v62;
  v58 = v61;
  v54 = sub_A16CE0(v17, a2);
  v18 = (unsigned __int8 **)sub_A2E1B0(a1, &v54, 2179, 0);
  v19 = v43;
  v61 = v18;
  v20 = v18;
  if ( v18 )
  {
    sub_8DF340(&v61, (__int64)&v58);
    v21 = v43;
    v22 = 1;
    v23 = v51;
    if ( !*(_DWORD *)(a4 + 48) )
    {
      v52 = v43;
      v44 = v23;
      v24 = sub_8E5480(a4);
      v23 = v44;
      v21 = v52;
      v22 = *(_BYTE *)(v24 + 51) ^ 1u;
    }
    v53 = v21;
    v45 = v23;
    sub_8D6BF0(v20, v22);
    sub_8D6E40(v20, v45);
    v19 = v53;
  }
  if ( v59 > 0x40 && v58 )
  {
    v46 = v19;
    operator delete[](v58);
    v19 = v46;
  }
  if ( v56 > 0x40 && v55 )
  {
    v47 = v19;
    operator delete[](v55);
    v19 = v47;
  }
  v48 = v19;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
  {
    v14 = (unsigned __int16)*a3;
    v13 = v48;
    goto LABEL_25;
  }
  return 0;
}

