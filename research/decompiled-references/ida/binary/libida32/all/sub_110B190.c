void __fastcall sub_110B190(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // r9
  signed __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rcx
  const void *v12; // r14
  size_t v13; // r15
  __int64 v14; // r12
  __int64 v15; // rbp
  _BYTE *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r13
  size_t v19; // rbx
  size_t v20; // rdx
  __int64 v21; // rbx
  _OWORD *v22; // rsi
  size_t v23; // rbp
  __int64 v24; // r13
  size_t v25; // r15
  __int64 v26; // rdx
  size_t v27; // rdx
  __int64 v28; // r12
  size_t v29; // rbp
  const void *v30; // rcx
  signed __int64 v31; // rax
  __int64 v32; // rbx
  _BYTE *v33; // rdi
  __int64 i; // [rsp+0h] [rbp-B8h]
  __int64 v35; // [rsp+0h] [rbp-B8h]
  const void *v36; // [rsp+0h] [rbp-B8h]
  const void *v37; // [rsp+10h] [rbp-A8h]
  __int64 v38; // [rsp+10h] [rbp-A8h]
  __int64 v40; // [rsp+20h] [rbp-98h]
  __int64 v41; // [rsp+28h] [rbp-90h]
  __int64 v42; // [rsp+30h] [rbp-88h]
  __int64 v43; // [rsp+38h] [rbp-80h]
  __int64 v44; // [rsp+40h] [rbp-78h]
  __int64 v45; // [rsp+48h] [rbp-70h]
  void *s2; // [rsp+60h] [rbp-58h] BYREF
  size_t v49; // [rsp+68h] [rbp-50h]
  _OWORD v50[4]; // [rsp+70h] [rbp-48h] BYREF

  v4 = 32 * a2;
  v5 = a1;
  v6 = a2;
  v45 = (a3 - 1) / 2;
  if ( a2 >= v45 )
  {
    v21 = a2;
    goto LABEL_25;
  }
  v7 = a1;
  for ( i = v4 + a1 + 16; ; i = v14 + 16 )
  {
    v9 = 2 * (v6 + 1);
    v18 = (v6 + 1) << 6;
    v11 = v9 - 1;
    v10 = v7 + v18;
    v19 = *(_QWORD *)(v7 + v18 + 8);
    v4 = 32 * (v9 - 1);
    v14 = v7 + v4;
    v37 = *(const void **)(v7 + v18);
    v13 = *(_QWORD *)(v7 + v4 + 8);
    v12 = *(const void **)(v7 + v4);
    v20 = v13;
    if ( v19 <= v13 )
      v20 = *(_QWORD *)(v7 + v18 + 8);
    if ( v20 )
    {
      v44 = 32 * (v9 - 1);
      v43 = v9 - 1;
      v42 = v7;
      v41 = v7 + v18;
      LODWORD(v8) = memcmp(*(const void **)(v7 + v18), *(const void **)(v7 + v4), v20);
      v9 = 2 * (v6 + 1);
      v10 = v41;
      v7 = v42;
      v11 = v43;
      v4 = v44;
      if ( (_DWORD)v8 )
        goto LABEL_4;
    }
    v8 = v19 - v13;
    if ( (__int64)(v19 - v13) > 0x7FFFFFFF )
      goto LABEL_5;
    if ( v8 >= (__int64)0xFFFFFFFF80000000LL )
    {
LABEL_4:
      if ( (int)v8 < 0 )
        goto LABEL_6;
LABEL_5:
      v12 = v37;
      v13 = v19;
      v14 = v10;
      v4 = (v6 + 1) << 6;
      v11 = v9;
    }
LABEL_6:
    v15 = v7 + 32 * v6;
    v16 = *(_BYTE **)v15;
    if ( (const void *)(v14 + 16) == v12 )
    {
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          *v16 = *(_BYTE *)(v14 + 16);
          v13 = *(_QWORD *)(v14 + 8);
          v16 = *(_BYTE **)v15;
        }
        else
        {
          v40 = v4;
          v38 = v11;
          v35 = v7;
          memcpy(v16, v12, v13);
          v13 = *(_QWORD *)(v14 + 8);
          v16 = *(_BYTE **)v15;
          v4 = v40;
          v11 = v38;
          v7 = v35;
        }
      }
      *(_QWORD *)(v15 + 8) = v13;
      v16[v13] = 0;
      v16 = *(_BYTE **)v14;
    }
    else
    {
      if ( v16 == (_BYTE *)i )
      {
        *(_QWORD *)v15 = v12;
        *(_QWORD *)(v15 + 8) = *(_QWORD *)(v14 + 8);
        *(_QWORD *)(v15 + 16) = *(_QWORD *)(v14 + 16);
      }
      else
      {
        *(_QWORD *)v15 = v12;
        v17 = *(_QWORD *)(v15 + 16);
        *(_QWORD *)(v15 + 8) = *(_QWORD *)(v14 + 8);
        *(_QWORD *)(v15 + 16) = *(_QWORD *)(v14 + 16);
        if ( v16 )
        {
          *(_QWORD *)v14 = v16;
          *(_QWORD *)(v14 + 16) = v17;
          goto LABEL_10;
        }
      }
      *(_QWORD *)v14 = v14 + 16;
      v16 = (_BYTE *)(v14 + 16);
    }
