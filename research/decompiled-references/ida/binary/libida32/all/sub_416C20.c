__int64 __fastcall sub_416C20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = sub_4EE820(a1 + 1552, a2);
  if ( v2 && *(_BYTE *)(v2 + 96) == 1 )
    return 8;
  v3 = sub_3B9AA0(a1, a2, 0) & 0x600;
  if ( v3 == 1024 )
    return 6;
  v4 = 7;
  if ( v3 != 1536 )
    return v4;
  v6 = sub_5AFCE0(a1);
  if ( !v6 )
    return 5;
  v7 = *(_QWORD *)(v6 + 8);
  v4 = 3;
  if ( (v7 & 4) != 0 )
    return v4;
  return (v7 & 0x10000) == 0 ? 4 : 12;
}

