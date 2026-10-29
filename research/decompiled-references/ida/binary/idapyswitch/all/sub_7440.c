const char *__fastcall sub_7440(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  size_t v8; // r9
  size_t v9; // r10
  _BYTE *v10; // rsi
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r9
  _BYTE *v13; // rsi
  unsigned __int64 v14; // rbx
  const char *v15; // rbx
  __int64 v17; // rbx
  char *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r12
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // [rsp+0h] [rbp-90h]
  unsigned __int64 v24; // [rsp+10h] [rbp-80h]
  size_t v25; // [rsp+10h] [rbp-80h]
  __int64 v26; // [rsp+18h] [rbp-78h]
  void *v27; // [rsp+20h] [rbp-70h] BYREF
  __int128 v28; // [rsp+28h] [rbp-68h]
  void *ptr; // [rsp+40h] [rbp-50h] BYREF
  __int128 v30; // [rsp+48h] [rbp-48h]
  unsigned __int64 v31; // [rsp+58h] [rbp-38h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 64);
  v31 = __readfsqword(0x28u);
  v27 = nullptr;
  v26 = v4;
  v6 = v4 + 24 * v3;
  v28 = 0;
  ptr = nullptr;
  v30 = 0;
  if ( v4 != v6 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v26 + 8);
      if ( v7 )
      {
LABEL_3:
        v8 = v7 - 1;
        if ( v7 != 1 )
        {
          v9 = v7 - 1;
          if ( v2 )
          {
            --v2;
            v9 = v8 + v2;
            v7 += v2;
          }
          v10 = v27;
          if ( *((_QWORD *)&v28 + 1) < v7 )
          {
            v25 = v9;
            v23 = v8;
            v27 = (void *)sub_11430(&v27, v27, v7, 1);
            v8 = v23;
            v10 = v27;
            v9 = v25;
          }
          *(_QWORD *)&v28 = v7;
          v10[v9] = 0;
          memcpy((char *)v27 + v2, *(const void **)v26, v8);
          v2 = v28;
        }
      }
      v26 += 24;
      if ( v6 == v26 )
        break;
      while ( v2 > 1 )
      {
        v11 = v2 - 1;
        v12 = v2 + 1;
        v13 = v27;
        v14 = v2 + 2;
        if ( *((_QWORD *)&v28 + 1) < v14 )
        {
          v24 = v12;
          v27 = (void *)sub_11430(&v27, v27, v14, 1);
          v12 = v24;
          v13 = v27;
        }
        *(_QWORD *)&v28 = v14;
        v13[v12] = 0;
        *(_WORD *)((char *)v27 + v11) = 8236;
        v7 = *(_QWORD *)(v26 + 8);
        v2 = v28;
        if ( v7 )
          goto LABEL_3;
        v26 += 24;
        if ( v6 == v26 )
          goto LABEL_15;
      }
    }
  }
LABEL_15:
  sub_7320((char **)&ptr);
  sub_7320((char **)a2);
  if ( *(_BYTE *)(a1 + 88) )
  {
    v17 = *(_QWORD *)(a2 + 8);
    if ( v17 )
    {
      v21 = v17 + 12;
      v20 = v17 + 11;
      v18 = *(char **)a2;
      --v17;
      v19 = v21;
      if ( *(_QWORD *)(a2 + 16) >= v21 )
        goto LABEL_26;
    }
    else
    {
      v18 = *(char **)a2;
      v19 = 13;
      v20 = 12;
      if ( *(_QWORD *)(a2 + 16) >= 0xDu )
      {
LABEL_26:
        *(_QWORD *)(a2 + 8) = v19;
        v18[v20] = 0;
        qmemcpy((void *)(*(_QWORD *)a2 + v17), " (PREFERRED)", 12);
        goto LABEL_16;
      }
    }
    v22 = sub_11430(a2, v18, v19, 1);
    *(_QWORD *)a2 = v22;
    v18 = (char *)v22;
    goto LABEL_26;
  }
LABEL_16:
  v15 = s1;
  if ( *(_QWORD *)(a2 + 8) )
    v15 = *(const char **)a2;
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    j__free(ptr);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    j__free(v27);
  }
  return v15;
}

