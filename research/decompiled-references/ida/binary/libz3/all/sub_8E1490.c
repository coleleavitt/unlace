__int64 __fastcall sub_8E1490(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r12
  int *v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // r8
  int v12; // esi
  unsigned int v13; // edx
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rdi
  _DWORD *v17; // rax
  int v18; // edx
  _DWORD *v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // edx
  int v22; // edx
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // r15d
  __int64 v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  void *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-40h]

  v4 = 8LL * a2;
  result = *(_QWORD *)(a1 + 664);
  v6 = result + v4;
  if ( result )
  {
    v7 = 8LL * *(unsigned int *)(result - 4);
    v8 = result + v7;
    if ( v4 == v7 )
      goto LABEL_16;
  }
  else
  {
    v8 = 0;
    if ( !v4 )
      return result;
  }
  do
  {
    v9 = *(int **)(v8 - 8);
    v10 = *(unsigned int *)(a1 + 696);
    v8 -= 8;
    v11 = *(_DWORD **)(a1 + 688);
    v12 = *v9;
    v13 = v10 - 1;
    v10 *= 24;
    v14 = (_DWORD *)((char *)v11 + v10);
    v15 = 24LL * (*v9 & v13);
    v16 = &v11[(unsigned __int64)v15 / 4];
    if ( v15 == v10 )
    {
LABEL_18:
      if ( v11 != v16 )
      {
        v17 = *(_DWORD **)(a1 + 688);
        while ( 1 )
        {
          v22 = v17[1];
          if ( v22 == 2 )
          {
            if ( v12 == *v17 && v12 == v17[2] )
              goto LABEL_10;
          }
          else if ( !v22 )
          {
            goto LABEL_14;
          }
          v17 += 6;
          if ( v16 == v17 )
            goto LABEL_14;
        }
      }
      goto LABEL_14;
    }
    v17 = &v11[(unsigned __int64)v15 / 4];
    while ( 1 )
    {
      v18 = v17[1];
      if ( v18 != 2 )
      {
        if ( !v18 )
          goto LABEL_14;
        goto LABEL_6;
      }
      if ( v12 == *v17 && v12 == v17[2] )
        break;
LABEL_6:
      v17 += 6;
      if ( v14 == v17 )
        goto LABEL_18;
    }
LABEL_10:
    v19 = v17 + 6;
    v20 = *(unsigned int *)(a1 + 700);
    if ( v14 == v17 + 6 )
      v19 = *(_DWORD **)(a1 + 688);
    v21 = v20 - 1;
    if ( !v19[1] )
    {
      v17[1] = 0;
      *(_DWORD *)(a1 + 700) = v21;
      goto LABEL_14;
    }
    v17[1] = 1;
    v23 = *(_DWORD *)(a1 + 704);
    *(_DWORD *)(a1 + 700) = v21;
    v24 = v23 + 1;
    if ( v21 < 0x40 )
      v21 = 64;
    *(_DWORD *)(a1 + 704) = v24;
    if ( v21 < v24 && !(unsigned __int8)sub_186AF10(v20) )
    {
      v25 = *(_DWORD *)(a1 + 696);
      v26 = sub_186B270(24LL * v25);
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          v28 = (_QWORD *)v26;
LABEL_36:
          *v28 = 0;
        }
        else
        {
          v27 = (_QWORD *)v26;
          do
          {
            *v27 = 0;
            v27 += 6;
            *(v27 - 3) = 0;
          }
          while ( v27 != (_QWORD *)(v26 + 48LL * (v25 >> 1)) );
          if ( (v25 & 1) != 0 )
          {
            v28 = (_QWORD *)(v26 + 24LL * (v25 & 0xFFFFFFFE));
            goto LABEL_36;
          }
        }
      }
      v31 = v26;
      sub_8E0730(*(const __m128i **)(a1 + 688), *(_DWORD *)(a1 + 696), v26, *(_DWORD *)(a1 + 696));
      v29 = *(void **)(a1 + 688);
      v30 = v31;
      if ( v29 )
      {
        sub_186B220(v29);
        v30 = v31;
      }
      *(_QWORD *)(a1 + 688) = v30;
      *(_DWORD *)(a1 + 704) = 0;
    }
LABEL_14:
    sub_186B220(v9);
  }
  while ( v6 != v8 );
  result = *(_QWORD *)(a1 + 664);
  if ( result )
LABEL_16:
    *(_DWORD *)(result - 4) = a2;
  return result;
}

