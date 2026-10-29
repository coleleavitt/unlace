/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439FB0
// Address: 0x0000000000439FB0

//----- (0000000000439FB0) ----------------------------------------------------
__int64 __fastcall sub_439FB0(__int64 a1)
{
  int v1; // w1
  __int64 v2; // x1
  const char *v3; // x20
  __int64 v4; // x19

  if ( *(_DWORD *)(a1 + 216) != 1 )
    return sub_4869C8(47);
  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 48LL);
  if ( v1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * v1);
    if ( *(_QWORD *)(v2 + 64) )
    {
      v3 = *(const char **)(v2 + 56);
      if ( *(_QWORD *)(a1 + 48) )
        goto LABEL_5;
    }
    else
    {
      v3 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(a1 + 48) )
      {
LABEL_5:
        v4 = a1;
        if ( !strcmp(v3, *(const char **)(a1 + 40)) )
          return sub_439DA8(v4, v3);
        return sub_4869C8(1586);
      }
    }
    v4 = a1;
    if ( !strcmp(v3, (const char *)&qword_4B2D48) )
      return sub_439DA8(v4, v3);
  }
  return sub_4869C8(1586);
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
