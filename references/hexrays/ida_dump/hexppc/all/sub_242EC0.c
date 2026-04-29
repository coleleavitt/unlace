__int64 __fastcall sub_242EC0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  int tinfo_size; // r14d
  int v9; // r13d
  signed int v10; // r15d
  int v11; // eax
  __int64 v12; // rdi
  char v13; // r15
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // ecx
  __int64 v34; // r14
  __m128i *v35; // rax
  unsigned int v36; // eax
  int v37; // eax
  int v38; // r13d
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rsi
  unsigned int tinfo_property; // [rsp+8h] [rbp-F8h]
  __int64 v45; // [rsp+10h] [rbp-F0h]
  __int64 v46; // [rsp+10h] [rbp-F0h]
  int v47; // [rsp+18h] [rbp-E8h]
  __int64 v48; // [rsp+20h] [rbp-E0h]
  const __m128i *v50; // [rsp+28h] [rbp-D8h]
  __int64 v51; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v54; // [rsp+48h] [rbp-B8h]
  __int64 v55; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  _QWORD v58[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  __int128 v61; // [rsp+A8h] [rbp-58h]
  char v62; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v63; // [rsp+C8h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 112);
  v63 = __readfsqword(0x28u);
  sub_240540(a1, v4, 0);
  if ( *(_BYTE *)a3 )
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 48), 0);
    if ( (*a3 & 0xE) != 0
      || (*a3 & 0x30) == 0
      || (get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0x3F) == 0x2D && tinfo_size != get_tinfo_size(0, *a3, 0) )
    {
      v51 = 0;
      copy_tinfo_t(&v51, a3);
      if ( (get_tinfo_property(v51, 2) & 0xF) == 0xA && !(unsigned __int8)del_tinfo_attr(&v51, &unk_4DB9F0, 1) )
        del_tinfo_attr(&v51, &unk_4DB9D0, 1);
      v48 = a1 + 48;
      v9 = get_tinfo_property(*(_QWORD *)(a1 + 48), 2) & 0xF;
      if ( ((_BYTE)v9 == 9) != ((get_tinfo_property(v51, 2) & 0xF) == 9) )
      {
        if ( (_BYTE)v9 != 9 && *(_DWORD *)(a1 + 8) == 61 )
        {
          v14 = *(_QWORD *)(a1 + 24);
          if ( !(unsigned __int8)is_enum(*(_QWORD *)(v14 + 40), (unsigned int)*(char *)(v14 + 12))
            && !(unsigned __int8)is_char(*(_QWORD *)(v14 + 40), (unsigned int)*(char *)(v14 + 12)) )
          {
            v15 = (unsigned int)*(char *)(v14 + 12);
            v16 = *(_QWORD *)(v14 + 40);
            if ( !(unsigned __int8)is_stroff(v16, v15) && ((unsigned __int8)v51 & 0xFu) <= 9 )
            {
              if ( *(_DWORD *)(a1 + 8) != 61 )
                sub_23A6E0(v16, v15, v17);
              v52 = sub_251DB0(*(_QWORD *)(a1 + 24), a1 + 48, v17, v18, v19);
              v55 = 0xFFFFFFFF00000000LL;
              *(_QWORD *)&v56 = 0;
              if ( (unsigned __int8)sub_119920((__int64)&v55, *(_QWORD *)(a2 + 112), &v52, -(__int64)tinfo_size) )
              {
                sub_327E20(&v53, *(_QWORD *)(a2 + 112), HIDWORD(v55));
                v34 = *(_QWORD *)a1;
                v50 = (const __m128i *)v56;
                sub_2519B0(a1);
                *(_QWORD *)a1 = v34;
                *(_DWORD *)(a1 + 8) = 62;
                v35 = (__m128i *)j__qalloc_or_throw(20);
                *v35 = _mm_loadu_si128(v50);
                v35[1].m128i_i32[0] = v50[1].m128i_i32[0];
                *(_QWORD *)(a1 + 24) = v35;
                copy_tinfo_t(v48, &v53);
                v6 = 0;
                clear_tinfo_t(&v53);
                sub_119360((__int64)&v55);
                goto LABEL_14;
              }
              sub_119360((__int64)&v55);
            }
          }
        }
        sub_244600(a2, a1, &v51);
        goto LABEL_13;
      }
      v10 = *(unsigned __int8 *)(a2 + 130);
      v47 = get_tinfo_size(0, v51, 0);
      v11 = *(_DWORD *)(a1 + 8);
      if ( v11 == 61 )
      {
        v45 = *(_QWORD *)(a1 + 24);
        if ( !(unsigned __int8)is_enum(*(_QWORD *)(v45 + 40), (unsigned int)*(char *)(v45 + 12))
          && !(unsigned __int8)is_char(*(_QWORD *)(v45 + 40), (unsigned int)*(char *)(v45 + 12)) )
        {
          v26 = (unsigned int)*(char *)(v45 + 12);
          v27 = *(_QWORD *)(v45 + 40);
          v28 = (unsigned int)is_stroff(v27, v26);
          v11 = *(_DWORD *)(a1 + 8);
          if ( (_BYTE)v28 )
            goto LABEL_19;
          if ( v11 != 61 )
            sub_23A6E0(v27, v26, v28);
          v31 = sub_251DB0(*(_QWORD *)(a1 + 24), a1 + 48, v28, v29, v30);
          v32 = v51;
          v46 = v31;
          if ( ((unsigned __int8)v51 & 0xFu) <= 9 )
          {
            tinfo_property = get_tinfo_property(v51, 3);
            if ( v47 <= 8 )
            {
              v36 = v47;
              if ( v10 >= v47 )
                v36 = v10;
              sub_23D050(a1, a2, v46, v36, tinfo_property, nullptr);
              if ( tinfo_property == (unsigned int)get_tinfo_property(*(_QWORD *)(a1 + 48), 3) )
              {
                v6 = 0;
                goto LABEL_14;
              }
            }
            v32 = v51;
          }
          if ( !v46 )
          {
            if ( (get_tinfo_property(v32, 2) & 0x3F) != 0x2D )
              goto LABEL_32;
            v32 = v51;
          }
          if ( (get_tinfo_property(v32, 2) & 0xF) == 0xA )
          {
            if ( (v46 & *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL)) == v46 && (unsigned __int8)is_mapped(v46) )
            {
              v37 = get_tinfo_property(v51, 14);
              v55 = 0;
              v38 = sub_244110(a2, -1, a1, v46, (unsigned int)&v55, v37, 0, v9);
              clear_tinfo_t(&v55);
              v43 = sub_243890(*(_QWORD *)(a2 + 112), v38, v39, v40, v41, v42);
              if ( a1 != v43 )
                sub_23AF00((_QWORD *)a1, v43);
              sub_242EC0(a1, a2, &v51);
              goto LABEL_13;
            }
            copy_tinfo_t(v48, a2 + 280);
            if ( *(_DWORD *)(*(_QWORD *)(a2 + 112) + 84LL) == 8 )
            {
              v33 = 8 * v10 - 1;
              if ( (unsigned __int64)v33 > 0x3F || ((-1LL << v33) & v46) == 0 )
              {
                v55 = 23;
                copy_tinfo_t(v48, &v55);
                clear_tinfo_t(&v55);
              }
            }
          }
          else if ( (get_tinfo_property(v51, 2) & 0x3F) == 0x2D
                 && (unsigned __int8)sub_23CAE0(*(_QWORD *)(a1 + 24) + 8LL, &v51, nullptr, v46) )
          {
            goto LABEL_30;
          }
        }
        v11 = *(_DWORD *)(a1 + 8);
      }
