__int64 __fastcall sub_C197E0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int8 **v5; // rax
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // edx
  _QWORD *v11; // rax
  unsigned int v12; // ecx
  _QWORD *v13; // r12
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int8 **v18; // r13

  if ( (a3 & 1) != 0 || (v4 = a3 & 0xFFFFFFFFFFFFFFF0LL, (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) )
  {
    v5 = (unsigned __int8 **)sub_E33C10(*a1, a1[1], 2442, 0);
    if ( v5 )
      sub_AE9DF0(v5, a3, 8u);
    return 0;
  }
  v8 = *(_QWORD *)v4;
  v9 = *(_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(unsigned __int8 *)(*(_QWORD *)v4 + 16LL) - 2;
  if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 2 > 1 )
  {
    v12 = 1;
    if ( v10 > 1 )
      goto LABEL_14;
    v11 = *(_QWORD **)(v8 + 40);
    if ( (*(_BYTE *)(v8 + 19) & 2) == 0 )
      goto LABEL_13;
LABEL_18:
    if ( *((_DWORD *)v11 + 2) <= 0x40u )
    {
      v11 = (_QWORD *)*v11;
      goto LABEL_13;
    }
    if ( (unsigned int)*(_QWORD *)*v11 < v12 )
      goto LABEL_20;
LABEL_14:
    v13 = *(_QWORD **)(*a1 + 16);
    v14 = sub_A71450((__int64)v13, a1[2]);
    v15 = sub_A71450(*(_QWORD *)(*a1 + 16), a3);
    result = sub_AC0070(v13, v15, v14, v16, v17);
    if ( (_BYTE)result )
    {
      a1[4] = a2;
      return result;
    }
    goto LABEL_20;
  }
  v11 = *(_QWORD **)(v9 + 40);
  if ( (*(_BYTE *)(v9 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v11 + 2) <= 0x40u )
      v11 = (_QWORD *)*v11;
    else
      v11 = *(_QWORD **)*v11;
  }
  v12 = (unsigned int)v11;
  LODWORD(v11) = 1;
  if ( v10 <= 1 )
  {
    v11 = *(_QWORD **)(v8 + 40);
    if ( (*(_BYTE *)(v8 + 19) & 2) != 0 )
      goto LABEL_18;
  }
LABEL_13:
  if ( (unsigned int)v11 >= v12 )
    goto LABEL_14;
LABEL_20:
  v18 = (unsigned __int8 **)sub_E33C10(*a1, a1[1], 2467, 0);
  result = 0;
  if ( v18 )
  {
    sub_AE9DF0(v18, a3, 8u);
    sub_AE9DF0(v18, a1[2], 8u);
    return 0;
  }
  return result;
}
