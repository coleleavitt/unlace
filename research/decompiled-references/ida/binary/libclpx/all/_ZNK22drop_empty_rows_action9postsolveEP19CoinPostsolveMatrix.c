void __fastcall drop_empty_rows_action::postsolve(drop_empty_rows_action *this, CoinPostsolveMatrix *a2)
{
  __int64 *v3; // rax
  int v4; // r15d
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  _OWORD *v10; // rax
  _DWORD *v11; // rdi
  int v12; // edx
  int *v13; // rcx
  int i; // eax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  __int64 v24; // r11
  int *v25; // rdx
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // xmm0_8
  __int64 v31; // rsi
  __int64 v32; // r9
  __int64 v33; // rcx
  _DWORD *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // xmm0_8
  __int64 v37; // [rsp+8h] [rbp-70h]
  int v38; // [rsp+10h] [rbp-68h]
  __int64 *v39; // [rsp+18h] [rbp-60h]
  __int64 v40; // [rsp+20h] [rbp-58h]
  __int64 v41; // [rsp+28h] [rbp-50h]
  int v42; // [rsp+30h] [rbp-48h]
  int v43; // [rsp+34h] [rbp-44h]
  __int64 v44; // [rsp+38h] [rbp-40h]

  v3 = *((__int64 **)this + 3);
  v4 = *((_DWORD *)this + 4);
  v5 = *((int *)a2 + 4);
  v6 = *((_QWORD *)a2 + 13);
  v39 = v3;
  v43 = *((_DWORD *)a2 + 1);
  v41 = *((_QWORD *)a2 + 5);
  v7 = *((_QWORD *)a2 + 14);
  v38 = *(_DWORD *)a2;
  v40 = *((_QWORD *)a2 + 6);
  v8 = *((_QWORD *)a2 + 21);
  v9 = *((_QWORD *)a2 + 22);
  v42 = *((_DWORD *)a2 + 4);
  v44 = *((_QWORD *)a2 + 7);
  v37 = *((_QWORD *)a2 + 25);
  if ( v5 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v10 = (_OWORD *)operator new[](4 * v5);
  v11 = v10;
  v12 = v43;
  if ( v42 )
  {
    if ( v42 / 8 <= 0 )
    {
      v34 = v10;
    }
    else
    {
      v32 = (unsigned int)(v42 / 8 - 1);
      v33 = (__int64)&v10[2 * v32 + 2];
      do
      {
        *v10 = 0;
        v10 += 2;
        *(v10 - 1) = 0;
      }
      while ( (_OWORD *)v33 != v10 );
      v34 = &v11[8 * (int)v32 + 8];
    }
    switch ( v42 % 8 )
    {
      case 1:
        goto LABEL_44;
      case 2:
        goto LABEL_43;
      case 3:
        goto LABEL_42;
      case 4:
        goto LABEL_41;
      case 5:
        goto LABEL_40;
      case 6:
        goto LABEL_39;
      case 7:
        v34[6] = 0;
LABEL_39:
        v34[5] = 0;
LABEL_40:
        v34[4] = 0;
LABEL_41:
        v34[3] = 0;
LABEL_42:
        v34[2] = 0;
LABEL_43:
        v34[1] = 0;
LABEL_44:
        *v34 = 0;
        break;
      default:
        break;
    }
    if ( v4 <= 0 )
    {
LABEL_6:
      LODWORD(v16) = v42 - 1;
      if ( v42 - 1 >= 0 )
      {
        v16 = (int)v16;
        v17 = (int)v16 - 1LL;
        v18 = v17 - (unsigned int)v16;
        if ( v37 )
        {
          while ( 1 )
          {
            if ( !v11[v16] )
            {
              *(_QWORD *)(v6 + 8 * v16) = *(_QWORD *)(v6 + 8LL * --v12);
              *(_QWORD *)(v7 + 8 * v16) = *(_QWORD *)(v7 + 8LL * v12);
              *(_QWORD *)(v9 + 8 * v16) = *(_QWORD *)(v9 + 8LL * v12);
              *(_QWORD *)(v8 + 8 * v16) = *(_QWORD *)(v8 + 8LL * v12);
              *(_BYTE *)(v37 + v16) = *(_BYTE *)(v37 + v12);
            }
            v16 = v17;
            if ( v18 == v17 )
              break;
            --v17;
          }
        }
        else
        {
          while ( 1 )
          {
            if ( !v11[v16] )
            {
              *(_QWORD *)(v6 + 8 * v16) = *(_QWORD *)(v6 + 8LL * --v12);
              *(_QWORD *)(v7 + 8 * v16) = *(_QWORD *)(v7 + 8LL * v12);
              *(_QWORD *)(v9 + 8 * v16) = *(_QWORD *)(v9 + 8LL * v12);
              *(_QWORD *)(v8 + 8 * v16) = *(_QWORD *)(v8 + 8LL * v12);
            }
            v16 = v17;
            if ( v18 == v17 )
              break;
            --v17;
          }
        }
      }
      if ( v42 > 0 )
      {
        v19 = 0;
        do
        {
          if ( !v11[v19] )
          {
            v20 = v12++;
            v11[v20] = v19;
          }
          ++v19;
        }
        while ( (unsigned int)(v42 - 1) + 1LL != v19 );
      }
      if ( v38 <= 0 )
        goto LABEL_24;
      goto LABEL_19;
    }
LABEL_4:
    v13 = (int *)(v39 + 2);
    for ( i = 0; i < v4; ++i )
    {
      v15 = *v13;
      v13 += 6;
      v11[v15] = -1;
    }
    goto LABEL_6;
  }
  if ( v4 > 0 )
    goto LABEL_4;
  if ( v38 <= 0 )
  {
    operator delete[](v10);
    goto LABEL_27;
  }
LABEL_19:
  v21 = 0;
  do
  {
    v22 = *(_DWORD *)(v41 + v21);
    v23 = *(_DWORD *)(v40 + v21);
    if ( v22 < v22 + v23 )
    {
      v24 = v22;
      v25 = (int *)(v44 + 4LL * v22);
      v26 = v44 + 4 + 4 * ((unsigned int)(v23 - 1) + v24);
      do
      {
        v27 = *v25++;
        *(v25 - 1) = v11[v27];
      }
      while ( (int *)v26 != v25 );
    }
    v21 += 4;
  }
  while ( 4LL * (unsigned int)(v38 - 1) + 4 != v21 );
LABEL_24:
  operator delete[](v11);
  if ( v4 > 0 )
  {
    v28 = v39;
    if ( v37 )
    {
      do
      {
        v29 = *((int *)v28 + 4);
        v30 = *v28;
        v31 = *((_QWORD *)a2 + 25);
        v28 += 3;
        *(_QWORD *)(v6 + 8 * v29) = v30;
        *(_QWORD *)(v7 + 8 * v29) = *(v28 - 2);
        *(_QWORD *)(v9 + 8 * v29) = 0;
        *(_BYTE *)(v29 + v31) = *(_BYTE *)(v29 + v31) & 0xF8 | 1;
        *(_QWORD *)(v8 + 8 * v29) = 0;
      }
      while ( &v39[3 * (unsigned int)(v4 - 1) + 3] != v28 );
    }
    else
    {
      do
      {
        v35 = *((int *)v28 + 4);
        v36 = *v28;
        v28 += 3;
        *(_QWORD *)(v6 + 8 * v35) = v36;
        *(_QWORD *)(v7 + 8 * v35) = *(v28 - 2);
        *(_QWORD *)(v9 + 8 * v35) = 0;
        *(_QWORD *)(v8 + 8 * v35) = 0;
      }
      while ( v28 != &v39[3 * (unsigned int)(v4 - 1) + 3] );
    }
  }
LABEL_27:
  *((_DWORD *)a2 + 1) += v4;
}

