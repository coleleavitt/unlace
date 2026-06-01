__int64 __fastcall sub_1E7D270(int *a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int *v5; // r13
  int *v7; // r12
  char v8; // al
  int v9; // edx
  int v10; // eax
  int *v11; // r15
  int *v12; // r14
  int *v13; // r12
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // edx
  bool v18; // zf
  __int64 v19; // [rsp+0h] [rbp-48h]

  result = (char *)a2 - (char *)a1;
  v19 = a3;
  if ( (char *)a2 - (char *)a1 > 64 )
  {
    v5 = a2;
    if ( !a3 )
    {
      v13 = a2;
      goto LABEL_14;
    }
    while ( 1 )
    {
      --v19;
      v7 = &a1[result >> 3];
      v8 = sub_10246C0(a4, a1[1], *v7);
      v9 = *(v5 - 1);
      if ( !v8 )
        break;
      if ( !sub_10246C0(a4, *v7, v9) )
      {
        v18 = sub_10246C0(a4, a1[1], *(v5 - 1)) == 0;
        v16 = *a1;
        if ( !v18 )
          goto LABEL_21;
LABEL_19:
        v17 = a1[1];
        a1[1] = v16;
        *a1 = v17;
        goto LABEL_6;
      }
      v10 = *a1;
      *a1 = *v7;
      *v7 = v10;
LABEL_6:
      v11 = a1 + 1;
      v12 = v5;
      while ( 1 )
      {
        v13 = v11;
        if ( sub_10246C0(a4, *v11, *a1) )
          goto LABEL_7;
        do
          --v12;
        while ( sub_10246C0(a4, *a1, *v12) );
        if ( v11 >= v12 )
          break;
        v14 = *v11;
        *v11 = *v12;
        *v12 = v14;
LABEL_7:
        ++v11;
      }
      sub_1E7D270(v11, v5, v19, a4);
      result = (char *)v11 - (char *)a1;
      if ( (char *)v11 - (char *)a1 <= 64 )
        return result;
      v5 = v11;
      if ( !v19 )
      {
LABEL_14:
        sub_1E7D190(a1, v13, (unsigned __int64)v13, a4);
        do
        {
          v15 = *--v13;
          *v13 = *a1;
          result = sub_1E7D010((__int64)a1, 0, v13 - a1, v15, a4);
        }
        while ( (char *)v13 - (char *)a1 > 4 );
        return result;
      }
    }
    if ( !sub_10246C0(a4, a1[1], v9) )
    {
      v18 = sub_10246C0(a4, *v7, *(v5 - 1)) == 0;
      v16 = *a1;
      if ( v18 )
      {
        *a1 = *v7;
        *v7 = v16;
        goto LABEL_6;
      }
LABEL_21:
      *a1 = *(v5 - 1);
      *(v5 - 1) = v16;
      goto LABEL_6;
    }
    v16 = *a1;
    goto LABEL_19;
  }
  return result;
}
