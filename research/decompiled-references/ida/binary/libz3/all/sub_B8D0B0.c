__int64 __fastcall sub_B8D0B0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // esi
  _DWORD *v11; // r8
  unsigned int v12; // edx
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  _DWORD *v16; // rax
  int v17; // edx
  _DWORD *v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // edx
  int v21; // edx
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r14
  __m128i *v25; // rax
  __m128i *v26; // r15
  __m128i *v27; // rdx
  __m128i *v28; // rax
  void *v29; // rdi

  v3 = 16LL * a2;
  result = *(_QWORD *)(a1 + 1352);
  v6 = result + v3;
  if ( result )
  {
    v7 = 16LL * *(unsigned int *)(result - 4);
    v8 = result + v7;
    if ( v3 == v7 )
      goto LABEL_16;
  }
  else
  {
    v8 = 0;
    if ( !v3 )
      return result;
  }
  do
  {
    v9 = *(unsigned int *)(a1 + 1384);
    v10 = *(_DWORD *)(v8 - 16);
    v8 -= 16;
    v11 = *(_DWORD **)(a1 + 1376);
    v12 = v9 - 1;
    v9 *= 16;
    v13 = (_DWORD *)((char *)v11 + v9);
    v14 = 16LL * (v10 & v12);
    v15 = &v11[(unsigned __int64)v14 / 4];
    if ( v14 == v9 )
    {
LABEL_18:
      if ( v11 != v15 )
      {
        v16 = *(_DWORD **)(a1 + 1376);
        while ( 1 )
        {
          v21 = v16[1];
          if ( v21 == 2 )
          {
            if ( v10 == *v16 && v10 == v16[2] )
              goto LABEL_10;
          }
          else if ( !v21 )
          {
            goto LABEL_14;
          }
          v16 += 4;
          if ( v15 == v16 )
            goto LABEL_14;
        }
      }
      continue;
    }
    v16 = &v11[(unsigned __int64)v14 / 4];
    while ( 1 )
    {
      v17 = v16[1];
      if ( v17 != 2 )
      {
        if ( !v17 )
          goto LABEL_14;
        goto LABEL_6;
      }
      if ( v10 == *v16 && v10 == v16[2] )
        break;
LABEL_6:
      v16 += 4;
      if ( v13 == v16 )
        goto LABEL_18;
    }
LABEL_10:
    v18 = v16 + 4;
    v19 = *(unsigned int *)(a1 + 1388);
    if ( v13 == v16 + 4 )
      v18 = *(_DWORD **)(a1 + 1376);
    v20 = v19 - 1;
    if ( !v18[1] )
    {
      v16[1] = 0;
      *(_DWORD *)(a1 + 1388) = v20;
      continue;
    }
    v16[1] = 1;
    v22 = *(_DWORD *)(a1 + 1392);
    *(_DWORD *)(a1 + 1388) = v20;
    v23 = v22 + 1;
    if ( v20 < 0x40 )
      v20 = 64;
    *(_DWORD *)(a1 + 1392) = v23;
    if ( v20 < v23 && !(unsigned __int8)sub_186AF10(v19) )
    {
      v24 = *(unsigned int *)(a1 + 1384);
      v25 = (__m128i *)sub_186B270(16 * v24);
      v26 = v25;
      if ( (_DWORD)v24 )
      {
        if ( (_DWORD)v24 == 1 )
          goto LABEL_36;
        v27 = v25;
        v28 = &v25[2 * ((unsigned int)v24 >> 1)];
        do
        {
          v27->m128i_i64[0] = 0;
          v27 += 2;
          v27[-1].m128i_i64[0] = 0;
        }
        while ( v27 != v28 );
        if ( (v24 & 1) != 0 )
        {
          v25 = &v26[(unsigned int)v24 & 0xFFFFFFFE];
LABEL_36:
          v25->m128i_i64[0] = 0;
        }
      }
      sub_B8CB30(*(const __m128i **)(a1 + 1376), *(_DWORD *)(a1 + 1384), v26, *(_DWORD *)(a1 + 1384));
      v29 = *(void **)(a1 + 1376);
      if ( v29 )
        sub_186B220(v29);
      *(_QWORD *)(a1 + 1376) = v26;
      *(_DWORD *)(a1 + 1392) = 0;
    }
LABEL_14:
    ;
  }
  while ( v6 != v8 );
  result = *(_QWORD *)(a1 + 1352);
  if ( result )
LABEL_16:
    *(_DWORD *)(result - 4) = a2;
  return result;
}

