/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F1F0
// Address: 0x000000000003F1F0

//----- (000000000003F1F0) ----------------------------------------------------
char __fastcall sub_3F1F0(_QWORD *a1, unsigned int *a2, _BYTE *a3)
{
  unsigned int *v6; // r12
  _QWORD *v7; // r13
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  _DWORD *v17; // rdx

  if ( a3 )
    *a3 = 0;
  v6 = a2 + 1;
  v7 = a1 + 130;
  while ( 1 )
  {
    v8 = sub_4C880((__int64)a1, a2 + 1, 0xFFFFFFFF, 0);
    *a2 = v8;
    if ( v8 > 0 )
      goto LABEL_9;
    if ( (unsigned __int8)sub_3D630((__int64)a1, a2, a2 + 1) )
      break;
    v9 = a2[2];
    if ( !v9 )
      return 0;
    v10 = sub_4C880((__int64)a1, a2 + 1, 0xFFFFFFFF, v9);
    *a2 = v10;
    if ( v10 <= 0 )
      return 0;
LABEL_9:
    sub_3BCF0((__int64)a1, a3, a2);
    v11 = a1[130];
    if ( v11 )
    {
      v12 = *a2;
      v13 = a1 + 130;
      do
      {
        if ( *(_DWORD *)(v11 + 32) >= v12 )
          v13 = (_QWORD *)v11;
        v11 = *(_QWORD *)(v11 + 8LL * (*(_DWORD *)(v11 + 32) < v12));
      }
      while ( v11 );
      if ( v13 != v7 && v12 >= *((_DWORD *)v13 + 8) )
        return 1;
    }
    v14 = a1[133];
    v15 = 4 * v14;
    v16 = *a2;
    v17 = (_DWORD *)a1[132];
    if ( 4 * v14 )
    {
      v17 = (_DWORD *)a1[132];
      while ( (_DWORD)v16 != *v17 )
      {
        ++v17;
        v15 -= 4;
        if ( !v15 )
          goto LABEL_4;
      }
    }
    if ( v17 == (_DWORD *)(a1[132] + 4 * v14) )
    {
LABEL_4:
      sub_3C8D0(a1, v16, *v6);
      a2[2] = 0;
    }
    else
    {
      ptrace(PTRACE_CONT, v16, 0, 0);
      a2[2] = 0;
    }
  }
  sub_3BCF0((__int64)a1, a3, a2);
  return 1;
}
