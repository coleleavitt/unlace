char __fastcall sub_5B31C0(__int64 a1, _DWORD *a2, unsigned int *a3, char a4, double a5, double a6, double a7)
{
  unsigned int *v9; // rax
  _DWORD *v10; // r12
  unsigned int v11; // r13d
  unsigned int v12; // ebx

  if ( a3[5] && !a2 )
  {
    if ( !under_debugger )
      interr(2457);
LABEL_22:
    BUG();
  }
  sub_39F720(a1, *a3, a3[1], 0x26u);
  auto_mark_range(*a3, a3[1], 40);
  if ( a3[5] )
  {
    LODWORD(v9) = *a2;
    if ( a3[4] == *a2 )
    {
      a3[4] = **((_DWORD **)a3 + 3);
      LOBYTE(v9) = sub_5ACD60(a1, a3, 0);
      if ( a3[5] == 1 )
      {
        LOBYTE(v9) = get_merge_state(a1, a3);
        if ( ((unsigned __int8)v9 & 2) == 0 )
        {
          v9 = sub_4EE820(a1 + 1624, a3[4]);
          v10 = v9;
          if ( v9 )
          {
            if ( *((char *)v9 + 9) >= 0 || (v9 = sub_4EE820(a1 + 1624, v9[4]), (v10 = v9) != nullptr) )
            {
              LOBYTE(v9) = sub_5B0E70(a1, v10, *a3);
              if ( (_BYTE)v9 )
              {
                v11 = *a3;
                v12 = a3[1];
                v9 = sub_5AE770((_QWORD *)a1, (__int64)v10, v11);
                if ( v9 )
                {
                  LOBYTE(v9) = sub_5B3360(a1);
                  if ( (_BYTE)v9 )
                  {
                    sub_5A0860((_QWORD *)a1, (__int64)v10, v11, v12);
                    LOBYTE(v9) = sub_5B2CC0((__int64 *)a1, v11 - 1, v12, a5, a6, a7);
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
      sub_59DCF0(*a3, a3[1]);
    LOBYTE(v9) = sub_4EE550((unsigned int *)(a1 + 1624), *a3, 1, a5);
    if ( !(_BYTE)v9 )
    {
      if ( !under_debugger )
        interr(1215);
      goto LABEL_22;
    }
  }
  return (char)v9;
}

