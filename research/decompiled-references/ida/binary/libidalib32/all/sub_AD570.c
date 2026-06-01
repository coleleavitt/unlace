__int64 __fastcall sub_AD570(signed int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 *v5; // rax
  __int64 result; // rax
  unsigned __int8 v7; // [rsp+Fh] [rbp-59h]
  unsigned __int8 v8; // [rsp+Fh] [rbp-59h]
  _QWORD v9[2]; // [rsp+10h] [rbp-58h] BYREF
  int v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( a1 >= 16 * ((qword_250ED8 == 0) + (unsigned int)((qword_250ED8 - qword_250EB8) >> 3) - 1)
           + (unsigned int)((qword_250EB0 - qword_250EA0) >> 5)
           + (unsigned int)((qword_250EC0 - qword_250EC8) >> 5) )
    return 0;
  if ( !a2 )
    return 0;
  v4 = sub_C86D0(a2, 0);
  if ( v4 == -1 )
    return 0;
  if ( *(_DWORD *)(sub_A0850((__int64)xmmword_250E60, a1) + 8) != 1 )
    return 0;
  v9[1] = a1;
  v9[0] = xmmword_250E60;
  if ( a1 >= (unsigned __int64)sub_ABF40(&qword_250EC0, &qword_250EA0) || !sub_A17F0((__int64)v9)[3] )
    return 0;
  v10 = -2;
  v11 = -1;
  v12 = 0;
  v5 = sub_A17F0((__int64)v9);
  result = sub_9E590((_QWORD *)v5[3], v4, (__int64)&v10, 0);
  if ( a3 && (_BYTE)result )
  {
    v7 = result;
    sub_9CC30(a3, (__int64)&v10);
    result = v7;
  }
  if ( v10 >= -1 )
  {
    if ( v11 )
    {
      v8 = result;
      *(_QWORD *)&v12 = 0;
      qfree();
      return v8;
    }
  }
  return result;
}

