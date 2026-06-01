__int64 __fastcall sub_BE5EE0(_QWORD *a1, __int64 a2, int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  int v8; // edx
  __int64 v9; // rbx
  __int16 v10; // ax
  char v11; // al
  char v13; // al
  _QWORD *v14; // rdx
  unsigned int v15; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v16; // [rsp+8h] [rbp-60h] BYREF
  unsigned int v17; // [rsp+10h] [rbp-58h]
  char v18; // [rsp+14h] [rbp-54h]

  v7 = *a3;
  v8 = 0;
  if ( v7 > 1 )
  {
    v8 = 2;
    if ( v7 == 2 )
      v8 = ((unsigned int)a3[4] > 0x40) + 1;
  }
  v9 = sub_BE5D80(a1, a2, v8, 0, a5, a6);
  sub_A2FF00((__int64)&v15, a3);
  v10 = (32 * (v15 & 0xF)) | *(_WORD *)(v9 + 2) & 0xFE1F;
  *(_WORD *)(v9 + 2) = v10;
  v11 = ((unsigned __int8)v10 >> 3) & 3;
  if ( v11 == 1 )
  {
    v13 = v17;
    v14 = &v16;
    if ( v17 > 0x40 )
      v14 = v16;
    *(_QWORD *)(v9 + 24) = *v14;
    *(_BYTE *)(v9 + 4) = v13 & 0x7F | *(_BYTE *)(v9 + 4) & 0x80;
    *(_BYTE *)(v9 + 3) = (2 * (v18 & 1)) | *(_BYTE *)(v9 + 3) & 0xFD;
  }
  else if ( v11 )
  {
    if ( *(char *)(v9 + 4) >= 0 && sub_A2C050((__int64)&v15) )
    {
      *(_BYTE *)(v9 + 4) |= 0x80u;
      sub_A3B850((__int64)a1, (__int64)sub_B4CF80, v9 + 24);
    }
    sub_A2BFE0(v9 + 24, (__int64)&v15);
  }
  if ( v15 > 1 )
    sub_A2BBA0((int *)&v15);
  return v9;
}

