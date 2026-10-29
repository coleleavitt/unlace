__int64 __fastcall sub_7C2A00(__int64 a1, _BYTE **a2, __int64 a3)
{
  _BYTE *v3; // rax
  unsigned __int64 v4; // rbx
  char v6; // r13
  unsigned __int8 *v8; // r14
  __int64 v9; // rsi
  int v10; // eax
  unsigned __int8 *v11; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = (unsigned __int64)&(*a2)[a3];
  if ( (unsigned __int64)*a2 >= v4 )
    return 0;
  v6 = *v3;
  v11 = v3 + 1;
  if ( (v6 & 1) != 0 && !(unsigned __int8)sub_7BE9B0((__int64 *)a1, (const void **)&v11, v4) )
    return 0;
  if ( (v6 & 2) != 0 && !(unsigned __int8)sub_7C26C0((__int64 *)(a1 + 24), (const void **)&v11, v4 - (_QWORD)v11)
    || (v6 & 4) != 0 && !(unsigned __int8)sub_7BE9B0((__int64 *)(a1 + 72), (const void **)&v11, v4)
    || (v6 & 8) != 0 && !(unsigned __int8)sub_7BE9B0((__int64 *)(a1 + 96), (const void **)&v11, v4) )
  {
    return 0;
  }
  v8 = v11;
  if ( (v6 & 0x10) != 0 )
  {
    v12[0] = v11;
    *(_QWORD *)(a1 + 120) = unpack_dq(v12, v4) - 1;
    v11 = (unsigned __int8 *)v12[0];
    if ( (unsigned __int64)v8 >= v12[0] )
      return 0;
    v8 = (unsigned __int8 *)v12[0];
  }
  if ( (v6 & 0x20) != 0 )
  {
    if ( (unsigned __int64)v8 >= v4 )
      return 0;
    v9 = *v8;
    v11 = v8 + 1;
    v9 <<= 20;
    *(_QWORD *)(a1 + 128) = v9;
    if ( !(unsigned __int8)sub_7BFE80((_DWORD *)(a1 + 136), v9, 0, (unsigned __int64 *)&v11, v4) )
      return 0;
    v8 = v11;
  }
  if ( (v6 & 0x40) != 0 )
  {
    v12[0] = v8;
    v10 = unpack_dq(v12, v4);
    if ( (unsigned __int64)v8 < v12[0] )
    {
      v8 = (unsigned __int8 *)v12[0];
      *(_DWORD *)(a1 + 272) = v10 - 1;
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  *a2 = v8;
  return 1;
}

