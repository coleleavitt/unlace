void __fastcall sub_B25C0(__int64 a1, unsigned int a2)
{
  __int64 func; // rax
  unsigned int *v5; // r13
  char v6; // r14
  char v7; // r12
  int *v8; // rax
  unsigned int v9; // esi
  int *v10; // rdi
  int *v11; // rax
  int *v12; // rsi
  char v13; // al

  if ( (*(_BYTE *)(a1 + 153) & 8) != 0 )
  {
    if ( a2 == -1 || *(_BYTE *)(a1 + 208) )
    {
      sub_B2460((unsigned int *)a1, a2, 1, 0);
    }
    else if ( *(_BYTE *)(a1 + 152) )
    {
      func = get_func();
      v5 = (unsigned int *)func;
      if ( func )
      {
        v6 = dword_2440D8;
        if ( (*(_BYTE *)(func + 8) & 4) == 0 || (dword_2440D8 & 2) == 0 )
        {
          v7 = v6 & (getseg() == 0);
          if ( !v7 )
          {
            v8 = (int *)qword_2509B0;
            v9 = *v5;
            if ( qword_2509B0 )
            {
              v10 = &dword_2509A8;
              do
              {
                if ( v8[8] >= v9 )
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
              if ( v10 != &dword_2509A8 && v9 >= v10[8] )
                goto LABEL_20;
            }
            if ( (unsigned __int8)sub_A5F00(a1, v5) )
            {
LABEL_20:
              v11 = (int *)qword_2509F0;
              if ( qword_2509F0 )
              {
                v12 = &dword_2509E8;
                do
                {
                  if ( v11[8] >= a2 )
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
                if ( v12 != &dword_2509E8 )
                  v7 = a2 >= v12[8];
              }
            }
            else
            {
              v7 = 0;
            }
            if ( (dword_250AA0 & 1) == 0 )
              v7 &= a2 != *(_DWORD *)(a1 + 164) || *(_DWORD *)(a1 + 164) == -1;
            if ( (unsigned __int8)sub_D1290(&qword_2511A0) )
            {
              sub_B2460((unsigned int *)a1, a2, 1, 0);
            }
            else
            {
              sub_B2460((unsigned int *)a1, a2, 1, 0);
              if ( v7 )
                sub_B1440((signed int *)a1, a2);
            }
            *(_DWORD *)(a1 + 164) = a2;
          }
        }
      }
      else
      {
        v13 = *(_BYTE *)(a1 + 153);
        if ( (v13 & 2) == 0 )
        {
          *(_BYTE *)(a1 + 208) = v13;
          *(_BYTE *)(a1 + 153) = v13 & 0xF5 | 2;
        }
      }
    }
  }
}

