__int64 __fastcall sub_E230(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, __int64 a6)
{
  int v7; // r12d
  unsigned int v8; // ebp
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r14
  unsigned int dword; // eax
  __int64 v18; // r14
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // rdi
  bool v24; // cf
  __int64 v25; // rdi
  __int16 word; // ax
  __int64 v27; // rsi
  __int16 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // [rsp+0h] [rbp-48h]
  unsigned int v34; // [rsp+0h] [rbp-48h]
  __int64 v35; // [rsp+0h] [rbp-48h]
  __int64 v36; // [rsp+8h] [rbp-40h]

  v7 = a3;
  v8 = a4;
  v10 = sub_E0A0(a1, a2, a3, a4, a5, a6);
  if ( (_BYTE)v10 )
    return 1;
  v11 = v10;
  v13 = (unsigned int)(v7 - 1);
  if ( v13 < *(_QWORD *)(a1 + 24) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v13);
    if ( v8 >= (unsigned int)get_dword(v14 + 72) )
      return v11;
    v33 = v14;
    v15 = v14 + (unsigned int)get_dword(v14 + 76);
    if ( !(unsigned __int8)is_loaded(v15) )
      return v11;
    v16 = (int)(12 * v8) + v15;
    *(_DWORD *)a2 = get_dword(v16);
    dword = get_dword(v16 + 4);
    *(_DWORD *)(a2 + 4) = dword;
    if ( dword > 0xFFFF )
      return v11;
    v18 = v16 + 8;
    if ( (unsigned int)get_dword(v18) )
    {
      v19 = (unsigned int)get_dword(v18) + v33;
      if ( !(unsigned __int8)is_loaded(v19) )
        return v11;
      v20 = v19;
      v21 = v19 + 4;
      v22 = get_dword(v20);
      if ( v22 )
      {
        if ( v22 < 0 )
          return v11;
        v23 = (unsigned int)(2 * v22);
        v34 = v22;
        v24 = __CFADD__(v21, v23);
        v25 = v21 + v23;
        if ( v24 || !(unsigned __int8)is_loaded(v25) )
          return v11;
        v36 = a2 + 8;
        v35 = 2LL * v34 + v21;
        do
        {
          word = get_word(v21);
          v27 = *(_QWORD *)(a2 + 8);
          v28 = word;
          v29 = *(_QWORD *)(a2 + 16);
          if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)(v29 + 1) )
          {
            v30 = qvector_reserve(v36, v27, v29 + 1, 2);
            *(_QWORD *)(a2 + 8) = v30;
            v27 = v30;
            v29 = *(_QWORD *)(a2 + 16);
          }
          *(_WORD *)(v27 + 2 * v29) = v28;
          v21 += 2;
          ++*(_QWORD *)(a2 + 16);
        }
        while ( v35 != v21 );
      }
      else if ( !(unsigned __int8)is_loaded(v21) )
      {
        return v11;
      }
    }
    sub_DC00(a1, v7, v8, (unsigned int *)a2);
    return 1;
  }
  if ( under_debugger )
    BUG();
  interr(20115);
  return sub_E410(20115, a2, v31, v32);
}
