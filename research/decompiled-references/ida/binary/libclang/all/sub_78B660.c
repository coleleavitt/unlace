unsigned __int64 __fastcall sub_78B660(__int64 a1)
{
  unsigned __int64 v1; // rax
  char v2; // dl
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  int v5; // ebp
  unsigned __int64 v6; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  v2 = *(_BYTE *)(v1 + 8);
  v3 = 0;
  v4 = v1 - 64;
  if ( (v2 & 0x7Fu) - 56 < 4 )
    v3 = v4;
  v5 = 0;
  v6 = sub_78B3D0(v3);
  result = sub_7868A0(v6);
  v8 = result;
  if ( result )
  {
LABEL_6:
    ++v5;
    v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 32LL))(v8);
    *(_DWORD *)(v9 + 68) = (16 * v5) | *(_DWORD *)(v9 + 68) & 0xF;
    while ( 1 )
    {
      result = *(_QWORD *)(v8 + 8);
      v8 = result & 0xFFFFFFFFFFFFFFF8LL;
      if ( result <= 7 )
        break;
      if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 47 <= 2 )
        goto LABEL_6;
    }
  }
  return result;
}