LABEL_10:
    *(_QWORD *)(v14 + 8) = 0;
    v6 = v11;
    *v16 = 0;
    if ( v11 >= v45 )
      break;
  }
  v21 = v11;
  v5 = v7;
LABEL_25:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v21 )
  {
    v21 = 2 * v21 + 1;
    sub_9E6D90(v5 + v4, (_QWORD *)(v5 + 32 * v21));
    v4 = 32 * v21;
  }
  s2 = v50;
  v22 = *(_OWORD **)a4;
  if ( *(_QWORD *)a4 == a4 + 16 )
  {
    v22 = v50;
    v50[0] = _mm_loadu_si128((const __m128i *)(a4 + 16));
  }
  else
  {
    s2 = *(void **)a4;
    *(_QWORD *)&v50[0] = *(_QWORD *)(a4 + 16);
  }
  *(_QWORD *)a4 = a4 + 16;
  v23 = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(a4 + 8) = 0;
  v49 = v23;
  *(_BYTE *)(a4 + 16) = 0;
  v24 = (v21 - 1) / 2;
  if ( v21 <= a2 )
  {
    v28 = v5 + v4;
    goto LABEL_53;
  }
  v25 = v23;
  while ( 2 )
  {
    v27 = v25;
    v28 = v5 + 32 * v24;
    v29 = *(_QWORD *)(v28 + 8);
    v30 = *(const void **)v28;
    if ( v29 <= v25 )
      v27 = *(_QWORD *)(v28 + 8);
    if ( !v27
      || (v36 = *(const void **)v28, LODWORD(v31) = memcmp(*(const void **)v28, v22, v27), v30 = v36, !(_DWORD)v31) )
    {
      v31 = v29 - v25;
      if ( (__int64)(v29 - v25) > 0x7FFFFFFF )
        break;
      if ( v31 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_44;
    }
    if ( (int)v31 < 0 )
    {
LABEL_44:
      v32 = v5 + 32 * v21;
      v33 = *(_BYTE **)v32;
      if ( v30 == (const void *)(v28 + 16) )
      {
        if ( v29 )
        {
          if ( v29 == 1 )
            *v33 = *(_BYTE *)(v28 + 16);
          else
            memcpy(v33, v30, v29);
          v29 = *(_QWORD *)(v28 + 8);
          v33 = *(_BYTE **)v32;
        }
        *(_QWORD *)(v32 + 8) = v29;
        v33[v29] = 0;
        v33 = *(_BYTE **)v28;
        goto LABEL_35;
      }
      if ( v33 == (_BYTE *)(v32 + 16) )
      {
        *(_QWORD *)v32 = v30;
        *(_QWORD *)(v32 + 8) = *(_QWORD *)(v28 + 8);
        *(_QWORD *)(v32 + 16) = *(_QWORD *)(v28 + 16);
      }
      else
      {
        *(_QWORD *)v32 = v30;
        v26 = *(_QWORD *)(v32 + 16);
        *(_QWORD *)(v32 + 8) = *(_QWORD *)(v28 + 8);
        *(_QWORD *)(v32 + 16) = *(_QWORD *)(v28 + 16);
        if ( v33 )
        {
          *(_QWORD *)v28 = v33;
          *(_QWORD *)(v28 + 16) = v26;
LABEL_35:
          *(_QWORD *)(v28 + 8) = 0;
          *v33 = 0;
          if ( a2 >= v24 )
            goto LABEL_53;
          v25 = v49;
          v22 = s2;
          v21 = v24;
          v24 = (v24 - 1) / 2;
          continue;
        }
      }
      *(_QWORD *)v28 = v28 + 16;
      v33 = (_BYTE *)(v28 + 16);
      goto LABEL_35;
    }
    break;
  }
  v28 = v5 + 32 * v21;
LABEL_53:
  sub_9E6D90(v28, &s2);
  if ( s2 != v50 )
    operator delete(s2);
}

