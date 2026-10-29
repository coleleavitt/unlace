unsigned __int64 __fastcall sub_7A2F00(
        _QWORD *a1,
        char a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax

  v9 = sub_79A610(144, a1, a3, 0);
  sub_78A3D0(v9, 0x39u, a2, (__int64)a1, a3, a4, a5, a6, a7);
  *(_QWORD *)v9 = &off_49F5330;
  v10 = 0;
  if ( a7 )
    v10 = *(_QWORD *)(a7 + 128);
  *(_QWORD *)(v9 + 128) = v10;
  *(_QWORD *)(v9 + 136) = 0;
  *(_BYTE *)(v9 + 74) = (16 * (*(_BYTE *)(a1[270] + 18LL) >> 7)) | *(_BYTE *)(v9 + 74) & 0xEF;
  if ( !a8 && !*(_QWORD *)(v9 + 48) )
  {
    if ( a7 )
      *(_QWORD *)(v9 + 48) = *(_QWORD *)(a7 + 48);
    else
      sub_6E8D60((__int64)a1, v9);
  }
  return v9;
}

