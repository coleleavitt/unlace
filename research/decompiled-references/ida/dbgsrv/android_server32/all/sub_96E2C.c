/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96E2C
// Address: 0x00096E2C

//----- (00096E2C) --------------------------------------------------------
_DWORD *__fastcall sub_96E2C(__int64 *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  int v6; // r0
  _DWORD *v7; // r5
  __int64 v8; // r0
  _DWORD *v10; // [sp+4h] [bp-1Ch] BYREF
  _DWORD *v11; // [sp+8h] [bp-18h] BYREF

  v5 = *a1;
  if ( HIDWORD(v5) == (_DWORD)v5 )
    return sub_93C28((int)a1);
  v6 = *(unsigned __int8 *)v5;
  if ( v6 != 68 )
  {
    if ( v6 == 84 )
    {
      v7 = sub_940CC((int)a1);
      v11 = v7;
      if ( v7 )
      {
        LODWORD(v8) = (char *)a1 + 148;
        HIDWORD(v8) = &v11;
LABEL_9:
        sub_938C4(v8);
        return v7;
      }
      return v7;
    }
    return sub_93C28((int)a1);
  }
  v7 = (_DWORD *)sub_94258(a1, SHIDWORD(v5), a3, a4);
  v10 = v7;
  if ( v7 )
  {
    LODWORD(v8) = (char *)a1 + 148;
    HIDWORD(v8) = &v10;
    goto LABEL_9;
  }
  return v7;
}
