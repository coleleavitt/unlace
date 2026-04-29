__int64 __fastcall sub_221590(__int64 a1, __int64 *a2, __int64 *a3, int a4, int a5, int a6)
{
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned int v23; // ebx
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  unsigned __int64 v28; // rax
  __int64 v31; // [rsp+18h] [rbp-60h]
  __int64 v32; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v33[9]; // [rsp+30h] [rbp-48h] BYREF

  v9 = a6;
  v10 = *(_QWORD *)(a1 + 1496);
  v33[1] = (_QWORD *)__readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 432);
  v12 = v11 + 104LL * a4;
  v13 = v11 + 104LL * a5;
  v14 = sub_1ED1E0(v13, v10, *a3, a6);
  sub_2184D0(&v32, (_QWORD *)(v13 + 80), v14, v9);
  if ( (_BYTE)v32
    || (v25 = sub_1ED1E0(v12, *(_QWORD *)(a1 + 1496), *a2, v9),
        sub_2184D0(v33, (_QWORD *)(v12 + 80), v25, v9),
        copy_tinfo_t(&v32, v33),
        clear_tinfo_t(v33),
        (_BYTE)v32)
    || (LOBYTE(v26) = sub_119040(v9), v23 = v26, (_BYTE)v26) )
  {
    v15 = *(_QWORD *)(a1 + 56);
    if ( v15 == -1 )
      v15 = *(_QWORD *)(a1 + 40);
    v16 = j__qalloc_or_throw(80);
    *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 56) = 0;
    *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 72) = 0;
    sub_32C520(v16, v15);
    v17 = *a2;
    *(_BYTE *)(v16 + 32) = 9;
    v31 = v17;
    v18 = j__qalloc_or_throw(24);
    *(_QWORD *)v18 = a1;
    *(_QWORD *)(v18 + 8) = v31;
    *(_DWORD *)(v18 + 16) = a4;
    *(_QWORD *)(v16 + 40) = v18;
    *(_DWORD *)(v16 + 68) = v9;
    if ( *(_DWORD *)v12 == 3
      && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1504) + 200LL))(
           *(_QWORD *)(a1 + 1504),
           *(unsigned int *)(v12 + 8))
      && sub_119090(v9) )
    {
      v27 = *(_DWORD *)(v12 + 88) - *(_DWORD *)a2;
      *(_DWORD *)v16 = 67;
      *(_DWORD *)(v16 + 4) |= 0x10u;
      *(_DWORD *)(v16 + 36) = v27;
    }
    else
    {
      if ( (int)v9 > *(int *)(v12 + 88) - *a2 )
      {
        if ( !under_debugger )
          sub_37EEE0(51514);
        BUG();
      }
      v19 = *(_DWORD *)(v16 + 68);
      *(_DWORD *)v16 = 4;
      *(_DWORD *)(v16 + 36) = v19;
    }
    v20 = *a3;
    *(_BYTE *)(v16 + 64) = 9;
    v21 = j__qalloc_or_throw(24);
    *(_QWORD *)v21 = a1;
    *(_QWORD *)(v21 + 8) = v20;
    v22 = v32;
    *(_DWORD *)(v21 + 16) = a5;
    *(_QWORD *)(v16 + 72) = v21;
    if ( (get_tinfo_property(v22, 2) & 0xF) == 9 )
    {
      *(_DWORD *)(v16 + 4) |= 0x10u;
    }
    else if ( (get_tinfo_property(v32, 2) & 0x2F) == 0xD )
    {
      v33[0] = (_QWORD *)(v16 + 24);
      v28 = sub_C4570((__m128i *)(a1 + 1392), (unsigned __int64 *)(v16 + 24), v33);
      copy_tinfo_t(v28 + 32, &v32);
      *(_BYTE *)(v16 + 33) |= 2u;
      *(_BYTE *)(v16 + 65) |= 2u;
    }
    sub_643E0(a1, v16);
    *a2 += v9;
    v23 = 1;
    *a3 += v9;
  }
  clear_tinfo_t(&v32);
  return v23;
}
