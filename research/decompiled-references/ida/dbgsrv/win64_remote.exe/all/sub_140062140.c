/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140062140
// Address: 0x0000000140062140

//----- (0000000140062140) ----------------------------------------------------
__int64 __fastcall sub_140062140(__int64 a1, __int8 *a2, __int64 a3)
{
  __int8 *v6; // rax
  __int64 v7; // rdx
  __int8 v8; // cl

  if ( a3 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  v6 = sub_14006CA14(a1, 0);
  if ( (unsigned __int64)v6 >= a1 + a3 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(520);
  }
  v7 = a1 + a3 - 1;
  if ( v6 == (__int8 *)v7 )
  {
LABEL_6:
    *v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = *a2++;
      *v6 = v8;
      if ( !v8 )
        break;
      if ( ++v6 == (__int8 *)v7 )
        goto LABEL_6;
    }
  }
  return a1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
