__int64 __fastcall sub_275B20(__m128i *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 *v10; // rsi
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 tinfo_size; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // al
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rax
  __int64 v45; // rax
  __int64 v46; // r13
  _BOOL4 v47; // r12d
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rax
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // r15
  __int64 v54; // r11
  int v55; // edx
  bool v56; // al
  int v57; // ecx
  int v58; // r9d
  char tinfo_property; // r13
  bool v60; // r15
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // r8d
  int v65; // r9d
  int v66; // [rsp+0h] [rbp-80h]
  int v67; // [rsp+8h] [rbp-78h]
  int v68; // [rsp+8h] [rbp-78h]
  __int64 v69; // [rsp+10h] [rbp-70h]
  __int64 v70; // [rsp+18h] [rbp-68h]
  int v71; // [rsp+18h] [rbp-68h]
  int v72; // [rsp+18h] [rbp-68h]
  __int64 v73; // [rsp+20h] [rbp-60h]
  int v74; // [rsp+20h] [rbp-60h]
  __int64 v75; // [rsp+20h] [rbp-60h]
  char v76; // [rsp+20h] [rbp-60h]
  int v77; // [rsp+28h] [rbp-58h]
  __int64 v79; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v80[8]; // [rsp+40h] [rbp-40h] BYREF

  v80[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 64) + 8LL);
  ++*(_DWORD *)(v2 + 896);
  v3 = a1[2].m128i_i64[1];
  v4 = sub_26BEA0((__int64)a1, v3);
  if ( !v4 )
    return 0;
  v7 = v4;
  v8 = j__qalloc_or_throw(64, v3, v5, v6);
  *(_QWORD *)v8 = -1;
  v9 = v8;
  *(_DWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 12) = -1;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  sub_25AFF0(v8, v7);
  v10 = (__int64 *)a1[3].m128i_i64[0];
  if ( v10 )
  {
    v11 = a1[2].m128i_i64[0];
    v12 = *(_DWORD *)(v11 + 8);
    if ( v12 == 36 || (v13 = 1, v12 == 7) )
      v13 = -1;
    if ( !(unsigned __int8)sub_26B8E0((__int64)a1, v10, *(_QWORD *)v11, v13, 0) )
    {
      if ( v9 )
      {
        sub_255630(v9);
        clear_tinfo_t();
        j__qfree(v9);
      }
      return 0;
    }
  }
  sub_275A30((__int64)a1);
  v15 = sub_271E40(a1, v9);
  if ( !v15 )
  {
    v15 = v9;
    if ( *(_DWORD *)(v9 + 8) != 52 )
      goto LABEL_11;
LABEL_46:
    sub_26C3E0(&v79, (__int64)a1);
    v53 = *(_QWORD *)(v15 + 24);
    v73 = a1[5].m128i_i64[1];
    v70 = a1[6].m128i_i64[0];
    v69 = a1->m128i_i64[0];
    v54 = sub_26B3D0(v53);
    if ( v54 != -1 )
    {
      if ( a1[4].m128i_i64[0] )
      {
        v55 = *(_QWORD *)(a1[3].m128i_i64[1] + 24);
        v56 = v55 != 0;
      }
      else
      {
        v56 = 0;
        v55 = 0;
      }
      v57 = v73 - v70;
      if ( v73 != v70 || v56 )
        goto LABEL_54;
      if ( (_BYTE)v79 )
      {
        v67 = v55;
        v71 = v54;
        v74 = v57;
        if ( (get_tinfo_property() & 0x3F) != 1 )
        {
          v57 = v74;
          LODWORD(v54) = v71;
          v55 = v67;
LABEL_54:
          v58 = v53 + 24;
          if ( *(_DWORD *)(v53 + 8) != 65 )
            v58 = 0;
          v66 = v58;
          v77 = v55;
          v68 = v54;
          v72 = v57;
          v75 = *(_QWORD *)(v69 + 808);
          v80[0] = 0;
          copy_tinfo_t();
          sub_27E790(v75, v68, v77, v72, (unsigned int)v80, v66, 0);
          clear_tinfo_t();
        }
      }
    }
    clear_tinfo_t();
    goto LABEL_11;
  }
  if ( v9 )
  {
    sub_255630(v9);
    clear_tinfo_t();
    j__qfree(v9);
  }
  if ( !(unsigned __int8)sub_323900(a1[1].m128i_i64[1], a1[2].m128i_i64[0], v15 + 48) && !a1[27].m128i_i32[2] )
    v15 = sub_247510(*(_QWORD *)(a1->m128i_i64[0] + 112), v15, v16, v14);
  if ( *(_DWORD *)(v15 + 8) == 52 )
    goto LABEL_46;
