__int64 __fastcall sub_3FCFE0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // r12

  v4 = a2;
  sub_3FC650((__int64)a1, a3, a3, a4);
  v7 = (_QWORD *)a1[115];
  v8 = a1 + 114;
  if ( v7 )
  {
    do
    {
      while ( 1 )
      {
        v6 = v7[2];
        v5 = v7[3];
        if ( v7[4] < a2 )
          break;
        v8 = v7;
        v7 = (_QWORD *)v7[2];
        if ( !v6 )
          goto LABEL_6;
      }
      v7 = (_QWORD *)v7[3];
    }
    while ( v5 );
LABEL_6:
    if ( a1 + 114 != v8 && v8[4] == a2 )
      goto LABEL_10;
  }
  sub_3FC650((__int64)a1, 0, v5, v6);
  if ( rangeset_t_find_range(a1 + 102, a2) )
  {
    v4 = -1;
LABEL_10:
    a1[128] = v4;
    a1[129] = -2;
    a1[125] = v8;
    return 1;
  }
  return 0;
}
