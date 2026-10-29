void __fastcall sub_AD71D0(_QWORD *a1, _QWORD *a2, char *a3, char *a4)
{
  char *v4; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  _BYTE *v9; // rdx
  unsigned __int64 v10; // [rsp+0h] [rbp-40h]

  if ( a4 != a3 )
  {
    v4 = a3;
    v7 = *a1;
    v10 = (unsigned __int64)&a3[8 * ((unsigned __int64)(a4 - a3 - 8) >> 3) + 8];
    while ( 1 )
    {
      v8 = *(_QWORD *)v4;
      v4 += 8;
      sub_EE3EC0(v8, v7, 0, *a2, 0, 0, (__int64)"\n", 1);
      if ( v4 == (char *)v10 )
        break;
      v7 = *a1;
      if ( a3 != v4 )
      {
        v9 = *(_BYTE **)(v7 + 32);
        if ( *(_BYTE **)(v7 + 24) == v9 )
        {
          sub_22581D0(*a1, ",", 1);
        }
        else
        {
          *v9 = 44;
          ++*(_QWORD *)(v7 + 32);
        }
        v7 = *a1;
      }
    }
  }
}

