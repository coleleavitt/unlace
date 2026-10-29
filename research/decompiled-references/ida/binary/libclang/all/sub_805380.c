__int64 __fastcall sub_805380(_QWORD *a1, __int64 a2, int *a3)
{
  unsigned int v4; // eax
  int v5; // edx
  __int64 v6; // rbx
  __int16 v7; // ax
  char v8; // al
  char v10; // al
  _QWORD *v11; // rdx
  unsigned int v12; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v13; // [rsp+8h] [rbp-60h] BYREF
  unsigned int v14; // [rsp+10h] [rbp-58h]
  char v15; // [rsp+14h] [rbp-54h]

  v4 = *a3;
  v5 = 0;
  if ( v4 > 1 )
  {
    v5 = 2;
    if ( v4 == 2 )
    {
      v5 = 1;
      if ( (unsigned int)a3[4] > 0x40 )
        v5 = 2;
    }
  }
  v6 = sub_805210(a1, a2, v5, 0);
  sub_6A4260((__int64)&v12, a3);
  v7 = (32 * (v12 & 0xF)) | *(_WORD *)(v6 + 2) & 0xFE1F;
  *(_WORD *)(v6 + 2) = v7;
  v8 = ((unsigned __int8)v7 >> 3) & 3;
  if ( v8 == 1 )
  {
    v10 = v14;
    v11 = &v13;
    if ( v14 > 0x40 )
      v11 = v13;
    *(_QWORD *)(v6 + 24) = *v11;
    *(_BYTE *)(v6 + 4) = v10 & 0x7F | *(_BYTE *)(v6 + 4) & 0x80;
    *(_BYTE *)(v6 + 3) = (2 * (v15 & 1)) | *(_BYTE *)(v6 + 3) & 0xFD;
  }
  else if ( v8 == 2 )
  {
    if ( *(char *)(v6 + 4) >= 0 && sub_6A0220((__int64)&v12) )
    {
      *(_BYTE *)(v6 + 4) |= 0x80u;
      sub_6B5A70((__int64)a1, (__int64)sub_778160, v6 + 24);
    }
    sub_6A01B0(v6 + 24, (__int64)&v12);
  }
  if ( v12 > 1 )
    sub_69F740((__int64)&v12);
  return v6;
}

