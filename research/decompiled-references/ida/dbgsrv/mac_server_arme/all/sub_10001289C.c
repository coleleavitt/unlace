/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001289C
// Address: 0x000000010001289C

//----- (000000010001289C) ----------------------------------------------------
_QWORD *__fastcall sub_10001289C(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // x22
  _QWORD *result; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  off_t v8; // x23
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x24
  __int64 _58; // [xsp+58h] [xbp+8h]

  v4 = a2;
  if ( *(_QWORD *)(a1 + 512) )
  {
    result = sub_1000129DC(*(_QWORD **)(a1 + 512), *(_DWORD *)(a2 + 16), (_QWORD *)(a1 + 224), nullptr);
    if ( !result )
      return result;
    v6 = (__int64)result;
    v7 = *(unsigned int *)(v4 + 16);
    LODWORD(v4) = *(_DWORD *)(v4 + 20);
    v8 = v7;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 48);
    v9 = sub_100011B0C(a1, *(_DWORD *)(a2 + 16));
    v7 = v9;
    LODWORD(v4) = *(_DWORD *)(v4 + 20);
    if ( v9 == -1 )
      v8 = qlseek(v6, 0, 1);
    else
      v8 = v9;
  }
  v4 = (unsigned int)v4;
  v10 = qlsize(v6);
  v11 = 0;
  if ( v8 < 0 || v10 - v8 < 0 || (v11 = v10 - v8, v10 - v8 < (unsigned __int64)(unsigned int)v4) )
  {
    v4 = v11;
    if ( (unsigned int)sub_10001BF64() != 1 )
      sub_10001BFD4(0);
  }
  if ( ((_58 ^ (2 * _58)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100012784(v6, v7, (char *)v4, a3);
}
// 1000129C4: variable '_58' is possibly undefined
