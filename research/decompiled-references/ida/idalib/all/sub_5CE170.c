char __fastcall sub_5CE170(__m128i *a1, unsigned __int64 **a2, _QWORD *a3, char a4, double a5, double a6, double a7)
{
  unsigned __int64 *v9; // rax
  _QWORD *v10; // r12
  char *v11; // r13
  unsigned __int64 v12; // rbx

  if ( *((_DWORD *)a3 + 8) && !a2 )
  {
    if ( !under_debugger )
      interr(2457);
LABEL_22:
    BUG();
  }
  sub_3A4190((__int64)a1, (char *)*a3, (char *)a3[1], 0x26u);
  auto_mark_range(*a3, a3[1], 40);
  if ( *((_DWORD *)a3 + 8) )
  {
    v9 = *a2;
    if ( (unsigned __int64 *)a3[3] == *a2 )
    {
      a3[3] = *(_QWORD *)a3[5];
      LOBYTE(v9) = sub_5C77B0((__int64)a1, a3, 0);
      if ( *((_DWORD *)a3 + 8) == 1 )
      {
        LOBYTE(v9) = get_merge_state(a1, a3);
        if ( ((unsigned __int8)v9 & 2) == 0 )
        {
          v9 = sub_505D70((__int64)&a1[106].m128i_i64[1], a3[3]);
          v10 = v9;
          if ( v9 )
          {
            if ( *((char *)v9 + 17) >= 0
              || (v9 = sub_505D70((__int64)&a1[106].m128i_i64[1], v9[3]), (v10 = v9) != nullptr) )
            {
              LOBYTE(v9) = sub_5CBC50((__int64)a1, v10, *a3);
              if ( (_BYTE)v9 )
              {
                v11 = (char *)*a3;
                v12 = a3[1];
                v9 = sub_5C93A0(a1, (__int64)v10, (unsigned __int64)v11);
                if ( v9 )
                {
                  LOBYTE(v9) = sub_5CE320((int)a1);
                  if ( (_BYTE)v9 )
                  {
                    sub_5BAD80(a1, (__int64)v10, (unsigned __int64)v11, v12);
                    LOBYTE(v9) = sub_5CDC30(a1, (unsigned __int64)(v11 - 1), v12, a5, a6, a7);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    if ( a4 )
      sub_5B7F30(*a3, a3[1]);
    LOBYTE(v9) = sub_505AA0(&a1[106].m128i_i64[1], *a3, 1, a5);
    if ( !(_BYTE)v9 )
    {
      if ( !under_debugger )
        interr(1215);
      goto LABEL_22;
    }
  }
  return (char)v9;
}
