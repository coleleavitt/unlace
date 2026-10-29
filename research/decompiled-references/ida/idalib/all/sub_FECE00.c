void __fastcall sub_FECE00(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // r14
  __int64 v4; // r12
  _QWORD *v5; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  char v11; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rdx
  char v18; // si
  __int64 v19; // [rsp+0h] [rbp-40h]

  if ( a2 )
  {
    v3 = (unsigned int)(a2 - 1);
    v4 = 0;
    v5 = a3 + 3;
    v7 = a3[1];
    while ( 1 )
    {
      v11 = *(_BYTE *)(a1 + v4);
      v13 = v7 + 1;
      v9 = a3[2];
      v10 = v7 + 1;
      if ( v11 == 32 )
        break;
      if ( v11 > 32 )
      {
        if ( v11 == 35 )
        {
          if ( v13 > v9 )
          {
            sub_2236E10(a3, v5, v13, 1);
            v7 = a3[1];
          }
          goto LABEL_17;
        }
        if ( v11 != 36 )
          goto LABEL_8;
        if ( v13 > v9 )
        {
          sub_2236E10(a3, v5, v13, 1);
          v7 = a3[1];
        }
        *(_BYTE *)(*a3 + v7) = 36;
LABEL_7:
        v8 = a3[1];
        v9 = a3[2];
        v7 = v8 + 1;
        v10 = v8 + 2;
        a3[1] = v8 + 1;
        v11 = *(_BYTE *)(a1 + v4);
        goto LABEL_8;
      }
      if ( v11 == 9 )
        break;
LABEL_8:
      if ( v10 > v9 )
      {
        sub_2236E10(a3, v5, v10, 1);
        v12 = *a3;
        v7 = a3[1];
      }
      else
      {
        v12 = *a3;
      }
      *(_BYTE *)(v12 + v7) = v11;
      v7 = a3[1] + 1;
      a3[1] = v7;
      if ( v3 == v4 )
        return;
      ++v4;
    }
    v14 = v4 - 1;
    if ( (int)v4 - 1 >= 0 && *(_BYTE *)(a1 + v14) == 92 )
    {
      v15 = (int)v4 - 2;
      v16 = a1 + v14 - v15;
      while ( 1 )
      {
        if ( v13 > v9 )
        {
          v19 = v16;
          sub_2236E10(a3, v5, v13, 1);
          v7 = a3[1];
          v16 = v19;
        }
        *(_BYTE *)(*a3 + v7) = 92;
        v17 = a3[1];
        v7 = v17 + 1;
        a3[1] = v17 + 1;
        if ( (int)v15 < 0 )
        {
          v9 = a3[2];
          v10 = v17 + 2;
          goto LABEL_28;
        }
        v18 = *(_BYTE *)(v16 + v15 - 1);
        v9 = a3[2];
        --v15;
        if ( v18 != 92 )
          break;
        v13 = v17 + 2;
      }
      v10 = v17 + 2;
      if ( v17 + 2 <= v9 )
      {
LABEL_17:
        *(_BYTE *)(*a3 + v7) = 92;
        goto LABEL_7;
      }
    }
    else
    {
LABEL_28:
      if ( v10 <= v9 )
        goto LABEL_17;
    }
    sub_2236E10(a3, v5, v10, 1);
    v7 = a3[1];
    goto LABEL_17;
  }
}
