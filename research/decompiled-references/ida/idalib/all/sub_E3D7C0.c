bool __fastcall sub_E3D7C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rax
  char v5; // dl
  bool result; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax

  v2 = *a1;
  v3 = a2 - 48;
  if ( a2 != 48 )
    v3 = a2;
  v4 = sub_B8C1B0(v3);
  v5 = *(_BYTE *)(sub_E3D330(v2, v4) + 8);
  result = 0;
  if ( (v5 & 0x7F) == 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL);
    result = 0;
    if ( (v7 & 7) == 0 )
    {
      v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        if ( *(_DWORD *)v9 == 3 )
        {
          if ( *(_WORD *)(v9 + 16) != 29811 || (v10 = 0, *(_BYTE *)(v9 + 18) != 100) )
            v10 = 1;
          return v10 == 0;
        }
      }
    }
  }
  return result;
}
