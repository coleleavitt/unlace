/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B94C4
// Address: 0x00000000000B94C4

//----- (00000000000B94C4) ----------------------------------------------------
_QWORD *__fastcall sub_B94C4(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x8
  _QWORD *v4; // x20
  __int64 v5; // x21
  int v6; // w0
  _QWORD *result; // x0
  __int64 v8; // x20
  __int64 v9; // x2
  __int64 v10; // x19
  __int64 v11; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  __int64 v14; // x0
  int v15; // w1
  __int64 v16; // x20
  int v17; // w19

  v2 = a1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) >= 2u )
  {
    v4 = (_QWORD *)(a1 + 24);
LABEL_12:
    v6 = sub_C88E4(v4);
    if ( v6 && *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL) <= 1u )
      sub_B9374(v2, v6);
    if ( ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 32LL))(*(_QWORD *)(v2 + 16)) & 1) != 0 )
      return (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL) < 2u);
    else
      return nullptr;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 48);
    v4 = (_QWORD *)(a1 + 24);
    v5 = a1 + 136;
    while ( v3 - v5 + *(unsigned int *)(v2 + 56) == 0x8000 )
    {
      if ( v3 != v5
        && ((*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 16) + 16LL))(*(_QWORD *)(v2 + 16), v2 + 136)
          & 1) != 0 )
      {
        *(_QWORD *)(v2 + 48) = v5;
        *(_DWORD *)(v2 + 56) = 0x8000;
      }
      a1 = sub_C9850(v2 + 24, 4);
      if ( (a1 & 0x80000000) != 0 )
      {
        sub_B9374(v2, -(int)a1);
        goto LABEL_12;
      }
      v3 = *(_QWORD *)(v2 + 48);
      if ( v3 == v5 )
        goto LABEL_12;
    }
    if ( !under_debugger )
      a1 = (__int64)interr(3334);
    __break(1u);
    v8 = a1 + 136;
    v9 = *(_QWORD *)(a1 + 48) - (a1 + 136);
    if ( v9 + *(unsigned int *)(a1 + 56) == 0x8000 )
    {
      if ( !v9 )
        return (_QWORD *)(&dword_0 + 1);
      v10 = a1;
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16), v8) & 1) != 0 )
      {
        *(_QWORD *)(v10 + 48) = v8;
        *(_DWORD *)(v10 + 56) = 0x8000;
        return (_QWORD *)(&dword_0 + 1);
      }
      return nullptr;
    }
    else
    {
      if ( !under_debugger )
        a1 = (__int64)interr(3334);
      __break(1u);
      *(_QWORD *)(a1 + 24) = a2;
      v11 = a1 + 24;
      *(_DWORD *)(a1 + 32) = v9;
      if ( (_DWORD)v9 )
      {
        v12 = a1;
        v13 = a1 + 136;
        while ( 1 )
        {
          while ( 1 )
          {
            v14 = sub_C9850(v11, 0);
            if ( (v14 & 0x80000000) != 0 )
            {
              sub_B9374(v12, -(int)v14);
              return nullptr;
            }
            if ( !*(_DWORD *)(v12 + 56) )
              break;
            if ( !*(_DWORD *)(v12 + 32) )
              return (_QWORD *)(&dword_0 + 1);
          }
          if ( *(_QWORD *)(v12 + 48) - v13 != 0x8000 )
            break;
          if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v12 + 16) + 16LL))(
                  *(_QWORD *)(v12 + 16),
                  v13,
                  0x8000)
              & 1) == 0 )
            return nullptr;
          *(_QWORD *)(v12 + 48) = v13;
          *(_DWORD *)(v12 + 56) = 0x8000;
          if ( !*(_DWORD *)(v12 + 32) )
            return (_QWORD *)(&dword_0 + 1);
        }
        if ( !under_debugger )
          v14 = (__int64)interr(3334);
        __break(1u);
        v16 = v14;
        v17 = v15;
        result = operator new(0x8090u);
        result[1] = *(_QWORD *)(v16 + 8);
        result[2] = v16;
        *result = &off_1601D8;
        *((_DWORD *)result + 8226) = v17;
      }
      else
      {
        return (_QWORD *)(&dword_0 + 1);
      }
    }
  }
  return result;
}
// B9674: variable 'a2' is possibly undefined
// B9678: variable 'v9' is possibly undefined
// B9740: variable 'v15' is possibly undefined
// 0: using guessed type int dword_0;
// 1601D8: using guessed type __int64 (__fastcall *off_1601D8)();
// 168DF0: using guessed type char under_debugger;
