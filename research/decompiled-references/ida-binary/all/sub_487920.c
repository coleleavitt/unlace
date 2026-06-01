unsigned __int64 __fastcall sub_487920(__int64 *src, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *i; // rbx
  char v5; // al
  __int64 v6; // rbp
  __int64 *v7; // r15
  __int64 v8; // rdx
  __int64 *v9; // r12
  __int64 v11; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12; // [rsp+18h] [rbp-60h]
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  char v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v11 = a3;
  v12 = a4;
  v15 = __readfsqword(0x28u);
  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; ++i )
    {
      while ( 1 )
      {
        v5 = sub_487440(&v11, *i, *src);
        v6 = *i;
        if ( v5 )
          break;
        v7 = i;
        v13 = v11;
        v14 = v12;
        while ( 1 )
        {
          v8 = *(v7 - 1);
          v9 = v7--;
          if ( !(unsigned __int8)sub_487440(&v13, v6, v8) )
            break;
          v7[1] = *v7;
        }
        *v9 = v6;
        if ( a2 == ++i )
          return v15 - __readfsqword(0x28u);
      }
      if ( (char *)i - (char *)src <= 8 )
      {
        if ( (char *)i - (char *)src == 8 )
          *i = *src;
      }
      else
      {
        memmove(src + 1, src, (char *)i - (char *)src);
      }
      *src = v6;
    }
  }
  return v15 - __readfsqword(0x28u);
}
