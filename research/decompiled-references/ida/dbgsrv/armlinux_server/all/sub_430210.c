/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430210
// Address: 0x0000000000430210

//----- (0000000000430210) ----------------------------------------------------
__int64 __fastcall sub_430210(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // x0
  __int64 v7; // x3
  __int64 result; // x0
  _BOOL4 v11; // w22
  unsigned int v12; // w22
  void (__fastcall *v13)(_QWORD *, unsigned __int64, _QWORD, __int64); // x4
  int v14; // w1
  bool v15; // zf
  char v16; // w22
  __int64 (__fastcall *v17)(_QWORD *, unsigned __int64, __int64, _QWORD); // x4
  void (__fastcall *v18)(_QWORD *, unsigned __int64, __int64, _QWORD); // x4
  void (__fastcall *v19)(_QWORD *, unsigned __int64, __int64, _QWORD); // x4

  v6 = sub_42ABF0(a3, a2);
  if ( !*(_QWORD *)(v6 + 8) )
  {
    if ( sub_428380(a1, &qword_4B2D48) )
    {
      *(_BYTE *)(a1 + 120) = 1;
      return 1;
    }
LABEL_20:
    v14 = *(_BYTE *)(a3 + 52) & 0xF;
    result = *(_BYTE *)(a3 + 52) & 0xD;
    v15 = v14 == 2 || (_DWORD)result == 13;
    if ( !v15 || *(unsigned __int8 *)(a3 + 92) > 2u )
      return result;
    v16 = *(_BYTE *)(a3 + 94);
    *(_QWORD *)(a3 + 80) &= ~1uLL;
    if ( v14 == 13 )
    {
      result = 2;
      *(_BYTE *)(a3 + 93) = 2;
    }
    else if ( (_DWORD)result != 13 )
    {
      result = *(_QWORD *)(a3 + 56);
      if ( (result & 1) == 0 )
      {
LABEL_29:
        result = v16 & 1;
        if ( (v16 & 1) == 0 )
        {
          result = *(unsigned __int8 *)(a1 + 121);
          if ( !*(_BYTE *)(a1 + 121)
            || (result = sub_428408(a1, a3), (_DWORD)result != 2)
            || (*(_BYTE *)(a3 + 94) = v16 | 1,
                (v19 = *(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, _QWORD))(a1 + 104)) != nullptr)
            && (v19(a2, a3, 2, 0), result = *(unsigned __int8 *)(a3 + 94), (result & 1) == 0) )
          {
            v17 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64, _QWORD))(a1 + 104);
            if ( v17 )
              return v17(a2, a3, 1, 0);
          }
        }
        return result;
      }
    }
    *(_BYTE *)(a3 + 94) = v16 | 1;
    v18 = *(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, _QWORD))(a1 + 104);
    if ( !v18 )
      return result;
    v18(a2, a3, 2, 0);
    v16 = *(_BYTE *)(a3 + 94);
    goto LABEL_29;
  }
  if ( !sub_428380(a1, *(_BYTE **)v6) )
    goto LABEL_20;
  *(_BYTE *)(a1 + 120) = 1;
  result = *(unsigned __int8 *)(v7 + 1);
  if ( (_DWORD)result != 116 && (_DWORD)result != 97 )
  {
    if ( (_DWORD)result != 120 )
      return result;
    v12 = 1;
  }
  else
  {
    v11 = (_DWORD)result != 120 && (_DWORD)result != 97;
    v12 = v11 + 1;
    if ( (_DWORD)result == 116 )
      *(_BYTE *)(a3 + 94) |= 1u;
  }
  v13 = *(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD, __int64))(a1 + 104);
  if ( v13 )
    v13(a2, a3, v12, 1);
  result = *(unsigned __int8 *)(a1 + 121);
  if ( *(_BYTE *)(a1 + 121) )
    return sub_42FE28((_QWORD *)a1, a3, v12);
  return result;
}
// 43025C: variable 'v7' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
