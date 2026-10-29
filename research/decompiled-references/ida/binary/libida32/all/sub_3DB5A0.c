void __fastcall sub_3DB5A0(char *a1, char *a2)
{
  char *v3; // rbx
  unsigned int v4; // edx
  unsigned int v5; // esi
  char v6; // cl
  unsigned __int8 v7; // di
  char *i; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+4h] [rbp-24h]
  int v11; // [rsp+Ch] [rbp-1Ch]

  if ( a2 - a1 <= 192 )
  {
    sub_3DB440(a1, a2);
  }
  else
  {
    v3 = a1 + 192;
    sub_3DB440(a1, a1 + 192);
    if ( a2 != a1 + 192 )
    {
      do
      {
        v5 = *(_DWORD *)v3;
        v6 = v3[4];
        v7 = v3[8];
        v10 = *(_QWORD *)v3;
        v11 = *((_DWORD *)v3 + 2);
        for ( i = v3; ; i[20] = i[8] )
        {
          if ( v6 >= *(i - 8) )
          {
            if ( v6 > *(i - 8) )
              break;
            v4 = *((_DWORD *)i - 3);
            if ( v5 >= v4 && (v4 < v5 || v7 >= (unsigned __int8)*(i - 4)) )
              break;
          }
          v9 = *(_QWORD *)(i - 12);
          i -= 12;
          *(_QWORD *)(i + 12) = v9;
        }
        v3 += 12;
        *(_QWORD *)i = v10;
        i[8] = v11;
      }
      while ( a2 != v3 );
    }
  }
}

