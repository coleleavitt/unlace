int *__fastcall sub_A63C0(__int64 a1, __int64 *a2)
{
  int *result; // rax
  unsigned __int64 v3; // rdi
  int *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 item_end; // rax
  __int64 v9; // xmm0_8
  __int64 v10; // rbp
  __m128i v11; // xmm0
  __int64 v12; // r13
  __int128 v13; // xmm0
  unsigned __int64 *v14; // rax
  __int64 insn; // rax
  _QWORD *v16; // r14
  unsigned __int64 v17; // rdx
  int *v18; // rax
  int *v19; // rcx
  int *v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rsi
  _QWORD *v23; // rbp
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdx
  char v26; // cl
  _QWORD *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rbp
  _QWORD *v31; // rbx
  unsigned __int64 v32; // rsi
  char v33; // di
  _QWORD *v34; // rax
  __int64 v35; // rax
  __m128i v36; // [rsp+8h] [rbp-240h] BYREF
  unsigned __int64 v37; // [rsp+18h] [rbp-230h]
  int *v38; // [rsp+20h] [rbp-228h]
  __int64 (__fastcall ***v39)(); // [rsp+28h] [rbp-220h]
  __int64 (__fastcall **v40)(); // [rsp+30h] [rbp-218h] BYREF
  char v41; // [rsp+38h] [rbp-210h]
  _BYTE *v42; // [rsp+40h] [rbp-208h]
  __int128 v43; // [rsp+48h] [rbp-200h]
  __m128i v44; // [rsp+58h] [rbp-1F0h]
  __int64 *v45; // [rsp+68h] [rbp-1E0h]
  int v46; // [rsp+70h] [rbp-1D8h]
  __int64 v47; // [rsp+78h] [rbp-1D0h]
  __int128 v48; // [rsp+80h] [rbp-1C8h]
  int v49; // [rsp+90h] [rbp-1B8h]
  __int128 v50; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-198h]
  __int64 v52; // [rsp+B8h] [rbp-190h]
  __int64 v53; // [rsp+C0h] [rbp-188h]
  char v54; // [rsp+C8h] [rbp-180h] BYREF
  unsigned __int64 v55; // [rsp+208h] [rbp-40h] BYREF

  result = (int *)qword_251A30;
  v3 = *a2;
  v55 = __readfsqword(0x28u);
  if ( !qword_251A30 )
    goto LABEL_8;
  v5 = &dword_251A28;
  do
  {
    while ( 1 )
    {
      v6 = *((_QWORD *)result + 2);
      v7 = *((_QWORD *)result + 3);
      if ( *((_QWORD *)result + 4) < v3 )
        break;
      v5 = result;
      result = *((int **)result + 2);
      if ( !v6 )
        goto LABEL_6;
    }
    result = *((int **)result + 3);
  }
  while ( v7 );
