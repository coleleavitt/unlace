unsigned __int64 __fastcall sub_176860(__int64 *a1, int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int16 v3; // ax
  __int64 v4; // rdi
  __int64 v6; // r10
  unsigned int v7; // ecx
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // edx
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  bool v14; // zf

  if ( *((_BYTE *)a1 + 28) && (v2 = a1[1]) != 0 )
  {
    v6 = *a1;
    if ( *((_DWORD *)a1 + 6) <= a2 )
    {
      v4 = (unsigned int)(v2 - 1);
      v12 = *(_QWORD *)(v6 + 24 * v2 - 16);
      v13 = v12 - 1;
      v14 = v12 == 0;
      v3 = 0;
      if ( !v14 )
        v3 = v13;
    }
    else
    {
      v3 = -1;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v4 = 0xFFFFFFFFLL;
      do
      {
        v10 = *(_QWORD *)(v6 + 24 * v9 + 8);
        if ( v10 )
        {
          v11 = v8 + v10 - 1;
          if ( a2 < v8 || a2 >= v11 )
          {
            v8 = v11;
          }
          else
          {
            v4 = v7;
            v3 = a2 - v8;
            v8 = v11;
          }
        }
        v9 = (int)++v7;
      }
      while ( (int)v7 < v2 );
    }
  }
  else
  {
    v3 = -1;
    v4 = 0xFFFFFFFFLL;
  }
  return (v4 << 48) | ((unsigned __int64)v3 << 32) | 0xFFFFFFFF;
}
