/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1FCB0
// Address: 0x0001FCB0

//----- (0001FCB0) --------------------------------------------------------
int __fastcall sub_1FCB0(_DWORD *a1, __pid_t *a2, _BYTE *a3)
{
  int (__fastcall ***v5)(_DWORD, int); // r7
  int v6; // r5
  __pid_t v7; // r0
  int v8; // r3
  __pid_t v9; // r0
  _DWORD *v10; // r2
  int (__fastcall **v11)(_DWORD, int); // r0
  _DWORD *v12; // r1
  int v13; // r3
  _DWORD *v14; // r5
  _DWORD *v15; // r0
  int v16; // r5
  int (__fastcall **v17)(_DWORD, int); // r1
  int v18; // r3
  _DWORD **v20; // [sp+Ch] [bp-14h]
  int *v21; // [sp+10h] [bp-10h]
  _DWORD *v23; // [sp+1Ch] [bp-4h]

  if ( a3 )
    *a3 = 0;
  v21 = a1 + 232;
  v20 = (_DWORD **)(a1 + 231);
  v23 = a1 + 229;
  v5 = (int (__fastcall ***)(_DWORD, int))(a2 + 1);
  while ( 1 )
  {
    v6 = 0;
    v7 = sub_2781C((int)a1, a2 + 1, -1, 0);
    *a2 = v7;
    if ( v7 > 0 )
      goto LABEL_9;
    if ( sub_1EC58(a1, a2, a2 + 1) )
      break;
    v8 = a2[2];
    if ( !v8 )
      return v6;
    v9 = sub_2781C((int)a1, a2 + 1, -1, v8);
    *a2 = v9;
    if ( v9 < 1 )
      return v6;
LABEL_9:
    sub_1DAF0((int)a1, a3, a2);
    v10 = (_DWORD *)*v23;
    if ( *v23 )
    {
      v11 = (int (__fastcall **)(_DWORD, int))*a2;
      v12 = v23;
      do
      {
        v13 = v10[4];
        if ( v13 >= (int)v11 )
          v12 = v10;
        v14 = v10 + 1;
        if ( v13 >= (int)v11 )
          v14 = v10;
        v10 = (_DWORD *)*v14;
      }
      while ( *v14 );
      if ( v12 != v23 && (int)v11 >= v12[4] )
        return 1;
    }
    v15 = *v20;
    v16 = *v21;
    v17 = (int (__fastcall **)(_DWORD, int))*a2;
    if ( v16 * 4 )
    {
      v18 = 4 * *v21;
      while ( v17 != (int (__fastcall **)(_DWORD, int))*v15 )
      {
        v18 -= 4;
        ++v15;
        if ( !v18 )
          goto LABEL_25;
      }
    }
    if ( v15 == &(*v20)[v16] )
LABEL_25:
      sub_1E384((int)a1, v17, *v5);
    else
      ptrace(PTRACE_CONT, v17, 0, 0);
    a2[2] = 0;
  }
  sub_1DAF0((int)a1, a3, a2);
  return 1;
}
