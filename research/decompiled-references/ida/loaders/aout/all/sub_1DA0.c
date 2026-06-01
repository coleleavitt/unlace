__int64 __fastcall sub_1DA0(__int64 a1, _DWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rbx

  v6 = a4;
  if ( a4 == -1 )
    v6 = qlseek(a1, 0, 1);
  if ( a5 == -1 )
    a5 = qlsize(a1);
  v8 = a5 - v6;
  if ( ((v8 | v6) & 0x8000000000000000LL) != 0LL )
  {
    LODWORD(v11) = 0;
    goto LABEL_12;
  }
  v9 = (unsigned int)*a2;
  if ( *a2 && a3 && !is_mul_ok(a3, v9) || (result = 1, v8 < a3 * v9) )
  {
    v11 = v8 / a3;
LABEL_12:
    *a2 = v11;
    return 0;
  }
  return result;
}

