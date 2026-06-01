void __fastcall sub_124D400(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // r15
  size_t v7; // rax
  unsigned __int64 v8; // rcx
  __int64 *v9; // rdi
  __int64 v10; // rax
  void **v11; // r15
  void **v12; // rbp
  __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  void **v15; // rdx
  unsigned __int64 v16; // rsi
  void **v17; // rdi
  bool v18; // cc
  __int64 v19; // rdi
  __int64 v20; // rax
  size_t v21; // [rsp+8h] [rbp-B0h]
  __m128i v22; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-98h] BYREF
  void *v24; // [rsp+30h] [rbp-88h] BYREF
  size_t v25; // [rsp+38h] [rbp-80h]
  _QWORD v26[2]; // [rsp+40h] [rbp-78h] BYREF
  void **v27; // [rsp+50h] [rbp-68h] BYREF
  __int16 v28; // [rsp+70h] [rbp-48h]

  sub_1269780(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 5016) = 0;
  *(_QWORD *)a1 = off_2C3C558;
  *(_BYTE *)(a1 + 5024) = 0;
  *(_QWORD *)(a1 + 5008) = a1 + 5024;
  *(_QWORD *)(a1 + 5056) = a1 + 5072;
  *(_QWORD *)(a1 + 5088) = a1 + 5104;
  *(_QWORD *)(a1 + 5120) = a1 + 5136;
  *(_QWORD *)(a1 + 5064) = 0;
  *(_BYTE *)(a1 + 5072) = 0;
  *(_QWORD *)(a1 + 5096) = 0;
  *(_BYTE *)(a1 + 5104) = 0;
  *(_QWORD *)(a1 + 5128) = 0;
  *(_BYTE *)(a1 + 5136) = 0;
  sub_1246300(&v22, a1, (_BYTE **)(a2 + 104), (__int64 *)(a2 + 344));
  v24 = v26;
  sub_1244640(&v24, v22.m128i_i64[0], v22.m128i_i64[0] + v22.m128i_i64[1]);
  v6 = v25;
  if ( 0x7FFFFFFFFFFFFFFFLL - v25 <= 3 )
    std::__throw_length_error("basic_string::append");
  v7 = v25 + 4;
  if ( v24 == v26 )
    v8 = 15;
  else
    v8 = v26[0];
  if ( v7 > v8 )
  {
    v21 = v25 + 4;
    sub_998B30((__int64)&v24, v25, 0, "/bin", 4u);
    v7 = v21;
  }
  else
  {
    *(_DWORD *)((char *)v24 + v25) = 1852400175;
  }
  v25 = v7;
  *((_BYTE *)v24 + v6 + 4) = 0;
  v9 = *(__int64 **)(a2 + 8);
  v10 = *v9;
  v28 = 260;
  v27 = &v24;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, void ***))(v10 + 96))(v9, &v27) )
    goto LABEL_7;
  v13 = *(unsigned int *)(a1 + 1160);
  v14 = *(_QWORD *)(a1 + 1152);
  v15 = &v24;
  v16 = v13 + 1;
  v17 = (void **)(v14 + 32 * v13);
  if ( v16 > *(unsigned int *)(a1 + 1164) )
  {
    if ( v14 > (unsigned __int64)&v24 )
    {
      v19 = a1 + 1152;
    }
    else
    {
      v18 = v17 <= &v24;
      v19 = a1 + 1152;
      if ( !v18 )
      {
        sub_A8C1F0(v19, v16);
        v20 = *(_QWORD *)(a1 + 1152);
        v15 = (void **)((char *)&v24 + v20 - v14);
        v17 = (void **)(v20 + 32LL * *(unsigned int *)(a1 + 1160));
        goto LABEL_18;
      }
    }
    sub_A8C1F0(v19, v16);
    v15 = &v24;
    v17 = (void **)(*(_QWORD *)(a1 + 1152) + 32LL * *(unsigned int *)(a1 + 1160));
  }
LABEL_18:
  *v17 = v17 + 2;
  sub_1244640(v17, *v15, (__int64)v15[1] + (_QWORD)*v15);
  ++*(_DWORD *)(a1 + 1160);
LABEL_7:
  v11 = *(void ***)(a1 + 624);
  v12 = &v11[4 * *(unsigned int *)(a1 + 632)];
  while ( v11 != v12 )
  {
    while ( 1 )
    {
      v12 -= 4;
      if ( *v12 == v12 + 2 )
        break;
      operator delete(*v12);
      if ( v11 == v12 )
        goto LABEL_11;
    }
  }
LABEL_11:
  *(_DWORD *)(a1 + 632) = 0;
  sub_124C3B0(a1, a4, a1 + 624);
  if ( v24 != v26 )
    operator delete(v24);
  if ( (__int64 *)v22.m128i_i64[0] != &v23 )
    operator delete((void *)v22.m128i_i64[0]);
}
