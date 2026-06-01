/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dw
// Address: 0x00000000000C01B0

//----- (00000000000C01B0) ----------------------------------------------------
__int64 __fastcall unpack_dw(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // rdx
  unsigned __int8 *v3; // r9
  __int64 result; // rax

  v2 = (unsigned __int8 *)*a1;
  if ( *a1 >= a2 )
  {
    *a1 = (unsigned __int64)v2;
    return 0;
  }
  else
  {
    v3 = v2 + 1;
    result = *v2;
    if ( (result & 0x80u) == 0LL )
      goto LABEL_3;
    if ( (*v2 & 0xC0) == 0xC0 )
    {
      if ( (unsigned __int64)v3 >= a2 )
      {
        result = 0;
        goto LABEL_3;
      }
      v3 = v2 + 2;
      result = v2[1] << 8;
      if ( (unsigned __int64)(v2 + 2) >= a2 )
      {
LABEL_3:
        *a1 = (unsigned __int64)v3;
        return result;
      }
      result = *v3 | (unsigned int)result;
      *a1 = (unsigned __int64)(v2 + 3);
    }
    else
    {
      if ( (unsigned __int64)v3 >= a2 )
        goto LABEL_3;
      result = v2[1] | ((unsigned __int8)(result & 0x7F) << 8);
      *a1 = (unsigned __int64)(v2 + 2);
    }
  }
  return result;
}
