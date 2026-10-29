/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BDBC
// Address: 0x0008BDBC

//----- (0008BDBC) --------------------------------------------------------
void *__fastcall sub_8BDBC(void *dest, const void *src, size_t n)
{
  if ( n == 1 )
  {
    *(_BYTE *)dest = *(_BYTE *)src;
  }
  else if ( n )
  {
    return j_memmove(dest, src, n);
  }
  return dest;
}
