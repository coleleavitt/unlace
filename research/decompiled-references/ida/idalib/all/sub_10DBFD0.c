void __fastcall sub_10DBFD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rbx
  size_t v7; // r10
  size_t v8; // rdx
  const void *v9; // rsi
  int v10; // eax
  __int64 v11; // rbp
  _BYTE *v12; // rax
  __int64 v13; // r15
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r14
  size_t v17; // rax
  _BYTE *v18; // r11
  size_t v19; // r13
  int v20; // eax
  size_t v21; // rdx
  _OWORD *v22; // r15
  __int64 v23; // rcx
  size_t v24; // r13
  _OWORD *v25; // rax
  __int64 v26; // r15
  size_t v27; // r14
  void *v28; // r13
  size_t v29; // r8
  size_t v30; // rdx
  int v31; // eax
  __int64 v32; // rbp
  const void *v33; // rsi
  _BYTE *v34; // rdi
  __int64 v35; // rdx
  size_t v36; // rax
  int v37; // eax
  __int64 v38; // rdi
  size_t v39; // rdx
  size_t s2a; // [rsp+0h] [rbp-B8h]
  const void *s2; // [rsp+0h] [rbp-B8h]
  _BYTE *i; // [rsp+18h] [rbp-A0h]
  size_t v43; // [rsp+18h] [rbp-A0h]
  __int64 v45; // [rsp+38h] [rbp-80h]
  void *v48; // [rsp+50h] [rbp-68h] BYREF
  size_t n; // [rsp+58h] [rbp-60h]
  void *s1; // [rsp+60h] [rbp-58h] BYREF
  size_t v51; // [rsp+68h] [rbp-50h]
  _OWORD v52[4]; // [rsp+70h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a1 + 32 * a2;
  v45 = (a3 - 1) / 2;
  if ( a2 < v45 )
  {
    for ( i = (_BYTE *)(v6 + 16); ; i = (_BYTE *)(v6 + 16) )
    {
      v11 = 2 * (v4 + 1) - 1;
      v16 = a1 + ((v4 + 1) << 6);
      v17 = *(_QWORD *)(v16 + 8);
      v6 = a1 + 32 * v11;
      s1 = *(void **)v16;
      v18 = *(_BYTE **)v6;
      v19 = *(_QWORD *)(v6 + 8);
      v51 = v17;
      s2 = v18;
      v20 = sub_22462B0(&s1, v18, v19);
      if ( v20 )
      {
        if ( v20 >= 0 )
          goto LABEL_9;
      }
      else
      {
        v7 = v51;
        v8 = v51;
        if ( v19 <= v51 )
          v8 = v19;
        if ( v8 && (v9 = s2, s2a = v51, v10 = memcmp(s1, v9, v8), v7 = s2a, v10) )
        {
          if ( v10 < 0 )
            goto LABEL_9;
        }
        else if ( v19 == v7 || v19 > v7 )
        {
LABEL_9:
          v11 = 2 * (v4 + 1);
          v6 = a1 + ((v4 + 1) << 6);
        }
      }
      v12 = *(_BYTE **)v6;
      v13 = a1 + 32 * v4;
      v14 = *(_BYTE **)v13;
      if ( *(_QWORD *)v6 == v6 + 16 )
      {
        v21 = *(_QWORD *)(v6 + 8);
        if ( v21 )
        {
          if ( v21 == 1 )
            *v14 = *(_BYTE *)(v6 + 16);
          else
            memcpy(v14, (const void *)(v6 + 16), v21);
          v21 = *(_QWORD *)(v6 + 8);
          v14 = *(_BYTE **)v13;
        }
        *(_QWORD *)(v13 + 8) = v21;
        v14[v21] = 0;
        v14 = *(_BYTE **)v6;
      }
      else
      {
        if ( v14 == i )
        {
          *(_QWORD *)v13 = v12;
          *(_QWORD *)(v13 + 8) = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(v13 + 16) = *(_QWORD *)(v6 + 16);
        }
        else
        {
          *(_QWORD *)v13 = v12;
          v15 = *(_QWORD *)(v13 + 16);
          *(_QWORD *)(v13 + 8) = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(v13 + 16) = *(_QWORD *)(v6 + 16);
          if ( v14 )
          {
            *(_QWORD *)v6 = v14;
            *(_QWORD *)(v6 + 16) = v15;
            goto LABEL_14;
          }
        }
        *(_QWORD *)v6 = v6 + 16;
        v14 = (_BYTE *)(v6 + 16);
      }
LABEL_14:
      *(_QWORD *)(v6 + 8) = 0;
      v4 = v11;
      *v14 = 0;
      if ( v11 >= v45 )
        goto LABEL_29;
    }
  }
  v11 = a2;
