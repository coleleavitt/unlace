/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486A58
// Address: 0x0000000000486A58

//----- (0000000000486A58) ----------------------------------------------------
unsigned __int64 __fastcall sub_486A58(unsigned int a1, char *s)
{
  signed int v2; // w20
  char *v3; // x23
  unsigned __int64 StatusReg; // x21
  __int64 v5; // x19
  unsigned __int64 v6; // x22
  unsigned __int64 v7; // x24
  _BYTE *v8; // x25
  size_t v9; // x0
  size_t v10; // x26
  char *v12; // x0
  unsigned __int64 v13; // x27

  if ( a1 > 3 )
  {
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(481);
    __break(0x3E8u);
  }
  v2 = a1;
  v3 = s;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v5 = 24LL * (int)a1 + 32;
  v6 = StatusReg + 16;
  v7 = StatusReg + 16 + v5;
  v8 = *(_BYTE **)v7;
  if ( s )
  {
    if ( *s )
    {
      v9 = strlen(s);
      v10 = v9;
      if ( v9 )
      {
        v13 = v9 + 1;
        if ( v9 + 1 > *(_QWORD *)(v7 + 16) )
        {
          v8 = sub_491288(StatusReg + 16 + v5, v8, v13, 1u);
          *(_QWORD *)(v6 + v5) = v8;
        }
        *(_QWORD *)(v7 + 8) = v13;
        memmove(v8, v3, v10);
        *(_BYTE *)(*(_QWORD *)(v6 + v5) + v10) = 0;
        v3 = *(char **)(v6 + v5);
      }
      else
      {
        *(_QWORD *)(v7 + 8) = 0;
        v3 = v8;
      }
    }
    else
    {
      if ( *(_QWORD *)(v7 + 16) <= 1u )
      {
        v8 = sub_491288(StatusReg + 16 + v5, *(void **)(StatusReg + 16 + v5), 2u, 1u);
        *(_QWORD *)(v6 + v5) = v8;
      }
      *(_QWORD *)(v7 + 8) = 2;
      *v8 = aAutohide[8];
      *(_BYTE *)(*(_QWORD *)(v6 + v5) + 1LL) = 0;
      if ( *(_QWORD *)(v7 + 8) )
        v12 = *(char **)(v6 + v5);
      else
        v12 = &byte_522118;
      *v12 = 0;
      v3 = *(char **)(v6 + v5);
    }
  }
  else if ( v8 )
  {
    *(_QWORD *)(v7 + 8) = 0;
    j__free(v8);
    *(_QWORD *)(v6 + v5) = 0;
    *(_QWORD *)(v7 + 16) = 0;
  }
  *(_QWORD *)(StatusReg + 16 + 8LL * v2) = v3;
  return StatusReg + 16;
}
// 486A58: could not find valid save-restore pair for x21
// 486A58: could not find valid save-restore pair for x22
// 486A58: could not find valid save-restore pair for x23
// 486A58: could not find valid save-restore pair for x24
// 486A58: could not find valid save-restore pair for x25
// 486A58: could not find valid save-restore pair for x26
// 486A58: could not find valid save-restore pair for x27
// 522118: using guessed type char byte_522118;
// 52451C: using guessed type char under_debugger;
