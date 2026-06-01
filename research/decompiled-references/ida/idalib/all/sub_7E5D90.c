__int64 __fastcall sub_7E5D90(__int64 *a1, _BYTE **a2, __int64 a3)
{
  _BYTE *v3; // rax
  unsigned __int64 v4; // rbx
  char v6; // r13
  unsigned __int8 *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int8 *v11; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  v3 = *a2;
  v4 = (unsigned __int64)&(*a2)[a3];
  if ( (unsigned __int64)*a2 >= v4 )
    return 0;
  v6 = *v3;
  v11 = v3 + 1;
  if ( (v6 & 1) != 0 && !(unsigned __int8)sub_7E1CF0(a1, (const void **)&v11, v4) )
    return 0;
  if ( (v6 & 2) != 0 && !(unsigned __int8)sub_7E5A20(a1 + 3, (const void **)&v11, v4 - (_QWORD)v11)
    || (v6 & 4) != 0 && !(unsigned __int8)sub_7E1CF0(a1 + 9, (const void **)&v11, v4)
    || (v6 & 8) != 0 && !(unsigned __int8)sub_7E1CF0(a1 + 12, (const void **)&v11, v4) )
  {
    return 0;
  }
  v8 = v11;
  if ( (v6 & 0x10) != 0 )
  {
    v12[0] = v11;
    a1[15] = unpack_dq(v12) - 1;
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
    a1[16] = v9;
    if ( !(unsigned __int8)sub_7E31C0((__int64)(a1 + 17), v9, 0, (unsigned __int64 *)&v11) )
      return 0;
    v8 = v11;
  }
  if ( (v6 & 0x40) != 0 )
  {
    v12[0] = v8;
    v10 = unpack_dq(v12);
    if ( (unsigned __int64)v8 < v12[0] )
    {
      v8 = (unsigned __int8 *)v12[0];
      a1[51] = v10 - 1;
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  *a2 = v8;
  return 1;
}
