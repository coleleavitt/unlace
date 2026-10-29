__int64 __fastcall sub_9CEC10(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // ebp
  unsigned int v5; // ebp
  int v7; // eax
  int v8; // eax
  __int64 v9; // [rsp+10h] [rbp-A8h] BYREF
  int v10; // [rsp+18h] [rbp-A0h]
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
      v7 = sub_9CEC10(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a1 + 48);
      *(_BYTE *)(a1 + 43) |= 0x20u;
      v4 = v7;
      *(_DWORD *)(a1 + 64) = v7;
    }
  }
  v9 = *a3;
  v10 = *((_DWORD *)a3 + 2);
  v5 = sub_985B10(&v9, (__int64)&v11) + v4;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 43) & 0x20) != 0 )
    {
      v5 += *(_DWORD *)(a2 + 64);
    }
    else
    {
      v8 = sub_9CEC10(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a2 + 48);
      *(_BYTE *)(a2 + 43) |= 0x20u;
      *(_DWORD *)(a2 + 64) = v8;
      v5 += v8;
    }
  }
  return v5;
}
