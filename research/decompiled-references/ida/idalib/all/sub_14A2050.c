char __fastcall sub_14A2050(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r8d
  _DWORD *v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rax
  int v7; // esi
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // r14d
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  void *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rsi
  __int64 *v28; // rax
  __int64 v29; // rcx
  void **v30; // r15
  _DWORD *v31; // rax
  _DWORD *v32; // r9
  __int64 v33; // r10
  unsigned __int64 v34; // r15
  __m128i *v35; // rdi
  __int64 v37; // [rsp+0h] [rbp-48h] BYREF
  void *v38; // [rsp+8h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 136);
  v4 = *(_DWORD **)(a2 + 128);
  if ( v3 )
  {
    v5 = 1LL << *v4;
    if ( (v5 & 0xB7) == 0 && (v5 & 0x40) != 0 )
    {
      v31 = v4 + 36;
      while ( &v4[36 * (v3 - 1) + 36] != v31 )
      {
        v32 = v31;
        v33 = 1LL << *v31;
        if ( (v33 & 0xB7) != 0 )
          break;
        v31 += 36;
        if ( (v33 & 0x40) == 0 )
        {
          v4 = v32;
          break;
        }
      }
    }
  }
  LOBYTE(v6) = *((_BYTE *)v4 + 56) >> 4;
  if ( (_BYTE)v6 == 11 )
    goto LABEL_11;
  v7 = v4[18];
  if ( !v7 )
    return (char)v6;
  v8 = *((_QWORD *)v4 + 12);
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 16) + 97LL) & 6) == 2 )
  {
LABEL_11:
    v12 = operator new(0xB0u);
    *(_QWORD *)(v12 + 8) = a1;
    *(_QWORD *)(v12 + 16) = a3;
    *(_QWORD *)v12 = &off_2BB3280;
    *(_QWORD *)(v12 + 24) = v12 + 40;
    *(_QWORD *)(v12 + 32) = 0x800000000LL;
    v13 = a1[240];
    *(_QWORD *)(v12 + 168) = 0;
    if ( v13 == a1[241] )
      v13 = *(_QWORD *)(a1[243] - 8LL) + 512LL;
    v14 = *(_QWORD *)(v13 - 8);
    v15 = *(unsigned int *)(v14 + 24);
    if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(v14 + 28) )
    {
      sub_2237220(v14 + 16, v14 + 32, v15 + 1, 8);
      v15 = *(unsigned int *)(v14 + 24);
    }
    *(_QWORD *)(*(_QWORD *)(v14 + 16) + 8 * v15) = v12;
    ++*(_DWORD *)(v14 + 24);
    v16 = (unsigned int)v4[18];
    v17 = v16;
    if ( *(_DWORD *)(v12 + 36) < (unsigned int)v16 )
    {
      sub_14A1EA0((__m128i *)(v12 + 24), v16);
      v17 = v4[18];
    }
    v18 = 0;
    if ( v17 )
    {
      do
      {
        v19 = *(unsigned int *)(v12 + 36);
        v20 = *((_QWORD *)v4 + 12) + 32LL * v18;
        v21 = *(void **)(v20 + 24);
        *(_QWORD *)(v20 + 24) = 0;
        v24 = *(_QWORD *)(v20 + 16);
        v38 = v21;
        v22 = *(unsigned int *)(v12 + 32);
        v37 = v24;
        v23 = v22 + 1;
        LODWORD(v24) = v22;
        v25 = 16 * v22;
        if ( v23 > v19 )
        {
          v34 = *(_QWORD *)(v12 + 24);
          v35 = (__m128i *)(v12 + 24);
          if ( v34 > (unsigned __int64)&v37 || (unsigned __int64)&v37 >= v34 + v25 )
          {
            sub_14A1EA0(v35, v23);
            v26 = *(_QWORD *)(v12 + 24);
            v27 = &v37;
            v24 = *(unsigned int *)(v12 + 32);
            v25 = 16 * v24;
          }
          else
          {
            sub_14A1EA0(v35, v23);
            v26 = *(_QWORD *)(v12 + 24);
            v24 = *(unsigned int *)(v12 + 32);
            v27 = (__int64 *)((char *)&v37 + v26 - v34);
            v25 = 16 * v24;
          }
        }
        else
        {
          v26 = *(_QWORD *)(v12 + 24);
          v27 = &v37;
        }
        v28 = (__int64 *)(v26 + v25);
        *v28 = *v27;
        v29 = v27[1];
        v27[1] = 0;
        v30 = (void **)v38;
        v28[1] = v29;
        *(_DWORD *)(v12 + 32) = v24 + 1;
        if ( v30 )
        {
          if ( *v30 != v30 + 2 )
            free(*v30);
          operator delete(v30, 0x70u);
        }
        ++v18;
      }
      while ( v4[18] > v18 );
    }
    LOBYTE(v6) = *((_BYTE *)v4 + 56) >> 4;
    if ( (_BYTE)v6 == 11 )
    {
      v6 = *((__int64 **)v4 + 15);
      *(_QWORD *)(v12 + 168) = v6;
      *((_QWORD *)v4 + 15) = 0;
    }
  }
  else
  {
    v6 = (__int64 *)(v8 + 48);
    v9 = &v6[4 * (unsigned int)(v7 - 1)];
    while ( v6 != v9 )
    {
      v10 = *v6;
      v6 += 4;
      if ( (*(_BYTE *)(v10 + 97) & 6) == 2 )
        goto LABEL_11;
    }
  }
  return (char)v6;
}
