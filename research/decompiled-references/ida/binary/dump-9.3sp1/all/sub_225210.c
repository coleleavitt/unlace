__int64 __fastcall sub_225210(__int64 a1, __int64 *a2, __int64 *a3, unsigned int a4, int a5, int a6)
{
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdx
  _DWORD *v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // r15
  __int64 v25; // rax
  unsigned int v26; // ebx
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  __int64 v33; // [rsp+18h] [rbp-60h]
  __int64 v34; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v35[9]; // [rsp+30h] [rbp-48h] BYREF

  v8 = a6;
  v9 = *(_QWORD *)(a1 + 1496);
  v35[1] = (_QWORD *)__readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 432);
  v11 = (_DWORD *)(v10 + 104LL * (int)a4);
  v12 = v10 + 104LL * a5;
  v13 = sub_1F0E60(v12, v9, *a3, a6);
  sub_21C150(&v34, v12 + 80, v13, v8);
  if ( (_BYTE)v34
    || (v28 = sub_1F0E60((__int64)v11, *(_QWORD *)(a1 + 1496), *a2, v8),
        sub_21C150(v35, (_DWORD)v11 + 80, v28, v8),
        copy_tinfo_t(),
        clear_tinfo_t(),
        (_BYTE)v34)
    || (LOBYTE(v29) = sub_11CA80(v8), v26 = v29, (_BYTE)v29) )
  {
    v16 = *(_QWORD *)(a1 + 56);
    if ( v16 == -1 )
      v16 = *(_QWORD *)(a1 + 40);
    v17 = j__qalloc_or_throw(80, v16, v14, v15);
    *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 40) = 0;
    *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 56) = 0;
    *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 72) = 0;
    sub_330970(v17, v16);
    v18 = *a2;
    *(_BYTE *)(v17 + 32) = 9;
    v33 = v18;
    v20 = j__qalloc_or_throw(24, v16, v18, v19);
    v21 = a4;
    *(_QWORD *)v20 = a1;
    *(_QWORD *)(v20 + 8) = v33;
    *(_DWORD *)(v20 + 16) = a4;
    *(_QWORD *)(v17 + 40) = v20;
    *(_DWORD *)(v17 + 68) = v8;
    if ( *v11 == 3
      && (v16 = (unsigned int)v11[2],
          (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1504) + 200LL))(
            *(_QWORD *)(a1 + 1504),
            v16))
      && sub_11CAD0(v8) )
    {
      v30 = v11[22] - *(_DWORD *)a2;
      *(_DWORD *)v17 = 67;
      *(_DWORD *)(v17 + 4) |= 0x10u;
      *(_DWORD *)(v17 + 36) = v30;
    }
    else
    {
      v22 = (int)v8;
      if ( (int)v8 > (int)v11[22] - *a2 )
      {
        if ( !under_debugger )
          sub_383060(51514);
        BUG();
      }
      v23 = *(_DWORD *)(v17 + 68);
      *(_DWORD *)v17 = 4;
      *(_DWORD *)(v17 + 36) = v23;
    }
    v24 = *a3;
    *(_BYTE *)(v17 + 64) = 9;
    v25 = j__qalloc_or_throw(24, v16, v22, v21);
    *(_QWORD *)v25 = a1;
    *(_QWORD *)(v25 + 8) = v24;
    *(_DWORD *)(v25 + 16) = a5;
    *(_QWORD *)(v17 + 72) = v25;
    if ( (get_tinfo_property() & 0xF) == 9 )
    {
      *(_DWORD *)(v17 + 4) |= 0x10u;
    }
    else if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      v35[0] = (_QWORD *)(v17 + 24);
      sub_C7FB0((__m128i *)(a1 + 1392), (unsigned __int64 *)(v17 + 24), v35);
      copy_tinfo_t();
      *(_BYTE *)(v17 + 33) |= 2u;
      *(_BYTE *)(v17 + 65) |= 2u;
    }
    sub_67E20(a1, v17);
    *a2 += v8;
    v26 = 1;
    *a3 += v8;
  }
  clear_tinfo_t();
  return v26;
}