LABEL_11:
  if ( !a1[28].m128i_i8[1] )
    v15 = (__int64)sub_273A40(a1, v15);
  v17 = sub_26E0C0(a1, v15, a2, v14);
  v18 = a1[27].m128i_i32[1];
  v19 = v17;
  if ( get_tinfo_size() < v18 )
  {
    if ( *(_DWORD *)(a1[1].m128i_i64[1] + 8) != 48
      || (tinfo_property = get_tinfo_property(), ((get_tinfo_property() & 0xF) == 9) != ((tinfo_property & 0xF) == 9)) )
    {
      if ( v19 )
      {
        sub_255630(v19);
        clear_tinfo_t();
        j__qfree(v19);
      }
      v20 = a1[2].m128i_i64[0];
      v80[0] = 0;
      v21 = *(_QWORD *)(v20 + 48);
      tinfo_size = get_tinfo_size();
      v24 = a1[27].m128i_i32[1];
      v25 = a1[27].m128i_i32[1];
      if ( v24 == tinfo_size )
      {
        v21 = a1[2].m128i_i64[0] + 48;
        copy_tinfo_t();
        v25 = a1[27].m128i_i32[1];
      }
      v26 = j__qalloc_or_throw(64, v21, v24, v23);
      v27 = a1[2].m128i_i64[0];
      *(_QWORD *)(v26 + 12) = -1;
      v28 = v26;
      *(_QWORD *)v26 = -1;
      *(_DWORD *)(v26 + 8) = 0;
      *(_QWORD *)(v26 + 48) = 0;
      *(_DWORD *)(v26 + 56) = 0;
      sub_25AFF0(v26, v27);
      v29 = sub_2476A0(a1->m128i_i64[0], a1[8].m128i_i64[0], v28, 0, v80, v25, 1);
      a1[28].m128i_i8[3] = 0;
      a1[28].m128i_i8[5] = 1;
      v19 = v29;
      clear_tinfo_t();
    }
  }
  v30 = v19;
  if ( sub_26F940((__int64)a1, v19, 0) )
    goto LABEL_28;
  v33 = a1[27].m128i_i32[1];
  if ( !(_DWORD)v33 )
    goto LABEL_42;
  sub_26FC00(&v79, a1, v33);
  if ( !(_BYTE)v79 )
  {
LABEL_41:
    clear_tinfo_t();
LABEL_42:
    if ( v19 )
    {
      sub_255630(v19);
      clear_tinfo_t();
      j__qfree(v19);
    }
    return 0;
  }
  sub_32C540(v80, *(_QWORD *)(a1->m128i_i64[0] + 112), &v79);
  copy_tinfo_t();
  clear_tinfo_t();
  v34 = *(_DWORD *)(v19 + 8);
  if ( v34 != 48 )
    goto LABEL_24;
  v80[0] = 0;
  v80[0] = get_tinfo_property();
  v76 = get_tinfo_property();
  clear_tinfo_t();
  if ( (v76 & 0xF) != 0xB )
  {
    if ( a1[27].m128i_i32[1] != get_tinfo_size() )
      goto LABEL_41;
    v60 = (get_tinfo_property() & 0xF) == 9;
    if ( v60 != ((get_tinfo_property() & 0xF) == 9) )
      goto LABEL_41;
    sub_255850((__int64 *)v19, *(_QWORD *)(v19 + 24));
    v34 = *(_DWORD *)(v19 + 8);
LABEL_24:
    v35 = (unsigned int)(v34 - 51);
    if ( (unsigned int)v35 > 0xE )
      goto LABEL_41;
    v36 = 25473;
    if ( !_bittest64(&v36, v35) && (v34 != 57 || !get_tinfo_property()) )
      goto LABEL_41;
    v37 = sub_247510(*(_QWORD *)(a1->m128i_i64[0] + 112), v19, v35, v36);
    v19 = sub_244E70(v37, (__int64)&v79, v38, v39);
    goto LABEL_27;
  }
  copy_tinfo_t();
LABEL_27:
  v40 = get_tinfo_property();
  v30 = v19;
  v43 = sub_244320(*(_QWORD *)(a1->m128i_i64[0] + 112), v19, a1[27].m128i_u32[1], (v40 & 0xF) == 9, v41, v42);
  a1[27].m128i_i32[2] = 1;
  v19 = v43;
  clear_tinfo_t();
LABEL_28:
  if ( a2 && !a1[28].m128i_i8[5] && !a1[27].m128i_i32[2] )
  {
    v45 = j__qalloc_or_throw(64, v30, v31, v32);
    *(_QWORD *)v45 = -1;
    v46 = v45;
    *(_DWORD *)(v45 + 8) = 0;
    *(_QWORD *)(v45 + 12) = -1;
    *(_QWORD *)(v45 + 48) = 0;
    *(_DWORD *)(v45 + 56) = 0;
    sub_25AFF0(v45, v19);
    v47 = (get_tinfo_property() & 0xF) == 9;
    v50 = sub_244320(*(_QWORD *)(a1->m128i_i64[0] + 112), v19, a1[27].m128i_u32[1], v47, v48, v49);
    a1[27].m128i_i32[2] = 1;
    v19 = v50;
    if ( sub_26F940((__int64)a1, v50, 1) )
    {
      if ( v46 )
      {
        sub_255630(v46);
        clear_tinfo_t();
        j__qfree(v46);
      }
    }
    else
    {
      if ( v19 )
      {
        sub_255630(v19);
        clear_tinfo_t();
        j__qfree(v19);
      }
      sub_32C2C0((unsigned int)v80, *(_QWORD *)(a1->m128i_i64[0] + 112), a1[27].m128i_i32[1], v47, v51, v52);
      v63 = sub_244E70(v46, (__int64)v80, v61, v62);
      v19 = sub_244320(*(_QWORD *)(a1->m128i_i64[0] + 112), v63, a1[27].m128i_u32[1], v47, v64, v65);
      clear_tinfo_t();
    }
  }
  *(_QWORD *)v19 = a1[8].m128i_i64[0];
  return v19;
}
