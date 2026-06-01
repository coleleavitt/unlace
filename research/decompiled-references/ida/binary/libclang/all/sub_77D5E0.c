__int64 __fastcall sub_77D5E0(__int64 a1)
{
  char v1; // al
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax

  v1 = (*(_BYTE *)(a1 + 97) >> 1) & 3;
  if ( v1 == 2 )
    return sub_AC7B80(*(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v1 != 3 )
    return 0;
  v2 = sub_77BC00(a1);
  if ( !v2 )
    return 0;
  v3 = sub_AC7B80(v2);
  return (HIDWORD(v3) << 32) | (unsigned int)v3;
}

