__int64 __fastcall sub_13A0A0(__int64 a1, unsigned __int8 a2, __int64 *a3)
{
  __int64 v4; // rbp
  const char *i; // rax
  const char *v6; // rdx
  char v7; // dl
  char v8; // bp
  _BYTE *j; // r12
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v15; // rax

  if ( !a1 )
    return 0;
  sub_15E780(a1, a2);
  v4 = sub_163260(a1, a2);
  if ( *(_QWORD *)(v4 + 8) > 1u )
  {
    for ( i = (const char *)tag_advance(); ; --i )
    {
      v6 = s1;
      if ( *(_QWORD *)(v4 + 8) )
        v6 = *(const char **)v4;
      if ( v6 >= i )
        break;
      v7 = *(i - 1);
      if ( v7 == 2 )
        break;
      if ( v7 == 1 && *i == 33 )
      {
        if ( a3 )
        {
          v8 = i[1];
          for ( j = i + 1; (v8 & 0xFD) != 0; ++j )
          {
            if ( v8 != 32 )
            {
              v12 = a3[1];
              if ( v12 )
              {
                v10 = v12 + 1;
                v11 = a3[1];
                --v12;
              }
              else
              {
                v11 = 1;
                v10 = 2;
              }
              v13 = *a3;
              if ( a3[2] < v10 )
              {
                v15 = qvector_reserve();
                *a3 = v15;
                v13 = v15;
              }
              a3[1] = v10;
              *(_BYTE *)(v13 + v12) = v8;
              *(_BYTE *)(*a3 + v11) = 0;
            }
            v8 = j[1];
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

