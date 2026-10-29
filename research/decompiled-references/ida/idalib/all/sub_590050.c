unsigned __int64 __fastcall sub_590050(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( a2 )
  {
    v4 = -1;
    sub_7BF040(&v4, a1, "$ strict_bitness", 0);
  }
  else
  {
    sub_7BEFF0(&v4, a1, "$ strict_bitness", 0, 0);
    if ( v4 == -1 )
    {
      v3 = *(_QWORD *)(a1 + 1496);
      *(_BYTE *)(a1 + 1516) = 0;
      *(_DWORD *)(a1 + 1512) = 8;
      *(_QWORD *)(a1 + 1504) = v3;
    }
  }
  return v5 - __readfsqword(0x28u);
}
