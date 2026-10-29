__int64 __fastcall sub_DCCDD0(__int64 a1, __int64 *a2, __int64 a3, void *a4, char a5)
{
  __int64 v7; // r14
  unsigned int v8; // edx
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r12
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned int v24; // ecx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  char v31; // al
  unsigned int v32; // eax
  unsigned __int8 **v33; // rax
  unsigned __int8 **v34; // rbx
  unsigned __int64 v36; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v37; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v38; // [rsp+0h] [rbp-A8h]
  _BYTE v40[32]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v41; // [rsp+30h] [rbp-78h]
  unsigned int v42; // [rsp+38h] [rbp-70h]
  void *v43; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-60h]

  v7 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DC13A0(a1, (__int64)a2, v7, 8)
    || !(unsigned __int8)sub_DC83C0(a1, (__int64)a2, v7, 8)
    || !(unsigned __int8)sub_DCBE90(a1, a2, v7, 8) )
  {
    return 0;
  }
  sub_E231E0(v40, v7);
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_DC2530(a1, (__int64)a2, (__int64)v40, 8) )
    {
      sub_E232A0(v40);
      return 0;
    }
    if ( (unsigned __int8)sub_CFE580((__int64)v40) )
      break;
    if ( v42 == -1 )
    {
      sub_E23220(&v43, v41, 0xFFFFFFFFLL, 0);
    }
    else
    {
      v10 = v42 - *(_DWORD *)(v41 + v42 + 24);
      sub_E23220(&v43, v41, v10, (unsigned int)v10);
    }
    sub_E23400(v40, &v43);
    sub_E232A0(&v43);
  }
  sub_E232A0(v40);
  if ( !(unsigned __int8)sub_DC81A0(a1, a2, v7)
    || !(unsigned __int8)sub_DC8C00(a1, (__int64)a2, v7, 8)
    || !(unsigned __int8)sub_DB0510(a1, (__int64)a2, v7)
    || !sub_DC9820(a1, (__int64)a2, v7)
    || !(unsigned __int8)sub_E21C70(a1) && !*(_DWORD *)(v7 + 24) && sub_DB0AB0(v7) )
  {
    return 0;
  }
  if ( !(unsigned __int8)sub_DCCBD0(a1, (__int64)a2, a3) )
    return 0;
  v11 = sub_CFDF60(v7);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v16 = sub_CEF7B0(v11, v12, v13, v14, v15);
  v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  if ( a5 )
  {
    v44 = 64;
    v43 = a4;
    v20 = sub_DC7990(a3, v12, v17, v18);
    v21 = sub_A70F70((__int64)v19, v20, (__int64)&v43, nullptr, 0, 0);
    if ( v44 > 0x40 && v43 )
      operator delete[](v43);
  }
  else
  {
    v21 = sub_DC7990(a3, v12, v17, v18);
  }
  v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  v24 = *(unsigned __int8 *)(v23 + 16) - 2;
  if ( (unsigned int)*(unsigned __int8 *)(v22 + 16) - 2 > 1 )
  {
    LODWORD(v25) = 1;
    if ( v24 > 1 )
      goto LABEL_35;
    goto LABEL_31;
  }
  v25 = *(_QWORD **)(v22 + 40);
  if ( (*(_BYTE *)(v22 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v25 + 2) <= 0x40u )
      v25 = (_QWORD *)*v25;
    else
      v25 = *(_QWORD **)*v25;
  }
  LODWORD(v26) = 1;
  if ( v24 <= 1 )
  {
LABEL_31:
    v26 = *(_QWORD **)(v23 + 40);
    if ( (*(_BYTE *)(v23 + 19) & 2) != 0 )
    {
      if ( *((_DWORD *)v26 + 2) <= 0x40u )
        v26 = (_QWORD *)*v26;
      else
        v26 = *(_QWORD **)*v26;
    }
  }
  if ( (unsigned int)v26 < (unsigned int)v25 )
    goto LABEL_42;
LABEL_35:
  v36 = sub_A71450((__int64)v19, v16);
  v27 = sub_A71450((__int64)v19, v21);
  v8 = sub_AC0070(v19, v27, v36, v28, v29);
  if ( !(_BYTE)v8 )
  {
LABEL_42:
    v32 = sub_E206C0(*(_QWORD *)(a1 + 400));
    v33 = (unsigned __int8 **)sub_E33C80(a1, v32, 2467, 0);
    v34 = v33;
    if ( v33 )
    {
      sub_AE9DF0(v33, v16, 8u);
      sub_AE9DF0(v34, v21, 8u);
    }
    return 0;
  }
  if ( !*(_DWORD *)(v7 + 24) )
  {
    v30 = *(unsigned int *)(v7 + 40);
    if ( (unsigned int)v30 > 0xF && (*(_BYTE *)(*(_QWORD *)(v7 + 32) + v30 + 28) & 0x20) != 0 )
    {
      v37 = v8;
      v31 = sub_DC67A0(v7);
      v8 = v37;
      if ( !v31 )
      {
        sub_D8B030((__int64)&v43, v7);
        v38 = *(_BYTE *)(*(_QWORD *)(sub_CFDF60((__int64)&v43) + 32) + 648LL);
        sub_E232A0(&v43);
        if ( v38 )
          return v38;
        else
          return (unsigned int)sub_DC7E40(a1, (__int64)a2, v7, 8);
      }
    }
  }
  return v8;
}
