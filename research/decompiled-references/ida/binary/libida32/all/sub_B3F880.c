__int64 __fastcall sub_B3F880(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 16);
  if ( v1 )
    return (*v1 >> 14) & 0x13;
  else
    return 0;
}

