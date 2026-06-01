unsigned __int64 __fastcall sub_3CC860(_DWORD a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // bp
  __m128i v8; // xmm1
  _QWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  int *v15; // rax
  int *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  int *v22; // r12
  unsigned __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 i; // rbp
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // zf
  __m128i v34; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+10h] [rbp-98h]
  __int64 v36; // [rsp+18h] [rbp-90h]
  _DWORD v37[2]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v38; // [rsp+28h] [rbp-80h]
  __int64 *v39; // [rsp+38h] [rbp-70h]
  _BYTE v40[20]; // [rsp+40h] [rbp-68h]
  int v41; // [rsp+54h] [rbp-54h]
  __int64 v42; // [rsp+58h] [rbp-50h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v7 = a4;
  v8 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E8CE0), (__m128i)(unsigned __int64)"Close");
  if ( !byte_4EF9C0 )
  {
    v34 = v8;
    hook_event_listener();
    byte_4EF9C0 = 1;
    v8 = _mm_load_si128(&v34);
  }
  v39 = &qword_4EF9E0;
  v37[1] = 0;
  *(_OWORD *)&v40[4] = 0;
  v42 = 0x4FFFFFFFFLL;
  *(_QWORD *)v40 = a3;
  v38 = v8;
  v41 = 0;
  v37[0] = 64;
  callui(127, v37, a3, a4, a5, a6, v34.m128i_i64[0], v34.m128i_i64[1], v35, v36);
  v9 = (_QWORD *)operator new(0x28u);
  sub_3CC1C0(v9, a2);
  v36 = 0;
  sub_3CBDC0();
  v12 = v36;
  v13 = 0;
  *((_QWORD *)&xmmword_4EF9F0 + 1) = v36;
  if ( v7 )
  {
    v36 = 0;
    sub_3CBDC0();
    sub_3CBDC0();
    v12 = *((_QWORD *)&xmmword_4EF9F0 + 1);
    if ( *((_QWORD *)&xmmword_4EF9F0 + 1) )
      goto LABEL_5;
  }
  else if ( v36 )
  {
LABEL_5:
    callui(174, v12, 0x400000, 0, v10, v11, v34.m128i_i64[0], v34.m128i_i64[1], v35, v36);
    sub_3CBDC0();
    sub_3CBDC0();
    v14 = *((_QWORD *)&xmmword_4EF9F0 + 1);
    v15 = (int *)qword_4EFA10;
    v9[4] = *((_QWORD *)&xmmword_4EF9F0 + 1);
    if ( !v15 )
      goto LABEL_40;
    v16 = &dword_4EFA08;
    do
    {
      while ( 1 )
      {
        v17 = *((_QWORD *)v15 + 2);
        v18 = *((_QWORD *)v15 + 3);
        if ( *((_QWORD *)v15 + 4) < v14 )
          break;
        v16 = v15;
        v15 = *((int **)v15 + 2);
        if ( !v17 )
          goto LABEL_10;
      }
      v15 = *((int **)v15 + 3);
    }
    while ( v18 );
LABEL_10:
    if ( v16 == &dword_4EFA08 )
    {
LABEL_40:
      v32 = operator new(0x30u);
      v21 = *((_QWORD *)&xmmword_4EF9F0 + 1);
      v33 = qword_4EFA28 == 0;
      *(_QWORD *)(v32 + 40) = 0;
      v22 = (int *)v32;
      *(_QWORD *)(v32 + 32) = v21;
      if ( !v33 )
      {
        v24 = qword_4EFA20;
        v16 = nullptr;
        if ( *(_QWORD *)(qword_4EFA20 + 32) < v21 )
        {
LABEL_35:
          if ( v24 )
          {
LABEL_36:
            v16 = v22;
            std::_Rb_tree_insert_and_rebalance();
            ++qword_4EFA28;
LABEL_37:
            v14 = *((_QWORD *)&xmmword_4EF9F0 + 1);
            goto LABEL_12;
          }
LABEL_38:
          if ( v22 )
            operator delete(v22, 0x30u);
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( v14 >= *((_QWORD *)v16 + 4) )
      {
LABEL_12:
        *((_QWORD *)v16 + 5) = v9;
        return v14;
      }
      v20 = operator new(0x30u);
      v21 = *((_QWORD *)&xmmword_4EF9F0 + 1);
      *(_QWORD *)(v20 + 40) = 0;
      v22 = (int *)v20;
      *(_QWORD *)(v20 + 32) = v21;
      v23 = *((_QWORD *)v16 + 4);
      if ( v21 >= v23 )
      {
        if ( v23 >= v21 )
          goto LABEL_38;
        if ( (int *)qword_4EFA20 != v16 )
        {
          v31 = std::_Rb_tree_increment();
          v24 = v31;
          if ( v21 >= *(_QWORD *)(v31 + 32) )
            goto LABEL_34;
          if ( *((_QWORD *)v16 + 3) )
          {
            v16 = (int *)v31;
            goto LABEL_35;
          }
        }
        if ( v16 )
          goto LABEL_36;
        goto LABEL_38;
      }
      v24 = (__int64)v16;
      if ( (int *)qword_4EFA18 == v16 )
        goto LABEL_35;
      v25 = std::_Rb_tree_decrement();
      v24 = v25;
      if ( *(_QWORD *)(v25 + 32) < v21 )
      {
        if ( *(_QWORD *)(v25 + 24) )
          v24 = (__int64)v16;
        else
          v16 = nullptr;
        goto LABEL_35;
      }
    }
LABEL_34:
    v16 = (int *)sub_3CB800((__int64)&unk_4EFA00, v21);
    goto LABEL_35;
  }
  if ( !v9 )
    return 0;
  if ( *v9 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v9 + 8LL))(*v9, v12, v13);
  v26 = v9[1];
  v9[4] = 0;
  if ( v26 )
  {
    v27 = v9[2];
    if ( v27 )
    {
      for ( i = 0; i != v27; ++i )
      {
        v29 = (__int64 *)(v26 + 32 * i);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30);
          v26 = v9[1];
        }
      }
    }
    v9[2] = 0;
    qfree(v26);
  }
  operator delete(v9, 0x28u);
  return *((_QWORD *)&xmmword_4EF9F0 + 1);
}
