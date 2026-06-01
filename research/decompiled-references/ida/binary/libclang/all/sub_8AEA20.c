__int64 __fastcall sub_8AEA20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9[2]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v10; // [rsp+10h] [rbp-58h] BYREF
  char v11; // [rsp+14h] [rbp-54h]
  __int64 v12; // [rsp+18h] [rbp-50h] BYREF
  unsigned int v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+24h] [rbp-44h]
  int v15; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) == 13 && (((*(_WORD *)(v4 + 18) >> 3) + 57) & 0x1FFu) <= 0x17 )
  {
    v11 &= ~1u;
    v10 = 0;
    v9[0] = a3;
    v9[1] = (__int64)&v10;
    v3 = sub_8ADEA0(v9, a1);
    v6 = v10;
    if ( (_BYTE)v3 )
    {
      if ( v10 == 4 )
      {
        if ( *(_DWORD *)(a2 + 8) <= 0x40u && v13 <= 0x40 )
        {
          *(_DWORD *)(a2 + 8) = v13;
          v7 = v12;
          *(_BYTE *)(a2 + 12) = v14;
          v8 = v15;
          *(_QWORD *)a2 = v7;
          *(_DWORD *)(a2 + 16) = v8;
          goto LABEL_8;
        }
        sub_2585EA0(a2, &v12);
        v6 = v10;
        *(_BYTE *)(a2 + 12) = v14;
        *(_DWORD *)(a2 + 16) = v15;
      }
      else
      {
        v3 = 0;
      }
    }
    if ( v6 <= 1 )
      return v3;
LABEL_8:
    sub_69F740((__int64)&v10);
  }
  return v3;
}

