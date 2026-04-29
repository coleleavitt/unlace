unsigned __int64 __fastcall sub_30F910(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v3; // ecx
  __int64 v4; // r12
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  sub_30EA00(a1);
  v2 = 8 * *(_DWORD *)(a1 + 4);
  if ( a2 >= v2 )
  {
    if ( !under_debugger )
      sub_37EEE0(51743);
    BUG();
  }
  if ( v2 - 1 == a2 )
  {
    *(_DWORD *)a1 = 1;
  }
  else
  {
    sub_30EA00(a1);
    v3 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    v4 = -(1LL << a2);
    if ( v3 != 8 )
      v4 &= ~(-1LL << (8 * (unsigned __int8)v3));
    v7 = 1LL << a2;
    v6 = 0;
    sub_312A30(a1 + 8, &v6);
    v6 = v4;
    v7 = 1LL << a2;
    sub_312A30(a1 + 8, &v6);
  }
  return v8 - __readfsqword(0x28u);
}
