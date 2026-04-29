unsigned __int64 __fastcall sub_107350(_QWORD *a1, __int64 a2, __int64 a3, __m128i *a4, __m128i *a5, int a6)
{
  __int64 v6; // rcx
  char v8; // bl
  const __m128i *v9; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-40h]
  __m128i *v13; // [rsp+30h] [rbp-38h]
  __m128i *v14; // [rsp+38h] [rbp-30h]
  unsigned __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+50h] [rbp-18h]
  unsigned __int64 v18; // [rsp+58h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  v12 = a1;
  v13 = a4;
  v14 = a5;
  v15 = -1;
  v16 = 0;
  v17 = a6;
  v11 = off_4B0D78;
  for_all_arglocs(&v11, a2, a3, 0);
  if ( (_BYTE)v16 )
  {
    v8 = v17;
    if ( (_BYTE)v16 == 1 )
      goto LABEL_6;
    if ( (_BYTE)v16 != 5 )
      sub_FD170(&v11, a2, SHIDWORD(v16), v6);
    if ( (unsigned __int8)sub_FDB00(v12, v15, SHIDWORD(v16)) )
    {
LABEL_6:
      if ( (v8 & 2) == 0 )
        return v18 - __readfsqword(0x28u);
    }
    else if ( (v8 & 4) == 0 )
    {
      return v18 - __readfsqword(0x28u);
    }
    if ( v14 )
    {
      v9 = (const __m128i *)v10;
      v10[0] = v15;
      v10[1] = (char)v16;
      sub_106EE0(v14, (__int64)v10, &v9);
    }
    sub_106A80(v13, v12, (__int64)&v15, v17);
  }
  return v18 - __readfsqword(0x28u);
}
