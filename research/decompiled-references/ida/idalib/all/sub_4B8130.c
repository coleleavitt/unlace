__int64 __fastcall sub_4B8130(__int64 *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8[4]; // [rsp+10h] [rbp-38h] BYREF
  char v9; // [rsp+34h] [rbp-14h]
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  v4 = *a1;
  v10 = __readfsqword(0x28u);
  sub_4B7DA0(v8, v4, a2, a3, 0, a4);
  if ( (v9 & 1) != 0 )
  {
    v7 = v8[3];
    v5 = sub_7BE710(&v7, v8[0], 1, 65);
  }
  else
  {
    v5 = 0;
  }
  qfree((void *)v8[1]);
  return v5;
}
