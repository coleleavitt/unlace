_QWORD *__fastcall sub_3E160(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rax
  char v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v8; // rax

  v2 = *(_QWORD **)(a1 + 16);
  if ( !v2 )
  {
    v2 = (_QWORD *)(a1 + 8);
    goto LABEL_15;
  }
  v3 = *a2;
  while ( 1 )
  {
    v6 = v2[4];
    if ( v6 >= v3 && (v3 != v6 || a2[1] < v2[5]) )
      break;
    v4 = (_QWORD *)v2[3];
    v5 = 0;
    if ( !v4 )
      goto LABEL_9;
LABEL_5:
    v2 = v4;
  }
  v4 = (_QWORD *)v2[2];
  v5 = 1;
  if ( v4 )
    goto LABEL_5;
LABEL_9:
  if ( v5 )
  {
LABEL_15:
    if ( v2 != *(_QWORD **)(a1 + 24) )
    {
      v8 = std::_Rb_tree_decrement();
      v3 = *a2;
      v6 = *(_QWORD *)(v8 + 32);
      v2 = (_QWORD *)v8;
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  if ( v3 < v6 || v6 == v3 && v2[5] >= a2[1] )
    return v2;
  return 0;
}
