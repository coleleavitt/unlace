__int64 __fastcall sub_21A930(signed int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 *v5; // rax
  const char *v6; // rsi
  __int64 result; // rax
  unsigned __int8 v8; // [rsp+Fh] [rbp-59h]
  unsigned __int8 v9; // [rsp+Fh] [rbp-59h]
  _QWORD v10[2]; // [rsp+10h] [rbp-58h] BYREF
  int v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-38h]
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( a1 >= 16 * ((qword_8CBB18 == 0) + (unsigned int)((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
           + (unsigned int)((qword_8CBAF0 - qword_8CBAE0) >> 5)
           + (unsigned int)((qword_8CBB00 - qword_8CBB08) >> 5) )
    return 0;
  if ( !a2 )
    return 0;
  v4 = sub_2383E0(a2, 0);
  if ( v4 == -1 )
    return 0;
  if ( *(_DWORD *)(sub_20F460((__int64)qword_8CBAA0, a1) + 8) != 1 )
    return 0;
  v10[1] = a1;
  v10[0] = qword_8CBAA0;
  if ( a1 >= (unsigned __int64)sub_219300(&qword_8CBB00, &qword_8CBAE0) || !sub_210380((__int64)v10)[3] )
    return 0;
  v11 = -2;
  v12 = -1;
  v13 = 0;
  v5 = sub_210380((__int64)v10);
  v6 = (const char *)v4;
  result = sub_20D210((_QWORD *)v5[3], v4, (__int64)&v11, 0);
  if ( a3 && (_BYTE)result )
  {
    v6 = (const char *)&v11;
    v8 = result;
    sub_20BB80(a3, (__int64)&v11);
    result = v8;
  }
  if ( v11 >= -1 )
  {
    if ( v12 )
    {
      v9 = result;
      *(_QWORD *)&v13 = 0;
      qfree(v12, v6);
      return v9;
    }
  }
  return result;
}
