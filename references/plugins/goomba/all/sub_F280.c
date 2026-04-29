unsigned __int64 __fastcall sub_F280(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  int *v6; // r12
  __int64 v7; // r14
  __int64 (__fastcall *hexdsp)(__int64, __int64, int *); // rax
  int v9; // eax
  __int64 v10; // rcx
  int (__fastcall *v11)(__int64, int *, __int64); // rax
  unsigned __int8 v13; // al
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  void (__fastcall *v17)(__int64, _BYTE *, int *); // rax
  __int64 v18; // rdi
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 (__fastcall *v25)(__int64, _BYTE *, __int64); // rax
  int v26; // eax
  int v27; // eax
  __int64 v28; // r15
  int (__fastcall *v29)(__int64, __int64, _BYTE *); // rax
  void (__fastcall *v30)(__int64, _BYTE *); // rax
  __m128i *v31; // r12
  __int64 v32; // rdx
  void (__fastcall *v33)(__int64, __m128i *, _BYTE *); // rax
  int (__fastcall *v34)(__int64, _BYTE *, __int64); // rax
  unsigned __int64 v35; // [rsp+0h] [rbp-78h]
  __int32 v36; // [rsp+8h] [rbp-70h]
  bool v37; // [rsp+Fh] [rbp-69h]
  _BYTE v38[16]; // [rsp+10h] [rbp-68h] BYREF
  __m128i v39; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v3 = a1 + 200;
  v4 = (_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 208);
  v40 = __readfsqword(0x28u);
  v6 = a2;
  if ( v5 )
  {
    v7 = a1 + 200;
    do
    {
      while ( 1 )
      {
        hexdsp = (__int64 (__fastcall *)(__int64, __int64, int *))get_hexdsp(a1, a2, a3);
        a2 = (int *)(v5 + 32);
        a1 = 296;
        v9 = hexdsp(296, v5 + 32, v6);
        a3 = *(_QWORD *)(v5 + 16);
        v10 = *(_QWORD *)(v5 + 24);
        if ( v9 < 0 )
          break;
        v7 = v5;
        v5 = *(_QWORD *)(v5 + 16);
        if ( !a3 )
          goto LABEL_6;
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
    while ( v10 );
LABEL_6:
    if ( v3 != v7 )
    {
      v11 = (int (__fastcall *)(__int64, int *, __int64))get_hexdsp(296, a2, a3);
      if ( v11(296, v6, v7 + 32) >= 0 )
        return *(_QWORD *)(v7 + 48);
    }
  }
  v13 = *(_BYTE *)v6;
  if ( *(_BYTE *)v6 == 6 )
  {
    v14 = v6[1];
    v15 = *((_QWORD *)v6 + 1);
    v35 = sub_E760(v15, v14, v4 + 6);
    v36 = v16;
  }
  else if ( v13 > 6u )
  {
    if ( v13 != 9 )
      goto LABEL_33;
    v14 = v6[1];
    v15 = *(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL);
    v35 = sub_E760(v15, v14, v4 + 12);
    v36 = v16;
  }
  else
  {
    if ( v13 != 1 )
    {
      if ( v13 == 5 )
      {
        v14 = v6[1];
        v15 = *(_QWORD *)(*((_QWORD *)v6 + 1) + 8LL);
        v35 = sub_E760(v15, v14, v4);
        v36 = v16;
        goto LABEL_14;
      }
LABEL_33:
      if ( !under_debugger )
      {
        interr((char *)&loc_7864 + 4);
        __cxa_begin_catch((char *)&loc_7864 + 4);
        operator delete(v6, 0x40u);
        __cxa_rethrow();
      }
      BUG();
    }
    v14 = v6[1];
    v15 = v6[2];
    v35 = sub_E760(v15, v14, v4 + 18);
    v36 = v16;
  }
LABEL_14:
  v17 = (void (__fastcall *)(__int64, _BYTE *, int *))get_hexdsp(v15, v14, v16);
  v18 = 273;
  v19 = v38;
  v17(273, v38, v6);
  v23 = v4[26];
  v39.m128i_i64[0] = v35;
  v39.m128i_i32[2] = v36;
  if ( v23 )
  {
    while ( 1 )
    {
      v24 = v23 + 32;
      v25 = (__int64 (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(v18, v38, v20);
      v19 = v38;
      v18 = 296;
      v26 = v25(296, v38, v23 + 32);
      v20 = *(_QWORD *)(v23 + 24);
      if ( v26 < 0 )
        v20 = *(_QWORD *)(v23 + 16);
      v27 = (v26 >> 31) & 1;
      if ( !v20 )
        break;
      v23 = v20;
    }
    if ( !(_BYTE)v27 )
    {
      v28 = v23;
      goto LABEL_23;
    }
  }
  else
  {
    v23 = v3;
  }
  v28 = v4[27];
  if ( v23 == v28 )
  {
LABEL_27:
    v37 = 1;
    if ( v3 != v28 )
    {
      v34 = (int (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(v18, v19, v20);
      v19 = v38;
      v37 = v34(296, v38, v28 + 32) < 0;
    }
    v31 = (__m128i *)operator new(0x40u);
    v33 = (void (__fastcall *)(__int64, __m128i *, _BYTE *))get_hexdsp(64, v19, v32);
    v33(273, v31 + 2, v38);
    v19 = v31;
    v18 = v37;
    v31[3] = _mm_load_si128(&v39);
    std::_Rb_tree_insert_and_rebalance(v37, v31, v28, v3);
    ++v4[29];
    goto LABEL_24;
  }
  v18 = v23;
  v28 = v23;
  v24 = std::_Rb_tree_decrement(v23, v38, v20, v21, v22) + 32;
LABEL_23:
  v29 = (int (__fastcall *)(__int64, __int64, _BYTE *))get_hexdsp(v18, v38, v20);
  v19 = (_BYTE *)v24;
  v18 = 296;
  if ( v29(296, v24, v38) < 0 )
    goto LABEL_27;
LABEL_24:
  v30 = (void (__fastcall *)(__int64, _BYTE *))get_hexdsp(v18, v19, v20);
  v30(276, v38);
  return v35;
}
