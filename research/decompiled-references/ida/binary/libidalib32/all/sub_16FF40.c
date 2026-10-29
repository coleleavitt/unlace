void __fastcall sub_16FF40(char *a1, char *a2)
{
  char *v2; // rbx
  unsigned __int16 v3; // di
  unsigned int v4; // ecx
  char *i; // rax
  unsigned int v6; // edx
  __int64 v7; // rdx

  if ( a2 - a1 <= 128 )
  {
    sub_16FE20(a1, a2);
  }
  else
  {
    v2 = a1 + 128;
    sub_16FE20(a1, a1 + 128);
    if ( a2 != a1 + 128 )
    {
      do
      {
        v3 = *((_WORD *)v2 + 2);
        v4 = *(_DWORD *)v2;
        for ( i = v2; ; *((_QWORD *)i + 1) = v7 )
        {
          v6 = *((_DWORD *)i - 2);
          if ( v4 >= v6 && (v6 < v4 || v3 >= *((_WORD *)i - 2)) )
            break;
          v7 = *((_QWORD *)i - 1);
          i -= 8;
        }
        v2 += 8;
        *(_DWORD *)i = v4;
        *((_WORD *)i + 2) = v3;
      }
      while ( a2 != v2 );
    }
  }
}

