__int64 __fastcall sub_224680(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  signed __int64 v11[9]; // [rsp+10h] [rbp-48h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( a2 < *(_QWORD *)(a1 + 128) )
    return 1;
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( a2 >= (int)sub_EE8C0(a1) )
      goto LABEL_12;
    return 1;
  }
  v7 = *(_QWORD *)(a1 + 432);
  v8 = v7 + 104LL * *(_QWORD *)(a1 + 440);
  if ( v7 != v8 )
  {
    while ( !sub_224090(a1, v7)
         || !(unsigned __int8)sub_1BEE60(v7, &v10, v11, *(_DWORD *)(v7 + 88))
         || *(_QWORD *)(a1 + 128) <= v10
         || a2 >= v11[0] )
    {
      v7 += 104;
      if ( v8 == v7 )
        goto LABEL_12;
    }
    return 1;
  }
LABEL_12:
  if ( a2 > 0x100000 )
    sub_32BE10(a1, a4, 27, a4, a5, a6);
  return 0;
}
