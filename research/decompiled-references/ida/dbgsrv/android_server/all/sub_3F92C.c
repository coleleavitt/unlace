/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F92C
// Address: 0x000000000003F92C

//----- (000000000003F92C) ----------------------------------------------------
__int64 __fastcall sub_3F92C(_QWORD *a1, int *a2, _BYTE *a3)
{
  int *v6; // x22
  _QWORD *v7; // x23
  int v8; // w0
  int v9; // w0
  __int64 v10; // x9
  signed int v11; // w8
  _QWORD *v12; // x10
  __int64 v13; // x1
  __int64 v14; // x9
  __int64 v15; // x11
  _DWORD *v16; // x10

  if ( a3 )
    *a3 = 0;
  v6 = a2 + 1;
  v7 = a1 + 218;
  while ( 1 )
  {
    v8 = sub_4B230((__int64)a1, (int)a2 + 4, -1);
    *a2 = v8;
    if ( v8 > 0 )
      goto LABEL_9;
    if ( (sub_3E180((__int64)a1, a2, a2 + 1) & 1) != 0 )
      break;
    if ( !a2[2] )
      return 0;
    v9 = sub_4B230((__int64)a1, (int)a2 + 4, -1);
    *a2 = v9;
    if ( v9 < 1 )
      return 0;
LABEL_9:
    sub_3C870((__int64)a1, a3, (unsigned int *)a2);
    v10 = a1[218];
    if ( v10 )
    {
      v11 = *a2;
      v12 = a1 + 218;
      do
      {
        if ( *(_DWORD *)(v10 + 32) >= v11 )
          v12 = (_QWORD *)v10;
        v10 = *(_QWORD *)(v10 + 8LL * (*(_DWORD *)(v10 + 32) < v11));
      }
      while ( v10 );
      if ( v12 != v7 && v11 >= *((_DWORD *)v12 + 8) )
        return 1;
    }
    v13 = (unsigned int)*a2;
    v14 = 4LL * a1[221];
    if ( v14 )
    {
      v15 = 4LL * a1[221];
      v16 = (_DWORD *)a1[220];
      while ( (_DWORD)v13 != *v16 )
      {
        v15 -= 4;
        ++v16;
        if ( !v15 )
          goto LABEL_4;
      }
    }
    else
    {
      v16 = (_DWORD *)a1[220];
    }
    if ( v16 == (_DWORD *)(a1[220] + v14) )
    {
LABEL_4:
      sub_3D474((__int64)a1, v13, *v6);
      a2[2] = 0;
    }
    else
    {
      ptrace(PTRACE_CONT, v13, 0, 0);
      a2[2] = 0;
    }
  }
  sub_3C870((__int64)a1, a3, (unsigned int *)a2);
  return 1;
}
