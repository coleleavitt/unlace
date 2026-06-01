__int64 __fastcall sub_C23520(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  char v12; // al
  __int64 v13[2]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+10h] [rbp-68h] BYREF
  char v15; // [rsp+14h] [rbp-64h]
  __int64 v16; // [rsp+18h] [rbp-60h] BYREF
  unsigned int v17; // [rsp+20h] [rbp-58h]
  char v18; // [rsp+24h] [rbp-54h]

  v15 &= ~1u;
  v14 = 0;
  v13[0] = a3;
  v13[1] = (__int64)&v14;
  v7 = sub_C21130(v13, a1, a3, a4, a5, a6);
  if ( (_BYTE)v7 )
  {
    if ( v14 == 2 )
    {
      if ( *(_DWORD *)(a2 + 8) <= 0x40u && v17 <= 0x40 )
      {
        v11 = v16;
        *(_DWORD *)(a2 + 8) = v17;
        v12 = v18;
        *(_QWORD *)a2 = v11;
        *(_BYTE *)(a2 + 12) = v12;
      }
      else
      {
        sub_21E1960(a2, &v16);
        v10 = v14;
        *(_BYTE *)(a2 + 12) = v18;
        if ( v10 <= 1 )
          return v7;
      }
      goto LABEL_9;
    }
    sub_E0FED0(a3, a1, 108, 0);
    v8 = v14;
    v7 = 0;
  }
  else
  {
    v8 = v14;
  }
  if ( v8 <= 1 )
    return v7;
LABEL_9:
  sub_A2BBA0((int *)&v14);
  return v7;
}

