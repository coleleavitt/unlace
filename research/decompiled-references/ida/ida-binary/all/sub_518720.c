__int64 __fastcall sub_518720(__int64 a1, _DWORD *a2, double a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  unsigned int v6; // eax
  _DWORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rdx

  if ( *(_QWORD *)(a1 + 8) != 4 )
  {
    v5 = 0;
    v6 = 0;
    return (v5 << 32) | v6;
  }
  v8 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 == 1 )
  {
    a5 = *((_QWORD *)v8 + 1);
    v5 = (unsigned int)a5;
    if ( v8[4] == 1 )
    {
      v9 = *((_QWORD *)v8 + 3);
      v6 = v9;
      if ( v8[8] == 1 )
      {
        v10 = *((_QWORD *)v8 + 5);
        a1 = (unsigned int)v10;
        if ( v8[12] == 1 )
        {
          v11 = *((_QWORD *)v8 + 7);
          if ( !(_DWORD)a5 && !(_DWORD)v9 && (_DWORD)v10 == -1 && (_DWORD)v11 == -1 )
          {
            v6 = (int)((double)(a2[2] + 1 - *a2) / 10.0);
            v5 = (unsigned int)(int)((double)(a2[3] + 1 - a2[1]) / 10.0);
          }
          return (v5 << 32) | v6;
        }
      }
    }
  }
  sub_518700(a3, a1, (__int64)a2, (__int64)v8, a5);
  return sub_518850();
}
