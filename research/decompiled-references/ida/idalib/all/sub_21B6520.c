__int64 *__fastcall sub_21B6520(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, unsigned int *a5, __int64 a6)
{
  __int64 *v6; // r12
  __int64 *result; // rax
  unsigned int *v9; // rbp
  unsigned int *v10; // r13
  __int64 v11; // rbx
  unsigned int *v12; // r15
  unsigned int *v13; // r15
  __int64 v14; // rax
  __int64 *v15; // [rsp+0h] [rbp-58h]

  v6 = *(__int64 **)(a1 + 8);
  result = &v6[*(unsigned int *)(a1 + 16)];
  v15 = result;
  if ( v6 != result )
  {
    while ( !*v6 )
    {
      if ( result == ++v6 )
        return result;
    }
    v9 = &a5[a6];
    v10 = &a3[a4];
    v11 = *v6;
    if ( a5 == v9 )
      goto LABEL_10;
LABEL_4:
    v12 = a5;
    while ( !(unsigned __int8)sub_21B9810(v11, *v12) )
    {
      if ( v9 == ++v12 )
      {
LABEL_10:
        while ( 1 )
        {
          v13 = a3;
          if ( a3 == v10 )
            goto LABEL_7;
          while ( !(unsigned __int8)sub_21B9810(v11, *v13) )
          {
            if ( v10 == ++v13 )
              goto LABEL_7;
          }
          v14 = *(_QWORD *)(v11 + 16);
          if ( !v14 )
            v14 = v11;
          *(_BYTE *)(v14 + 44) |= 1u;
          sub_21B5A40(v11, a1, a2);
          result = v6 + 1;
          if ( v15 == v6 + 1 )
            return result;
LABEL_8:
          if ( !v6[1] )
          {
            do
            {
              if ( v15 == ++result )
                return result;
            }
            while ( !*result );
          }
          v6 = result;
          v11 = *result;
          if ( a5 != v9 )
            goto LABEL_4;
        }
      }
    }
LABEL_7:
    result = v6 + 1;
    if ( v15 != v6 + 1 )
      goto LABEL_8;
  }
  return result;
}