LABEL_19:
      if ( v11 == 48 && ((v51 & 0xE) != 0 || (v51 & 0x30) == 0) )
      {
        v12 = *(_QWORD *)(a1 + 48);
        if ( !(_BYTE)v12 || (v12 & 0xE) == 0 && (v12 & 0x30) != 0 )
          goto LABEL_40;
        v55 = 0;
        v55 = get_tinfo_property(v12, 9);
        v13 = get_tinfo_property(v55, 2);
        clear_tinfo_t(&v55);
        if ( (v13 & 0x3F) == 0x30 )
          goto LABEL_26;
      }
      if ( !(unsigned __int8)sub_326300(a2, a1 + 48, &v51) )
      {
LABEL_26:
        if ( *(_DWORD *)(a1 + 8) != 48 )
        {
          if ( tinfo_size == v47 )
          {
LABEL_28:
            if ( *(_DWORD *)(a1 + 8) == 57 )
            {
              v21 = *(_QWORD *)(a1 + 24);
              if ( *(_DWORD *)(v21 + 8) == 68 && sub_23EB60(*(_BYTE **)(v21 + 24)) )
              {
                v22 = get_tinfo_property(v51, 2);
                if ( (v22 & 0x3E) != 0 && (v22 & 0xFu) <= 8 )
                {
                  qfree(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
                  sub_242E40((__int64)&v53, &v51);
                  v23 = *(_QWORD *)(a1 + 24);
                  v24 = v53;
                  if ( (unsigned __int64)v54 < *((_QWORD *)&v54 + 1) )
                  {
                    if ( v53 )
                    {
                      if ( (_QWORD)v54 )
                      {
                        v24 = qrealloc(v53, v54);
                        if ( !v24 )
                          v24 = v53;
                      }
                    }
                  }
                  v53 = 0;
                  v54 = 0;
                  *(_QWORD *)(v23 + 24) = v24;
                  v25 = *(_QWORD *)(a1 + 24);
                  v55 = 0;
                  v57 = 0;
                  v58[0] = 0;
                  v58[1] = 0;
                  v60 = 0;
                  v62 = 16;
                  v56 = 0;
                  v59 = 0;
                  v61 = 0;
                  if ( !(unsigned __int8)get_tinfo_details(*(_QWORD *)(v25 + 48), 12, &v55) )
                  {
                    if ( !under_debugger )
                      sub_37EEE0(51943);
                    BUG();
                  }
                  copy_tinfo_t(v58, &v51);
                  create_tinfo(*(_QWORD *)(a1 + 24) + 48LL, 12, 12, &v55);
                  sub_CC630(&v55);
                  if ( v53 )
                  {
                    *(_QWORD *)&v54 = 0;
                    qfree(v53);
                  }
                  goto LABEL_30;
                }
              }
            }
            goto LABEL_29;
          }
          goto LABEL_29;
        }
LABEL_40:
        if ( tinfo_size == v47 )
        {
          if ( (_BYTE)v9 == 9 )
          {
            if ( tinfo_size == v47 )
              goto LABEL_30;
            goto LABEL_29;
          }
          if ( (getinf(57) & 0xF) != 2 && (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 2) & 0xF) == 9 )
          {
            tinfo_size = get_tinfo_property(*(_QWORD *)(a1 + 48), 3);
            v20 = get_tinfo_property(v51, 3);
          }
          else
          {
            v20 = v47;
          }
          if ( tinfo_size == v20 )
            goto LABEL_30;
          goto LABEL_28;
        }
LABEL_29:
        sub_241100((__int64 *)a1, (__int64)&v51);
LABEL_30:
        copy_tinfo_t(v48, &v51);
LABEL_13:
        v6 = 1;
LABEL_14:
        clear_tinfo_t(&v51);
        return v6;
      }
LABEL_32:
      v6 = 0;
      goto LABEL_14;
    }
  }
  return 0;
}
