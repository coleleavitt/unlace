/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140038670
// Address: 0x0000000140038670

//----- (0000000140038670) ----------------------------------------------------
__int64 __fastcall sub_140038670(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v6; // rsi
  char v7; // cl
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  char v10; // cl
  char v11; // cl
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, __int64 *); // rax
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 624);
  switch ( *(_WORD *)(v2 + 24) )
  {
    case 2:
      if ( !*(_QWORD *)(a1 + 160) && !*(_QWORD *)(a1 + 168) )
      {
        *(_QWORD *)(a2 + 8) = 0;
        *(_BYTE *)a2 = 1;
        return sub_140039590((_JBTYPE *)a1);
      }
LABEL_19:
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(a1 + 160);
      if ( v12 )
      {
        result = v12(a1, *(_QWORD *)(a1 + 216), v2, &v14);
        if ( !(_DWORD)result )
        {
          *(_QWORD *)(a2 + 8) = v14;
          *(_BYTE *)a2 = 0;
          return sub_140039590((_JBTYPE *)a1);
        }
        if ( (_DWORD)result != 34 )
LABEL_28:
          sub_1400395F0((_JBTYPE *)a1);
      }
      else
      {
        v13 = *(__int64 (__fastcall **)(__int64))(a1 + 168);
        if ( !v13 )
          goto LABEL_28;
        *(_BYTE *)(a1 + 636) = 0;
        *(_DWORD *)(a1 + 640) = 0;
        result = v13(a1);
        if ( (_DWORD)result )
          goto LABEL_28;
      }
      *(_BYTE *)(a1 + 632) = 1;
      *(_QWORD *)(a2 + 8) = 0;
      *(_BYTE *)a2 = 1;
      return result;
    case 3:
    case 5:
      v11 = *(_BYTE *)(v2 + 40);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v2 + 32);
      *(_BYTE *)a2 = v11;
      return sub_140039590((_JBTYPE *)a1);
    case 8:
      v10 = *(_BYTE *)(v2 + 40);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v2 + 48);
      *(_BYTE *)a2 = v10;
      return sub_140039590((_JBTYPE *)a1);
  }
  if ( *(_WORD *)(v2 + 24) != 40 )
    goto LABEL_19;
  if ( (int)++*(_DWORD *)(a1 + 360) >= 1024 )
    longjmp((_JBTYPE *)(a1 + 368), 54);
  LOBYTE(v2) = 1;
  sub_140039610((_JBTYPE *)a1, a2, v2);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 624) + 24LL) != 41 )
    goto LABEL_28;
  result = sub_140039590((_JBTYPE *)a1);
  if ( *(_BYTE *)(a1 + 632) )
  {
    v6 = *(_QWORD *)(a1 + 636);
    *(_BYTE *)(a1 + 632) = 0;
    sub_1400388C0((_JBTYPE *)a1, a2, 0);
    *(_BYTE *)a2 = v6;
    v7 = 8 * (8 - BYTE4(v6));
    result = 0xFFFFFFFFFFFFFFFFuLL >> v7;
    v8 = 0x8000000000000000uLL >> v7;
    v9 = *(_QWORD *)(a2 + 8) & (0xFFFFFFFFFFFFFFFFuLL >> v7);
    *(_QWORD *)(a2 + 8) = v9;
    if ( !(_BYTE)v6 && (v9 & v8) != 0 )
    {
      result = v8 | v9 | ~result;
      *(_QWORD *)(a2 + 8) = result;
    }
    *(_QWORD *)(a1 + 636) = v6;
  }
  --*(_DWORD *)(a1 + 360);
  return result;
}
