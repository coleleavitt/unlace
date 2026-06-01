__int64 __fastcall sub_A66690(_QWORD *a1)
{
  __int64 result; // rax
  size_t v2; // rbp
  unsigned __int64 v3; // rax

  result = a1[184];
  if ( !result )
  {
    v2 = j__strlen("__builtin_ms_va_list");
    v3 = sub_A4C4B0((__int64)a1, a1[2331]);
    result = sub_A66330(a1, v3, "__builtin_ms_va_list", v2);
    a1[184] = result;
  }
  return result;
}

