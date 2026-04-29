__int64 __fastcall sub_32BE40(__int64 a1, __int64 a2)
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
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rbx
  _QWORD *v25; // r12
  __int64 v26; // rbp
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  const void *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-A0h]
  unsigned int tinfo_size; // [rsp+10h] [rbp-98h]
  int j; // [rsp+14h] [rbp-94h]
  unsigned __int64 v36; // [rsp+20h] [rbp-88h] BYREF
  __int64 v37; // [rsp+28h] [rbp-80h]
  unsigned __int8 v38[16]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v39; // [rsp+40h] [rbp-68h] BYREF
  int v40; // [rsp+48h] [rbp-60h]
  _QWORD *v41; // [rsp+50h] [rbp-58h] BYREF
  __int128 v42; // [rsp+58h] [rbp-50h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v2 = a1 + 48;
  v4 = *(_QWORD *)(a1 + 48);
  v43 = __readfsqword(0x28u);
  v33 = v2;
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = i;
        sub_119360(16 * v8 + v4);
        v4 = *(_QWORD *)(a1 + 48);
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  sub_605C0(&v39, a1 + 96);
  v13 = *(_QWORD *)(a1 + 120);
  v41 = nullptr;
  v42 = 0;
  if ( v13 )
  {
    v28 = (_QWORD *)qalloc_or_throw(16 * v13);
    v29 = *(const void **)(a1 + 112);
    v41 = v28;
    *((_QWORD *)&v42 + 1) = v13;
    memcpy(v28, v29, 16 * v13);
    *(_QWORD *)&v42 = v13;
  }
  sub_60C00(&v39, (__int64 *)(a1 + 240), v9, v10, v11, v12);
  sub_313AE0((__int64 *)&v41, a1 + 256);
  if ( (_QWORD)v42 || *(_DWORD *)(a1 + 80) == 2 && (get_tinfo_property(*(_QWORD *)(a1 + 72), 2) & 0x2F) == 0xD )
  {
    v22 = *(_QWORD *)(a1 + 56);
    v23 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v22 + 1) )
    {
      v30 = qvector_reserve(v33, v23, v22 + 1, 16);
      *(_QWORD *)(a1 + 48) = v30;
      v22 = *(_QWORD *)(a1 + 56);
      v23 = v30;
    }
    v24 = v23 + 16 * v22;
    *(_QWORD *)v24 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v24 + 8) = 0;
    ++*(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 80) == 2 )
    {
      v36 = 0;
      copy_tinfo_t(&v36, a1 + 72);
      *(_BYTE *)v24 = 15;
      *(_DWORD *)(v24 + 4) = get_tinfo_size(0, *(_QWORD *)(a1 + 72), 0);
      v31 = qalloc_or_throw(56);
      *(_QWORD *)(v31 + 16) = a2;
      *(_DWORD *)v31 = 0;
      *(_QWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 24) = 0;
      *(_OWORD *)(v31 + 32) = 0;
      v32 = v36;
      v36 = 0;
      *(_QWORD *)(v31 + 48) = v32;
      LODWORD(v32) = *(_DWORD *)(v24 + 4);
      *(_QWORD *)(v24 + 8) = v31;
      sub_1C2570((__int64)v38, a1 + 80, v32, *(int *)(a1 + 12));
      copy_argloc(*(_QWORD *)(v24 + 8), v38);
      cleanup_argloc(v38);
      clear_tinfo_t(&v36);
      tinfo_size = *(_DWORD *)(v24 + 4);
    }
    else
    {
      if ( !(unsigned __int8)sub_60E40(&v39) || (_QWORD)v42 != 1 )
      {
        if ( !under_debugger )
          sub_37EEE0(52539);
        BUG();
      }
      v25 = v41;
      v26 = *v41 - *(_QWORD *)(a2 + 1440);
      *(_BYTE *)v24 = 5;
      v27 = (_QWORD *)qalloc_or_throw(16);
      *v27 = a2;
      v27[1] = v26;
      *(_QWORD *)(v24 + 8) = v27;
      tinfo_size = v25[1];
      *(_DWORD *)(v24 + 4) = tinfo_size;
    }
  }
  else
  {
    v14 = sub_60F20(&v39, 0);
    tinfo_size = 0;
    if ( v14 != v40 )
    {
      while ( 1 )
      {
        v37 = 0;
        v36 = 0xFFFFFFFF00000000LL;
        v15 = sub_61160(&v39, v14);
        for ( j = sub_60F20(&v39, v15 + v14); v15 > 0; tinfo_size += v17 )
        {
          v16 = sub_12FEB0(*(_DWORD **)(a2 + 1504), nullptr, v14, v15);
          LOBYTE(v36) = 1;
          v17 = v16;
          LODWORD(v37) = v14;
          HIDWORD(v36) = v16;
          sub_120000((__int64)v38, (unsigned __int8 *)&v36);
          v18 = *(_QWORD *)(a1 + 56);
          v19 = *(_QWORD *)(a1 + 48);
          if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v18 + 1) )
          {
            v20 = qvector_reserve(v33, v19, v18 + 1, 16);
            *(_QWORD *)(a1 + 48) = v20;
            v19 = v20;
            v18 = *(_QWORD *)(a1 + 56);
          }
          sub_120000(v19 + 16 * v18, v38);
          ++*(_QWORD *)(a1 + 56);
          v15 -= v17;
          v14 += v17;
          sub_119360((__int64)v38);
        }
        sub_119360((__int64)&v36);
        if ( j == v40 )
          break;
        v14 = j;
      }
    }
    if ( (get_tinfo_property(*(_QWORD *)(a1 + 72), 2) & 0x2F) == 0xD && *(_QWORD *)(a1 + 56) == 1 )
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 72), 0);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  qfree(v39);
  return tinfo_size;
}
