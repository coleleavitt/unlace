/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F6F8
// Address: 0x000000000040F6F8

//----- (000000000040F6F8) ----------------------------------------------------
_QWORD *__fastcall sub_40F6F8(__int64 a1, int a2)
{
  _QWORD *v4; // x22
  int v6[3]; // [xsp+38h] [xbp-48h] BYREF
  __int64 v7; // [xsp+44h] [xbp-3Ch]
  int v8; // [xsp+4Ch] [xbp-34h]
  char v9; // [xsp+50h] [xbp-30h]
  int v10; // [xsp+54h] [xbp-2Ch]
  char v11; // [xsp+58h] [xbp-28h]
  char v12; // [xsp+59h] [xbp-27h]
  int v13; // [xsp+5Ch] [xbp-24h]
  void *ptr; // [xsp+60h] [xbp-20h]
  __int64 v15; // [xsp+68h] [xbp-18h]
  __int64 v16; // [xsp+70h] [xbp-10h]

  v6[0] = a2;
  v6[2] = a2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 1;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  ptr = nullptr;
  v15 = 0;
  v16 = 0;
  v4 = sub_40F548((_QWORD *)(a1 + 1912), v6);
  if ( ptr )
  {
    v15 = 0;
    j__free(ptr);
  }
  sub_40CE10(a1, (__int64)(v4 + 9), a2);
  return v4 + 5;
}
