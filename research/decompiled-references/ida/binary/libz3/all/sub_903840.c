void __fastcall sub_903840(void (***ptr)(void))
{
  void (*v2)(void); // rax
  void (**v3)(void); // rdi
  void (**v4)(void); // rdi
  void (**v5)(void); // rdi
  void (**v6)(void); // rdi
  void (**v7)(void); // rsi
  void (**v8)(void); // rdi
  bool v9; // zf
  void (**v10)(void); // rbp
  void (**v11)(void); // r12
  void (*v12)(void); // rsi
  void (**v13)(void); // rdi
  void (**v14)(void); // rbp
  void (**v15)(void); // r12
  void (*v16)(void); // rsi
  void (**v17)(void); // rdi
  void (**v18)(void); // rdi
  void (**v19)(void); // rdi
  void (**v20)(void); // rdi
  void (**v21)(void); // rdi
  void (**v22)(void); // rdi
  void (**v23)(void); // rdi
  void (**v24)(void); // rdi
  void (**v25)(void); // rbp
  void (**v26)(void); // r12
  void (*v27)(void); // rsi
  void (**v28)(void); // rdi
  void (**v29)(void); // rdi

  if ( ptr )
  {
    v2 = **ptr;
    if ( (char *)v2 == (char *)sub_900360 )
    {
      *ptr = (void (**)(void))&off_1C56130;
      v3 = ptr[43];
      if ( v3 )
        sub_186B220(v3 - 1);
      v4 = ptr[42];
      if ( v4 )
        sub_186B220(v4 - 1);
      v5 = ptr[41];
      if ( v5 )
        sub_186B220(v5 - 1);
      v6 = ptr[40];
      if ( v6 )
        sub_186B220(v6 - 1);
      v7 = ptr[38];
      if ( v7 )
      {
        v8 = ptr[39];
        v9 = (*((_DWORD *)v7 + 2))-- == 1;
        if ( v9 )
          sub_15D7BC0(v8, v7);
      }
      v10 = ptr[37];
      if ( v10 )
      {
        v11 = &v10[*((unsigned int *)v10 - 1)];
        if ( v10 >= v11 )
          goto LABEL_22;
        do
        {
          while ( 1 )
          {
            v12 = *v10;
            if ( *v10 )
            {
              v13 = ptr[36];
              v9 = (*((_DWORD *)v12 + 2))-- == 1;
              if ( v9 )
                break;
            }
            if ( ++v10 >= v11 )
              goto LABEL_21;
          }
          sub_15D7BC0(v13, v12);
          ++v10;
        }
        while ( v10 < v11 );
LABEL_21:
        v10 = ptr[37];
        if ( v10 )
LABEL_22:
          sub_186B220(v10 - 1);
      }
      v14 = ptr[35];
      if ( v14 )
      {
        v15 = &v14[*((unsigned int *)v14 - 1)];
        if ( v14 >= v15 )
          goto LABEL_31;
        do
        {
          while ( 1 )
          {
            v16 = *v14;
            if ( *v14 )
            {
              v17 = ptr[34];
              v9 = (*((_DWORD *)v16 + 2))-- == 1;
              if ( v9 )
                break;
            }
            if ( ++v14 >= v15 )
              goto LABEL_30;
          }
          sub_15D7BC0(v17, v16);
          ++v14;
        }
        while ( v14 < v15 );
LABEL_30:
        v14 = ptr[35];
        if ( v14 )
LABEL_31:
          sub_186B220(v14 - 1);
      }
      v18 = ptr[31];
      if ( v18 )
        sub_186B220(v18);
      v19 = ptr[28];
      if ( v19 )
        sub_186B220(v19);
      v20 = ptr[25];
      if ( v20 )
        sub_186B220(v20);
      v21 = ptr[24];
      if ( v21 )
        sub_186B220(v21 - 1);
      v22 = ptr[14];
      if ( v22 )
        sub_186B220(v22);
      v23 = ptr[13];
      if ( v23 )
        sub_186B220(v23 - 1);
      v24 = ptr[11];
      if ( v24 )
        sub_186B220(v24 - 1);
      v25 = ptr[9];
      if ( v25 )
      {
        v26 = &v25[*((unsigned int *)v25 - 1)];
        if ( v25 >= v26 )
          goto LABEL_54;
        do
        {
          while ( 1 )
          {
            v27 = *v25;
            if ( *v25 )
            {
              v28 = ptr[8];
              v9 = (*((_DWORD *)v27 + 2))-- == 1;
              if ( v9 )
                break;
            }
            if ( ++v25 >= v26 )
              goto LABEL_53;
          }
          sub_15D7BC0(v28, v27);
          ++v25;
        }
        while ( v25 < v26 );
LABEL_53:
        v25 = ptr[9];
        if ( v25 )
LABEL_54:
          sub_186B220(v25 - 1);
      }
      v29 = ptr[7];
      if ( v29 )
        sub_186B220(v29 - 1);
      sub_186B220(ptr);
    }
    else
    {
      v2();
      sub_186B220(ptr);
    }
  }
}

