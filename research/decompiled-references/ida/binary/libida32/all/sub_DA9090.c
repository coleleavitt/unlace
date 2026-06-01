__int64 __fastcall sub_DA9090(__int64 a1, __int64 *a2, __int64 a3, void *a4, char a5)
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

  v7 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_D9D660(a1, (__int64)a2, v7, 8)
    || !(unsigned __int8)sub_DA4680(a1, (__int64)a2, v7, 8)
    || !(unsigned __int8)sub_DA8150(a1, a2, v7, 8) )
  {
    return 0;
  }
  sub_DFF4A0(v40, v7);
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_D9E7F0(a1, (__int64)a2, (__int64)v40, 8) )
    {
      sub_DFF560(v40);
      return 0;
    }
    if ( (unsigned __int8)sub_CDA840((__int64)v40) )
      break;
    if ( v42 == -1 )
    {
      sub_DFF4E0(&v43, v41, 0xFFFFFFFFLL, 0);
    }
    else
    {
      v10 = v42 - *(_DWORD *)(v41 + v42 + 24);
      sub_DFF4E0(&v43, v41, v10, (unsigned int)v10);
    }
    sub_DFF6C0(v40, &v43);
    sub_DFF560(&v43);
  }
  sub_DFF560(v40);
  if ( !(unsigned __int8)sub_DA4460(a1, a2, v7)
    || !(unsigned __int8)sub_DA4EC0(a1, (__int64)a2, v7, 8)
    || !(unsigned __int8)sub_D8C7D0(a1, (__int64)a2, v7)
    || !sub_DA5AE0(a1, (__int64)a2, v7)
    || !(unsigned __int8)sub_DFDF30(a1) && !*(_DWORD *)(v7 + 24) && sub_D8CD70(v7) )
  {
    return 0;
  }
  if ( !(unsigned __int8)sub_DA8E90(a1, (__int64)a2, a3) )
    return 0;
  v11 = sub_CDA220(v7);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  v16 = sub_CCBA70(v11, v12, v13, v14, v15);
  v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  if ( a5 )
  {
    v44 = 64;
    v43 = a4;
    v20 = sub_DA3C50(a3, v12, v17, v18);
    v21 = sub_A4D230((__int64)v19, v20, (__int64)&v43, nullptr, 0, 0);
    if ( v44 > 0x40 && v43 )
      operator delete[](v43);
  }
  else
  {
    v21 = sub_DA3C50(a3, v12, v17, v18);
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
  v36 = sub_A4D710((__int64)v19, v16);
  v27 = sub_A4D710((__int64)v19, v21);
  v8 = sub_A9C330(v19, v27, v36, v28, v29);
  if ( !(_BYTE)v8 )
  {
LABEL_42:
    v32 = sub_DFC980(*(_QWORD *)(a1 + 400));
    v33 = (unsigned __int8 **)sub_E0FF40(a1, v32, 2467, 0);
    v34 = v33;
    if ( v33 )
    {
      sub_AC60B0(v33, v16, 8u);
      sub_AC60B0(v34, v21, 8u);
    }
    return 0;
  }
  if ( !*(_DWORD *)(v7 + 24) )
  {
    v30 = *(unsigned int *)(v7 + 40);
    if ( (unsigned int)v30 > 0xF && (*(_BYTE *)(*(_QWORD *)(v7 + 32) + v30 + 28) & 0x20) != 0 )
    {
      v37 = v8;
      v31 = sub_DA2A60(v7);
      v8 = v37;
      if ( !v31 )
      {
        sub_D672F0((__int64)&v43, v7);
        v38 = *(_BYTE *)(*(_QWORD *)(sub_CDA220((__int64)&v43) + 32) + 648LL);
        sub_DFF560(&v43);
        if ( v38 )
          return v38;
        else
          return (unsigned int)sub_DA4100(a1, (__int64)a2, v7, 8);
      }
    }
  }
  return v8;
}

