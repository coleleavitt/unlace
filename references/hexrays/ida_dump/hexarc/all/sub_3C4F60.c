unsigned __int64 __fastcall sub_3C4F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  int *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // r14
  int *v24; // r12
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 i; // rbp
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  _BOOL8 v36; // rdi
  int *v37; // rax
  bool v38; // zf
  __int64 v39; // [rsp-8h] [rbp-B0h]
  __m128i v40; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+10h] [rbp-98h]
  __int64 v42; // [rsp+18h] [rbp-90h] BYREF
  _DWORD v43[2]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v44; // [rsp+28h] [rbp-80h]
  __int64 *v45; // [rsp+38h] [rbp-70h]
  _BYTE v46[20]; // [rsp+40h] [rbp-68h]
  int v47; // [rsp+54h] [rbp-54h]
  __int64 v48; // [rsp+58h] [rbp-50h]
  unsigned __int64 v49; // [rsp+68h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v7 = a4;
  v8 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4B54E0), (__m128i)(unsigned __int64)"Close");
  if ( !byte_4BB900 )
  {
    v40 = v8;
    hook_event_listener(5, &off_4BA930, 0, 0);
    byte_4BB900 = 1;
    v8 = _mm_load_si128(&v40);
  }
  v45 = &qword_4BB920;
  v43[1] = 0;
  *(_OWORD *)&v46[4] = 0;
  v48 = 0x4FFFFFFFFLL;
  *(_QWORD *)v46 = a3;
  v44 = v8;
  v47 = 0;
  v43[0] = 64;
  callui(127, v43, a3, a4, a5, a6, v40.m128i_i64[0], v40.m128i_i64[1], v41, v42);
  v9 = (_QWORD *)operator new(0x28u);
  sub_3C48C0(v9, a2);
  v42 = 0;
  sub_3C44C0(0x100u, a1, &v42, -1, sub_3C4580, v9, 0, 0);
  v12 = v42;
  v13 = v39;
  *((_QWORD *)&xmmword_4BB930 + 1) = v42;
  if ( v7 )
  {
    v42 = 0;
    sub_3C44C0(0x102u, v12, &v42);
    sub_3C44C0(0x10Fu, v42);
    v12 = *((_QWORD *)&xmmword_4BB930 + 1);
    if ( *((_QWORD *)&xmmword_4BB930 + 1) )
      goto LABEL_5;
  }
  else if ( v42 )
  {
LABEL_5:
    callui(174, v12, 0x400000, 0, v10, v11, v40.m128i_i64[0], v40.m128i_i64[1], v41, v42);
    sub_3C44C0(0x12Du, *((_QWORD *)&xmmword_4BB930 + 1), "hx:CloseGraphViewer");
    sub_3C44C0(0x106u, *((_QWORD *)&xmmword_4BB930 + 1));
    v14 = *((_QWORD *)&xmmword_4BB930 + 1);
    v15 = (int *)qword_4BB950;
    v9[4] = *((_QWORD *)&xmmword_4BB930 + 1);
    if ( !v15 )
      goto LABEL_43;
    v16 = &dword_4BB948;
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
    if ( v16 == &dword_4BB948 )
    {
LABEL_43:
      v37 = (int *)operator new(0x30u);
      v23 = *((_QWORD *)&xmmword_4BB930 + 1);
      v38 = qword_4BB968 == 0;
      *((_QWORD *)v37 + 5) = 0;
      v24 = v37;
      *((_QWORD *)v37 + 4) = v23;
      if ( !v38 )
      {
        v26 = qword_4BB960;
        v16 = nullptr;
        if ( *(_QWORD *)(qword_4BB960 + 32) < v23 )
        {
LABEL_35:
          if ( v26 )
          {
            if ( (int *)v26 == &dword_4BB948 || v16 )
            {
              v36 = 1;
LABEL_39:
              v16 = v24;
              std::_Rb_tree_insert_and_rebalance(v36, v24, v26, &dword_4BB948);
              ++qword_4BB968;
LABEL_40:
              v14 = *((_QWORD *)&xmmword_4BB930 + 1);
              goto LABEL_12;
            }
            v25 = *(_QWORD *)(v26 + 32);
LABEL_50:
            v36 = v23 < v25;
            goto LABEL_39;
          }
LABEL_41:
          if ( v24 )
            operator delete(v24, 0x30u);
          goto LABEL_40;
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
      v20 = (int *)operator new(0x30u);
      v23 = *((_QWORD *)&xmmword_4BB930 + 1);
      *((_QWORD *)v20 + 5) = 0;
      v24 = v20;
      *((_QWORD *)v20 + 4) = v23;
      v25 = *((_QWORD *)v16 + 4);
      if ( v23 >= v25 )
      {
        if ( v25 >= v23 )
          goto LABEL_41;
        if ( (int *)qword_4BB960 != v16 )
        {
          v35 = std::_Rb_tree_increment(v16);
          v26 = v35;
          if ( v23 >= *(_QWORD *)(v35 + 32) )
            goto LABEL_34;
          if ( *((_QWORD *)v16 + 3) )
          {
            v16 = (int *)v35;
            goto LABEL_35;
          }
        }
        v26 = (unsigned __int64)v16;
        if ( v16 )
          goto LABEL_50;
        goto LABEL_41;
      }
      v26 = (unsigned __int64)v16;
      if ( (int *)qword_4BB958 == v16 )
        goto LABEL_35;
      v27 = std::_Rb_tree_decrement(v16, v17, v16, v21, v22);
      v26 = v27;
      if ( *(_QWORD *)(v27 + 32) < v23 )
      {
        if ( *(_QWORD *)(v27 + 24) )
          v26 = (unsigned __int64)v16;
        else
          v16 = nullptr;
        goto LABEL_35;
      }
    }
LABEL_34:
    v16 = (int *)sub_3C3F00((__int64)&unk_4BB940, v23, v26, v28, v29);
    goto LABEL_35;
  }
  if ( !v9 )
    return 0;
  if ( *v9 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v9 + 8LL))(*v9, v12, v13);
  v30 = v9[1];
  v9[4] = 0;
  if ( v30 )
  {
    v31 = v9[2];
    if ( v31 )
    {
      for ( i = 0; i != v31; ++i )
      {
        v33 = (__int64 *)(v30 + 32 * i);
        v34 = *v33;
        if ( *v33 )
        {
          v33[1] = 0;
          qfree(v34);
          v30 = v9[1];
        }
      }
    }
    v9[2] = 0;
    qfree(v30);
  }
  operator delete(v9, 0x28u);
  return *((_QWORD *)&xmmword_4BB930 + 1);
}
