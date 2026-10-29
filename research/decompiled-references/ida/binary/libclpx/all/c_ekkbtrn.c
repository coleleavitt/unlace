__int64 __fastcall c_ekkbtrn(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // esi
  signed int v12; // r8d
  signed int v13; // edx
  double v14; // xmm0_8
  __int64 v15; // rcx
  int IsSet; // eax
  __int64 v18; // rcx
  double *v19; // rax
  __int64 v20; // rdi
  signed int v21; // [rsp+Ch] [rbp-3Ch]

  v7 = *(_QWORD *)(a1 + 80);
  v8 = *(_QWORD *)(a1 + 128);
  v9 = *(_QWORD *)(a1 + 88);
  v10 = v7 + 4;
  if ( !a4 )
  {
    v11 = *(_DWORD *)(a1 + 320);
    v12 = *(_DWORD *)(a1 + 240);
    v13 = *(_DWORD *)(v7 + 4);
    if ( v11 <= 0 )
    {
      if ( v11 )
        goto LABEL_11;
      LODWORD(v7) = *(_DWORD *)(v7 + 4);
    }
    else
    {
      v14 = *(double *)(v8 + 8LL * v13);
      v7 = *(int *)(v10 + 4LL * v13);
      if ( v14 != 0.0 )
      {
        v7 = v13;
        v13 = *(_DWORD *)(v10 + 4LL * v13);
        while ( 1 )
        {
LABEL_24:
          if ( v14 != 0.0 )
            *(double *)(v8 + 8 * v7) = -v14;
          if ( v11 <= (int)++a4 )
            break;
          v20 = v13;
          v13 = *(_DWORD *)(v10 + 4LL * v13);
          v14 = *(double *)(v8 + 8 * v20);
          v7 = v20;
        }
        goto LABEL_11;
      }
      while ( v11 != ++a4 )
      {
        v14 = *(double *)(v8 + 8 * v7);
        v13 = *(_DWORD *)(v10 + 4 * v7);
        if ( v14 != 0.0 )
          goto LABEL_24;
        v7 = v13;
      }
    }
    if ( v12 > v11 && (v15 = (int)v7, *(double *)(v8 + 8LL * (int)v7) == 0.0) )
    {
      do
      {
        ++v11;
        v13 = *(_DWORD *)(v10 + 4 * v15);
        if ( v12 == v11 )
          break;
        v15 = v13;
      }
      while ( *(double *)(v8 + 8LL * v13) == 0.0 );
    }
    else
    {
      v13 = v7;
    }
    goto LABEL_11;
  }
  v21 = a4;
  IsSet = c_ekk_IsSet(*(_QWORD *)(a1 + 96), a4);
  v18 = v21;
  if ( IsSet )
  {
    v12 = *(_DWORD *)(a1 + 240);
    v13 = *(_DWORD *)(v10 + 4LL * *(int *)(a1 + 324));
    if ( v21 != v13 )
    {
      do
      {
        while ( 1 )
        {
          v19 = (double *)(v8 + 8 * v18);
          if ( *v19 == 0.0 )
            break;
          v18 = *(int *)(v10 + 4 * v18);
          *v19 = -*v19;
          if ( v13 == (_DWORD)v18 )
            goto LABEL_11;
        }
        v18 = *(int *)(v10 + 4 * v18);
      }
      while ( v13 != (_DWORD)v18 );
    }
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 240);
    v13 = v21;
  }
LABEL_11:
  if ( v13 <= v12 )
    sub_210150(a1, v8, v13);
  sub_20FE80(a1, v8);
  sub_211940(a1, v8);
  return sub_20FA20(a1, (int *)(v9 + 4), v8, (double *)(a2 + 8), (_DWORD *)(a3 + 4));
}

