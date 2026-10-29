__int64 __fastcall sub_22ABAB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rbp
  char v5; // al
  __int64 result; // rax
  __int64 v7; // rax
  bool v8; // zf

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v2 = a1 + 8;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v4 = v2 + 32;
    v5 = sub_2234B00(a2, v2 + 32);
    if ( !v5 )
      break;
    v3 = *(_QWORD *)(v2 + 16);
    if ( !v3 )
      goto LABEL_7;
LABEL_4:
    v2 = v3;
  }
  v3 = *(_QWORD *)(v2 + 24);
  if ( v3 )
    goto LABEL_4;
LABEL_7:
  if ( !v5 )
    goto LABEL_10;
LABEL_8:
  result = 0;
  if ( v2 != *(_QWORD *)(a1 + 24) )
  {
    v7 = std::_Rb_tree_decrement(v2);
    v4 = v7 + 32;
    v2 = v7;
LABEL_10:
    v8 = sub_2234B00(v4, a2) == 0;
    result = v2;
    if ( !v8 )
      return 0;
  }
  return result;
}
