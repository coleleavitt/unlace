/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C9120
// Address: 0x00000000000C9120

//----- (00000000000C9120) ----------------------------------------------------
char __fastcall sub_C9120(char **a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 *v4; // r12
  char *v6; // rbp
  char *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int128 v10; // xmm0
  char *v11; // rax
  char *v12; // rbx
  unsigned __int64 *v13; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // r13
  unsigned __int64 *v18; // rdi
  __int64 v19; // rbx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  char *v24; // rax
  unsigned __int64 v26; // rbp
  char *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  char v32; // al
  char *v33; // rbp
  char *v34; // rax
  __int64 v35; // [rsp+8h] [rbp-70h]
  unsigned __int64 v36; // [rsp+18h] [rbp-60h]
  __int128 v37; // [rsp+20h] [rbp-58h] BYREF
  char v38; // [rsp+30h] [rbp-48h]
  unsigned __int64 v39; // [rsp+40h] [rbp-38h]

  v4 = a2;
  v39 = __readfsqword(0x28u);
  v6 = *a1;
  v7 = a1[1];
  if ( v7 )
  {
    v8 = 16LL * (_QWORD)v7;
    if ( *(_QWORD *)&v6[16 * (_QWORD)v7 - 8] == *a2 )
    {
      v9 = (__int64)&v6[v8 - 16];
      if ( *(_BYTE *)(a3 + 28) )
      {
        v37 = *(_OWORD *)v9;
        v38 = 1;
        sub_CAFE0((unsigned __int64 *)a3, (unsigned __int64)&v37);
      }
      *(_QWORD *)(v9 + 8) = a2[1];
      if ( !*(_BYTE *)(a3 + 28) )
        goto LABEL_33;
      v10 = *(_OWORD *)v9;
      goto LABEL_31;
    }
    if ( *(_QWORD *)&v6[16 * (_QWORD)v7 - 8] < *a2 )
    {
      v37 = *(_OWORD *)a2;
      if ( a1[2] < v7 + 1 )
      {
        v6 = (char *)qvector_reserve((__int64)a1, v6, (unsigned __int64)(v7 + 1), 0x10u);
        *a1 = v6;
        v7 = a1[1];
      }
      *(_OWORD *)&v6[16 * (_QWORD)v7] = v37;
      goto LABEL_29;
    }
    v11 = &v6[v8];
    if ( v8 )
    {
      v19 = v8 >> 4;
      v20 = *a2;
      v13 = (unsigned __int64 *)*a1;
      v21 = v19;
      do
      {
        v21 >>= 1;
        v22 = 16 * v21;
        if ( v13[2 * v21 + 1] < v20 )
        {
          v21 = v19 + ~v21;
          v13 = (unsigned __int64 *)((char *)v13 + v22 + 16);
        }
        v19 = v21;
      }
      while ( v21 );
      v12 = v11;
      if ( v13 == (unsigned __int64 *)v11 )
        goto LABEL_26;
LABEL_9:
      v35 = a3;
      v14 = v4[1];
      v15 = *v13;
      if ( *v4 >= *v13 && v14 <= v13[1] )
        return 0;
      if ( v15 <= v14 )
      {
        if ( v15 < *v4 )
          v4 = v13;
        v26 = *v4;
        v27 = (char *)v13;
        v28 = v11 - (char *)v13;
        if ( v28 )
        {
          v29 = v28 >> 4;
          v27 = (char *)v13;
          v30 = v29;
          do
          {
            v30 >>= 1;
            v31 = 16 * v30;
            if ( v14 >= *(_QWORD *)&v27[16 * v30 + 8] )
            {
              v30 = v29 + ~v30;
              v27 += v31 + 16;
            }
            v29 = v30;
          }
          while ( v30 );
        }
        if ( v27 != v12 )
        {
          if ( *(_QWORD *)v27 <= v14 )
          {
            v14 = *((_QWORD *)v27 + 1);
            v27 += 16;
          }
          v12 = v27;
        }
        v32 = *(_BYTE *)(v35 + 28);
        if ( v13 == (unsigned __int64 *)v12 )
        {
          if ( v32 )
          {
            v37 = *(_OWORD *)v13;
            v38 = 1;
            sub_CAFE0((unsigned __int64 *)v35, (unsigned __int64)&v37);
          }
        }
        else
        {
          v36 = *v4;
          if ( v13 < (unsigned __int64 *)v12 && v32 )
          {
            v33 = (char *)v13;
            do
            {
              v37 = *(_OWORD *)v33;
              v38 = 1;
              sub_CAFE0((unsigned __int64 *)v35, (unsigned __int64)&v37);
              v33 += 16;
            }
            while ( v33 < v12 );
          }
          v34 = (char *)v13;
          do
            v34 += 16;
          while ( v12 != v34 );
          memmove(v13 + 2, v12, &(*a1)[16 * (_QWORD)a1[1]] - v12);
          a1[1] -= (v12 - (char *)(v13 + 2)) >> 4;
          v26 = v36;
        }
        *v13 = v26;
        v13[1] = v14;
        v18 = (unsigned __int64 *)v35;
        if ( !*(_BYTE *)(v35 + 28) )
          goto LABEL_33;
        v37 = *(_OWORD *)v13;
        v38 = 0;
      }
      else
      {
        v37 = *(_OWORD *)v4;
        v16 = ((char *)v13 - v6) >> 4;
        if ( a1[2] < v7 + 1 )
        {
          v6 = (char *)qvector_reserve((__int64)a1, v6, (unsigned __int64)(v7 + 1), 0x10u);
          *a1 = v6;
          v7 = a1[1];
        }
        v17 = 16 * v16;
        memmove(&v6[v17 + 16], &v6[v17], 16LL * (_QWORD)v7 - v17);
        *(_OWORD *)&v6[v17] = v37;
        ++a1[1];
        if ( !*(_BYTE *)(v35 + 28) )
          goto LABEL_33;
        v37 = *(_OWORD *)v4;
        v38 = 0;
        v18 = (unsigned __int64 *)v35;
      }
      goto LABEL_32;
    }
  }
  else
  {
    v11 = *a1;
  }
  v12 = v11;
  v13 = (unsigned __int64 *)*a1;
  if ( v6 != v11 )
    goto LABEL_9;
LABEL_26:
  v37 = *(_OWORD *)v4;
  v23 = (unsigned __int64)(v7 + 1);
  if ( (unsigned __int64)a1[2] < v23 )
  {
    v24 = (char *)qvector_reserve((__int64)a1, v6, v23, 0x10u);
    *a1 = v24;
    v12 = &v24[16 * (_QWORD)a1[1]];
  }
  *(_OWORD *)v12 = v37;
LABEL_29:
  ++a1[1];
  if ( *(_BYTE *)(a3 + 28) )
  {
    v10 = *(_OWORD *)v4;
LABEL_31:
    v37 = v10;
    v38 = 0;
    v18 = (unsigned __int64 *)a3;
LABEL_32:
    sub_CAFE0(v18, (unsigned __int64)&v37);
  }
LABEL_33:
  a1[3] = nullptr;
  return 1;
}
