/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140036430
// Address: 0x0000000140036430

//----- (0000000140036430) ----------------------------------------------------
void __fastcall sub_140036430(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  size_t *v4; // rbx
  _QWORD *v5; // rbp
  unsigned __int64 v6; // r8
  __int64 *v7; // rdx
  __int64 v8; // r12
  unsigned __int64 i; // rcx
  _QWORD *v10; // rsi
  unsigned __int64 v11; // r15
  _OWORD *v12; // r13
  unsigned __int64 v13; // rbp
  _QWORD *v14; // rax
  size_t v15; // rbp
  void *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  float v19; // xmm0_4
  __int64 v20; // rcx
  float v21; // xmm1_4
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rsi
  _QWORD *v25; // rcx
  _QWORD *v26; // r13
  size_t v27; // rbp
  _QWORD *v28; // rdx
  const void *v29; // rcx
  _QWORD *v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // r9
  _QWORD *v34; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v35; // [rsp+28h] [rbp-50h]
  _QWORD *v36; // [rsp+30h] [rbp-48h]
  char *v37; // [rsp+38h] [rbp-40h]
  char *v39; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v4 = (size_t *)a2;
    v5 = a1;
    while ( 1 )
    {
      v6 = v4[4];
      v7 = (__int64 *)(v4 + 2);
      if ( v4[5] > 0xF )
        v7 = (__int64 *)v4[2];
      v8 = 0xCBF29CE484222325uLL;
      for ( i = 0; i < v6; ++i )
        v8 = 0x100000001B3LL * (*((unsigned __int8 *)v7 + i) ^ (unsigned __int64)v8);
      sub_1400362D0(v5, &v34, v4 + 2, v8);
      if ( v35 )
        goto LABEL_49;
      if ( v5[2] == 0x333333333333333LL )
        sub_14006A9C4((__int64)"unordered_map/set too long");
      v36 = v5 + 1;
      v37 = nullptr;
      v39 = (char *)operator new(0x50u);
      v37 = v39;
      v10 = v39 + 16;
      *((_OWORD *)v39 + 1) = 0;
      *((_QWORD *)v39 + 4) = 0;
      *((_QWORD *)v39 + 5) = 0;
      v11 = v4[4];
      v12 = v4 + 2;
      if ( v4[5] > 0xF )
        v12 = (_OWORD *)v4[2];
      if ( v11 > 0x7FFFFFFFFFFFFFFFLL )
        unknown_libname_5();
      if ( v11 > 0xF )
      {
        v13 = v11 | 0xF;
        if ( (v11 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v13 < 0x16 )
            v13 = 22;
        }
        else
        {
          v13 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v14 = sub_140003060(v13 + 1);
        *v10 = v14;
        *((_QWORD *)v39 + 4) = v11;
        *((_QWORD *)v39 + 5) = v13;
        memcpy(v14, v12, v11 + 1);
      }
      else
      {
        *((_QWORD *)v39 + 4) = v11;
        *((_QWORD *)v39 + 5) = 15;
        *(_OWORD *)v10 = *v12;
      }
      *((_QWORD *)v39 + 6) = 0;
      *((_QWORD *)v39 + 7) = 0;
      *((_QWORD *)v39 + 8) = 0;
      v15 = v4[7];
      if ( v15 )
      {
        v16 = sub_14005AAA0(v4[7]);
        *((_QWORD *)v39 + 6) = v16;
        *((_QWORD *)v39 + 8) = v15;
        memcpy(v16, (const void *)v4[6], v15);
        *((_QWORD *)v39 + 7) = v15;
      }
      v39[72] = *((_BYTE *)v4 + 72);
      v39[73] = *((_BYTE *)v4 + 73);
      v5 = a1;
      v17 = a1 + 2;
      v18 = a1[2] + 1LL;
      v19 = v18 < 0
          ? (float)(v18 & 1 | (unsigned int)((unsigned __int64)v18 >> 1))
          + (float)(v18 & 1 | (unsigned int)((unsigned __int64)v18 >> 1))
          : (float)(int)v18;
      v20 = a1[7];
      if ( v20 < 0 )
      {
        v22 = a1[7] & 1LL | ((unsigned __int64)v20 >> 1);
        v21 = (float)(int)v22 + (float)(int)v22;
      }
      else
      {
        v21 = (float)(int)v20;
      }
      if ( (float)(v19 / v21) <= *(float *)a1 )
      {
        v25 = v34;
      }
      else
      {
        sub_1400379F0((float *)a1);
        v23 = a1[3];
        v24 = *(_QWORD **)(v23 + 16 * (v8 & a1[6]) + 8);
        v25 = (_QWORD *)a1[1];
        if ( v24 != v25 )
        {
          v26 = *(_QWORD **)(v23 + 16 * (v8 & a1[6]));
          v27 = *((_QWORD *)v39 + 4);
          while ( 1 )
          {
            v28 = v24 + 2;
            if ( v24[5] > 0xFu )
              v28 = (_QWORD *)*v28;
            v29 = v39 + 16;
            if ( *((_QWORD *)v39 + 5) > 0xFu )
              v29 = *((const void **)v39 + 2);
            if ( v27 == v24[4] && (!v27 || !memcmp(v29, v28, v27)) )
            {
              v25 = (_QWORD *)*v24;
              v5 = a1;
              v34 = (_QWORD *)*v24;
              v35 = v24;
              v17 = a1 + 2;
              goto LABEL_43;
            }
            if ( v24 == v26 )
              break;
            v24 = (_QWORD *)v24[1];
          }
          v25 = v24;
          v5 = a1;
        }
        v34 = v25;
        v35 = nullptr;
        v17 = v5 + 2;
      }
LABEL_43:
      v37 = nullptr;
      v30 = (_QWORD *)v25[1];
      ++*v17;
      *(_QWORD *)v39 = v25;
      *((_QWORD *)v39 + 1) = v30;
      *v30 = v39;
      v25[1] = v39;
      v31 = 2 * (v8 & v5[6]);
      v32 = v5[3];
      v33 = *(_QWORD **)(v32 + 16 * (v8 & v5[6]));
      if ( v33 == (_QWORD *)v5[1] )
        break;
      if ( v33 == v25 )
      {
        *(_QWORD *)(v32 + 16 * (v8 & v5[6])) = v39;
      }
      else if ( *(_QWORD **)(v32 + 16 * (v8 & v5[6]) + 8) == v30 )
      {
        goto LABEL_48;
      }
LABEL_49:
      v4 = (size_t *)*v4;
      if ( v4 == (size_t *)a3 )
        return;
    }
    *(_QWORD *)(v32 + 16 * (v8 & v5[6])) = v39;
LABEL_48:
    *(_QWORD *)(v32 + 8 * v31 + 8) = v39;
    goto LABEL_49;
  }
}
// 140037CD0: using guessed type void __noreturn unknown_libname_5(void);
