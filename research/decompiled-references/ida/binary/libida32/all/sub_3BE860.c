__int64 __fastcall sub_3BE860(_QWORD *a1, __int64 *a2, unsigned int a3, _BYTE *a4)
{
  __int64 result; // rax
  _BYTE v7[4]; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int v8; // [rsp+10h] [rbp-38h]
  char v9; // [rsp+15h] [rbp-33h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  *a4 = 2;
  result = sub_3BE050((__int64)a1, (__int64)a2, a3, 0);
  if ( result <= 0 )
  {
    if ( !(unsigned __int8)sub_615160(*a1, 45, 1) )
      return -1;
    result = sub_3BE050((__int64)a1, (__int64)a2, a3, 1);
    if ( result > 0 )
      return result;
    *a4 = 3;
    if ( !(unsigned __int8)xrefblk_t_first_from(v7, a3, 1) )
      return -1;
    while ( 1 )
    {
      if ( v9 >= 0 )
      {
        result = sub_3BE2C0((__int64)a1, a2, v8);
        if ( result > 0 )
          break;
      }
      if ( !(unsigned __int8)xrefblk_t_next_from(v7) )
        return -1;
    }
  }
  return result;
}

