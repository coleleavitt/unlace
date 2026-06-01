__int64 __fastcall sub_7261B0(__int64 a1, int a2, unsigned __int16 *a3, __int64 *a4, int a5, unsigned __int16 *a6)
{
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v9; // rax
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rcx
  unsigned int v13; // r11d
  unsigned __int16 *v14; // rax
  __int64 v15; // r9

  if ( *(_QWORD *)(a1 + 48) )
  {
    v6 = a5;
    v7 = *a4;
    v9 = *(unsigned __int16 *)(*a4 + 6 * v6 + 10);
    if ( (unsigned __int16)v9 > 1u )
    {
      v13 = *(_DWORD *)(v7 - 8);
      if ( (unsigned __int16)v9 < v13 )
      {
        v14 = (unsigned __int16 *)(v7 + v9);
        v15 = *v14;
        v11 = (unsigned __int16 *)((char *)v14 + v15 + 2);
        if ( (int)v14 + (int)v15 + 3 - (int)v7 < v13
          && (unsigned int)v14 + *v11 + (_DWORD)v15 + 4 - 1 - (unsigned int)v7 < v13 )
        {
          return sub_726070(a1 + 48, a2, a3, v11, a6);
        }
      }
    }
    else
    {
      v10 = (unsigned __int16 *)a4[v9 + 2];
      if ( v10 )
      {
        v11 = (unsigned __int16 *)((char *)v10 + *v10 + 2);
        return sub_726070(a1 + 48, a2, a3, v11, a6);
      }
    }
    sub_722BF0();
  }
  return 0;
}

