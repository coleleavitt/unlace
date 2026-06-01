/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9708C
// Address: 0x0009708C

//----- (0009708C) --------------------------------------------------------
_DWORD *__fastcall sub_9708C(unsigned __int8 **a1)
{
  _DWORD *v2; // r5
  __int64 v3; // r0
  unsigned __int8 *v5[2]; // [sp+0h] [bp-20h] BYREF
  int v6; // [sp+8h] [bp-18h] BYREF

  v2 = nullptr;
  v6 = 0;
  if ( !sub_946E6((int)a1, &v6) )
  {
    v3 = *(_QWORD *)a1;
    if ( v6 - 1 >= (unsigned int)(HIDWORD(v3) - v3) )
    {
      return nullptr;
    }
    else
    {
      v5[0] = *a1;
      v5[1] = (unsigned __int8 *)(v6 + v3);
      *a1 = (unsigned __int8 *)(v6 + v3);
      if ( sub_93370(v5, "_GLOBAL__N", (unsigned __int8 *)"") )
      {
        v2 = sub_93AC6((int)(a1 + 92), 16);
        *v2 = &off_DBC58;
        v2[1] = 16843015;
        v2[2] = "(anonymous namespace)";
        v2[3] = "";
      }
      else
      {
        return sub_97130((int)a1, (int *)v5);
      }
    }
  }
  return v2;
}
// DBC58: using guessed type _UNKNOWN *off_DBC58;
