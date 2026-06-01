_QWORD *__fastcall sub_1670F00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int16 v9; // dx
  _QWORD *v10; // rdx
  __int16 v11; // cx
  __int16 v12; // cx
  __int16 v13; // dx
  __int16 v14; // dx
  __int16 v15; // dx
  __int16 v16; // cx
  __int16 v17; // cx

  result = a1;
  v6 = a2 - (_QWORD)a1;
  v7 = (a2 - (__int64)a1) >> 5;
  v8 = (a2 - (__int64)a1) >> 3;
  if ( v6 >> 5 <= 0 )
  {
LABEL_10:
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        if ( v8 != 1 )
          return (_QWORD *)a2;
LABEL_23:
        v15 = *(_WORD *)(*result + 36LL);
        if ( v15 != 151 && v15 != 266 && v15 != 71 && (unsigned __int16)(v15 - 154) > 1u )
          return (_QWORD *)a2;
        return result;
      }
      v13 = *(_WORD *)(*result + 36LL);
      if ( v13 == 151 || v13 == 266 || v13 == 71 || (unsigned __int16)(v13 - 154) <= 1u )
        return result;
      ++result;
    }
    v14 = *(_WORD *)(*result + 36LL);
    if ( v14 == 151 || v14 == 266 || v14 == 71 || (unsigned __int16)(v14 - 154) <= 1u )
      return result;
    ++result;
    goto LABEL_23;
  }
  v9 = *(_WORD *)(*result + 36LL);
  LOBYTE(v8) = v9 == 71;
  LOBYTE(a5) = v9 == 266;
  LODWORD(v8) = a5 | v8;
  if ( !((v9 == 151) | (unsigned __int8)v8) && (unsigned __int16)(v9 - 154) > 1u )
  {
    v10 = &result[4 * v7];
    while ( 1 )
    {
      v11 = *(_WORD *)(result[1] + 36LL);
      LOBYTE(v8) = v11 == 266;
      LOBYTE(a5) = v11 == 71;
      LODWORD(v8) = a5 | v8;
      if ( (v11 == 151) | (unsigned __int8)v8 || (unsigned __int16)(v11 - 154) <= 1u )
        return ++result;
      v12 = *(_WORD *)(result[2] + 36LL);
      LOBYTE(v8) = v12 == 266;
      LOBYTE(a5) = v12 == 71;
      LODWORD(v8) = a5 | v8;
      if ( (v12 == 151) | (unsigned __int8)v8 || (unsigned __int16)(v12 - 154) <= 1u )
      {
        result += 2;
        return result;
      }
      v16 = *(_WORD *)(result[3] + 36LL);
      LOBYTE(v8) = v16 == 266;
      LOBYTE(a5) = v16 == 71;
      LODWORD(v8) = a5 | v8;
      if ( (v16 == 151) | (unsigned __int8)v8 || (unsigned __int16)(v16 - 154) <= 1u )
        break;
      result += 4;
      if ( v10 == result )
      {
        v8 = (a2 - (__int64)result) >> 3;
        goto LABEL_10;
      }
      v17 = *(_WORD *)(*result + 36LL);
      LOBYTE(v8) = v17 == 266;
      LOBYTE(a5) = v17 == 71;
      LODWORD(v8) = a5 | v8;
      if ( (v17 == 151) | (unsigned __int8)v8 || (unsigned __int16)(v17 - 154) <= 1u )
        return result;
    }
    result += 3;
  }
  return result;
}
