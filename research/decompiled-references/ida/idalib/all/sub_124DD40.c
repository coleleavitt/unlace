void __fastcall sub_124DD40(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r14
  _BYTE *v6; // r12
  _BYTE *v7; // r13
  char v8; // cl
  char v9; // r9
  __int16 v10; // di
  char v11; // dl
  char *v12; // rax
  char v13; // r8
  _BYTE *v14; // rbp
  _BYTE *v15; // rax
  char v16; // r8
  _BYTE *v17; // rdi
  _BYTE *v18; // rax
  __int64 i; // rbp
  char *v20; // r12
  char v21; // cl
  __int64 v22; // rbp

  v3 = (__int64)&a2[-a1];
  if ( (__int64)&a2[-a1] <= 16 )
    return;
  v5 = a3;
  v6 = a2;
  if ( !a3 )
  {
LABEL_21:
    for ( i = (v3 - 2) >> 1; ; --i )
    {
      sub_124DC00(a1, i, v3, *(_BYTE *)(a1 + i));
      if ( !i )
        break;
    }
    v20 = v6 - 1;
    do
    {
      v21 = *v20;
      v22 = (__int64)&v20[-a1];
      *v20-- = *(_BYTE *)a1;
      sub_124DC00(a1, 0, v22, v21);
    }
    while ( v22 > 1 );
    return;
  }
  v7 = (_BYTE *)(a1 + 1);
  while ( 2 )
  {
    v8 = *(_BYTE *)(a1 + 1);
    --v5;
    v9 = *(a2 - 1);
    v10 = __ROL2__(*(_WORD *)a1, 8);
    v11 = *(_BYTE *)a1;
    v12 = (char *)(a1 + (__int64)&a2[-a1] / 2);
    v13 = *v12;
    if ( v8 >= *v12 )
    {
      if ( v8 < v9 )
        goto LABEL_7;
      if ( v13 < v9 )
      {
LABEL_18:
        *(_BYTE *)a1 = v9;
        *(a2 - 1) = v11;
        v8 = *(_BYTE *)a1;
        goto LABEL_8;
      }
LABEL_27:
      *(_BYTE *)a1 = v13;
      *v12 = v11;
      v8 = *(_BYTE *)a1;
      v11 = *(a2 - 1);
      goto LABEL_8;
    }
    if ( v13 < v9 )
      goto LABEL_27;
    if ( v8 < v9 )
      goto LABEL_18;
LABEL_7:
    *(_WORD *)a1 = v10;
    v11 = *(a2 - 1);
LABEL_8:
    v14 = v7;
    v15 = a2;
    while ( 1 )
    {
      v16 = *v14;
      v6 = v14;
      if ( (char)*v14 < v8 )
        goto LABEL_15;
      v17 = v15 - 1;
      if ( v11 > v8 )
      {
        v18 = v15 - 2;
        do
        {
          v17 = v18--;
          v11 = v18[1];
        }
        while ( v11 > v8 );
      }
      if ( v17 <= v14 )
        break;
      *v14 = v11;
      v11 = *(v17 - 1);
      v15 = v17;
      *v17 = v16;
      v8 = *(_BYTE *)a1;
LABEL_15:
      ++v14;
    }
    sub_124DD40(v14, a2, v5);
    v3 = (__int64)&v14[-a1];
    if ( (__int64)&v14[-a1] > 16 )
    {
      a2 = v14;
      if ( !v5 )
        goto LABEL_21;
      continue;
    }
    break;
  }
}
