unsigned __int64 __fastcall sub_7548E0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // r10d
  __int64 v8; // r11
  unsigned int v9; // [rsp+3h] [rbp-15h] BYREF
  char v10; // [rsp+7h] [rbp-11h]
  unsigned __int64 v11; // [rsp+8h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 164) & 4) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = *(_QWORD *)(a1 + 24);
    v9 = a2;
    v10 = 0;
    v6 = sub_7534D0(v5, v5 + 5 * v4, (__int64)&v9);
    if ( v6 == v8 || *(_DWORD *)v6 != v7 || *(_BYTE *)(v6 + 4) )
      return 0xCCCCCCCCCCCCCCCDLL * (v6 - v5);
  }
  else if ( !sub_7539C0((_QWORD *)(a1 + 48), a2) )
  {
    return *(_QWORD *)(v2 + 32);
  }
  return -1;
}

