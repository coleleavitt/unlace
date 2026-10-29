void __fastcall sub_2040880(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r12
  _QWORD *v9; // rdx
  __int64 *v10; // rbp
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r13
  size_t v15; // rax
  void *v16; // rdi
  size_t v17; // r15
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  _BYTE *v20; // rax
  __int64 v21; // r15
  _DWORD *v22; // rdx
  unsigned int *v23; // r12
  unsigned int *v24; // r14
  unsigned int *v25; // r13
  __int64 v26; // rsi
  _WORD *v27; // rdx
  __int64 v28; // rdx
  size_t v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  size_t v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // edx
  __int64 *v41; // [rsp+8h] [rbp-50h]
  __m128 v42[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (__int64)(a1 + 35);
  v4 = *((unsigned int *)a1 + 74);
  v5 = a1[35];
  if ( !(_DWORD)v4 )
    goto LABEL_40;
  v6 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v7 = (_QWORD *)(v5 + 48LL * v6);
  if ( a2 != *v7 )
  {
    if ( *v7 != -4096 )
    {
      v40 = 1;
      do
      {
        v6 = (v4 - 1) & (v40 + v6);
        v7 = (_QWORD *)(v5 + 48LL * v6);
        if ( a2 == *v7 )
          goto LABEL_3;
        ++v40;
      }
      while ( *v7 != -4096 );
    }
LABEL_40:
    sub_2033820(v42, (_QWORD *)(v5 + 48 * v4), (_QWORD *)(v5 + 48 * v4), v2, 1);
    v8 = v42[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_2033820(v42, v7, (_QWORD *)(v5 + 48 * v4), v2, 1);
  v8 = v42[0].m128_u64[0];
LABEL_4:
  v9 = (_QWORD *)(a1[35] + 48LL * *((unsigned int *)a1 + 74));
  sub_2033820(v42, v9, v9, v2, 1);
  if ( v8 != v42[0].m128_u64[0] )
  {
    sub_995540(*a1, "\n; uselistorder directives\n");
    v10 = *(__int64 **)(v8 + 32);
    v11 = 4LL * *(unsigned int *)(v8 + 40);
    v41 = &v10[v11];
    if ( &v10[v11] != v10 )
    {
      while ( 1 )
      {
        v12 = *v10;
        v13 = *a1;
        v14 = *(_QWORD *)(a1[4] + 16);
        if ( v14 )
        {
          v15 = j__strlen("  ");
          v16 = *(void **)(v13 + 32);
          v17 = v15;
          v18 = *(_QWORD *)(v13 + 24) - (_QWORD)v16;
          if ( v17 > v18 )
          {
            sub_227BF10(v13, "  ", v17);
            v13 = *a1;
            v16 = *(void **)(*a1 + 32);
            v18 = *(_QWORD *)(*a1 + 24) - (_QWORD)v16;
LABEL_9:
            if ( v18 <= 0xB )
              goto LABEL_10;
            goto LABEL_30;
          }
          if ( !v17 )
            goto LABEL_9;
          memcpy(v16, "  ", v17);
          *(_QWORD *)(v13 + 32) += v17;
          v13 = *a1;
        }
        v16 = *(void **)(v13 + 32);
        if ( *(_QWORD *)(v13 + 24) - (_QWORD)v16 <= 0xBu )
        {
LABEL_10:
          sub_227BF10(v13, "uselistorder", 12);
          v19 = *a1;
          if ( v14 )
            goto LABEL_11;
          goto LABEL_31;
        }
LABEL_30:
        qmemcpy(v16, "uselistorder", 12);
        *(_QWORD *)(v13 + 32) += 12LL;
        v19 = *a1;
        if ( v14 )
          goto LABEL_11;
LABEL_31:
        if ( *(_BYTE *)v12 != 23 )
        {
LABEL_11:
          v20 = *(_BYTE **)(v19 + 32);
          if ( v20 == *(_BYTE **)(v19 + 24) )
          {
            sub_227BF10(v19, " ", 1);
          }
          else
          {
            *v20 = 32;
            ++*(_QWORD *)(v19 + 32);
          }
          sub_2040770(a1, v12);
          goto LABEL_14;
        }
        v29 = j__strlen("_bb ");
        sub_9954E0(v19, "_bb ", v29);
        sub_2040820(a1, *(_QWORD *)(v12 + 72), v30, v31, v32, v33);
        v34 = *a1;
        v35 = j__strlen(", ");
        sub_9954E0(v34, ", ", v35);
        sub_2040820(a1, v12, v36, v37, v38, v39);
LABEL_14:
        v21 = *a1;
        v22 = *(_DWORD **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v22 > 3u )
        {
          *v22 = 544940076;
          *(_QWORD *)(v21 + 32) += 4LL;
        }
        else
        {
          v21 = sub_227BF10(*a1, ", { ", 4);
        }
        v23 = (unsigned int *)v10[2];
        v24 = (unsigned int *)v10[1];
        if ( v23 != v24 )
        {
          sub_227B910(v21, *v24);
          if ( v23 != v24 + 1 )
          {
            v25 = v24 + 1;
            do
            {
              v27 = *(_WORD **)(v21 + 32);
              if ( *(_QWORD *)(v21 + 24) - (_QWORD)v27 > 1u )
              {
                *v27 = 8236;
                *(_QWORD *)(v21 + 32) += 2LL;
              }
              else
              {
                sub_227BF10(v21, ", ", 2);
              }
              v26 = *v25++;
              sub_227B910(v21, v26);
            }
            while ( v23 != v25 );
          }
        }
        v28 = *(_QWORD *)(v21 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v21 + 24) - v28) > 2 )
        {
          *(_BYTE *)(v28 + 2) = 10;
          v10 += 4;
          *(_WORD *)v28 = 32032;
          *(_QWORD *)(v21 + 32) += 3LL;
          if ( v41 == v10 )
            return;
        }
        else
        {
          v10 += 4;
          sub_227BF10(v21, " }\n", 3);
          if ( v41 == v10 )
            return;
        }
      }
    }
  }
}
