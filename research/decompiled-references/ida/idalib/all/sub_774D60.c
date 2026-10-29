unsigned __int64 __fastcall sub_774D60(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r11
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // [rsp+Fh] [rbp-19h] BYREF
  char v10; // [rsp+17h] [rbp-11h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 168) & 4) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = *(_QWORD *)(a1 + 24);
    v9 = a2;
    v10 = 0;
    v6 = sub_773990(v5, v5 + 9 * v4, (__int64)&v9);
    if ( v6 == v8 || *(_QWORD *)v6 != v7 || *(_BYTE *)(v6 + 8) )
      return 0x8E38E38E38E38E39LL * (v6 - v5);
  }
  else if ( !sub_773E60((_QWORD *)(a1 + 48), a2) )
  {
    return *(_QWORD *)(v2 + 32);
  }
  return -1;
}
