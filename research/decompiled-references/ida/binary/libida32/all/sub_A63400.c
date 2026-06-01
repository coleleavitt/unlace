__int64 __fastcall sub_A63400(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  size_t v9; // rax

  result = a1[288];
  if ( !result )
  {
    v7 = a1[199];
    if ( !v7 )
    {
      v8 = a1[2188];
      v9 = j__strlen("__type_pack_element");
      v7 = sub_6D2E30(v8, "__type_pack_element", v9);
      a1[199] = v7;
    }
    result = sub_A56720((__int64)a1, 3u, v7, a4, a5, a6);
    a1[288] = result;
  }
  return result;
}

