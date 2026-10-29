__int64 __fastcall sub_B88650(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi

  result = (a2 << 7) | *(_BYTE *)(a1 + 28) & 0x7Fu;
  *(_BYTE *)(a1 + 28) = ((_BYTE)a2 << 7) | *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (_BYTE)a2 )
  {
    result &= 0x7Fu;
    if ( (_BYTE)result != 43 )
    {
      *(_BYTE *)(a1 + 29) &= 0x9Fu;
      if ( (_BYTE)result == 46 )
      {
        v3 = (__int64 *)(a1 + 104);
        result = *(unsigned int *)(a1 + 100);
        v4 = a1 + 104 + 8 * result;
        if ( a1 + 104 != v4 )
        {
          do
          {
            v5 = *v3++;
            result = sub_B88650(v5, 1);
          }
          while ( (__int64 *)v4 != v3 );
        }
      }
    }
  }
  return result;
}
