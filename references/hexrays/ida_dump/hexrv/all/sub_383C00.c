__int64 __fastcall sub_383C00(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // r15
  int v4; // ebp
  unsigned __int64 v5; // r14
  __int64 i; // r12
  __int64 v7; // r12
  __int64 v8; // r13
  void *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  char v13; // al
  char v14; // al
  unsigned int v15; // r12d
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  int v23; // r15d
  __int64 v24; // rax
  void *v25; // rax
  void *v26; // rax
  const void *v27; // rsi
  char v28; // al
  size_t nb; // [rsp+8h] [rbp-C0h]
  int n; // [rsp+8h] [rbp-C0h]
  size_t na; // [rsp+8h] [rbp-C0h]
  __int64 v32; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+28h] [rbp-A0h]
  __int64 v34; // [rsp+38h] [rbp-90h]
  __int64 v35; // [rsp+40h] [rbp-88h] BYREF
  _DWORD v36[4]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v37; // [rsp+58h] [rbp-70h]
  void *v38; // [rsp+60h] [rbp-68h]
  __int128 v39; // [rsp+68h] [rbp-60h]
  char v40; // [rsp+78h] [rbp-50h]
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( (unsigned int)(a2 - 208) <= 0x2F )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCD6Eu, a2, a3);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2;
  if ( (a2 & 0xFFFFFFF0) == 0x40 )
  {
    if ( !v3 )
      return 0;
    v32 = 0;
    v33 = 0;
  }
  else
  {
    v32 = 0;
    v33 = 0;
    if ( !v3 )
      goto LABEL_13;
  }
  v5 = 0;
  *((_QWORD *)&v33 + 1) = v3;
  v32 = qalloc_or_throw(80 * v3);
  for ( i = v32; ; i = v32 )
  {
    v7 = 80 * v5 + i;
    v8 = *(_QWORD *)a1 + 80 * v5;
    *(_DWORD *)v7 = 0;
    copy_argloc(v7, v8);
    *(_QWORD *)(v7 + 16) = 0;
    *(_OWORD *)(v7 + 24) = 0;
    if ( *(_QWORD *)(v8 + 24) )
    {
      nb = *(_QWORD *)(v8 + 24);
      v9 = (void *)qalloc_or_throw(nb);
      *(_QWORD *)(v7 + 16) = v9;
      *(_QWORD *)(v7 + 32) = nb;
      memcpy(v9, *(const void **)(v8 + 16), nb);
      *(_QWORD *)(v7 + 24) = nb;
    }
    *(_QWORD *)(v7 + 40) = 0;
    *(_OWORD *)(v7 + 48) = 0;
    if ( *(_QWORD *)(v8 + 48) )
    {
      na = *(_QWORD *)(v8 + 48);
      v25 = (void *)qalloc_or_throw(na);
      *(_QWORD *)(v7 + 40) = v25;
      *(_QWORD *)(v7 + 56) = na;
      memcpy(v25, *(const void **)(v8 + 40), na);
      *(_QWORD *)(v7 + 48) = na;
    }
    *(_QWORD *)(v7 + 64) = 0;
    copy_tinfo_t(v7 + 64, v8 + 64);
    ++v5;
    *(_DWORD *)(v7 + 72) = *(_DWORD *)(v8 + 72);
    if ( v5 >= v3 )
      break;
  }
  *(_QWORD *)&v33 = v3;
LABEL_13:
  v10 = *(_QWORD *)(a1 + 24);
  v35 = 0;
  v34 = v10;
  copy_tinfo_t(&v35, a1 + 32);
  v36[0] = 0;
  copy_argloc(v36, a1 + 40);
  v11 = *(_QWORD *)(a1 + 56);
  v12 = *(_QWORD *)(a1 + 72);
  v38 = nullptr;
  v39 = 0;
  v37 = v11;
  if ( v12 )
  {
    v26 = (void *)qalloc_or_throw(8 * v12);
    v27 = *(const void **)(a1 + 64);
    v38 = v26;
    *((_QWORD *)&v39 + 1) = v12;
    memcpy(v26, v27, 8 * v12);
    *(_QWORD *)&v39 = v12;
  }
  v13 = *(_BYTE *)(a1 + 88) & 0xF;
  if ( v4 != 192 && (v4 & 0xFFFFFF0F) == 0 )
  {
    n = 0;
    v14 = v4 | v13;
  }
  else
  {
    n = v4;
    v14 = v13 | 0xC0;
  }
  v40 = v14;
  HIDWORD(v34) = n;
  v15 = calc_arglocs(&v32);
  if ( (_BYTE)v15 )
  {
    v23 = compare_arglocs(v36, a1 + 40);
    if ( !v23 )
    {
      v24 = 0;
      if ( !(_QWORD)v33 )
      {
LABEL_40:
        v28 = v4 | *(_BYTE *)(a1 + 88) & 0xF;
        if ( v4 == 192 || (v4 & 0xFFFFFF0F) != 0 )
          v28 = *(_BYTE *)(a1 + 88) & 0xF | 0xC0;
        *(_DWORD *)(a1 + 24) &= ~0x200u;
        *(_DWORD *)(a1 + 28) = n;
        *(_BYTE *)(a1 + 88) = v28;
        goto LABEL_19;
      }
      while ( !(unsigned int)compare_arglocs(v32 + 80 * v24, 80 * v24 + *(_QWORD *)a1) )
      {
        v24 = ++v23;
        if ( v23 >= (unsigned __int64)v33 )
          goto LABEL_40;
      }
    }
  }
  v15 = 0;
LABEL_19:
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  cleanup_argloc(v36);
  clear_tinfo_t(&v35);
  v16 = v32;
  if ( v32 )
  {
    v17 = v33;
    if ( (_QWORD)v33 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v16 + 80 * v18);
        clear_tinfo_t(v19 + 8);
        v20 = v19[5];
        if ( v20 )
        {
          v19[6] = 0;
          qfree(v20);
        }
        v21 = v19[2];
        if ( v21 )
        {
          v19[3] = 0;
          qfree(v21);
        }
        ++v18;
        cleanup_argloc(v19);
        v16 = v32;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v16);
  }
  return v15;
}
