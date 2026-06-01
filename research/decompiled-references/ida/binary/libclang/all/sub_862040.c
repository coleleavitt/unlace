__int64 __fastcall sub_862040(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r12d
  char v11; // al
  unsigned int v12; // [rsp+0h] [rbp-78h] BYREF
  char v13; // [rsp+4h] [rbp-74h]
  __int64 v14; // [rsp+8h] [rbp-70h] BYREF
  unsigned int v15; // [rsp+10h] [rbp-68h]
  char v16; // [rsp+14h] [rbp-64h]

  v6 = sub_B07D60(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  if ( (_BYTE)v6 )
  {
    v13 &= ~1u;
    v12 = 0;
    v9 = sub_861880(a2, a1, &v12, a4);
    v10 = v12;
    v7 = v9;
    if ( (_BYTE)v9 )
    {
      if ( v12 == 2 )
      {
        if ( !a3 )
          goto LABEL_15;
        if ( *(_DWORD *)(a3 + 8) <= 0x40u && v15 <= 0x40 )
        {
          *(_DWORD *)(a3 + 8) = v15;
          v11 = v16;
          *(_QWORD *)a3 = v14;
          *(_BYTE *)(a3 + 12) = v11;
          goto LABEL_15;
        }
        sub_2585EA0(a3, &v14);
        v10 = v12;
        *(_BYTE *)(a3 + 12) = v16;
LABEL_14:
        if ( v10 <= 1 )
          return v7;
LABEL_15:
        sub_69F740((__int64)&v12);
        return v7;
      }
      if ( a4 )
        *a4 = sub_8124E0(a2);
    }
    v7 = 0;
    goto LABEL_14;
  }
  v7 = v6;
  if ( a4 )
    *a4 = sub_8124E0(a2);
  return v7;
}

