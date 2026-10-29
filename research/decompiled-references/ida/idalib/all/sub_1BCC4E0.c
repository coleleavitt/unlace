char __fastcall sub_1BCC4E0(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax

  result = sub_F58100(a1);
  if ( !result )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v6 + 16) == 13 && (((*(_WORD *)(v6 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
      return 1;
    else
      return sub_9EC890(a1, a2, v3, v4, v5);
  }
  return result;
}
