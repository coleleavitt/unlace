__int64 __fastcall sub_514250(__int64 *a1)
{
  __int64 v2; // r12
  unsigned __int64 *i; // rbx
  unsigned __int64 v4; // rax
  __int64 v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  netnode_check(v5, "$ segstrings", 0, 0);
  if ( v5[0] != -1 )
  {
    v2 = *(_QWORD *)(*a1 + 1760);
    sub_513C70(v2, v5[0]);
    *(_BYTE *)(v2 + 168) = 1;
    sub_50ECB0(*a1);
    for ( i = sub_506150((__int64)(a1 + 203)); i; i = sub_505EB0((__int64)(a1 + 203), *i) )
    {
      v4 = i[2];
      if ( v4 < *(_QWORD *)(v2 + 152) )
        sub_50D070((__int64 *)(*(_QWORD *)(v2 + 144) + 56 * v4 + 24), *i);
    }
  }
  return 1;
}
