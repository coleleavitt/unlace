_QWORD *__fastcall sub_9D02B0(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  char v5; // r9
  unsigned __int64 v6; // rcx
  _QWORD *result; // rax
  __int64 v8; // rax

  v2 = *(_QWORD **)(a1 + 16);
  if ( !v2 )
  {
    v2 = (_QWORD *)(a1 + 8);
    goto LABEL_12;
  }
  v3 = *a2;
  while ( 1 )
  {
    v6 = v2[4];
    if ( v6 <= v3 )
      break;
    v4 = (_QWORD *)v2[2];
    v5 = 1;
    if ( !v4 )
      goto LABEL_7;
LABEL_4:
    v2 = v4;
  }
  v4 = (_QWORD *)v2[3];
  v5 = 0;
  if ( v4 )
    goto LABEL_4;
LABEL_7:
  if ( !v5 )
  {
LABEL_8:
    result = v2;
    if ( v3 > v6 )
      return nullptr;
    return result;
  }
LABEL_12:
  result = nullptr;
  if ( *(_QWORD **)(a1 + 24) != v2 )
  {
    v8 = std::_Rb_tree_decrement();
    v3 = *a2;
    v6 = *(_QWORD *)(v8 + 32);
    v2 = (_QWORD *)v8;
    goto LABEL_8;
  }
  return result;
}

