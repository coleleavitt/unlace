/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100010D58
// Address: 0x0000000100010D58

//----- (0000000100010D58) ----------------------------------------------------
__int64 __fastcall sub_100010D58(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, __int64 a5, char a6)
{
  __int64 result; // x0
  __int64 v13; // x24
  __int64 v15; // x25
  off_t v16; // x0
  _BOOL4 v17; // w8
  __int64 v18; // [xsp+0h] [xbp-50h] BYREF

  if ( !*(_QWORD *)(a1 + 512) )
  {
    v15 = sub_10001098C(a1, *(_DWORD *)(a1 + 128));
    v16 = sub_10001098C(a1, a3);
    qlseek(*(_QWORD *)(a1 + 48), v16, 0);
    v17 = sub_100013FF0(a2, *(_QWORD *)(a1 + 48), -1, a4, v15, a5, a6);
    result = 0;
    if ( !v17 )
      return result;
    return *(_QWORD *)(a2 + 8) != 0;
  }
  result = (__int64)sub_1000117E8(*(_QWORD **)(a1 + 512), a3, (_QWORD *)(a1 + 224), (unsigned __int64 *)&v18);
  if ( result )
  {
    v13 = result;
    qlseek(result, a3, 0);
    result = sub_100013FF0(a2, v13, -1, a4, v18, a5, a6);
    if ( (_DWORD)result )
      return *(_QWORD *)(a2 + 8) != 0;
  }
  return result;
}
