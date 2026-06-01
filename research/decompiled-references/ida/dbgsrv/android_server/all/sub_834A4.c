/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_834A4
// Address: 0x00000000000834A4

//----- (00000000000834A4) ----------------------------------------------------
__int64 __fastcall sub_834A4(__int64 a1, unsigned __int8 *a2, char a3)
{
  __int64 result; // x0
  int v6; // w8
  __int64 v7; // x8
  unsigned __int64 v8; // x8
  __int64 v9; // x8
  unsigned __int64 v10; // x9
  unsigned __int8 v11[8]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v12; // [xsp+10h] [xbp-50h]
  __int64 v13; // [xsp+18h] [xbp-48h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_83124(a1, (__int64)a2, a3 & 1);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11[0] = 1;
        v12 = 0;
        v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        if ( v6 != 37 )
          break;
        result = sub_83124(a1, (__int64)v11, 1);
        if ( !v12 )
          longjmp((struct __jmp_buf_tag *)(a1 + 344), 86);
        v9 = *((_QWORD *)a2 + 1);
        if ( v11[0] | *a2 )
          v10 = v9 / (unsigned __int64)v12;
        else
          v10 = v9 / v12;
        *((_QWORD *)a2 + 1) = v9 - v10 * v12;
      }
      if ( v6 != 47 )
        break;
      result = sub_83124(a1, (__int64)v11, 1);
      if ( !v12 )
        longjmp((struct __jmp_buf_tag *)(a1 + 344), 86);
      v7 = *((_QWORD *)a2 + 1);
      if ( v11[0] | *a2 )
        v8 = v7 / (unsigned __int64)v12;
      else
        v8 = v7 / v12;
      *((_QWORD *)a2 + 1) = v8;
    }
    if ( v6 != 42 )
      break;
    result = sub_83124(a1, (__int64)v11, 1);
    *((_QWORD *)a2 + 1) *= v12;
  }
  return result;
}
