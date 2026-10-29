/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017000
// Address: 0x0000000100017000

//----- (0000000100017000) ----------------------------------------------------
_QWORD *__fastcall sub_100017000(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r14
  bool v4; // al
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r12
  _QWORD *v14; // r15
  __int64 v15; // rdi
  bool v16; // zf
  unsigned __int64 v18; // [rsp+8h] [rbp-58h]
  __int64 v19; // [rsp+10h] [rbp-50h]
  __int64 v20; // [rsp+18h] [rbp-48h]
  bool v21; // [rsp+37h] [rbp-29h]

  v2 = a2;
  v3 = a1;
  sub_100012510((__int64)a1);
  v18 = a1[29];
  if ( v18 )
  {
    v20 = a1[28];
    v4 = 1;
    v5 = 0;
    while ( 1 )
    {
      v21 = v4;
      v19 = v5;
      v6 = 9 * v5;
      if ( !strncmp((const char *)(v20 + 72 * v5 + 8), "__PRELINK_DATA", 0x10u) )
      {
        v7 = v20 + 8 * v6;
        v8 = *(int *)(a1[34] + 4 * v19);
        v9 = (unsigned int)(v8 + *(_DWORD *)(v7 + 64));
        if ( v8 < v9 )
          break;
      }
LABEL_3:
      v5 = v19 + 1;
      v4 = v19 + 1 < v18;
      if ( v19 + 1 == v18 )
      {
        v2 = a2;
        v3 = a1;
        goto LABEL_14;
      }
    }
    v10 = a1[32];
    v11 = 80 * v8;
    while ( 1 )
    {
      if ( v8 < v10 )
      {
        v12 = a1[31];
        if ( !strncmp((const char *)(v12 + v11), "__data", 0x10u) )
          break;
      }
      ++v8;
      v11 += 80;
      if ( v9 == v8 )
        goto LABEL_3;
    }
    v13 = 0;
    if ( v21 )
      v13 = *(unsigned int *)(v12 + v11 + 48);
    v2 = a2;
    v3 = a1;
  }
  else
  {
LABEL_14:
    v13 = 0;
  }
  v14 = operator new(0x38u);
  if ( v3[15] == -1 )
  {
    if ( under_debugger != 1 )
      interr(0x4E25u);
    BUG();
  }
  v15 = v3[6];
  v16 = *((_DWORD *)v3 + 44) == 12;
  *v14 = off_1000A7F40;
  v14[3] = v15;
  v14[4] = v2;
  v14[5] = v13;
  *((_BYTE *)v14 + 48) = v16;
  v14[1] = qlsize(v15);
  *((_DWORD *)v14 + 4) = 0;
  return create_generic_linput((__int64)v14);
}
// 1000A7F40: using guessed type __int64 (__fastcall *off_1000A7F40[3])();
// 1000AE23D: using guessed type char under_debugger;
