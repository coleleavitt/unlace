__int64 __fastcall sub_DB10F0(__int64 *a1, __int64 a2)
{
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r12
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // r14
  __int64 v27; // rax
  __int64 v28; // r12
  unsigned int v29; // ebx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  _QWORD *v37; // [rsp+10h] [rbp-58h]
  unsigned int v38; // [rsp+10h] [rbp-58h]
  int v39[2]; // [rsp+28h] [rbp-40h] BYREF

  if ( !*((_BYTE *)a1 + 114) )
    goto LABEL_7;
  v4 = (__int64 *)(a2 + 32);
  if ( !*(_WORD *)(a2 + 4) )
  {
    v5 = *(unsigned int *)(a2 + 24);
    v6 = &v4[v5];
    if ( v5 * 8 )
    {
      v7 = v4;
      do
      {
        if ( *(_WORD *)(*v7 + 4) == 1 )
          goto LABEL_7;
        ++v7;
      }
      while ( v6 != v7 );
    }
  }
  *((_DWORD *)a1 + 92) = 0;
  v10 = *(unsigned int *)(a2 + 24);
  v35 = &v4[v10];
  if ( !(v10 * 8) )
  {
    v12 = a1[45];
    LODWORD(v11) = 0;
    return sub_15E1EC0(*a1, v11, v12);
  }
  LODWORD(v11) = 0;
  v37 = a1 + 47;
  do
  {
    v14 = *v4;
    if ( *(_WORD *)(*v4 + 4) )
      goto LABEL_7;
    v15 = *((_DWORD *)a1 + 93);
    if ( (unsigned int)v11 < v15 )
    {
      v12 = a1[45];
    }
    else
    {
      v16 = 2 * v15;
      v17 = sub_186B270(8 * v16);
      LODWORD(v11) = *((_DWORD *)a1 + 92);
      v18 = (_QWORD *)a1[45];
      v12 = v17;
      if ( (_DWORD)v11 )
      {
        if ( (unsigned int)(v11 - 1) <= 2 || (_QWORD *)v17 == v18 + 1 )
        {
          v20 = 0;
          do
          {
            *(_QWORD *)(v12 + v20 * 8) = v18[v20];
            ++v20;
          }
          while ( v20 != (unsigned int)v11 );
        }
        else
        {
          v19 = 0;
          do
          {
            *(__m128i *)(v12 + v19 * 8) = _mm_loadu_si128((const __m128i *)&v18[v19]);
            v19 += 2;
          }
          while ( 2LL * ((unsigned int)v11 >> 1) != v19 );
          if ( (v11 & 1) != 0 )
            *(_QWORD *)(v12 + 8LL * ((unsigned int)v11 & 0xFFFFFFFE)) = v18[(unsigned int)v11 & 0xFFFFFFFE];
        }
      }
      if ( v18 && v18 != v37 )
      {
        sub_186B220(v18);
        LODWORD(v11) = *((_DWORD *)a1 + 92);
      }
      a1[45] = v12;
      *((_DWORD *)a1 + 93) = v16;
    }
    v13 = (unsigned int)v11;
    LODWORD(v11) = v11 + 1;
    ++v4;
    *(_QWORD *)(v12 + 8 * v13) = v14;
    *((_DWORD *)a1 + 92) = v11;
  }
  while ( v35 != v4 );
  if ( !(_DWORD)v11 )
    return sub_15E1EC0(*a1, v11, v12);
  v38 = 0;
  while ( 1 )
  {
    v21 = v12 + 8LL * v38;
    v22 = *(_QWORD *)v21;
    if ( !*(_WORD *)(*(_QWORD *)v21 + 4LL) )
    {
      v23 = v22 + 32;
      v24 = 8LL * *(unsigned int *)(v22 + 24);
      if ( v24 )
      {
        while ( *(_WORD *)(*(_QWORD *)v23 + 4LL) != 1 )
        {
          v23 += 8;
          if ( v22 + 32 + v24 == v23 )
            goto LABEL_38;
        }
        ++v38;
        LODWORD(v11) = *((_DWORD *)a1 + 92);
        goto LABEL_36;
      }
    }
LABEL_38:
    v11 = (unsigned int)(v11 - 1);
    *(_QWORD *)v21 = *(_QWORD *)(v12 + 8 * v11);
    *((_DWORD *)a1 + 92) = v11;
    if ( *(_WORD *)(v22 + 4) || (*(_BYTE *)(v22 + 30) & 1) == 0 )
    {
      v25 = 8LL * *(unsigned int *)(v22 + 24);
      v36 = v22 + 32 + v25;
      if ( v25 )
        break;
    }
LABEL_36:
    if ( v38 >= (unsigned int)v11 )
      return sub_15E1EC0(*a1, v11, v12);
  }
  v26 = (__int64 *)(v22 + 32);
  while ( 1 )
  {
    v28 = *v26;
    if ( *(_WORD *)(*v26 + 4) )
      break;
    v29 = *((_DWORD *)a1 + 93);
    if ( (unsigned int)v11 < v29 )
    {
      v12 = a1[45];
    }
    else
    {
      v30 = 2 * v29;
      v31 = sub_186B270(8 * v30);
      LODWORD(v11) = *((_DWORD *)a1 + 92);
      v32 = (__int64 *)a1[45];
      v12 = v31;
      if ( (_DWORD)v11 )
      {
        if ( (unsigned int)(v11 - 1) <= 2 || (__int64 *)v31 == v32 + 1 )
        {
          v34 = 0;
          do
          {
            *(_QWORD *)(v12 + v34 * 8) = v32[v34];
            ++v34;
          }
          while ( (unsigned int)v11 != v34 );
        }
        else
        {
          v33 = 0;
          do
          {
            *(__m128i *)(v12 + v33 * 8) = _mm_loadu_si128((const __m128i *)&v32[v33]);
            v33 += 2;
          }
          while ( 2LL * ((unsigned int)v11 >> 1) != v33 );
          if ( (v11 & 1) != 0 )
            *(_QWORD *)(v12 + 8LL * ((unsigned int)v11 & 0xFFFFFFFE)) = v32[(unsigned int)v11 & 0xFFFFFFFE];
        }
      }
      if ( v32 )
      {
        if ( v32 != a1 + 47 )
        {
          sub_186B220(v32);
          LODWORD(v11) = *((_DWORD *)a1 + 92);
        }
      }
      a1[45] = v12;
      *((_DWORD *)a1 + 93) = v30;
    }
    v27 = (unsigned int)v11;
    LODWORD(v11) = v11 + 1;
    ++v26;
    *(_QWORD *)(v12 + 8 * v27) = v28;
    *((_DWORD *)a1 + 92) = v11;
    if ( (__int64 *)v36 == v26 )
      goto LABEL_36;
  }
LABEL_7:
  v8 = *a1;
  *(_QWORD *)v39 = a2;
  return sub_15E1EC0(v8, 1, (int)v39);
}

