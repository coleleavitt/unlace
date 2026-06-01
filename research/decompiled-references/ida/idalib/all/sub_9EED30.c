__int64 __fastcall sub_9EED30(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // r13
  int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r13
  _BYTE *v12; // rax
  _BYTE *v13; // rsi
  signed __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rbp
  void *v23; // rdi
  __int64 v25; // rbp
  void *v26; // rdi
  char *v27; // r12
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdi
  unsigned __int64 src; // [rsp+8h] [rbp-40h]
  _BYTE *srcb; // [rsp+8h] [rbp-40h]
  char *srca; // [rsp+8h] [rbp-40h]

  if ( (__int64 *)a1 != a2 )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v5 = *((unsigned int *)a2 + 2);
    v6 = *(_QWORD *)a1;
    v7 = v5;
    if ( v5 <= v4 )
    {
      v15 = *(_QWORD *)a1;
      if ( v5 )
      {
        v16 = v6 + 24;
        src = v5 << 6;
        v17 = *a2 + 24;
        v18 = v17 + (v5 << 6);
        do
        {
          v19 = *(_QWORD *)(v17 - 24);
          v20 = v17;
          v21 = v16;
          v17 += 64;
          v16 += 64;
          *(_QWORD *)(v16 - 88) = v19;
          *(_BYTE *)(v16 - 80) = *(_BYTE *)(v17 - 80);
          *(_QWORD *)(v16 - 76) = *(_QWORD *)(v17 - 76);
          *(_BYTE *)(v16 - 68) = *(_BYTE *)(v17 - 68);
          sub_9EE8A0(v21, v20);
          *(_BYTE *)(v16 - 32) = *(_BYTE *)(v17 - 32);
        }
        while ( v18 != v17 );
        v15 = *(_QWORD *)a1;
        v4 = *(unsigned int *)(a1 + 8);
        v6 += src;
      }
      v22 = v15 + (v4 << 6);
      while ( v6 != v22 )
      {
        while ( 1 )
        {
          v22 -= 64;
          v23 = *(void **)(v22 + 24);
          if ( v23 == (void *)(v22 + 40) )
            break;
          operator delete(v23);
          if ( v6 == v22 )
            goto LABEL_23;
        }
      }
      goto LABEL_23;
    }
    if ( v5 > *(unsigned int *)(a1 + 12) )
    {
      v25 = v6 + (v4 << 6);
      while ( v25 != v6 )
      {
        while ( 1 )
        {
          v25 -= 64;
          v26 = *(void **)(v25 + 24);
          if ( v26 == (void *)(v25 + 40) )
            break;
          operator delete(v26);
          if ( v25 == v6 )
            goto LABEL_32;
        }
      }
LABEL_32:
      *(_DWORD *)(a1 + 8) = 0;
      v4 = 0;
      sub_9EE9B0(a1, v5);
      v5 = *((unsigned int *)a2 + 2);
      v6 = *(_QWORD *)a1;
      v8 = *a2;
    }
    else
    {
      v8 = *a2;
      if ( *(_DWORD *)(a1 + 8) )
      {
        v4 <<= 6;
        v27 = (char *)(v8 + 24);
        v28 = v6 + 24;
        srca = &v27[v4];
        do
        {
          v29 = *((_QWORD *)v27 - 3);
          v30 = (__int64)v27;
          v31 = v28;
          v27 += 64;
          v28 += 64;
          *(_QWORD *)(v28 - 88) = v29;
          *(_BYTE *)(v28 - 80) = *(v27 - 80);
          *(_QWORD *)(v28 - 76) = *(_QWORD *)(v27 - 76);
          *(_BYTE *)(v28 - 68) = *(v27 - 68);
          sub_9EE8A0(v31, v30);
          *(_BYTE *)(v28 - 32) = *(v27 - 32);
        }
        while ( srca != v27 );
        v5 = *((unsigned int *)a2 + 2);
        v6 = *(_QWORD *)a1;
        v8 = *a2;
      }
    }
    v9 = v6 + v4;
    v10 = v8 + v4;
    v11 = v8 + (v5 << 6);
    if ( v10 == v11 )
    {
LABEL_23:
      *(_DWORD *)(a1 + 8) = v7;
      return a1;
    }
    while ( 1 )
    {
      *(_QWORD *)v9 = *(_QWORD *)v10;
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v10 + 8);
      *(_QWORD *)(v9 + 12) = *(_QWORD *)(v10 + 12);
      *(_DWORD *)(v9 + 20) = *(_DWORD *)(v10 + 20);
      *(_QWORD *)(v9 + 24) = v9 + 40;
      v13 = *(_BYTE **)(v10 + 24);
      v14 = *(_QWORD *)(v10 + 32);
      if ( &v13[v14] && !v13 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v14 > 0xF )
        break;
      v12 = *(_BYTE **)(v9 + 24);
      if ( v14 == 1 )
      {
        *v12 = *v13;
        v12 = *(_BYTE **)(v9 + 24);
      }
      else if ( v14 )
      {
        goto LABEL_27;
      }
LABEL_8:
      *(_QWORD *)(v9 + 32) = v14;
      v10 += 64;
      v9 += 64;
      v12[v14] = 0;
      *(_BYTE *)(v9 - 8) = *(_BYTE *)(v10 - 8);
      if ( v10 == v11 )
        goto LABEL_23;
    }
    if ( v14 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    srcb = *(_BYTE **)(v10 + 24);
    v12 = (_BYTE *)operator new(v14 + 1);
    *(_QWORD *)(v9 + 40) = v14;
    v13 = srcb;
    *(_QWORD *)(v9 + 24) = v12;
LABEL_27:
    memcpy(v12, v13, v14);
    v12 = *(_BYTE **)(v9 + 24);
    goto LABEL_8;
  }
  return a1;
}
