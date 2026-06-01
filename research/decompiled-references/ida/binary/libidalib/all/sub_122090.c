void __fastcall sub_122090(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // eax
  __int64 prev_seg; // rax
  __int64 next_seg; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax

  v3 = a1;
  if ( a3 < 0 )
  {
    do
    {
LABEL_12:
      if ( v3 >= a2 )
        break;
      next_seg = get_next_seg();
      if ( next_seg )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(next_seg + 8);
          v11 = getseg();
          if ( !v11 )
          {
            v3 = v10;
            goto LABEL_12;
          }
          if ( v10 >= a2 )
            break;
          v12 = move_segm();
          if ( (unsigned __int8)sub_121FB0(v11, v12) )
            return;
          next_seg = get_next_seg();
          if ( !next_seg )
            goto LABEL_18;
        }
        v3 = v10;
      }
      else
      {
LABEL_18:
        v11 = getseg();
        if ( !v11 )
          return;
        v3 = -1;
      }
      v13 = move_segm();
    }
    while ( !(unsigned __int8)sub_121FB0(v11, v13) );
  }
  else if ( a3 && a1 < a2 )
  {
    while ( 1 )
    {
      prev_seg = get_prev_seg();
      if ( !prev_seg )
        break;
      v4 = *(_QWORD *)(prev_seg + 8);
      v5 = v4 + 1;
      v6 = getseg();
      if ( v6 )
        goto LABEL_6;
LABEL_8:
      if ( a1 >= v4 )
        return;
    }
    v6 = getseg();
    if ( !v6 )
      return;
    v5 = 1;
LABEL_6:
    v7 = move_segm();
    if ( (unsigned __int8)sub_121FB0(v6, v7) )
      return;
    v4 = v5 - 1;
    goto LABEL_8;
  }
}

