__int64 __fastcall sub_270F20(__m128i *a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 *v7; // rsi
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 tinfo_size; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // al
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v33; // rax
  __int64 v34; // r13
  char v35; // al
  _BOOL4 v36; // r12d
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // r15
  __int64 v43; // r11
  int v44; // edx
  bool v45; // al
  int v46; // ecx
  int v47; // r9d
  char tinfo_property; // r13
  bool v49; // r15
  __int64 v50; // rax
  int v51; // r8d
  int v52; // r9d
  int v53; // [rsp+0h] [rbp-80h]
  int v54; // [rsp+8h] [rbp-78h]
  int v55; // [rsp+8h] [rbp-78h]
  __int64 v56; // [rsp+10h] [rbp-70h]
  __int64 v57; // [rsp+18h] [rbp-68h]
  int v58; // [rsp+18h] [rbp-68h]
  int v59; // [rsp+18h] [rbp-68h]
  __int64 v60; // [rsp+20h] [rbp-60h]
  int v61; // [rsp+20h] [rbp-60h]
  __int64 v62; // [rsp+20h] [rbp-60h]
  char v63; // [rsp+20h] [rbp-60h]
  int v64; // [rsp+28h] [rbp-58h]
  __int64 v66; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v67[8]; // [rsp+40h] [rbp-40h] BYREF

  v67[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 64) + 8LL);
  ++*(_DWORD *)(v2 + 896);
  v3 = sub_2672A0((__int64)a1, a1[2].m128i_i64[1]);
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = j__qalloc_or_throw(64);
  *(_QWORD *)v5 = -1;
  v6 = v5;
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 12) = -1;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  sub_2563F0(v5, v4);
  v7 = (__int64 *)a1[3].m128i_i64[0];
  if ( v7 )
  {
    v8 = a1[2].m128i_i64[0];
    v9 = *(_DWORD *)(v8 + 8);
    if ( v9 == 36 || (v10 = 1, v9 == 7) )
      v10 = -1;
    if ( !(unsigned __int8)sub_266CE0((__int64)a1, v7, *(_QWORD *)v8, v10, 0) )
    {
      if ( v6 )
      {
        sub_250A30(v6);
        clear_tinfo_t(v6 + 48);
        j__qfree(v6);
      }
      return 0;
    }
  }
  sub_270E30((__int64)a1);
  v11 = sub_26D240(a1, v6);
  if ( !v11 )
  {
    v11 = v6;
    if ( *(_DWORD *)(v6 + 8) != 52 )
      goto LABEL_11;
LABEL_46:
    sub_2677E0(&v66, (__int64)a1);
    v42 = *(_QWORD *)(v11 + 24);
    v60 = a1[5].m128i_i64[1];
    v57 = a1[6].m128i_i64[0];
    v56 = a1->m128i_i64[0];
    v43 = sub_2667D0(v42);
    if ( v43 != -1 )
    {
      if ( a1[4].m128i_i64[0] )
      {
        v44 = *(_QWORD *)(a1[3].m128i_i64[1] + 24);
        v45 = v44 != 0;
      }
      else
      {
        v45 = 0;
        v44 = 0;
      }
      v46 = v60 - v57;
      if ( v60 != v57 || v45 )
        goto LABEL_54;
      if ( (_BYTE)v66 )
      {
        v54 = v44;
        v58 = v43;
        v61 = v46;
        if ( (get_tinfo_property(v66, 2) & 0x3F) != 1 )
        {
          v46 = v61;
          LODWORD(v43) = v58;
          v44 = v54;
LABEL_54:
          v47 = v42 + 24;
          if ( *(_DWORD *)(v42 + 8) != 65 )
            v47 = 0;
          v53 = v47;
          v64 = v44;
          v55 = v43;
          v59 = v46;
          v62 = *(_QWORD *)(v56 + 808);
          v67[0] = 0;
          copy_tinfo_t(v67, &v66);
          sub_279B90(v62, v55, v64, v59, (unsigned int)v67, v53, 0);
          clear_tinfo_t(v67);
        }
      }
    }
    clear_tinfo_t(&v66);
    goto LABEL_11;
  }
  if ( v6 )
  {
    sub_250A30(v6);
    clear_tinfo_t(v6 + 48);
    j__qfree(v6);
  }
  if ( !(unsigned __int8)sub_31E800(a1[1].m128i_i64[1], a1[2].m128i_i64[0], v11 + 48) && !a1[27].m128i_i32[2] )
    v11 = sub_242910(*(_QWORD *)(a1->m128i_i64[0] + 112), v11);
  if ( *(_DWORD *)(v11 + 8) == 52 )
    goto LABEL_46;
