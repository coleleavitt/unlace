/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CE80
// Address: 0x000000000003CE80

//----- (000000000003CE80) ----------------------------------------------------
char __fastcall sub_3CE80(_QWORD *a1, int a2, const char *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // r13
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r13
  unsigned int v10; // eax
  int v11; // ecx
  const char *v12; // rdi
  __int64 v14; // [rsp+0h] [rbp-48h]
  unsigned __int64 v16; // [rsp+10h] [rbp-38h]

  v3 = a1[16];
  v4 = a1[17];
  v5 = a1[19];
  v6 = (_QWORD *)(v3 + 8 * (v5 / 0x38));
  if ( v4 == v3 )
    v7 = 0;
  else
    v7 = *v6 + 72 * (v5 % 0x38);
  v8 = a1[20] + v5;
  v14 = (__int64)(a1 + 15);
  v16 = v8 / 0x38;
  v9 = v8 % 0x38;
  while ( 1 )
  {
    if ( v4 == v3 )
    {
      if ( !v7 )
        return 0;
    }
    else if ( *(_QWORD *)(v3 + 8 * v16) + 72 * v9 == v7 )
    {
      return 0;
    }
    v10 = *(_DWORD *)(v7 + 20) & 0xFFFFFFF;
    if ( v10 == a2 )
    {
      if ( v10 > 0xB || (v11 = 2306, !_bittest(&v11, v10)) )
      {
        if ( !(_BYTE)under_debugger )
          interr(3295);
        BUG();
      }
      v12 = s1;
      if ( *(_QWORD *)(v7 + 32) )
        v12 = *(const char **)(v7 + 24);
      if ( !strcmp(v12, a3) )
        break;
    }
    v7 += 72;
    if ( v7 - *v6 == 4032 )
    {
      v7 = v6[1];
      ++v6;
    }
  }
  sub_3CFF0(v14, v6, v7);
  return 1;
}
// 158B40: using guessed type __int64 under_debugger;
