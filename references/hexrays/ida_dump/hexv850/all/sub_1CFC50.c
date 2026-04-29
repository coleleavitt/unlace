unsigned __int64 __fastcall sub_1CFC50(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v8; // rdx
  const __m128i *v9; // rdi
  _QWORD v11[5]; // [rsp+0h] [rbp-68h] BYREF
  char v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v12 = 0;
  memset(&v11[1], 0, 32);
  v11[0] = &off_4B23E8;
  v13 = a4;
  if ( a2 < a3 )
  {
    v5 = a2;
    do
    {
      if ( v5 >= *(_DWORD *)(a1 + 64) )
      {
        if ( !under_debugger )
          sub_37CFE0(52719);
        BUG();
      }
      v8 = v5++;
      v9 = *(const __m128i **)(*(_QWORD *)(a1 + 528) + 8 * v8);
      v9[20].m128i_i64[1] += a4;
      v9[32].m128i_i64[1] += a4;
      sub_11A9F0(v9, (__int64)v11);
    }
    while ( a3 != v5 );
  }
  sub_134F60(a1);
  return v14 - __readfsqword(0x28u);
}
