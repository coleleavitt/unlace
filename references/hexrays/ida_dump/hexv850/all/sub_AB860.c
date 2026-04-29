__int64 __fastcall sub_AB860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // edx
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-58h] BYREF
  char v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  unsigned __int64 v12; // [rsp+48h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v10 = a2;
  memset(&v8[1], 0, 32);
  v9 = 0;
  v8[0] = &off_4AF980;
  v11 = 0;
  v6 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))sub_119D40)(
         a1,
         v8,
         a3,
         a4,
         a5,
         a6);
  result = 0;
  if ( v6 )
    return v11;
  return result;
}
