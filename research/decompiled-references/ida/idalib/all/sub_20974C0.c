void __fastcall sub_20974C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r13
  _QWORD *v12; // rdx
  unsigned __int64 *v13; // rbx
  __int64 v14; // rax
  unsigned __int64 *v15; // rbp
  unsigned __int64 *v16; // rax
  __int64 v17; // r13
  unsigned __int64 *v18; // rax
  unsigned __int64 *v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 *v24; // rsi
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 *v27; // rax
  int v28; // esi
  int v29; // r8d
  __int64 v30; // r10
  __m128 v31[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a1 + 216;
  v6 = *(unsigned int *)(a1 + 232);
  v7 = *(_QWORD *)(a1 + 216);
  if ( (_DWORD)v6 )
  {
    v8 = (v6 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
    v9 = (__int64 *)(v7 + 96LL * v8);
    v10 = *v9;
    if ( a3 == *v9 )
    {
LABEL_3:
      sub_2097450(v31, v9, (_QWORD *)(v7 + 96 * v6), v4, 1);
      v11 = v31[0].m128_u64[0];
      goto LABEL_4;
    }
    v28 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v29 = v28 + 1;
        v8 = (v6 - 1) & (v28 + v8);
        v9 = (__int64 *)(v7 + 96LL * v8);
        v30 = *v9;
        if ( a3 == *v9 )
          goto LABEL_3;
        v28 = v29;
      }
      while ( v30 != -4096 );
    }
  }
  sub_2097450(v31, (_QWORD *)(v7 + 96 * v6), (_QWORD *)(v7 + 96 * v6), v4, 1);
  v11 = v31[0].m128_u64[0];
LABEL_4:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 216) + 96LL * *(unsigned int *)(a1 + 232));
  sub_2097450(v31, v12, v12, v4, 1);
  if ( v31[0].m128_u64[0] == v11 )
    return;
  v13 = *(unsigned __int64 **)(v11 + 8);
  if ( *(_BYTE *)(v11 + 28) )
    v14 = *(unsigned int *)(v11 + 20);
  else
    v14 = *(unsigned int *)(v11 + 16);
  v15 = &v13[v14];
  if ( v15 != v13 )
  {
    if ( *v13 < 0xFFFFFFFFFFFFFFFELL )
    {
LABEL_13:
      v18 = v13 + 1;
      v19 = v13;
      v20 = 0;
      if ( v15 != v13 + 1 )
      {
        while ( v19[1] < 0xFFFFFFFFFFFFFFFELL )
        {
          v19 = v18;
LABEL_35:
          v18 = v19 + 1;
          ++v20;
          if ( v15 == v19 + 1 )
            goto LABEL_18;
        }
        v21 = v18 + 1;
        while ( 1 )
        {
          v19 = v21;
          if ( v15 == v21 )
            break;
          ++v21;
          if ( *v19 < 0xFFFFFFFFFFFFFFFELL )
            goto LABEL_35;
        }
      }
LABEL_18:
      v17 = v20 + 1;
      goto LABEL_19;
    }
    v16 = v13 + 1;
    while ( 1 )
    {
      v13 = v16;
      if ( v15 == v16 )
        break;
      ++v16;
      if ( *v13 < 0xFFFFFFFFFFFFFFFELL )
        goto LABEL_13;
    }
  }
  v17 = 0;
LABEL_19:
  v22 = *(unsigned int *)(a2 + 8);
  v23 = v17 + v22;
  if ( v17 + v22 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v23, 8);
    v22 = *(unsigned int *)(a2 + 8);
    LODWORD(v23) = v17 + v22;
  }
  v24 = (unsigned __int64 *)(*(_QWORD *)a2 + 8 * v22);
  if ( v15 != v13 )
  {
    *v24 = *v13;
    v25 = v13 + 1;
    if ( v15 != v13 + 1 )
    {
      while ( 1 )
      {
        v26 = v13[1];
        if ( v26 >= 0xFFFFFFFFFFFFFFFELL )
          break;
        v13 = v25;
LABEL_38:
        ++v24;
        v25 = v13 + 1;
        *v24 = v26;
        if ( v15 == v13 + 1 )
        {
          *(_DWORD *)(a2 + 8) = v23;
          return;
        }
      }
      v27 = v25 + 1;
      while ( 1 )
      {
        v13 = v27;
        if ( v15 == v27 )
          break;
        v26 = *v27++;
        if ( v26 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_38;
      }
    }
  }
  *(_DWORD *)(a2 + 8) = v23;
}
