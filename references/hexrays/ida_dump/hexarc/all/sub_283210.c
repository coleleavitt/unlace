__int64 __fastcall sub_283210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbp
  unsigned int tinfo_size; // eax
  __int64 v20; // rdx

  v8 = *(_QWORD *)(a1 + 216);
  v9 = sub_24DC40(a2);
  if ( *(_DWORD *)(v9 + 8) == 61 )
  {
    v14 = *(__int64 **)(v9 + 24);
    v15 = sub_24E6B0(v14, (_QWORD *)(v9 + 48));
    if ( *(_DWORD *)(a3 + 8) != 61 )
      sub_277950(v14);
    v16 = sub_24E6B0(*(__int64 **)(a3 + 24), (_QWORD *)(a3 + 48));
    v17 = v16 + v15;
    v18 = v15 - v16;
    if ( a5 == 35 )
      v18 = v17;
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a3 + 48), 0);
    v20 = a1;
    v10 = a2;
    sub_2396A0(a2, v8, v20, v18, tinfo_size, 0);
  }
  else
  {
    v10 = j__qalloc_or_throw(64);
    v11 = j__qalloc_or_throw(64);
    *(_QWORD *)v11 = -1;
    v12 = v11;
    *(_DWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 48) = 0;
    *(_QWORD *)(v11 + 12) = -1;
    *(_DWORD *)(v11 + 56) = 0;
    sub_253C70(v11, a3);
    *(_QWORD *)v10 = -1;
    *(_DWORD *)(v10 + 8) = a5;
    *(_QWORD *)(v10 + 12) = -1;
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = v12;
    *(_QWORD *)(v10 + 40) = 0;
    *(_QWORD *)(v10 + 48) = 0;
    *(_DWORD *)(v10 + 56) = 0;
    sub_23CE40(v10, *(_QWORD *)(v8 + 112), 0);
    *(_QWORD *)v10 = a4;
  }
  return v10;
}
