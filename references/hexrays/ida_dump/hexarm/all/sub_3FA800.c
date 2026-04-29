__int64 __fastcall sub_3FA800(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  char v6; // dl
  __int64 result; // rax
  char v8; // dl
  unsigned int v9; // ecx
  __int64 v10; // rdi

  v6 = *(_BYTE *)(a3 + 5);
  if ( v6 == 18 )
    return 2;
  result = a4;
  if ( v6 != 10 )
  {
    result = 1;
    if ( *(char *)(a1 + 54) >= 0 )
    {
      v8 = sub_3F0900(a2);
      result = v9;
      if ( !v8 )
      {
        if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 490) > 1u )
        {
          if ( sub_3EE080(a1, a3) )
          {
            v10 = (unsigned __int8)sub_3EE110(a1, a3, a5);
          }
          else if ( sub_3EDFE0(a1, a3) )
          {
            v10 = (unsigned __int8)sub_3EE470(a1, a3, 0, a5);
          }
          else
          {
            v10 = *(unsigned __int8 *)(a3 + 5);
          }
          return get_dtype_size(v10);
        }
        else
        {
          return *(unsigned int *)(*(_QWORD *)(a1 + 832) + 84LL);
        }
      }
    }
  }
  return result;
}
