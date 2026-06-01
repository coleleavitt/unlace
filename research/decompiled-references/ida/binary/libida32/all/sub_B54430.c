__int64 __fastcall sub_B54430(__int64 a1)
{
  char v1; // al
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned int v5; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v6; // [rsp+8h] [rbp-50h]
  unsigned int v7; // [rsp+10h] [rbp-48h]

  v1 = *(_BYTE *)(a1 + 68);
  if ( (v1 & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 72);
    if ( (v1 & 0xC) != 0xC && (v1 & 0xC) != 0 )
      v2 = *(_QWORD *)(v2 + 8);
  }
  else
  {
    v2 = 0;
  }
  sub_BD3DC0(&v5, v2);
  LODWORD(v3) = (_DWORD)v6;
  if ( v7 > 0x40 )
    v3 = *v6;
  if ( v5 > 1 )
    sub_A2BBA0((int *)&v5);
  return (unsigned int)v3;
}

