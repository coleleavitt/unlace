__int64 __fastcall sub_DBE0(__int64 a1, __int64 a2, int a3, unsigned __int16 a4)
{
  unsigned int v6; // ebp
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // r15d
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rdx
  unsigned int dword; // eax
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // r14
  int v27; // eax
  __int64 v28; // rdi
  bool v29; // cf
  __int64 v30; // rdi
  __int16 word; // ax
  __int64 v32; // rsi
  __int16 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-48h]
  unsigned int v37; // [rsp+0h] [rbp-48h]
  __int64 v38; // [rsp+0h] [rbp-48h]
  __int64 v39; // [rsp+8h] [rbp-40h]

  v6 = a4;
  v8 = sub_DA80(a1, a2, a3, a4);
  if ( (_BYTE)v8 )
    return 1;
  v10 = v8;
  v12 = (unsigned int)(a3 - 1);
  if ( v12 < *(_QWORD *)(a1 + 24) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v12);
    if ( v6 >= (unsigned int)get_dword(v13 + 72, a2, v9) )
      return v10;
    v36 = v13;
    v15 = v13 + (unsigned int)get_dword(v13 + 76, a2, v14);
    if ( !(unsigned __int8)is_loaded(v15) )
      return v10;
    v17 = (int)(12 * v6) + v15;
    *(_DWORD *)a2 = get_dword(v17, a2, v16);
    dword = get_dword(v17 + 4, a2, v18);
    *(_DWORD *)(a2 + 4) = dword;
    if ( dword > 0xFFFF )
      return v10;
    v21 = v17 + 8;
    if ( (unsigned int)get_dword(v21, a2, v20) )
    {
      v23 = (unsigned int)get_dword(v21, a2, v22) + v36;
      if ( !(unsigned __int8)is_loaded(v23) )
        return v10;
      v25 = v23;
      v26 = v23 + 4;
      v27 = get_dword(v25, a2, v24);
      if ( v27 )
      {
        if ( v27 < 0 )
          return v10;
        v28 = (unsigned int)(2 * v27);
        v37 = v27;
        v29 = __CFADD__(v26, v28);
        v30 = v26 + v28;
        if ( v29 || !(unsigned __int8)is_loaded(v30) )
          return v10;
        v39 = a2 + 8;
        v38 = 2LL * v37 + v26;
        do
        {
          word = get_word(v26);
          v32 = *(_QWORD *)(a2 + 8);
          v33 = word;
          v34 = *(_QWORD *)(a2 + 16);
          if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)(v34 + 1) )
          {
            v35 = qvector_reserve(v39, v32, v34 + 1, 2);
            *(_QWORD *)(a2 + 8) = v35;
            v32 = v35;
            v34 = *(_QWORD *)(a2 + 16);
          }
          *(_WORD *)(v32 + 2 * v34) = v33;
          v26 += 2;
          ++*(_QWORD *)(a2 + 16);
        }
        while ( v38 != v26 );
      }
      else if ( !(unsigned __int8)is_loaded(v26) )
      {
        return v10;
      }
    }
    sub_A2F0(a1, a3, v6, (unsigned int *)a2);
    return 1;
  }
  if ( under_debugger )
    BUG();
  interr(20115);
  return sub_DDC0();
}

