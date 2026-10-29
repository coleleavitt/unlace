__int64 __fastcall sub_A86FC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  size_t v9; // rax

  result = a1[285];
  if ( !result )
  {
    v7 = a1[196];
    if ( !v7 )
    {
      v8 = a1[2188];
      v9 = j__strlen("__builtin_common_type");
      v7 = sub_6F3470(v8, "__builtin_common_type", v9);
      a1[196] = v7;
    }
    result = sub_A7A460((__int64)a1, 0, v7, a4, a5, a6);
    a1[285] = result;
  }
  return result;
}
