/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C304
// Address: 0x0001C304

//----- (0001C304) --------------------------------------------------------
void __fastcall sub_1C304(int a1, const char *a2)
{
  int **v2; // r5
  int *v3; // r6
  _DWORD *v4; // r4
  _DWORD *v5; // r0
  bool v6; // zf
  int v7; // r1
  _DWORD *v8; // r2
  unsigned int v9; // r1
  _DWORD *v10; // r0
  unsigned int v11; // r3
  _DWORD *v12; // r7
  int *v13; // r7
  const char *v14; // r0
  int *v15; // r0
  int *v16; // r0
  int *v17; // r7
  _DWORD *v18; // r0
  int v19; // r1
  _DWORD *v22; // [sp+Ch] [bp-8h]
  int **v23; // [sp+10h] [bp-4h]

  v22 = (_DWORD *)(a1 + 896);
  v23 = (int **)(a1 + 888);
  if ( *(_DWORD *)(a1 + 896) )
  {
    v2 = (int **)(a1 + 892);
    v3 = *v23;
    if ( (int *)(a1 + 892) != *v23 )
    {
      v4 = (_DWORD *)(a1 + 904);
      while ( 1 )
      {
        v8 = (_DWORD *)*v4;
        if ( !*v4 )
          goto LABEL_25;
        v9 = v3[4];
        v10 = (_DWORD *)(a1 + 904);
        do
        {
          v11 = v8[4];
          if ( v11 >= v9 )
            v10 = v8;
          v12 = v8 + 1;
          if ( v11 >= v9 )
            v12 = v8;
          v8 = (_DWORD *)*v12;
        }
        while ( *v12 );
        if ( v10 == v4 || v9 < v10[4] )
          goto LABEL_25;
        v13 = v10 + 5;
        if ( !a2 )
          break;
        v14 = v10[11] ? (const char *)v10[10] : &byte_B3CBE;
        if ( !strcmp(v14, a2) )
          break;
        v15 = (int *)v3[1];
        if ( v15 )
        {
          do
          {
            v3 = v15;
            v15 = (int *)*v15;
          }
          while ( v15 );
        }
        else
        {
          v5 = v3 + 2;
          v6 = *(_DWORD *)v3[2] == (_DWORD)v3;
          v3 = (int *)v3[2];
          if ( !v6 )
          {
            do
            {
              v7 = *v5;
              v5 = (_DWORD *)(*v5 + 8);
              v3 = *(int **)(v7 + 8);
            }
            while ( *v3 != v7 );
          }
        }
LABEL_33:
        if ( v2 == (int **)v3 )
          return;
      }
      sub_21550(a1, v13);
LABEL_25:
      v16 = (int *)v3[1];
      if ( v16 )
      {
        do
        {
          v17 = v16;
          v16 = (int *)*v16;
        }
        while ( v16 );
      }
      else
      {
        v18 = v3 + 2;
        v17 = (int *)v3[2];
        if ( (int *)*v17 != v3 )
        {
          do
          {
            v19 = *v18;
            v18 = (_DWORD *)(*v18 + 8);
            v17 = *(int **)(v19 + 8);
          }
          while ( *v17 != v19 );
        }
      }
      if ( *v23 == v3 )
        *v23 = v17;
      --*v22;
      sub_27512(*v2, v3);
      operator delete(v3);
      v3 = v17;
      goto LABEL_33;
    }
  }
}
// B3CBE: using guessed type char byte_B3CBE;
