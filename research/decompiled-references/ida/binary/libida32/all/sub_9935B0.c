__int64 __fastcall sub_9935B0(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // ebp
  unsigned int v5; // ebp
  int v7; // eax
  int v8; // eax
  _QWORD v9[21]; // [rsp+10h] [rbp-A8h] BYREF

  v4 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 43) & 0x20) != 0 )
    {
      v4 = *(_DWORD *)(a1 + 48);
    }
    else
    {
      v7 = sub_9935B0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a1 + 44);
      *(_BYTE *)(a1 + 43) |= 0x20u;
      v4 = v7;
      *(_DWORD *)(a1 + 48) = v7;
    }
  }
  LODWORD(v9[0]) = *a3;
  v5 = sub_961DD0(v9, (__int64)v9 + 4) + v4;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 43) & 0x20) != 0 )
    {
      v5 += *(_DWORD *)(a2 + 48);
    }
    else
    {
      v8 = sub_9935B0(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a2 + 44);
      *(_BYTE *)(a2 + 43) |= 0x20u;
      *(_DWORD *)(a2 + 48) = v8;
      v5 += v8;
    }
  }
  return v5;
}

