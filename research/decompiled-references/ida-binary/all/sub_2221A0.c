void __fastcall sub_2221A0(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 func; // rax
  __int64 *v6; // r13
  char v7; // r14
  char v8; // r12
  int *v9; // rax
  unsigned __int64 v10; // rsi
  int *v11; // rdi
  int *v12; // rax
  int *v13; // rsi
  char v14; // al

  if ( (*(_BYTE *)(a1 + 153) & 8) != 0 )
  {
    if ( a2 == -1 || *(_BYTE *)(a1 + 232) )
    {
      sub_222010(a1, a2, 1, 0);
    }
    else if ( *(_BYTE *)(a1 + 152) )
    {
      func = get_func(a2);
      v6 = (__int64 *)func;
      if ( func )
      {
        v7 = dword_8BA504;
        if ( (*(_BYTE *)(func + 16) & 4) == 0 || (dword_8BA504 & 2) == 0 )
        {
          v8 = v7 & (getseg(a2) == 0);
          if ( !v8 )
          {
            v9 = (int *)qword_8CB5B0;
            v10 = *v6;
            if ( qword_8CB5B0 )
            {
              v11 = &dword_8CB5A8;
              do
              {
                if ( *((_QWORD *)v9 + 4) >= v10 )
                {
                  v11 = v9;
                  v9 = *((int **)v9 + 2);
                }
                else
                {
                  v9 = *((int **)v9 + 3);
                }
              }
              while ( v9 );
              if ( v11 != &dword_8CB5A8 && v10 >= *((_QWORD *)v11 + 4) )
                goto LABEL_20;
            }
            if ( (unsigned __int8)sub_2149C0(a1, v6) )
            {
LABEL_20:
              v12 = (int *)qword_8CB5F0;
              if ( qword_8CB5F0 )
              {
                v13 = &dword_8CB5E8;
                do
                {
                  if ( *((_QWORD *)v12 + 4) >= a2 )
                  {
                    v13 = v12;
                    v12 = *((int **)v12 + 2);
                  }
                  else
                  {
                    v12 = *((int **)v12 + 3);
                  }
                }
                while ( v12 );
                if ( v13 != &dword_8CB5E8 )
                  v8 = a2 >= *((_QWORD *)v13 + 4);
              }
            }
            else
            {
              v8 = 0;
            }
            if ( (dword_8CB6A0 & 1) == 0 )
              v8 &= a2 != *(_QWORD *)(a1 + 168) || *(_QWORD *)(a1 + 168) == -1;
            if ( (unsigned __int8)sub_241850(&qword_8CC120) )
            {
              sub_222010(a1, a2, 1, 0);
            }
            else
            {
              sub_222010(a1, a2, 1, 0);
              if ( v8 )
                sub_221000((signed int *)a1, a2, a3);
            }
            *(_QWORD *)(a1 + 168) = a2;
          }
        }
      }
      else
      {
        v14 = *(_BYTE *)(a1 + 153);
        if ( (v14 & 2) == 0 )
        {
          *(_BYTE *)(a1 + 232) = v14;
          *(_BYTE *)(a1 + 153) = v14 & 0xF5 | 2;
        }
      }
    }
  }
}
