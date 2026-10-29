__int64 __fastcall sub_87D880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  char v10; // al
  __int64 v11[2]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v12; // [rsp+10h] [rbp-68h] BYREF
  char v13; // [rsp+14h] [rbp-64h]
  __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  unsigned int v15; // [rsp+20h] [rbp-58h]
  char v16; // [rsp+24h] [rbp-54h]

  v11[0] = a3;
  v13 &= ~1u;
  v12 = 0;
  v11[1] = (__int64)&v12;
  v7 = sub_87BEE0(v11, a1, a3, a4, a5, a6);
  v8 = v12;
  if ( (_BYTE)v7 )
  {
    if ( v12 != 2 )
    {
      sub_A2E130(a3, a1, 110, 0);
      v7 = 0;
      if ( v12 <= 1 )
        return v7;
      goto LABEL_9;
    }
    if ( *(_DWORD *)(a2 + 8) <= 0x40u && v15 <= 0x40 )
    {
      *(_DWORD *)(a2 + 8) = v15;
      v10 = v16;
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 12) = v10;
      goto LABEL_9;
    }
    sub_2585EA0(a2, &v14);
    v8 = v12;
    *(_BYTE *)(a2 + 12) = v16;
  }
  if ( v8 <= 1 )
    return v7;
LABEL_9:
  sub_69F740((__int64)&v12);
  return v7;
}

