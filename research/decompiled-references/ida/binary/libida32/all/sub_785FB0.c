unsigned __int64 __fastcall sub_785FB0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  sub_785E60(a1, a2, a3, a4, a5, a6);
  for ( ; *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) == 31868; *(_QWORD *)(a2 + 8) = !v9 )
  {
    v11 = 1;
    v12 = 0;
    sub_785E60(a1, (__int64)&v11, 1u, v6, v7, v8);
    v9 = (v12 | *(_QWORD *)(a2 + 8)) == 0;
    *(_BYTE *)a2 = 0;
  }
  return v13 - __readfsqword(0x28u);
}

