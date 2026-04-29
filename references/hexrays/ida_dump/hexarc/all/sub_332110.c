__int64 __fastcall sub_332110(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  _DWORD *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 i; // r13
  __int64 v9; // rsi
  unsigned int v10; // r13d
  __int64 v11; // rsi
  unsigned int v12; // eax

  result = *(unsigned int *)a2;
  v5 = (_DWORD *)a2;
  switch ( (_DWORD)result )
  {
    case 3:
      v11 = *(unsigned int *)(a2 + 8);
      result = *(_QWORD *)(*(_QWORD *)a1 + 376LL);
      if ( (__int64 (__fastcall *)(__int64, unsigned int))result != sub_73E40 )
      {
        result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))result)(a1, v11, a3);
        LODWORD(v11) = result;
      }
      *v5 = 3;
      v5[2] = v11;
      break;
    case 4:
      LODWORD(a2) = *(_DWORD *)(a2 + 8);
      result = *(_QWORD *)(*(_QWORD *)a1 + 376LL);
      v10 = WORD1(a2);
      if ( (__int64 (__fastcall *)(__int64, unsigned int))result == sub_73E40
        || (v12 = ((__int64 (__fastcall *)(__int64, _QWORD))result)(a1, v10),
            a2 = (unsigned int)v5[2],
            v10 = v12,
            result = *(_QWORD *)(*(_QWORD *)a1 + 376LL),
            *v5 == 4) )
      {
        a2 = (unsigned __int16)a2;
      }
      if ( (__int64 (__fastcall *)(__int64, unsigned int))result != sub_73E40 )
      {
        result = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD))result)(a1, a2, a3);
        LODWORD(a2) = result;
      }
      *v5 = 4;
      v5[2] = a2 | (v10 << 16);
      break;
    case 2:
      v6 = *(__int64 **)(a2 + 8);
      v7 = *v6;
      result = 3 * v6[1];
      for ( i = v7 + 8 * result; i != v7; result = sub_332110(a1, v9, a3) )
      {
        v9 = v7;
        v7 += 24;
      }
      break;
  }
  return result;
}
