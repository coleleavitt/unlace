char __fastcall sub_B99130(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  char result; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = sub_B709C0(a1);
  v4 = *(char *)(v2 + 87);
  if ( (v4 & 0x40) != 0 )
    v5 = *(_QWORD *)(v2 + 16LL * ((v4 & 0x20) != 0) + 176);
  else
    v5 = v4 >> 63;
  v6 = v5 & 3;
  result = a2 | (v6 != 1);
  if ( result )
  {
    if ( (unsigned int)sub_B76070(a1, a2, v6, v3) )
    {
      return (unsigned int)sub_B770E0(a1, a2) <= 1;
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v10 + 16) != 26 )
        v10 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v9);
      return (unsigned __int8)BYTE3(*(_QWORD *)(v10 + 16)) >> 7;
    }
  }
  return result;
}
