__int64 __fastcall sub_A870C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  size_t v9; // rax

  result = a1[287];
  if ( !result )
  {
    v7 = a1[198];
    if ( !v7 )
    {
      v8 = a1[2188];
      v9 = j__strlen("__make_integer_seq");
      v7 = sub_6F3470(v8, "__make_integer_seq", v9);
      a1[198] = v7;
    }
    result = sub_A7A460((__int64)a1, 2u, v7, a4, a5, a6);
    a1[287] = result;
  }
  return result;
}
