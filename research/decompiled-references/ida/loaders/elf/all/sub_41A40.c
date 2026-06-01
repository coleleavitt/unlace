void __fastcall sub_41A40(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, double a5, double a6)
{
  __int64 v6; // r14
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r15
  _QWORD *v11; // rbp
  unsigned __int64 *range; // rax
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax

  v6 = a3 - a2;
  if ( a3 < a4 )
  {
    v9 = a1 + 42;
    v10 = a3;
    v11 = a1 + 48;
    while ( 1 )
    {
      range = (unsigned __int64 *)rangeset_t_find_range(v9, v10);
      if ( range )
      {
        v13 = *range;
        v14 = (_QWORD *)a1[49];
        if ( v14 )
        {
          v15 = v11;
          do
          {
            while ( 1 )
            {
              v16 = v14[2];
              v17 = v14[3];
              if ( v14[4] < v13 )
                break;
              v15 = v14;
              v14 = (_QWORD *)v14[2];
              if ( !v16 )
                goto LABEL_9;
            }
            v14 = (_QWORD *)v14[3];
          }
          while ( v17 );
LABEL_9:
          if ( v15 != v11 && v13 >= v15[4] && v6 != v15[5] - v15[7] )
            break;
        }
      }
      v10 = rangeset_t_next_range(v9, v10);
      if ( v10 >= a4 )
        return;
    }
    sub_EAA0(
      (__int64)"PHT segment at [0x%08a, 0x%08a] overwrites a previously loaded segment with different file contents.\n",
      a5,
      a6);
    v18 = a1[53] + 1LL;
    a1[53] = v18;
    if ( (unsigned int)sub_343A0(
                         v18 <= 0x20,
                         (__int64)"AUTOHIDE SESSION\n"
                                  "HIDECANCEL\n"
                                  "The PHT overwrites previously loaded segments with different file contents.\n"
                                  "Although the OS will likely succeed in loading this file,\n"
                                  "we recommend you to analyze this file's PHT.") != 1 )
      sub_EB70(0);
  }
}