LABEL_6:
  if ( v5 == &dword_251A28 || v3 < *((_QWORD *)v5 + 4) )
  {
LABEL_8:
    item_end = get_item_end();
    v9 = *a2;
    v10 = item_end;
    v41 = 0;
    v40 = off_22F648;
    v36.m128i_i64[0] = v9;
    v43 = 0;
    v42 = (_BYTE *)qvector_reserve();
    v11 = _mm_loadl_epi64(&v36);
    *(_QWORD *)&v43 = 1;
    *v42 = 0;
    v44 = _mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)v10);
    v45 = a2;
    v46 = 66;
    v47 = 0;
    v49 = 0;
    v39 = &v40;
    v48 = 0;
    create_qflow_chart();
    if ( (int)v48 > 0 )
    {
      v12 = 0;
      v13 = 0;
      v36.m128i_i64[1] = (__int64)&v54;
      v36.m128i_i64[0] = (__int64)&v50;
      while ( 1 )
      {
        v51 = -1;
        v14 = (unsigned __int64 *)v36.m128i_i64[1];
        v52 = 0;
        v53 = 0;
        v50 = -1;
        do
        {
          *(_WORD *)v14 = 0;
          v14 += 5;
          *((_WORD *)v14 - 19) = 0;
          *((_WORD *)v14 - 18) = 0;
          *((_DWORD *)v14 - 2) = 0;
          *((_WORD *)v14 - 17) = 0;
          *((_OWORD *)v14 - 2) = v13;
          *(v14 - 2) = 0;
        }
        while ( &v55 != v14 );
        insn = decode_prev_insn();
        v16 = qword_251A70;
        v17 = insn;
        v13 = 0;
        if ( !qword_251A70 )
          break;
        v18 = (int *)qword_251A70;
        v19 = &dword_251A68;
        v20 = &dword_251A68;
        do
        {
          while ( 1 )
          {
            v21 = *((_QWORD *)v18 + 2);
            v22 = *((_QWORD *)v18 + 3);
            if ( *((_QWORD *)v18 + 4) < v17 )
              break;
            v20 = v18;
            v18 = *((int **)v18 + 2);
            if ( !v21 )
              goto LABEL_17;
          }
          v18 = *((int **)v18 + 3);
        }
        while ( v22 );
LABEL_17:
        if ( v20 != &dword_251A68 && v17 >= *((_QWORD *)v20 + 4) )
          goto LABEL_19;
        while ( 1 )
        {
          v32 = v16[4];
          v33 = 0;
          v34 = (_QWORD *)v16[3];
          if ( v17 < v32 )
          {
            v34 = (_QWORD *)v16[2];
            v33 = 1;
          }
          if ( !v34 )
            break;
          v16 = v34;
        }
        if ( v33 )
        {
          if ( (_QWORD *)qword_251A78 == v16 )
          {
LABEL_48:
            v38 = v19;
            v37 = v17;
            *(_QWORD *)(operator new(0x28u) + 32) = v17;
            std::_Rb_tree_insert_and_rebalance();
            ++qword_251A88;
            v13 = 0;
            goto LABEL_19;
          }
          goto LABEL_50;
        }
LABEL_47:
        if ( v32 < v17 )
          goto LABEL_48;
LABEL_19:
        if ( (int)v48 <= (int)++v12 )
          goto LABEL_20;
      }
      v19 = &dword_251A68;
      if ( (int *)qword_251A78 == &dword_251A68 )
        goto LABEL_48;
LABEL_50:
      v38 = &dword_251A68;
      v37 = v17;
      v35 = std::_Rb_tree_decrement();
      v19 = v38;
      v17 = v37;
      v13 = 0;
      v32 = *(_QWORD *)(v35 + 32);
      goto LABEL_47;
    }
LABEL_20:
    v23 = qword_251A30;
    v24 = *a2;
    if ( !qword_251A30 )
    {
      if ( (int *)qword_251A38 == &dword_251A28 )
        goto LABEL_28;
LABEL_52:
      if ( *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v24 )
        goto LABEL_29;
      goto LABEL_28;
    }
    while ( 1 )
    {
      v25 = v23[4];
      v26 = 0;
      v27 = (_QWORD *)v23[3];
      if ( v24 < v25 )
      {
        v27 = (_QWORD *)v23[2];
        v26 = 1;
      }
      if ( !v27 )
        break;
      v23 = v27;
    }
    if ( v26 )
    {
      if ( (_QWORD *)qword_251A38 != v23 )
        goto LABEL_52;
    }
    else if ( v25 >= v24 )
    {
LABEL_29:
      v28 = v47;
      v40 = off_22F648;
      if ( v47 )
      {
        v29 = v48;
        if ( (_QWORD)v48 )
        {
          v30 = 0;
          do
          {
            v31 = (_QWORD *)(v28 + (v30 << 6));
            if ( v31[5] )
            {
              v31[6] = 0;
              qfree();
            }
            if ( v31[2] )
            {
              v31[3] = 0;
              qfree();
            }
            ++v30;
            v28 = v47;
          }
          while ( v29 != v30 );
        }
        *(_QWORD *)&v48 = 0;
        qfree();
      }
      if ( v42 )
      {
        *(_QWORD *)&v43 = 0;
        qfree();
      }
      return &dword_0 + 1;
    }
LABEL_28:
    *(_QWORD *)(operator new(0x28u) + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance();
    ++qword_251A48;
    goto LABEL_29;
  }
  return result;
}

