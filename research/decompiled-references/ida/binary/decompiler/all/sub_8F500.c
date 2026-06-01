unsigned __int64 __fastcall sub_8F500(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  sub_8E8E0((__int64)a2, 0, "mba.inlined_ranges");
  sub_7EBE0(a2);
  v3 = *a1;
  v4 = *a1 + 16 * a1[1];
  if ( v4 != *a1 )
  {
    do
    {
      v5 = pack_dd();
      sub_7EA60(a2, (__int64)&v13, v5 - (_QWORD)&v13);
      v6 = pack_dd();
      sub_7EA60(a2, (__int64)&v13, v6 - (_QWORD)&v13);
      v7 = pack_dd();
      sub_7EA60(a2, (__int64)&v13, v7 - (_QWORD)&v13);
      v8 = a2[1];
      v9 = *(_BYTE *)(v3 + 12);
      v10 = *a2;
      if ( a2[2] < (unsigned __int64)(v8 + 1) )
      {
        v11 = qvector_reserve();
        *a2 = v11;
        v10 = v11;
        v8 = a2[1];
      }
      v3 += 16;
      *(_BYTE *)(v10 + v8) = v9;
      ++a2[1];
    }
    while ( v4 != v3 );
  }
  return v14 - __readfsqword(0x28u);
}
