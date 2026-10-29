/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470CF0
// Address: 0x0000000000470CF0

//----- (0000000000470CF0) ----------------------------------------------------
__int64 __fastcall sub_470CF0(__int64 a1, __int64 a2)
{
  unsigned int v4; // w0
  int v5; // w0
  int v6; // w1
  __int64 result; // x0
  unsigned __int8 *v10; // x3
  unsigned __int8 *v11; // x21
  unsigned __int8 *v12; // x1
  size_t v14; // x19
  unsigned __int64 v15; // x23
  void *v16; // x0

  v4 = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
  sub_482FB0(a1, v4);
  *(_DWORD *)a1 = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
  *(_DWORD *)(a1 + 4) = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
  *(_QWORD *)(a1 + 8) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
  v5 = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a1 + 20);
  *(_BYTE *)(a1 + 16) = v5 != 0;
  result = v6 & 0xFFFFFFF;
  if ( (_DWORD)result == 5 )
  {
    *(_QWORD *)(a1 + 24) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
    result = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
    *(_QWORD *)(a1 + 32) = result;
    return result;
  }
  if ( (unsigned int)result <= 5 )
  {
    if ( (_DWORD)result == 2 )
      goto LABEL_10;
    if ( (unsigned int)result <= 2 )
    {
      if ( (_DWORD)result == 1 )
        goto LABEL_14;
      return result;
    }
    if ( (_DWORD)result != 3 )
    {
LABEL_10:
      result = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
      if ( (((*(_DWORD *)(a1 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
      {
        result = (unsigned __int8)under_debugger;
        if ( !under_debugger )
          sub_492270(3296);
        goto LABEL_12;
      }
      *(_DWORD *)(a1 + 24) = result;
      return result;
    }
LABEL_23:
    v11 = *(unsigned __int8 **)a2;
    v10 = *(unsigned __int8 **)(a2 + 8);
    if ( (unsigned __int64)v10 > *(_QWORD *)a2 )
    {
      v12 = v11 + 1;
      if ( !*v11 )
      {
LABEL_32:
        *(_QWORD *)a2 = v12;
        result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (_DWORD)result != 3 )
        {
          result = (unsigned int)(result - 9);
          if ( (unsigned int)result > 1 )
            goto LABEL_34;
        }
        if ( v11 )
        {
          result = strlen((const char *)v11);
          v14 = result;
          if ( result )
          {
            v15 = result + 1;
            v16 = *(void **)(a1 + 24);
            if ( v15 > *(_QWORD *)(a1 + 40) )
            {
              v16 = sub_491288(a1 + 24, *(void **)(a1 + 24), v15, 1u);
              *(_QWORD *)(a1 + 24) = v16;
            }
            *(_QWORD *)(a1 + 32) = v15;
            memmove(v16, v11, v14);
            result = *(_QWORD *)(a1 + 24);
            *(_BYTE *)(result + v14) = 0;
            return result;
          }
        }
        goto LABEL_30;
      }
      while ( v10 != v12 )
      {
        if ( !*v12++ )
          goto LABEL_32;
      }
    }
    if ( (_DWORD)result != 3 )
    {
      result = (unsigned int)(result - 9);
      if ( (unsigned int)result > 1 )
      {
LABEL_34:
        result = (unsigned __int8)under_debugger;
        if ( !under_debugger )
          sub_492270(3297);
        goto LABEL_12;
      }
    }
LABEL_30:
    *(_QWORD *)(a1 + 32) = 0;
    return result;
  }
  if ( (unsigned int)result > 0xA )
  {
    if ( (_DWORD)result == 11 )
      goto LABEL_14;
    return result;
  }
  if ( (unsigned int)result >= 9 )
    goto LABEL_23;
  if ( (_DWORD)result == 7 )
    return (__int64)sub_470BE0(a1 + 24, a2);
  while ( (_DWORD)result == 8 )
  {
LABEL_14:
    if ( (_DWORD)result == 1 || (_DWORD)result == 11 || (_DWORD)result == 8 )
      return sub_4707A8(a1 + 24, (unsigned __int8 **)a2);
    result = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(3295);
LABEL_12:
    __break(0x3E8u);
  }
  return result;
}
// 470DBC: conditional instruction was optimized away because w0.4==4
// 52451C: using guessed type char under_debugger;
