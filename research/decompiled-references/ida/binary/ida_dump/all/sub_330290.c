__int64 __fastcall sub_330290(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rbx
  int v13; // r13d
  signed int v14; // r12d
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rbx
  _QWORD *v24; // r12
  __int64 v25; // rbp
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  const void *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned int tinfo_size; // [rsp+10h] [rbp-98h]
  int j; // [rsp+14h] [rbp-94h]
  unsigned __int64 v34; // [rsp+20h] [rbp-88h] BYREF
  __int64 v35; // [rsp+28h] [rbp-80h]
  unsigned __int8 v36[16]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v37; // [rsp+40h] [rbp-68h] BYREF
  int v38; // [rsp+48h] [rbp-60h]
  _QWORD *v39; // [rsp+50h] [rbp-58h] BYREF
  __int128 v40; // [rsp+58h] [rbp-50h]
  unsigned __int64 v41; // [rsp+68h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 48);
  v41 = __readfsqword(0x28u);
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = i;
        sub_11CDA0(16 * v7 + v3);
        v3 = *(_QWORD *)(a1 + 48);
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree();
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  sub_64000(&v37, a1 + 96);
  v12 = *(_QWORD *)(a1 + 120);
  v39 = nullptr;
  v40 = 0;
  if ( v12 )
  {
    v27 = (_QWORD *)qalloc_or_throw();
    v28 = *(const void **)(a1 + 112);
    v39 = v27;
    *((_QWORD *)&v40 + 1) = v12;
    memcpy(v27, v28, 16 * v12);
    *(_QWORD *)&v40 = v12;
  }
  sub_64640(&v37, (__int64 *)(a1 + 240), v8, v9, v10, v11);
  sub_317C60((__int64 *)&v39, a1 + 256);
  if ( (_QWORD)v40 || *(_DWORD *)(a1 + 80) == 2 && (get_tinfo_property() & 0x2F) == 0xD )
  {
    v21 = *(_QWORD *)(a1 + 56);
    v22 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v21 + 1) )
    {
      v29 = qvector_reserve();
      *(_QWORD *)(a1 + 48) = v29;
      v21 = *(_QWORD *)(a1 + 56);
      v22 = v29;
    }
    v23 = v22 + 16 * v21;
    *(_QWORD *)v23 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v23 + 8) = 0;
    ++*(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 80) == 2 )
    {
      v34 = 0;
      copy_tinfo_t();
      *(_BYTE *)v23 = 15;
      *(_DWORD *)(v23 + 4) = get_tinfo_size();
      v30 = qalloc_or_throw();
      *(_QWORD *)(v30 + 16) = a2;
      *(_DWORD *)v30 = 0;
      *(_QWORD *)(v30 + 8) = 0;
      *(_QWORD *)(v30 + 24) = 0;
      *(_OWORD *)(v30 + 32) = 0;
      v31 = v34;
      v34 = 0;
      *(_QWORD *)(v30 + 48) = v31;
      LODWORD(v31) = *(_DWORD *)(v23 + 4);
      *(_QWORD *)(v23 + 8) = v30;
      sub_1C5FB0((__int64)v36, a1 + 80, v31, *(int *)(a1 + 12));
      copy_argloc();
      cleanup_argloc();
      clear_tinfo_t();
      tinfo_size = *(_DWORD *)(v23 + 4);
    }
    else
    {
      if ( !(unsigned __int8)sub_64880(&v37) || (_QWORD)v40 != 1 )
      {
        if ( !under_debugger )
          sub_383060(52539);
        BUG();
      }
      v24 = v39;
      v25 = *v39 - *(_QWORD *)(a2 + 1440);
      *(_BYTE *)v23 = 5;
      v26 = (_QWORD *)qalloc_or_throw();
      *v26 = a2;
      v26[1] = v25;
      *(_QWORD *)(v23 + 8) = v26;
      tinfo_size = v24[1];
      *(_DWORD *)(v23 + 4) = tinfo_size;
    }
  }
  else
  {
    v13 = sub_64960(&v37, 0);
    tinfo_size = 0;
    if ( v13 != v38 )
    {
      while ( 1 )
      {
        v35 = 0;
        v34 = 0xFFFFFFFF00000000LL;
        v14 = sub_64BA0(&v37, v13);
        for ( j = sub_64960(&v37, v14 + v13); v14 > 0; tinfo_size += v16 )
        {
          v15 = sub_1338F0(*(_DWORD **)(a2 + 1504), nullptr, v13, v14);
          LOBYTE(v34) = 1;
          v16 = v15;
          LODWORD(v35) = v13;
          HIDWORD(v34) = v15;
          sub_123A40((__int64)v36, (unsigned __int8 *)&v34);
          v17 = *(_QWORD *)(a1 + 56);
          v18 = *(_QWORD *)(a1 + 48);
          if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v17 + 1) )
          {
            v19 = qvector_reserve();
            *(_QWORD *)(a1 + 48) = v19;
            v18 = v19;
            v17 = *(_QWORD *)(a1 + 56);
          }
          sub_123A40(v18 + 16 * v17, v36);
          ++*(_QWORD *)(a1 + 56);
          v14 -= v16;
          v13 += v16;
          sub_11CDA0((__int64)v36);
        }
        sub_11CDA0((__int64)&v34);
        if ( j == v38 )
          break;
        v13 = j;
      }
    }
    if ( (get_tinfo_property() & 0x2F) == 0xD && *(_QWORD *)(a1 + 56) == 1 )
      tinfo_size = get_tinfo_size();
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree();
  }
  qfree();
  return tinfo_size;
}
