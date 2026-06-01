void __fastcall sub_A45A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  _BYTE *i; // r13
  __int64 v8; // rcx
  __int64 v9; // r12
  _BYTE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rax
  size_t v15; // rcx
  size_t v16; // r10
  const void *v17; // r15
  size_t v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  size_t v21; // rdx
  _OWORD *v22; // rsi
  size_t v23; // r12
  __int64 v24; // r13
  __int64 v25; // rdx
  size_t v26; // r15
  const void *v27; // r9
  size_t v28; // rdx
  signed __int64 v29; // rax
  __int64 v30; // rbp
  _BYTE *v31; // rdi
  __int64 v32; // rbp
  _QWORD *v33; // rsi
  size_t v34; // [rsp+0h] [rbp-98h]
  const void *v35; // [rsp+0h] [rbp-98h]
  size_t v37; // [rsp+20h] [rbp-78h]
  __int64 v38; // [rsp+28h] [rbp-70h]
  void *s2; // [rsp+40h] [rbp-58h] BYREF
  size_t v42; // [rsp+48h] [rbp-50h]
  _OWORD v43[4]; // [rsp+50h] [rbp-48h] BYREF

  v5 = a2;
  v6 = a1 + 32 * a2;
  v38 = (a3 - 1) / 2;
  if ( a2 < v38 )
  {
    for ( i = (_BYTE *)(v6 + 16); ; i = (_BYTE *)v8 )
    {
      v12 = 2 * (v5 + 1);
      v13 = (v5 + 1) << 6;
      v14 = a1 + v13 - 32;
      v6 = a1 + v13;
      v15 = *(_QWORD *)(v6 + 8);
      v16 = *(_QWORD *)(v14 + 8);
      v17 = *(const void **)v6;
      v18 = v16;
      if ( v15 <= v16 )
        v18 = *(_QWORD *)(v6 + 8);
      if ( v18 )
      {
        v37 = *(_QWORD *)(v14 + 8);
        v34 = *(_QWORD *)(v6 + 8);
        v19 = memcmp(*(const void **)v6, *(const void **)v14, v18);
        v15 = v34;
        v16 = v37;
        if ( v19 )
          goto LABEL_13;
      }
      v20 = v15 - v16;
      if ( v20 <= 0x7FFFFFFF )
        break;
LABEL_3:
      v8 = v6 + 16;
      v9 = a1 + 32 * v5;
      v10 = *(_BYTE **)v9;
      if ( (const void *)(v6 + 16) == v17 )
      {
        v21 = *(_QWORD *)(v6 + 8);
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            *v10 = *(_BYTE *)(v6 + 16);
            v21 = *(_QWORD *)(v6 + 8);
            v10 = *(_BYTE **)v9;
          }
          else
          {
            memcpy(v10, v17, v21);
            v21 = *(_QWORD *)(v6 + 8);
            v10 = *(_BYTE **)v9;
            v8 = v6 + 16;
          }
        }
        *(_QWORD *)(v9 + 8) = v21;
        v10[v21] = 0;
        v10 = *(_BYTE **)v6;
      }
      else
      {
        if ( v10 == i )
        {
          *(_QWORD *)v9 = v17;
          *(_QWORD *)(v9 + 8) = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(v6 + 16);
        }
        else
        {
          *(_QWORD *)v9 = v17;
          v11 = *(_QWORD *)(v9 + 16);
          *(_QWORD *)(v9 + 8) = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(v6 + 16);
          if ( v10 )
          {
            *(_QWORD *)v6 = v10;
            *(_QWORD *)(v6 + 16) = v11;
            goto LABEL_7;
          }
        }
        *(_QWORD *)v6 = v8;
        v10 = (_BYTE *)(v6 + 16);
      }
