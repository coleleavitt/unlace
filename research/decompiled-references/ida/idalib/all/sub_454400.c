__int64 __fastcall sub_454400(int *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13

  v4 = a2;
  v5 = switch_dbctx(a1[2]);
  if ( a3 )
  {
    if ( (unsigned int)(a3 - 1) <= 1 )
      goto LABEL_3;
  }
  else
  {
    if ( (get_flags_ex(a2, 4) & 0x400) != 0 )
      goto LABEL_6;
LABEL_3:
    do
    {
      v4 = a3 == 2 ? prev_head(v4, 0) : next_head(v4, -1);
      if ( v4 == -1 )
        break;
LABEL_6:
      ;
    }
    while ( !(*(unsigned __int8 (__fastcall **)(int *, __int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, v5, v4) );
  }
  return v4;
}
