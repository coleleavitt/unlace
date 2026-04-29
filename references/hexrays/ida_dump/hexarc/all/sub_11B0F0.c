unsigned __int64 __fastcall sub_11B0F0(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-68h] BYREF
  char v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  char v11; // [rsp+38h] [rbp-30h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v9 = 0;
  memset(&v8[1], 0, 32);
  v8[0] = &off_4AA0D0;
  v10 = a3;
  v11 = 1;
  if ( a2 )
  {
    if ( (unsigned int)sub_118240((_BYTE *)a2, (__int64)v8) )
      goto LABEL_9;
    v4 = *(_QWORD *)(a2 + 16);
  }
  else
  {
    v4 = a1[3].m128i_i64[1];
  }
  if ( v4 )
  {
    if ( a3 == v4 + 64 )
      return v12 - __readfsqword(0x28u);
    if ( *(_BYTE *)(v4 + 64) == 8 )
    {
      v7 = *(_QWORD *)(v4 + 72);
      if ( *(_QWORD *)(v7 + 56) )
      {
        if ( a3 == *(_QWORD *)(v7 + 48) )
          return v12 - __readfsqword(0x28u);
      }
    }
  }
  v11 = 0;
  if ( (unsigned int)sub_118EF0(a1, (__int64)v8) )
  {
    if ( !under_debugger )
      sub_37B760(50288);
LABEL_22:
    BUG();
  }
  if ( !a2 )
    return v12 - __readfsqword(0x28u);
LABEL_9:
  v5 = a1[3].m128i_i64[0];
  if ( !v5 )
  {
LABEL_18:
    if ( !under_debugger )
      sub_37B760(52387);
    goto LABEL_22;
  }
  while ( a2 != v5 )
  {
    v5 = *(_QWORD *)(v5 + 8);
    if ( !v5 )
      goto LABEL_18;
  }
  return v12 - __readfsqword(0x28u);
}
