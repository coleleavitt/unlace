__int64 __fastcall sub_330290(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rbx
  int v14; // r13d
  signed int v15; // r12d
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // r12
  __int64 v32; // rbp
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  const void *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // [rsp+8h] [rbp-A0h]
  unsigned int tinfo_size; // [rsp+10h] [rbp-98h]
  int j; // [rsp+14h] [rbp-94h]
  unsigned __int64 v45; // [rsp+20h] [rbp-88h] BYREF
  __int64 v46; // [rsp+28h] [rbp-80h]
  unsigned __int8 v47[16]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v48; // [rsp+40h] [rbp-68h] BYREF
  int v49; // [rsp+48h] [rbp-60h]
  _QWORD *v50; // [rsp+50h] [rbp-58h] BYREF
  __int128 v51; // [rsp+58h] [rbp-50h]
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v2 = a1 + 48;
  v4 = *(_QWORD *)(a1 + 48);
  v52 = __readfsqword(0x28u);
  v42 = v2;
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = i;
        sub_11CDA0(16 * v8 + v4);
        v4 = *(_QWORD *)(a1 + 48);
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  sub_64000(&v48, a1 + 96);
  v13 = *(_QWORD *)(a1 + 120);
  v50 = nullptr;
  v51 = 0;
  if ( v13 )
  {
    v34 = (_QWORD *)qalloc_or_throw(16 * v13, a1 + 96, v9, v10);
    v35 = *(const void **)(a1 + 112);
    v50 = v34;
    *((_QWORD *)&v51 + 1) = v13;
    memcpy(v34, v35, 16 * v13);
    *(_QWORD *)&v51 = v13;
  }
  sub_64640(&v48, (__int64 *)(a1 + 240), v9, v10, v11, v12);
  sub_317C60((__int64 *)&v50, a1 + 256);
  if ( (_QWORD)v51 || *(_DWORD *)(a1 + 80) == 2 && (get_tinfo_property() & 0x2F) == 0xD )
  {
    v26 = *(_QWORD *)(a1 + 56);
    v27 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v26 + 1) )
    {
      v36 = qvector_reserve(v42, v27, v26 + 1, 16);
      *(_QWORD *)(a1 + 48) = v36;
      v26 = *(_QWORD *)(a1 + 56);
      v27 = v36;
    }
    v28 = v27 + 16 * v26;
    *(_QWORD *)v28 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v28 + 8) = 0;
    ++*(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 80) == 2 )
    {
      v45 = 0;
      copy_tinfo_t();
      *(_BYTE *)v28 = 15;
      v37 = *(_QWORD *)(a1 + 72);
      *(_DWORD *)(v28 + 4) = get_tinfo_size();
      v40 = qalloc_or_throw(56, v37, v38, v39);
      *(_QWORD *)(v40 + 16) = a2;
      *(_DWORD *)v40 = 0;
      *(_QWORD *)(v40 + 8) = 0;
      *(_QWORD *)(v40 + 24) = 0;
      *(_OWORD *)(v40 + 32) = 0;
      v41 = v45;
      v45 = 0;
      *(_QWORD *)(v40 + 48) = v41;
      LODWORD(v41) = *(_DWORD *)(v28 + 4);
      *(_QWORD *)(v28 + 8) = v40;
      sub_1C5FB0((__int64)v47, a1 + 80, v41, *(int *)(a1 + 12));
      copy_argloc();
      cleanup_argloc();
      clear_tinfo_t();
      tinfo_size = *(_DWORD *)(v28 + 4);
    }
    else
    {
      if ( !(unsigned __int8)sub_64880(&v48) || (_QWORD)v51 != 1 )
      {
        if ( !under_debugger )
          sub_383060(52539);
        BUG();
      }
      v31 = v50;
      v32 = *v50 - *(_QWORD *)(a2 + 1440);
      *(_BYTE *)v28 = 5;
      v33 = (_QWORD *)qalloc_or_throw(16, v27, v29, v30);
      *v33 = a2;
      v33[1] = v32;
      *(_QWORD *)(v28 + 8) = v33;
      tinfo_size = v31[1];
      *(_DWORD *)(v28 + 4) = tinfo_size;
    }
  }
  else
  {
    v14 = sub_64960(&v48, 0);
    tinfo_size = 0;
    if ( v14 != v49 )
    {
      while ( 1 )
      {
        v46 = 0;
        v45 = 0xFFFFFFFF00000000LL;
        v15 = sub_64BA0(&v48, v14);
        for ( j = sub_64960(&v48, v15 + v14); v15 > 0; tinfo_size += v17 )
        {
          v16 = sub_1338F0(*(_DWORD **)(a2 + 1504), nullptr, v14, v15);
          LOBYTE(v45) = 1;
          v17 = v16;
          LODWORD(v46) = v14;
          HIDWORD(v45) = v16;
          sub_123A40((__int64)v47, (unsigned __int8 *)&v45, v18, v19);
          v21 = *(_QWORD *)(a1 + 56);
          v22 = *(_QWORD *)(a1 + 48);
          v23 = v21 + 1;
          if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v21 + 1) )
          {
            v24 = qvector_reserve(v42, v22, v23, 16);
            *(_QWORD *)(a1 + 48) = v24;
            v22 = v24;
            v21 = *(_QWORD *)(a1 + 56);
          }
          sub_123A40(v22 + 16 * v21, v47, v23, v20);
          ++*(_QWORD *)(a1 + 56);
          v15 -= v17;
          v14 += v17;
          sub_11CDA0((__int64)v47);
        }
        sub_11CDA0((__int64)&v45);
        if ( j == v49 )
          break;
        v14 = j;
      }
    }
    if ( (get_tinfo_property() & 0x2F) == 0xD && *(_QWORD *)(a1 + 56) == 1 )
      tinfo_size = get_tinfo_size();
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree((__int64)v50);
  }
  qfree(v48);
  return tinfo_size;
}
