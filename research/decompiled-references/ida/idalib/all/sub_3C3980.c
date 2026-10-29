__int64 __fastcall sub_3C3980(_QWORD *a1, __int64 *a2, unsigned __int64 a3, _BYTE *a4)
{
  __int64 result; // rax
  unsigned __int64 v7[2]; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+11h] [rbp-37h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  *a4 = 2;
  result = sub_3C3140(a1, (__int64)a2, a3, 0);
  if ( result <= 0 )
  {
    if ( !(unsigned __int8)sub_631C90(*a1, 45, 1) )
      return -1;
    result = sub_3C3140(a1, (__int64)a2, a3, 1);
    if ( result > 0 )
      return result;
    *a4 = 3;
    if ( !(unsigned __int8)xrefblk_t_first_from(v7, a3, 1) )
      return -1;
    while ( 1 )
    {
      if ( v8 >= 0 )
      {
        result = sub_3C33E0(a1, a2, v7[1]);
        if ( result > 0 )
          break;
      }
      if ( !(unsigned __int8)xrefblk_t_next_from(v7) )
        return -1;
    }
  }
  return result;
}
