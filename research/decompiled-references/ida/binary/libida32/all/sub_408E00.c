__int64 __fastcall sub_408E00(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // eax
  char v4; // r12
  int v5; // eax
  __int64 result; // rax
  unsigned int v7; // eax

  v2 = unpack_dw(a2, *(_QWORD *)(a2 + 8));
  *(_WORD *)a1 = rotate_left(v2, 15, 16, 0);
  v3 = unpack_dd(a2);
  v4 = v3;
  *(_DWORD *)(a1 + 4) = v3 >> 1;
  if ( ((v3 >> 1) & 1) != 0 )
  {
    v7 = unpack_dd(a2);
    v5 = node2ea(v7);
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 12) = unpack_dd(a2) - 1;
  result = unpack_dd(a2);
  *(_DWORD *)(a1 + 16) = result;
  if ( (v4 & 1) != 0 )
  {
    result = unpack_dd(a2);
    *(_DWORD *)(a1 + 20) = result;
  }
  return result;
}

