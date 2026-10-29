/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96F58
// Address: 0x00096F58

//----- (00096F58) --------------------------------------------------------
_DWORD *__fastcall sub_96F58(unsigned __int8 **a1)
{
  __int64 v2; // r0
  int v4; // r2
  int v5; // r3
  __int64 v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  __int64 v10; // r0
  _DWORD *v11; // r6
  _DWORD *v12; // [sp+4h] [bp-1Ch] BYREF
  _DWORD *v13; // [sp+8h] [bp-18h] BYREF

  v2 = *(_QWORD *)a1;
  if ( HIDWORD(v2) != (_DWORD)v2 && (unsigned int)*(unsigned __int8 *)v2 - 48 <= 9 )
    return sub_96EBC(a1);
  if ( !sub_924C8((__int64 *)a1, "dn", (unsigned __int8 *)"") )
  {
    sub_924C8((__int64 *)a1, "on", (unsigned __int8 *)"");
    v8 = sub_9718C((__int64 *)a1, nullptr);
    v13 = v8;
    if ( v8 )
    {
      v9 = v8;
      v10 = *(_QWORD *)a1;
      if ( HIDWORD(v10) != (_DWORD)v10 && *(_BYTE *)v10 == 73 )
      {
        v9 = nullptr;
        v12 = sub_93D60((__int64 *)a1, 0);
        if ( v12 )
          return sub_94038((int)a1, (int *)&v13, (int *)&v12);
      }
      return v9;
    }
    return nullptr;
  }
  v6 = *(_QWORD *)a1;
  if ( HIDWORD(v6) == (_DWORD)v6 || (unsigned int)*(unsigned __int8 *)v6 - 48 > 9 )
    v7 = sub_96E2C((__int64 *)a1, SHIDWORD(v6), v4, v5);
  else
    v7 = sub_96EBC(a1);
  v11 = v7;
  if ( !v7 )
    return nullptr;
  v9 = sub_93AC6((int)(a1 + 92), 12);
  *v9 = &off_DC040;
  v9[1] = 16843046;
  v9[2] = v11;
  return v9;
}
// 97012: variable 'v4' is possibly undefined
// 97012: variable 'v5' is possibly undefined
// DC040: using guessed type _UNKNOWN *off_DC040;
