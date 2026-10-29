/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B9D8
// Address: 0x000000000042B9D8

//----- (000000000042B9D8) ----------------------------------------------------
__int64 __fastcall sub_42B9D8(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // x1
  __int64 *v8; // x1
  __int64 v10; // x2
  void *ptr; // [xsp+20h] [xbp-20h] BYREF
  __int64 v12; // [xsp+28h] [xbp-18h]
  __int64 v13; // [xsp+38h] [xbp-8h]

  v6 = *(unsigned int *)(a3 + 4);
  if ( (v6 & 0xFFFFFFF9) == 0 || (v6 & 0xFFFFFFFD) == 9 )
  {
    sub_42B8F0(a1 + 80, v6, &ptr);
    v8 = &qword_4B2D48;
    if ( v12 )
      v8 = (__int64 *)ptr;
    sub_40A690((int)"Illegal type %s of the string table section\n", v8);
    if ( ptr )
    {
      v12 = 0;
      j__free(ptr);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 24);
    if ( !v10 )
    {
      sub_40A690((int)"Illegal offset of the string table section\n", v6, 0, a4, 0);
      return v13 ^ _stack_chk_guard;
    }
    if ( *a2 <= 0 || !a2[2] )
      goto LABEL_17;
    if ( v10 != *a2 )
    {
      if ( !(_BYTE)a4 )
      {
        sub_41A920("AUTOHIDE SESSION\nMore than one string table for %ssymbols, using one at offset %08llX");
        return v13 ^ _stack_chk_guard;
      }
      sub_41A920("AUTOHIDE SESSION\nMore than one string table for %ssymbols, using one at offset %08llX");
      v10 = *(_QWORD *)(a3 + 24);
LABEL_17:
      *a2 = v10;
      a2[1] = *(_QWORD *)(a3 + 16);
      a2[2] = *(_QWORD *)(a3 + 32);
    }
  }
  return v13 ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
