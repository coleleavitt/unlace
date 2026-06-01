/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dw
// Address: 0x000000010007B270

//----- (000000010007B270) ----------------------------------------------------
__int64 __fastcall unpack_dw(unsigned __int8 **a1, unsigned __int64 a2)
{
  unsigned __int8 *v2; // rdx
  unsigned __int8 *v3; // rcx
  __int64 result; // rax
  __int16 v5; // ax
  unsigned __int8 *v6; // rdx

  v2 = *a1;
  if ( (unsigned __int64)*a1 >= a2 )
  {
    LOWORD(result) = 0;
    v3 = *a1;
  }
  else
  {
    v3 = v2 + 1;
    LOWORD(result) = *v2;
    if ( (result & 0x80u) != 0LL )
    {
      if ( (~(_BYTE)result & 0xC0) != 0 )
      {
        if ( (unsigned __int64)v3 < a2 )
        {
          v3 = v2 + 2;
          LOWORD(result) = v2[1] | ((result & 0x7F) << 8);
        }
      }
      else if ( (unsigned __int64)v3 >= a2 )
      {
        LOWORD(result) = 0;
      }
      else
      {
        v5 = v2[1];
        v6 = v2 + 2;
        LOWORD(result) = v5 << 8;
        v3 = v6;
        if ( (unsigned __int64)v6 < a2 )
        {
          v3 = v6 + 1;
          LOWORD(result) = *v6 | (unsigned __int16)result;
        }
      }
    }
  }
  *a1 = v3;
  return (unsigned __int16)result;
}
