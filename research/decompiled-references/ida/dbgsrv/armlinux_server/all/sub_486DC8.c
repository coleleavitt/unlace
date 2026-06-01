/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486DC8
// Address: 0x0000000000486DC8

//----- (0000000000486DC8) ----------------------------------------------------
__int64 __fastcall sub_486DC8(char *s, int a2)
{
  unsigned __int64 StatusReg; // x19
  void *v5; // x21
  unsigned __int64 v6; // x24
  size_t v7; // x0
  size_t v8; // x25
  unsigned __int64 v9; // x20
  __int64 v10; // x26
  __int64 v11; // x25
  const char *v12; // x0
  const char *v13; // x21
  size_t v14; // x0
  __int64 v15; // x20
  size_t v16; // x25
  size_t v17; // x24
  __int64 v18; // x20
  _BYTE *v19; // x4
  size_t v21; // x26
  __int64 v22; // x20

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v5 = *(void **)(StatusReg + 216);
  v6 = *(_QWORD *)(StatusReg + 232);
  if ( s && (v7 = strlen(s), (v8 = v7) != 0) )
  {
    v21 = v7 + 1;
    if ( v7 + 1 > v6 )
    {
      v5 = sub_491288(StatusReg + 216, v5, v7 + 1, 1u);
      *(_QWORD *)(StatusReg + 216) = v5;
    }
    *(_QWORD *)(StatusReg + 224) = v21;
    memmove(v5, s, v8);
    *(_BYTE *)(*(_QWORD *)(StatusReg + 216) + v8) = 0;
    v5 = *(void **)(StatusReg + 216);
    v22 = *(_QWORD *)(StatusReg + 224);
    v6 = *(_QWORD *)(StatusReg + 232);
    if ( v22 )
    {
      v11 = v22 - 1;
      v10 = v22 + 1;
      v9 = v22 + 2;
    }
    else
    {
      v9 = 3;
      v10 = 2;
      v11 = 0;
    }
  }
  else
  {
    v9 = 3;
    v10 = 2;
    v11 = 0;
    *(_QWORD *)(StatusReg + 224) = 0;
  }
  if ( v9 > v6 )
  {
    v5 = sub_491288(StatusReg + 216, v5, v9, 1u);
    *(_QWORD *)(StatusReg + 216) = v5;
  }
  *(_QWORD *)(StatusReg + 224) = v9;
  *((_BYTE *)v5 + v10) = 0;
  *(_WORD *)(*(_QWORD *)(StatusReg + 216) + v11) = *(_WORD *)": ";
  v12 = sub_493840(a2);
  v13 = v12;
  if ( v12 )
  {
    v14 = strlen(v12);
    v15 = *(_QWORD *)(StatusReg + 224);
    v16 = v14;
    if ( v15 )
    {
      v18 = v15 - 1;
      v17 = v14 + v18;
    }
    else
    {
      v17 = v14;
      v18 = 0;
    }
    v19 = *(_BYTE **)(StatusReg + 216);
    if ( v17 + 1 > *(_QWORD *)(StatusReg + 232) )
    {
      v19 = sub_491288(StatusReg + 216, *(void **)(StatusReg + 216), v17 + 1, 1u);
      *(_QWORD *)(StatusReg + 216) = v19;
    }
    *(_QWORD *)(StatusReg + 224) = v17 + 1;
    v19[v17] = 0;
    memmove((void *)(*(_QWORD *)(StatusReg + 216) + v18), v13, v16);
  }
  return *(_QWORD *)(StatusReg + 216);
}
