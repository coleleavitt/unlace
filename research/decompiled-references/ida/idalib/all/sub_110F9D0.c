__int64 __fastcall sub_110F9D0(__int64 *a1, void ***a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  unsigned __int64 i; // rbx
  unsigned __int64 v6; // r15
  void **v7; // rcx
  void **v8; // rsi
  unsigned __int64 v9; // rax
  void **v11; // rax
  void **v12; // [rsp+8h] [rbp-60h]
  void **v13; // [rsp+10h] [rbp-58h]
  void **v14; // [rsp+18h] [rbp-50h]
  __int64 v15[8]; // [rsp+28h] [rbp-40h] BYREF

  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
    v3 = ((char *)a2[1] - (char *)*a2) >> 5;
  if ( (_DWORD)v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    for ( i = 0; ; ++i )
    {
      v6 = i + 1;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 32))(a1, (unsigned int)i, v15) )
      {
        v7 = a2[1];
        v8 = *a2;
        v9 = ((char *)v7 - (char *)*a2) >> 5;
        if ( v9 <= i )
        {
          if ( v6 > v9 )
          {
            sub_110F7B0(a2, v6 - v9);
            v8 = *a2;
          }
          else if ( v6 < v9 )
          {
            v11 = &v8[4 * v6];
            v14 = v11;
            if ( v7 != v11 )
            {
              do
              {
                while ( *v11 != v11 + 2 )
                {
                  v13 = v11;
                  v12 = v7;
                  operator delete(*v11);
                  v7 = v12;
                  v11 = v13 + 4;
                  if ( v12 == v13 + 4 )
                    goto LABEL_16;
                }
                v11 += 4;
              }
              while ( v7 != v11 );
LABEL_16:
              v8 = *a2;
              a2[1] = v14;
            }
          }
        }
        sub_110A970(a1, (__int64)&v8[4 * i]);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 40))(a1, v15[0]);
        if ( v4 == i )
          return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
      }
      else if ( v4 == i )
      {
        return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
}
