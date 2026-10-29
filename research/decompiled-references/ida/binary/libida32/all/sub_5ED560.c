__int64 __fastcall sub_5ED560(_QWORD *a1, char a2)
{
  __int64 v3; // rbx
  char v4; // al
  char v5; // dl
  __int64 v6; // rdi
  __int64 result; // rax
  char v8; // al
  int v9; // esi
  char v10; // dl

  v3 = *a1;
  *(_BYTE *)(v3 + 735) = 1;
  *(_DWORD *)(v3 + 737) = 134480384;
  if ( (unsigned __int8)sub_615160(*a1, 3, 2) && *(char *)(*a1 + 772LL) >= 0 )
  {
    v4 = 4;
    v5 = 3;
  }
  else
  {
    *(_BYTE *)(v3 + 737) = 2;
    v4 = 2;
    v5 = 2;
  }
  *(_BYTE *)(v3 + 734) = v4;
  v6 = *(unsigned __int8 *)(v3 + 732);
  *(_BYTE *)(v3 + 736) = v4;
  *(_BYTE *)(v3 + 733) = v5 | *(_BYTE *)(v3 + 733) & 0xFC;
  result = calc_default_sizeof_ldbl(v6);
  *(_BYTE *)(v3 + 741) = result;
  if ( a2 )
  {
    v8 = *(_BYTE *)(v3 + 733);
    v9 = v8 & 0xF0;
    if ( (v8 & 0xF0) == 0xC0 )
      v9 = *(_DWORD *)(v3 + 744);
    result = sub_5ED3B0(a1, v9);
    v10 = *(_BYTE *)(v3 + 733) & 0xF;
    if ( (result & 0xFFFFFF0F) != 0 )
    {
      *(_DWORD *)(v3 + 744) = 256;
      *(_BYTE *)(v3 + 733) = v10 | 0xC0;
    }
    else
    {
      *(_DWORD *)(v3 + 744) = 0;
      *(_BYTE *)(v3 + 733) = result | v10;
    }
  }
  return result;
}

