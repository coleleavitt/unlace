void __fastcall sub_B2BA0(__int64 a1, unsigned __int64 a2)
{
  __int64 func; // rax
  __int64 *v5; // r13
  char v6; // r14
  char v7; // r12
  int *v8; // rax
  unsigned __int64 v9; // rsi
  int *v10; // rdi
  int *v11; // rax
  int *v12; // rsi
  char v13; // al

  if ( (*(_BYTE *)(a1 + 153) & 8) != 0 )
  {
    if ( a2 == -1 || *(_BYTE *)(a1 + 232) )
    {
      sub_B2A10(a1, a2, 1, 0);
    }
    else if ( *(_BYTE *)(a1 + 152) )
    {
      func = get_func();
      v5 = (__int64 *)func;
      if ( func )
      {
        v6 = dword_245124;
        if ( (*(_BYTE *)(func + 16) & 4) == 0 || (dword_245124 & 2) == 0 )
        {
          v7 = v6 & (getseg() == 0);
          if ( !v7 )
          {
            v8 = (int *)qword_251A30;
            v9 = *v5;
            if ( qword_251A30 )
            {
              v10 = &dword_251A28;
              do
              {
                if ( *((_QWORD *)v8 + 4) >= v9 )
                {
                  v10 = v8;
                  v8 = *((int **)v8 + 2);
                }
                else
                {
                  v8 = *((int **)v8 + 3);
                }
              }
              while ( v8 );
              if ( v10 != &dword_251A28 && v9 >= *((_QWORD *)v10 + 4) )
                goto LABEL_20;
            }
            if ( (unsigned __int8)sub_A63C0(a1, v5) )
            {
LABEL_20:
              v11 = (int *)qword_251A70;
              if ( qword_251A70 )
              {
                v12 = &dword_251A68;
                do
                {
                  if ( *((_QWORD *)v11 + 4) >= a2 )
                  {
                    v12 = v11;
                    v11 = *((int **)v11 + 2);
                  }
                  else
                  {
                    v11 = *((int **)v11 + 3);
                  }
                }
                while ( v11 );
                if ( v12 != &dword_251A68 )
                  v7 = a2 >= *((_QWORD *)v12 + 4);
              }
            }
            else
            {
              v7 = 0;
            }
            if ( (dword_251B20 & 1) == 0 )
              v7 &= a2 != *(_QWORD *)(a1 + 168) || *(_QWORD *)(a1 + 168) == -1;
            if ( (unsigned __int8)sub_D26F0(&qword_252280) )
            {
              sub_B2A10(a1, a2, 1, 0);
            }
            else
            {
              sub_B2A10(a1, a2, 1, 0);
              if ( v7 )
                sub_B1A00((signed int *)a1, a2);
            }
            *(_QWORD *)(a1 + 168) = a2;
          }
        }
      }
      else
      {
        v13 = *(_BYTE *)(a1 + 153);
        if ( (v13 & 2) == 0 )
        {
          *(_BYTE *)(a1 + 232) = v13;
          *(_BYTE *)(a1 + 153) = v13 & 0xF5 | 2;
        }
      }
    }
  }
}