LABEL_7:
      *(_QWORD *)(v6 + 8) = 0;
      v5 = v12;
      *v10 = 0;
      if ( v12 >= v38 )
        goto LABEL_25;
    }
    if ( v20 >= (__int64)0xFFFFFFFF80000000LL )
    {
      v19 = v20;
LABEL_13:
      if ( v19 >= 0 )
        goto LABEL_3;
    }
    --v12;
    v6 = a1 + 32 * v12;
    v17 = *(const void **)v6;
    goto LABEL_3;
  }
  v12 = a2;
LABEL_25:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v12 )
  {
    v32 = v12 + 1;
    v33 = (_QWORD *)(a1 + (v32 << 6) - 32);
    v12 = 2 * v32 - 1;
    sub_9E6D90(v6, v33);
    v6 = a1 + 32 * v12;
  }
  s2 = v43;
  v22 = *(_OWORD **)a4;
  if ( *(_QWORD *)a4 == a4 + 16 )
  {
    v22 = v43;
    v43[0] = _mm_loadu_si128((const __m128i *)(a4 + 16));
  }
  else
  {
    s2 = *(void **)a4;
    *(_QWORD *)&v43[0] = *(_QWORD *)(a4 + 16);
  }
  *(_QWORD *)a4 = a4 + 16;
  v23 = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(a4 + 8) = 0;
  v42 = v23;
  *(_BYTE *)(a4 + 16) = 0;
  v24 = (v12 - 1) / 2;
  if ( v12 > a2 )
  {
    while ( 1 )
    {
      v6 = a1 + 32 * v24;
      v26 = *(_QWORD *)(v6 + 8);
      v27 = *(const void **)v6;
      v28 = v26;
      if ( v23 <= v26 )
        v28 = v23;
      if ( v28 )
      {
        v35 = *(const void **)v6;
        LODWORD(v29) = memcmp(*(const void **)v6, v22, v28);
        v27 = v35;
        if ( (_DWORD)v29 )
          goto LABEL_43;
      }
      v29 = v26 - v23;
      if ( (__int64)(v26 - v23) > 0x7FFFFFFF )
      {
        v6 = a1 + 32 * v12;
        break;
      }
      if ( v29 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_43:
        if ( (int)v29 >= 0 )
        {
          v6 = a1 + 32 * v12;
          break;
        }
      }
      v30 = a1 + 32 * v12;
      v31 = *(_BYTE **)v30;
      if ( v27 == (const void *)(v6 + 16) )
      {
        if ( v26 )
        {
          if ( v26 == 1 )
            *v31 = *(_BYTE *)(v6 + 16);
          else
            memcpy(v31, v27, v26);
          v26 = *(_QWORD *)(v6 + 8);
          v31 = *(_BYTE **)v30;
        }
        *(_QWORD *)(v30 + 8) = v26;
        v31[v26] = 0;
        v31 = *(_BYTE **)v6;
      }
      else
      {
        if ( v31 == (_BYTE *)(v30 + 16) )
        {
          *(_QWORD *)v30 = v27;
          *(_QWORD *)(v30 + 8) = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(v30 + 16) = *(_QWORD *)(v6 + 16);
        }
        else
        {
          *(_QWORD *)v30 = v27;
          v25 = *(_QWORD *)(v30 + 16);
          *(_QWORD *)(v30 + 8) = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(v30 + 16) = *(_QWORD *)(v6 + 16);
          if ( v31 )
          {
            *(_QWORD *)v6 = v31;
            *(_QWORD *)(v6 + 16) = v25;
            goto LABEL_35;
          }
        }
        *(_QWORD *)v6 = v6 + 16;
        v31 = (_BYTE *)(v6 + 16);
      }
LABEL_35:
      *(_QWORD *)(v6 + 8) = 0;
      *v31 = 0;
      if ( a2 >= v24 )
        break;
      v23 = v42;
      v22 = s2;
      v12 = v24;
      v24 = (v24 - 1) / 2;
    }
  }
  sub_9E6D90(v6, &s2);
  if ( s2 != v43 )
    operator delete(s2);
}

