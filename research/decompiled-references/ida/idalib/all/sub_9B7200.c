__int64 __fastcall sub_9B7200(__int64 a1, __int64 a2, int *a3)
{
  int v4; // ebp
  unsigned int v5; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+14h] [rbp-A4h]
  int v11; // [rsp+1Ch] [rbp-9Ch] BYREF

  v4 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 43) & 0x20) != 0 )
    {
      v4 = *(_DWORD *)(a1 + 64);
    }
    else
    {
      v7 = sub_9B7200(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a1 + 48);
      *(_BYTE *)(a1 + 43) |= 0x20u;
      v4 = v7;
      *(_DWORD *)(a1 + 64) = v7;
    }
  }
  v9 = *a3;
  v10 = *((_QWORD *)a3 + 1);
  v5 = sub_985B10(&v9, (__int64)&v11) + v4;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 43) & 0x20) != 0 )
    {
      v5 += *(_DWORD *)(a2 + 64);
    }
    else
    {
      v8 = sub_9B7200(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a2 + 48);
      *(_BYTE *)(a2 + 43) |= 0x20u;
      *(_DWORD *)(a2 + 64) = v8;
      v5 += v8;
    }
  }
  return v5;
}
