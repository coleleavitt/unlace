__int64 __fastcall sub_1E61BD0(_QWORD *a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  size_t v4; // rax
  __int64 v5; // rbp
  size_t v6; // rax
  __int64 v7; // rbp
  size_t v8; // rax
  __int64 v9; // rbp
  size_t v10; // rax

  if ( a2 == 1 )
  {
    result = a1[2168];
    if ( !result )
    {
      v7 = a1[30];
      v8 = j__strlen("_Nullable");
      result = sub_6F3470(v7 + 552, "_Nullable", v8);
      a1[2168] = result;
    }
  }
  else if ( a2 )
  {
    if ( a2 == 2 )
    {
      result = a1[2170];
      if ( !result )
      {
        v9 = a1[30];
        v10 = j__strlen("_Null_unspecified");
        result = sub_6F3470(v9 + 552, "_Null_unspecified", v10);
        a1[2170] = result;
      }
    }
    else
    {
      result = a1[2169];
      if ( !result )
      {
        v3 = a1[30];
        v4 = j__strlen("_Nullable_result");
        result = sub_6F3470(v3 + 552, "_Nullable_result", v4);
        a1[2169] = result;
      }
    }
  }
  else
  {
    result = a1[2167];
    if ( !result )
    {
      v5 = a1[30];
      v6 = j__strlen("_Nonnull");
      result = sub_6F3470(v5 + 552, "_Nonnull", v6);
      a1[2167] = result;
    }
  }
  return result;
}
