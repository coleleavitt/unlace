unsigned __int64 __fastcall sub_80950(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r14
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 *i; // [rsp+8h] [rbp-50h]
  _BYTE v9[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 144) != *(_QWORD *)(a1 + 80) )
  {
    if ( !under_debugger )
      sub_383060(52193);
    BUG();
  }
  sub_7F8E0(a2);
  v2 = *(__int64 **)(a1 + 72);
  for ( i = &v2[3 * *(_QWORD *)(a1 + 80)]; i != v2; v2 += 3 )
  {
    v3 = pack_dd();
    sub_7F760(a2, (__int64)v9, v3 - (_QWORD)v9);
    v4 = *v2 + 4 * v2[1];
    if ( v4 != *v2 )
    {
      v5 = *v2;
      do
      {
        v5 += 4;
        v6 = pack_dd();
        sub_7F760(a2, (__int64)v9, v6 - (_QWORD)v9);
      }
      while ( v4 != v5 );
    }
  }
  return v10 - __readfsqword(0x28u);
}
