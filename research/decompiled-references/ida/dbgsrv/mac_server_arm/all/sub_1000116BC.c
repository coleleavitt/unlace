/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000116BC
// Address: 0x00000001000116BC

//----- (00000001000116BC) ----------------------------------------------------
_QWORD *__fastcall sub_1000116BC(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // x22
  _QWORD *result; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  off_t v8; // x23
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x24

  v4 = a2;
  if ( *(_QWORD *)(a1 + 512) )
  {
    result = sub_1000117E8(*(_QWORD **)(a1 + 512), *(_DWORD *)(a2 + 16), (_QWORD *)(a1 + 224), nullptr);
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
    v9 = sub_10001098C(a1, *(_DWORD *)(a2 + 16));
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
    if ( (unsigned int)sub_10001A44C() != 1 )
      sub_10001A4B8(0);
  }
  return sub_1000115C8(v6, v7, (char *)v4, a3);
}
