/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005BF70
// Address: 0x000000014005BF70

//----- (000000014005BF70) ----------------------------------------------------
void __fastcall sub_14005BF70(__int64 a1, unsigned __int8 *a2, char a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rax
  const __m128i *EnvironmentStringsW; // rax
  void *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  char *v11; // rbx
  __int64 v12; // r14
  void *v13; // rax
  __int64 v14; // rbx
  void *v15; // rax
  __int64 v16; // rbx
  const __m128i *v17; // rdx
  int v18; // r10d
  _QWORD *v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // ecx
  __int64 **v25; // rdx
  __int64 i; // rcx
  __int64 *j; // rdx
  _QWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // r14
  unsigned __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 **v43; // rcx
  __int64 k; // rax
  __int64 *m; // rcx
  void *v46[2]; // [rsp+20h] [rbp-40h] BYREF
  void *Block; // [rsp+30h] [rbp-30h] BYREF
  __int64 v48; // [rsp+38h] [rbp-28h]
  unsigned __int64 v49; // [rsp+40h] [rbp-20h]
  void *Src[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v51; // [rsp+58h] [rbp-8h]

  v5 = a1;
  *(_OWORD *)v46 = 0;
  v6 = operator new(0x50u);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  v46[0] = v6;
  if ( a3 )
  {
    EnvironmentStringsW = (const __m128i *)GetEnvironmentStringsW();
    sub_14005BB10((__int64 *)v46, EnvironmentStringsW);
  }
  v8 = nullptr;
  Block = nullptr;
  v9 = 0;
  v48 = 0;
  v10 = 0;
  v49 = 0;
  if ( *a2 )
  {
    do
    {
      if ( sub_14006CA14((__int64)a2, 0x3Du) )
      {
        *(_OWORD *)Src = 0;
        v51 = 0;
        if ( sub_140061F60((__int64)Src, a2, -1) )
        {
          v11 = (char *)Src[1] - 1;
          if ( !Src[1] )
            v11 = nullptr;
          if ( v11 )
          {
            if ( v48 )
              v12 = v48 - 1;
            else
              v12 = 0;
            if ( (unsigned __int64)&v11[v12 + 1] <= v49 )
            {
              v13 = Block;
            }
            else
            {
              v13 = sub_14005ABE0((__int64)&Block, Block, (unsigned __int64)&v11[v12 + 1], 2u);
              Block = v13;
            }
            v48 = (__int64)&v11[v12 + 1];
            *((_WORD *)v13 + (_QWORD)&v11[v12]) = 0;
            memcpy((char *)Block + 2 * v12, Src[0], 2LL * (_QWORD)v11);
          }
          v14 = v48 - 1;
          if ( !v48 )
            v14 = 0;
          if ( v14 + 2 <= v49 )
          {
            v15 = Block;
          }
          else
          {
            v15 = sub_14005ABE0((__int64)&Block, Block, v14 + 2, 2u);
            Block = v15;
          }
          v48 = v14 + 2;
          *((_WORD *)v15 + v14) = 0;
          *((_WORD *)Block + v14 + 1) = 0;
        }
        if ( Src[0] )
        {
          Src[1] = nullptr;
          j_free(Src[0]);
        }
      }
      a2 += strlen((const char *)a2) + 1;
    }
    while ( *a2 );
    v10 = v49;
    v9 = v48;
    v8 = Block;
    v5 = a1;
  }
  v16 = v9 - 1;
  if ( !v9 )
    v16 = 0;
  if ( v16 + 2 > v10 )
  {
    v8 = sub_14005ABE0((__int64)&Block, v8, v16 + 2, 2u);
    Block = v8;
  }
  v48 = v16 + 2;
  *((_WORD *)v8 + v16) = 0;
  *((_WORD *)Block + v16 + 1) = 0;
  v17 = (const __m128i *)&dword_140092834;
  if ( v48 )
    v17 = (const __m128i *)Block;
  sub_14005BB10((__int64 *)v46, v17);
  v18 = 1;
  v19 = v46[0];
  v20 = *(_QWORD **)v46[0];
  while ( v20 != v46[0] )
  {
    v21 = v20[5];
    v22 = v20[8];
    v23 = v22 - 1;
    if ( !v22 )
      v23 = 0;
    v24 = v21 - 1;
    if ( !v21 )
      v24 = 0;
    v18 += v24 + v23 + 2;
    v25 = (__int64 **)v20[2];
    if ( *((_BYTE *)v25 + 25) )
    {
      for ( i = v20[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
      {
        if ( v20 != *(_QWORD **)(i + 16) )
          break;
        v20 = (_QWORD *)i;
      }
      v20 = (_QWORD *)i;
    }
    else
    {
      v20 = (_QWORD *)v20[2];
      for ( j = *v25; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v20 = j;
    }
  }
  if ( (unsigned __int64)v18 > *(_QWORD *)(v5 + 16) )
  {
    *(_QWORD *)v5 = sub_14005ABE0(v5, *(void **)v5, v18, 2u);
    v19 = v46[0];
  }
  v28 = (_QWORD *)*v19;
  if ( (_QWORD *)*v19 != v19 )
  {
    do
    {
      v29 = v28[5];
      v30 = v29 - 1;
      if ( !v29 )
        v30 = 0;
      if ( v30 )
      {
        v31 = *(_QWORD *)(v5 + 8);
        v32 = v31 - 1;
        if ( !v31 )
          v32 = 0;
        v33 = v30 + v32 + 1;
        if ( v33 > *(_QWORD *)(v5 + 16) )
          *(_QWORD *)v5 = sub_14005ABE0(v5, *(void **)v5, v30 + v32 + 1, 2u);
        *(_QWORD *)(v5 + 8) = v33;
        *(_WORD *)(*(_QWORD *)v5 + 2 * (v30 + v32)) = 0;
        memcpy((void *)(*(_QWORD *)v5 + 2 * v32), (const void *)v28[4], 2 * v30);
      }
      v34 = *(_QWORD *)(v5 + 8);
      v35 = v34 - 1;
      if ( !v34 )
        v35 = 0;
      if ( (unsigned __int64)(v35 + 2) > *(_QWORD *)(v5 + 16) )
        *(_QWORD *)v5 = sub_14005ABE0(v5, *(void **)v5, v35 + 2, 2u);
      *(_QWORD *)(v5 + 8) = v35 + 2;
      *(_WORD *)(*(_QWORD *)v5 + 2 * v35) = 61;
      *(_WORD *)(*(_QWORD *)v5 + 2 * v35 + 2) = 0;
      v36 = v28[8];
      v37 = v36 - 1;
      if ( !v36 )
        v37 = 0;
      if ( v37 )
      {
        v38 = *(_QWORD *)(v5 + 8);
        v39 = v38 - 1;
        if ( !v38 )
          v39 = 0;
        v40 = v37 + v39 + 1;
        if ( v40 > *(_QWORD *)(v5 + 16) )
          *(_QWORD *)v5 = sub_14005ABE0(v5, *(void **)v5, v37 + v39 + 1, 2u);
        *(_QWORD *)(v5 + 8) = v40;
        *(_WORD *)(*(_QWORD *)v5 + 2 * (v37 + v39)) = 0;
        memcpy((void *)(*(_QWORD *)v5 + 2 * v39), (const void *)v28[7], 2 * v37);
      }
      v41 = *(_QWORD *)(v5 + 8);
      v42 = v41 - 1;
      if ( !v41 )
        v42 = 0;
      if ( (unsigned __int64)(v42 + 2) > *(_QWORD *)(v5 + 16) )
        *(_QWORD *)v5 = sub_14005ABE0(v5, *(void **)v5, v42 + 2, 2u);
      *(_QWORD *)(v5 + 8) = v42 + 2;
      *(_WORD *)(*(_QWORD *)v5 + 2 * v42) = 0;
      *(_WORD *)(*(_QWORD *)v5 + 2 * v42 + 2) = 0;
      v43 = (__int64 **)v28[2];
      if ( *((_BYTE *)v43 + 25) )
      {
        for ( k = v28[1]; !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 8) )
        {
          if ( v28 != *(_QWORD **)(k + 16) )
            break;
          v28 = (_QWORD *)k;
        }
        v28 = (_QWORD *)k;
      }
      else
      {
        v28 = (_QWORD *)v28[2];
        for ( m = *v43; !*((_BYTE *)m + 25); m = (__int64 *)*m )
          v28 = m;
      }
    }
    while ( v28 != v46[0] );
  }
  sub_14005BE70(v5, 0);
  if ( Block )
  {
    v48 = 0;
    j_free(Block);
    Block = nullptr;
    v49 = 0;
  }
  sub_1400469A0((__int64)v46, (__int64)v46, *((__int64 **)v46[0] + 1));
  j_j_free(v46[0]);
}
// 140092834: using guessed type int dword_140092834;