LABEL_11:
  if ( !a1[28].m128i_i8[1] )
    v11 = (__int64)sub_26EE40(a1, v11);
  v12 = sub_2694C0((__int64)a1, v11, a2);
  v13 = a1[27].m128i_i32[1];
  v14 = v12;
  if ( get_tinfo_size(0, *(_QWORD *)(v12 + 48), 0) < v13 )
  {
    v15 = a1[1].m128i_i64[1];
    if ( *(_DWORD *)(v15 + 8) != 48
      || (tinfo_property = get_tinfo_property(*(_QWORD *)(v15 + 48), 2),
          ((get_tinfo_property(*(_QWORD *)(v14 + 48), 2) & 0xF) == 9) != ((tinfo_property & 0xF) == 9)) )
    {
      if ( v14 )
      {
        sub_250A30(v14);
        clear_tinfo_t(v14 + 48);
        j__qfree(v14);
      }
      v16 = a1[2].m128i_i64[0];
      v67[0] = 0;
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v16 + 48), 0);
      v18 = a1[27].m128i_i32[1];
      if ( v18 == tinfo_size )
      {
        copy_tinfo_t(v67, a1[2].m128i_i64[0] + 48);
        LODWORD(v18) = a1[27].m128i_i32[1];
      }
      v19 = j__qalloc_or_throw(64);
      v20 = a1[2].m128i_i64[0];
      *(_QWORD *)(v19 + 12) = -1;
      v21 = v19;
      *(_QWORD *)v19 = -1;
      *(_DWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 48) = 0;
      *(_DWORD *)(v19 + 56) = 0;
      sub_2563F0(v19, v20);
      v22 = sub_242AA0(a1->m128i_i64[0], a1[8].m128i_i64[0], v21, 0, v67, v18, 1);
      a1[28].m128i_i8[3] = 0;
      a1[28].m128i_i8[5] = 1;
      v14 = v22;
      clear_tinfo_t(v67);
    }
  }
  if ( sub_26AD40((__int64)a1, v14, 0) )
    goto LABEL_28;
  v23 = a1[27].m128i_i32[1];
  if ( !(_DWORD)v23 )
    goto LABEL_42;
  sub_26B000(&v66, a1, v23);
  if ( !(_BYTE)v66 )
  {
LABEL_41:
    clear_tinfo_t(&v66);
LABEL_42:
    if ( v14 )
    {
      sub_250A30(v14);
      clear_tinfo_t(v14 + 48);
      j__qfree(v14);
    }
    return 0;
  }
  sub_327290(v67, *(_QWORD *)(a1->m128i_i64[0] + 112), &v66);
  copy_tinfo_t(&v66, v67);
  clear_tinfo_t(v67);
  v24 = *(_DWORD *)(v14 + 8);
  if ( v24 != 48 )
    goto LABEL_24;
  v67[0] = 0;
  v67[0] = get_tinfo_property(*(_QWORD *)(v14 + 48), 9);
  v63 = get_tinfo_property(v67[0], 2);
  clear_tinfo_t(v67);
  if ( (v63 & 0xF) != 0xB )
  {
    if ( a1[27].m128i_i32[1] != get_tinfo_size(0, *(_QWORD *)(v14 + 48), 0) )
      goto LABEL_41;
    v49 = (get_tinfo_property(*(_QWORD *)(v14 + 48), 2) & 0xF) == 9;
    if ( v49 != ((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v14 + 24) + 48LL), 2) & 0xF) == 9) )
      goto LABEL_41;
    sub_250C50((__int64 *)v14, *(_QWORD *)(v14 + 24));
    v24 = *(_DWORD *)(v14 + 8);
LABEL_24:
    v25 = (unsigned int)(v24 - 51);
    if ( (unsigned int)v25 > 0xE )
      goto LABEL_41;
    v26 = 25473;
    if ( !_bittest64(&v26, v25) && (v24 != 57 || !get_tinfo_property(*(_QWORD *)(v14 + 48), 17)) )
      goto LABEL_41;
    v27 = sub_242910(*(_QWORD *)(a1->m128i_i64[0] + 112), v14);
    v14 = sub_240270(v27, &v66);
    goto LABEL_27;
  }
  copy_tinfo_t(v14 + 48, &v66);
LABEL_27:
  v28 = get_tinfo_property(*(_QWORD *)(a1[2].m128i_i64[0] + 48), 2);
  v31 = sub_23F720(*(_QWORD *)(a1->m128i_i64[0] + 112), v14, a1[27].m128i_i32[1], (v28 & 0xF) == 9, v29, v30);
  a1[27].m128i_i32[2] = 1;
  v14 = v31;
  clear_tinfo_t(&v66);
LABEL_28:
  if ( a2 && !a1[28].m128i_i8[5] && !a1[27].m128i_i32[2] )
  {
    v33 = j__qalloc_or_throw(64);
    *(_QWORD *)v33 = -1;
    v34 = v33;
    *(_DWORD *)(v33 + 8) = 0;
    *(_QWORD *)(v33 + 12) = -1;
    *(_QWORD *)(v33 + 48) = 0;
    *(_DWORD *)(v33 + 56) = 0;
    sub_2563F0(v33, v14);
    v35 = get_tinfo_property(*(_QWORD *)(a1[2].m128i_i64[0] + 48), 2);
    v36 = (v35 & 0xF) == 9;
    v39 = sub_23F720(*(_QWORD *)(a1->m128i_i64[0] + 112), v14, a1[27].m128i_i32[1], (v35 & 0xF) == 9, v37, v38);
    a1[27].m128i_i32[2] = 1;
    v14 = v39;
    if ( sub_26AD40((__int64)a1, v39, 1) )
    {
      if ( v34 )
      {
        sub_250A30(v34);
        clear_tinfo_t(v34 + 48);
        j__qfree(v34);
      }
    }
    else
    {
      if ( v14 )
      {
        sub_250A30(v14);
        clear_tinfo_t(v14 + 48);
        j__qfree(v14);
      }
      sub_327010((unsigned int)v67, *(_QWORD *)(a1->m128i_i64[0] + 112), a1[27].m128i_i32[1], v36, v40, v41);
      v50 = sub_240270(v34, v67);
      v14 = sub_23F720(*(_QWORD *)(a1->m128i_i64[0] + 112), v50, a1[27].m128i_i32[1], v36, v51, v52);
      clear_tinfo_t(v67);
    }
  }
  *(_QWORD *)v14 = a1[8].m128i_i64[0];
  return v14;
}
