void __fastcall sub_13C1720(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v4; // r15d
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // ebx
  _QWORD *v8; // rbp
  int v9; // r10d
  int v10; // r8d
  __int64 *v11; // r11
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v19; // rax
  __int64 *v20; // rbp
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  void *v23; // rax
  void *v24; // r13
  void *v25; // r14
  char *v26; // rcx
  __int64 v27; // rdi
  __int64 *v28; // rdx
  __int64 *v29; // r9
  int v30; // eax
  int v31; // esi
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 *v34; // r9
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v41; // [rsp+8h] [rbp-60h]
  __int64 *v43; // [rsp+10h] [rbp-58h]
  size_t v44; // [rsp+18h] [rbp-50h]

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(unsigned int *)(a1 + 24);
  if ( v5 == *(_QWORD *)(a1 + 32) )
  {
    v19 = v6 + 8 * (v5 - *(_QWORD *)a1) - *(unsigned int *)(a1 + 8);
    if ( v19 == 0x7FFFFFFFFFFFFFC0LL )
      std::__throw_length_error("vector<bool>::_M_insert_aux");
    v41 = 8;
    v20 = a2;
    if ( v19 )
    {
      v21 = 2 * v19;
      v41 = 0xFFFFFFFFFFFFFF8LL;
      if ( v19 <= 2 * v19 )
      {
        v22 = 0x7FFFFFFFFFFFFFC0LL;
        if ( v21 <= 0x7FFFFFFFFFFFFFC0LL )
          v22 = v21;
        v41 = 8 * ((unsigned __int64)(v22 + 63) >> 6);
      }
    }
    v23 = (void *)operator new(v41);
    v24 = *(void **)a1;
    v25 = v23;
    v26 = (char *)a2 - *(_QWORD *)a1;
    if ( a2 != *(__int64 **)a1 )
    {
      v44 = (size_t)a2 - *(_QWORD *)a1;
      memmove(v23, *(const void **)a1, v44);
      v26 = (char *)v44;
    }
    v27 = v4;
    v28 = (__int64 *)&v26[(_QWORD)v25];
    if ( v4 )
    {
      v29 = a2;
      v30 = 0;
      do
      {
        while ( 1 )
        {
          v33 = *v28 & ~(1LL << v30);
          if ( ((1LL << v30) & *v29) != 0 )
            v33 = (1LL << v30) | *v28;
          *v28 = v33;
          if ( v30 == 63 )
            break;
          v31 = v30 + 2;
          v32 = 1LL << ((unsigned __int8)v30++ + 1);
          if ( !--v27 )
            goto LABEL_32;
        }
        ++v29;
        ++v28;
        v32 = 1;
        v30 = 0;
        v31 = 1;
        --v27;
      }
      while ( v27 );
LABEL_32:
      v34 = v28;
      if ( v30 == 63 )
      {
        v34 = v28 + 1;
        v31 = 0;
      }
    }
    else
    {
      v34 = (__int64 *)&v26[(_QWORD)v25];
      v32 = 1;
      v31 = 1;
    }
    v35 = *v28 | v32;
    v36 = *v28 & ~v32;
    if ( a4 )
      v36 = v35;
    v37 = *(_QWORD *)(a1 + 16);
    *v28 = v36;
    v38 = *(unsigned int *)(a1 + 24) + 8 * (v37 - (_QWORD)a2) - v4;
    if ( v38 <= 0 )
    {
LABEL_45:
      if ( v24 )
      {
        v43 = v34;
        operator delete(v24);
        *(_DWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        v34 = v43;
        *(_QWORD *)a1 = 0;
        *(_DWORD *)(a1 + 8) = 0;
      }
      *(_QWORD *)a1 = v25;
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = v34;
      *(_QWORD *)(a1 + 32) = (char *)v25 + v41;
      *(_DWORD *)(a1 + 24) = v31;
      return;
    }
    while ( 1 )
    {
      v39 = *v34 & ~(1LL << v31);
      if ( ((1LL << v4) & *v20) != 0 )
        v39 = (1LL << v31) | *v34;
      *v34 = v39;
      if ( v4 == 63 )
      {
        ++v20;
        v4 = 0;
        if ( v31 == 63 )
          goto LABEL_44;
LABEL_39:
        ++v31;
        if ( !--v38 )
          goto LABEL_45;
      }
      else
      {
        ++v4;
        if ( v31 != 63 )
          goto LABEL_39;
LABEL_44:
        ++v34;
        v31 = 0;
        if ( !--v38 )
          goto LABEL_45;
      }
    }
  }
  v7 = *(_DWORD *)(a1 + 24);
  v8 = *(_QWORD **)(a1 + 16);
  v9 = v7;
  v10 = (v6 + 1) & 0x3F;
  v11 = (__int64 *)(v5 + 8 * ((v6 + 1) >> 6));
  v12 = v6 + 8 * (v5 - (_QWORD)a2) - a3;
  if ( v12 > 0 )
  {
    do
    {
      if ( v9 )
      {
LABEL_4:
        v13 = 1LL << --v9;
        if ( !v10 )
          goto LABEL_15;
LABEL_5:
        v14 = 1LL << --v10;
        goto LABEL_6;
      }
      while ( 1 )
      {
        --v8;
        v13 = 0x8000000000000000LL;
        v9 = 63;
        if ( v10 )
          goto LABEL_5;
LABEL_15:
        --v11;
        v14 = 0x8000000000000000LL;
        v10 = 63;
LABEL_6:
        v15 = *v11;
        if ( (v13 & *v8) != 0 )
          break;
        *v11 = v15 & ~v14;
        if ( !--v12 )
          goto LABEL_8;
        if ( v9 )
          goto LABEL_4;
      }
      *v11 = v15 | v14;
      --v12;
    }
    while ( v12 );
  }
LABEL_8:
  v16 = *a2 | (1LL << v4);
  if ( !a4 )
    v16 = *a2 & ~(1LL << v4);
  *a2 = v16;
  if ( v7 == 63 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 16) = v5 + 8;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = v7 + 1;
  }
}
