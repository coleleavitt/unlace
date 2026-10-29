/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100015F30
// Address: 0x0000000100015F30

//----- (0000000100015F30) ----------------------------------------------------
_QWORD *__fastcall sub_100015F30(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // x24
  __int64 v5; // x25
  bool v6; // w27
  __int64 v7; // x21
  unsigned __int64 v8; // x19
  unsigned __int64 v9; // x28
  unsigned __int64 v10; // x21
  __int64 v11; // x26
  __int64 v12; // x23
  __int64 v13; // x19
  _QWORD *v14; // x21
  __int64 v15; // x0
  bool v16; // w8
  __int64 v18; // [xsp+8h] [xbp-58h]
  __int64 _68; // [xsp+68h] [xbp+8h]

  sub_100011848(a1);
  v4 = *(_QWORD *)(a1 + 232);
  if ( v4 )
  {
    v5 = 0;
    v18 = *(_QWORD *)(a1 + 224);
    v6 = 1;
    while ( 1 )
    {
      v7 = v18 + 72 * v5;
      if ( !strncmp((const char *)(v7 + 8), "__PRELINK_DATA", 0x10u) )
      {
        v8 = *(int *)(*(_QWORD *)(a1 + 272) + 4 * v5);
        v9 = (unsigned int)(*(_DWORD *)(v7 + 64) + v8);
        if ( v8 < v9 )
          break;
      }
LABEL_3:
      v6 = ++v5 < v4;
      if ( v5 == v4 )
      {
        v13 = 0;
        goto LABEL_15;
      }
    }
    v10 = *(_QWORD *)(a1 + 256);
    v11 = 80 * v8;
    while ( 1 )
    {
      if ( v8 < v10 )
      {
        v12 = *(_QWORD *)(a1 + 248) + v11;
        if ( !strncmp((const char *)v12, "__data", 0x10u) )
          break;
      }
      ++v8;
      v11 += 80;
      if ( v9 == v8 )
        goto LABEL_3;
    }
    if ( v6 )
      v13 = *(unsigned int *)(v12 + 48);
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
LABEL_15:
  v14 = operator new(0x38u);
  if ( *(_QWORD *)(a1 + 120) == -1 )
  {
    if ( under_debugger != 1 )
      goto LABEL_21;
    while ( 1 )
    {
      __break(1u);
LABEL_21:
      interr(20005);
    }
  }
  v15 = *(_QWORD *)(a1 + 48);
  v16 = *(_DWORD *)(a1 + 176) == 12;
  *v14 = off_10009D6D0;
  v14[3] = v15;
  v14[4] = a2;
  v14[5] = v13;
  *((_BYTE *)v14 + 48) = v16;
  v14[1] = qlsize(v15);
  *((_DWORD *)v14 + 4) = 0;
  if ( ((_68 ^ (2 * _68)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return create_generic_linput(v14);
}
// 1000160B4: variable '_68' is possibly undefined
// 10009D6D0: using guessed type __int64 (__fastcall *off_10009D6D0[2])();
// 1000A590D: using guessed type char under_debugger;
