/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140037730
// Address: 0x0000000140037730

//----- (0000000140037730) ----------------------------------------------------
__int64 __fastcall sub_140037730(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r13
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 result; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  unsigned __int64 v11; // r9
  _QWORD *v12; // r8
  size_t v13; // r14
  size_t v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r10
  _QWORD *v17; // rbx
  _QWORD *v18; // rdx
  const void *v19; // rcx
  unsigned __int64 v20; // r13
  int v21; // eax
  _QWORD *v22; // r12
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  const void *v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // r8
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // r8
  _QWORD *v34; // rdx
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  unsigned __int64 v38; // [rsp+78h] [rbp+10h]
  _QWORD *v39; // [rsp+80h] [rbp+18h]
  _QWORD *v40; // [rsp+88h] [rbp+20h]

  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    sub_14006A9C4((__int64)"invalid hash bucket count");
  v4 = v2[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  v7 = v2 + 3;
  v40 = v2 + 3;
  sub_14000C2B0((__int64)(v2 + 3), 2 * v6, v4);
  v2[7] = v6;
  result = v6 - 1;
  v2[6] = v6 - 1;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  if ( v9 != (_QWORD *)v4 )
  {
    result = 0xCBF29CE484222325uLL;
    do
    {
      v11 = v9[5];
      v12 = v9 + 2;
      v10 = (_QWORD *)*v10;
      v13 = v9[4];
      v38 = v11;
      if ( v11 > 0xF )
        v12 = (_QWORD *)v9[2];
      v14 = 0;
      if ( v13 )
      {
        do
        {
          v15 = *((unsigned __int8 *)v12 + v14++);
          result = 0x100000001B3LL * (v15 ^ result);
        }
        while ( v14 < v13 );
        v38 = v9[5];
      }
      v16 = (_QWORD *)(16 * (v2[6] & result) + *v7);
      v39 = v16;
      if ( *v16 == v4 )
      {
        *v16 = v9;
      }
      else
      {
        v17 = (_QWORD *)v16[1];
        v18 = v17 + 2;
        if ( v17[5] > 0xFu )
          v18 = (_QWORD *)*v18;
        v19 = v9 + 2;
        v20 = v9[5];
        if ( v11 > 0xF )
          v19 = (const void *)v9[2];
        if ( v13 != v17[4] || v13 && (v21 = memcmp(v19, v18, v13), v16 = v39, v11 = v20, v38 = v20, v21) )
        {
          v22 = (_QWORD *)*v16;
          if ( (_QWORD *)*v16 == v17 )
          {
LABEL_29:
            v26 = (_QWORD *)v9[1];
            v2 = a1;
            v7 = v40;
            *v26 = v10;
            v27 = (_QWORD *)v10[1];
            *v27 = v17;
            v28 = (_QWORD *)v17[1];
            *v28 = v9;
            v17[1] = v27;
            v10[1] = v26;
            v9[1] = v28;
            *v16 = v9;
            goto LABEL_35;
          }
          while ( 1 )
          {
            v23 = (_QWORD *)v17[1];
            v17 = v23;
            v24 = v23 + 2;
            if ( v23[5] > 0xFu )
              v24 = (_QWORD *)*v24;
            v25 = v9 + 2;
            if ( v11 > 0xF )
              v25 = (const void *)v9[2];
            if ( v13 == v23[4] )
            {
              if ( !v13 || !memcmp(v25, v24, v13) )
              {
                v29 = (_QWORD *)*v17;
                v30 = (_QWORD *)v9[1];
                v2 = a1;
                v7 = v40;
                *v30 = v10;
                v31 = (_QWORD *)v10[1];
                *v31 = v29;
                v32 = (_QWORD *)v29[1];
                *v32 = v9;
                v29[1] = v31;
                v10[1] = v30;
                v9[1] = v32;
                goto LABEL_35;
              }
              v11 = v38;
            }
            if ( v22 == v17 )
            {
              v16 = v39;
              goto LABEL_29;
            }
          }
        }
        v33 = (_QWORD *)*v17;
        if ( (_QWORD *)*v17 != v9 )
        {
          v34 = (_QWORD *)v9[1];
          *v34 = v10;
          v35 = (_QWORD *)v10[1];
          *v35 = v33;
          v36 = (_QWORD *)v33[1];
          *v36 = v9;
          v33[1] = v35;
          v10[1] = v34;
          v9[1] = v36;
        }
        v2 = a1;
        v7 = v40;
      }
      v16[1] = v9;
LABEL_35:
      v9 = v10;
      result = 0xCBF29CE484222325uLL;
    }
    while ( v10 != (_QWORD *)v4 );
  }
  return result;
}
