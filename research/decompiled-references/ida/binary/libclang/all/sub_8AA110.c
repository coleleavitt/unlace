__int64 __fastcall sub_8AA110(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned int v4; // ebp
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  char v7; // al
  __int64 v8; // rsi
  _BYTE *v9; // rax
  char v10; // dl
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+0h] [rbp-B8h] BYREF
  char v14; // [rsp+4h] [rbp-B4h]
  unsigned int v15; // [rsp+40h] [rbp-78h] BYREF
  char v16; // [rsp+44h] [rbp-74h]

  v3 = *(_QWORD *)(a2 + 16);
  v4 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( v4 == 32 )
  {
    sub_857160(*a1, *(_QWORD *)(a2 + 16));
    return sub_8A87B0(a1, *(_QWORD *)(a2 + 24));
  }
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *a1;
  v13 = 0;
  v14 &= ~1u;
  v16 &= ~1u;
  v15 = 0;
  v7 = sub_856400((__int64)&v13, v6, v3);
  v8 = *a1;
  if ( v7 )
  {
    if ( (unsigned __int8)sub_856400((__int64)&v15, v8, v5) )
    {
      v11 = sub_83F900(*a1, a2, v4, (__int64)&v13, (__int64)&v15);
      if ( (_BYTE)v11 )
      {
        sub_6A63E0(a1[1], (__int64)&v13);
        goto LABEL_8;
      }
    }
  }
  else if ( *(_DWORD *)(v8 + 48) )
  {
    v9 = *(_BYTE **)(v8 + 24);
    if ( *(_BYTE *)(v8 + 962) )
    {
      *v9 = 1;
      goto LABEL_6;
    }
    v10 = *(_BYTE *)(v8 + 963);
    *v9 |= v10;
    if ( v10 )
LABEL_6:
      sub_856400((__int64)&v15, *a1, v5);
  }
  v11 = 0;
LABEL_8:
  if ( v15 > 1 )
    sub_69F740((__int64)&v15);
  if ( v13 > 1 )
    sub_69F740((__int64)&v13);
  return v11;
}