LABEL_29:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v11 )
  {
    v11 = 2 * v11 + 1;
    v38 = v6;
    v6 = a1 + 32 * v11;
    sub_A0AAD0(v38, (_QWORD *)v6);
  }
  s1 = v52;
  v22 = *(_OWORD **)a4;
  if ( *(_QWORD *)a4 == a4 + 16 )
  {
    v22 = v52;
    v23 = a4;
    v52[0] = _mm_load_si128((const __m128i *)(a4 + 16));
  }
  else
  {
    s1 = *(void **)a4;
    v23 = a4;
    *(_QWORD *)&v52[0] = *(_QWORD *)(a4 + 16);
  }
  *(_QWORD *)v23 = a4 + 16;
  v24 = *(_QWORD *)(v23 + 8);
  *(_QWORD *)(v23 + 8) = 0;
  v51 = v24;
  *(_BYTE *)(v23 + 16) = 0;
  if ( v11 > a2 )
  {
    v25 = v22;
    v26 = (v11 - 1) / 2;
    v27 = v24;
    v28 = v25;
    while ( 1 )
    {
      v6 = a1 + 32 * v26;
      v36 = *(_QWORD *)(v6 + 8);
      v48 = *(void **)v6;
      n = v36;
      v37 = sub_22462B0(&v48, v28, v27);
      if ( v37 )
      {
        v32 = a1 + 32 * v11;
        if ( v37 >= 0 )
        {
          v6 = v32;
          break;
        }
      }
      else
      {
        v29 = n;
        v30 = v27;
        if ( n <= v27 )
          v30 = n;
        if ( v30 && (v43 = n, v31 = memcmp(v48, v28, v30), v29 = v43, v31) )
        {
          if ( v31 < 0 )
            goto LABEL_53;
        }
        else if ( v29 == v27 || v29 < v27 )
        {
LABEL_53:
          v6 = a1 + 32 * v11;
          break;
        }
        v32 = a1 + 32 * v11;
      }
      v33 = *(const void **)v6;
      v34 = *(_BYTE **)v32;
      if ( *(_QWORD *)v6 == v6 + 16 )
      {
        v39 = *(_QWORD *)(v6 + 8);
        if ( v39 )
        {
          if ( v39 == 1 )
            *v34 = *(_BYTE *)(v6 + 16);
          else
            memcpy(v34, v33, v39);
          v39 = *(_QWORD *)(v6 + 8);
          v34 = *(_BYTE **)v32;
        }
        *(_QWORD *)(v32 + 8) = v39;
        v34[v39] = 0;
        v34 = *(_BYTE **)v6;
      }
      else
      {
        if ( v34 == (_BYTE *)(v32 + 16) )
        {
          *(_QWORD *)v32 = v33;
          *(_QWORD *)(v32 + 8) = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(v32 + 16) = *(_QWORD *)(v6 + 16);
        }
        else
        {
          *(_QWORD *)v32 = v33;
          v35 = *(_QWORD *)(v32 + 16);
          *(_QWORD *)(v32 + 8) = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(v32 + 16) = *(_QWORD *)(v6 + 16);
          if ( v34 )
          {
            *(_QWORD *)v6 = v34;
            *(_QWORD *)(v6 + 16) = v35;
            goto LABEL_45;
          }
        }
        *(_QWORD *)v6 = v6 + 16;
        v34 = (_BYTE *)(v6 + 16);
      }
LABEL_45:
      *(_QWORD *)(v6 + 8) = 0;
      *v34 = 0;
      if ( a2 >= v26 )
        break;
      v28 = s1;
      v27 = v51;
      v11 = v26;
      v26 = (v26 - 1) / 2;
    }
  }
  sub_A0AAD0(v6, &s1);
  if ( s1 != v52 )
    operator delete(s1);
}
