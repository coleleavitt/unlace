/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96EBC
// Address: 0x00096EBC

//----- (00096EBC) --------------------------------------------------------
_DWORD *__fastcall sub_96EBC(unsigned __int8 **a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  __int64 v4; // r0
  _DWORD *v6; // [sp+4h] [bp-1Ch] BYREF
  _DWORD *v7; // [sp+8h] [bp-18h] BYREF

  v2 = sub_9708C(a1);
  v7 = v2;
  if ( !v2 )
    return nullptr;
  v3 = v2;
  v4 = *(_QWORD *)a1;
  if ( HIDWORD(v4) != (_DWORD)v4 && *(_BYTE *)v4 == 73 )
  {
    v3 = nullptr;
    v6 = sub_93D60((__int64 *)a1, 0);
    if ( v6 )
      return sub_94038((int)a1, (int *)&v7, (int *)&v6);
  }
  return v3;
}
