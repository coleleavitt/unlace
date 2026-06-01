void __fastcall sub_E56160(int a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  _BYTE *v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // rdx
  char *v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rsi
  _BYTE *v15; // rax
  _BYTE *v16; // rax
  _BYTE *v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-40h]

  if ( *(_OWORD *)(a2 + 2) != 0 )
  {
    v9 = *(_BYTE **)(a4 + 32);
    if ( (unsigned __int64)v9 >= *(_QWORD *)(a4 + 24) )
    {
      v20 = a4;
      sub_2257CD0(a4, 36);
      a4 = v20;
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v9 + 1;
      *v9 = 36;
    }
    if ( a1 != 3 )
      v4 = a00fg1hij420[a1 + 8];
    v10 = *(char **)(a4 + 32);
    v11 = *(_QWORD *)(a4 + 24);
    if ( a2[3] )
    {
      if ( (unsigned __int64)v10 >= v11 )
      {
        a4 = sub_2257CD0(a4, 82);
      }
      else
      {
        *(_QWORD *)(a4 + 32) = v10 + 1;
        *v10 = 82;
      }
      v12 = *(char **)(a4 + 32);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(a4 + 24) )
      {
        sub_2257CD0(a4, (unsigned int)v4);
      }
      else
      {
        *(_QWORD *)(a4 + 32) = v12 + 1;
        *v12 = v4;
      }
      sub_E56120(a3, (void *)a2[3]);
      sub_E56120(a3, (void *)a2[4]);
      sub_E56120(a3, (void *)a2[2]);
      v8 = *a2;
      goto LABEL_7;
    }
    if ( (unsigned __int64)v10 >= v11 )
    {
      sub_2257CD0(a4, (unsigned int)v4);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v10 + 1;
      *v10 = v4;
    }
    sub_E56120(a3, (void *)a2[2]);
    v7 = *(_QWORD *)a2;
LABEL_6:
    v8 = (unsigned int)-(int)v7;
LABEL_7:
    sub_E56120(a3, (void *)v8);
    return;
  }
  v7 = *(_QWORD *)a2;
  if ( v7 )
  {
    if ( a1 == 1 )
    {
      v18 = *(_BYTE **)(a4 + 32);
      if ( (unsigned __int64)v18 >= *(_QWORD *)(a4 + 24) )
      {
        sub_2257CD0(a4, 79);
      }
      else
      {
        *(_QWORD *)(a4 + 32) = v18 + 1;
        *v18 = 79;
      }
      v7 = *(_QWORD *)a2;
    }
    else if ( a1 )
    {
      if ( a1 == 2 )
      {
        v15 = *(_BYTE **)(a4 + 32);
        if ( (unsigned __int64)v15 >= *(_QWORD *)(a4 + 24) )
        {
          sub_2257CD0(a4, 71);
        }
        else
        {
          *(_QWORD *)(a4 + 32) = v15 + 1;
          *v15 = 71;
        }
        v7 = *(_QWORD *)a2;
      }
    }
    else
    {
      v17 = *(_BYTE **)(a4 + 32);
      if ( (unsigned __int64)v17 >= *(_QWORD *)(a4 + 24) )
      {
        sub_2257CD0(a4, 87);
      }
      else
      {
        *(_QWORD *)(a4 + 32) = v17 + 1;
        *v17 = 87;
      }
      v7 = *(_QWORD *)a2;
    }
    goto LABEL_6;
  }
  switch ( a1 )
  {
    case 1:
      v19 = *(_BYTE **)(a4 + 32);
      v14 = 73;
      if ( (unsigned __int64)v19 < *(_QWORD *)(a4 + 24) )
      {
        *(_QWORD *)(a4 + 32) = v19 + 1;
        *v19 = 73;
        return;
      }
      goto LABEL_44;
    case 0:
      v16 = *(_BYTE **)(a4 + 32);
      if ( (unsigned __int64)v16 < *(_QWORD *)(a4 + 24) )
      {
        *(_QWORD *)(a4 + 32) = v16 + 1;
        *v16 = 81;
        return;
      }
      v14 = 81;
      goto LABEL_44;
    case 2:
      v13 = *(_BYTE **)(a4 + 32);
      v14 = 65;
      if ( (unsigned __int64)v13 < *(_QWORD *)(a4 + 24) )
      {
        *(_QWORD *)(a4 + 32) = v13 + 1;
        *v13 = 65;
        return;
      }
LABEL_44:
      sub_2257CD0(a4, v14);
      break;
  }
}

