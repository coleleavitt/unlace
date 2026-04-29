__int64 __fastcall sub_246B40(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  int tinfo_size; // r14d
  int v9; // r13d
  signed int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdi
  char v15; // r15
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  char v23; // al
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // r14
  __int64 v27; // rdi
  char v28; // al
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __m128i *v36; // rax
  unsigned int v37; // eax
  int v38; // eax
  int v39; // r13d
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rsi
  unsigned int tinfo_property; // [rsp+8h] [rbp-F8h]
  __int64 v46; // [rsp+10h] [rbp-F0h]
  __int64 v47; // [rsp+10h] [rbp-F0h]
  int v48; // [rsp+18h] [rbp-E8h]
  const __m128i *v50; // [rsp+28h] [rbp-D8h]
  __int64 v51; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v54; // [rsp+48h] [rbp-B8h]
  __int64 v55; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  __int128 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+A0h] [rbp-60h]
  __int128 v62; // [rsp+A8h] [rbp-58h]
  char v63; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v64; // [rsp+C8h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 112);
  v64 = __readfsqword(0x28u);
  sub_2441C0(a1, v4, 0);
  if ( *(_BYTE *)a3 )
  {
    tinfo_size = get_tinfo_size();
    if ( (*a3 & 0xE) != 0
      || (*a3 & 0x30) == 0
      || (get_tinfo_property() & 0x3F) == 0x2D && tinfo_size != get_tinfo_size() )
    {
      v51 = 0;
      copy_tinfo_t();
      if ( (get_tinfo_property() & 0xF) == 0xA && !(unsigned __int8)del_tinfo_attr() )
        del_tinfo_attr();
      v9 = get_tinfo_property() & 0xF;
      if ( ((_BYTE)v9 == 9) != ((get_tinfo_property() & 0xF) == 9) )
      {
        if ( (_BYTE)v9 != 9 && *(_DWORD *)(a1 + 8) == 61 )
        {
          v16 = *(_QWORD *)(a1 + 24);
          if ( !(unsigned __int8)is_enum() && !(unsigned __int8)is_char() )
          {
            v17 = (unsigned int)*(char *)(v16 + 12);
            v18 = *(_QWORD *)(v16 + 40);
            if ( !(unsigned __int8)is_stroff() )
            {
              if ( *(_DWORD *)(a1 + 8) != 61 )
                sub_23E360(v18, v17, v19);
              v52 = sub_255A30(*(_QWORD *)(a1 + 24), a1 + 48, v19, v20, v21);
              v55 = 0xFFFFFFFF00000000LL;
              *(_QWORD *)&v56 = 0;
              if ( (unsigned __int8)sub_11D360((__int64)&v55, *(_QWORD *)(a2 + 112), &v52, -(__int64)tinfo_size) )
              {
                v32 = *(_QWORD *)(a2 + 112);
                sub_32C150(&v53, v32, HIDWORD(v55));
                v33 = *(_QWORD *)a1;
                v50 = (const __m128i *)v56;
                sub_255630(a1);
                *(_QWORD *)a1 = v33;
                *(_DWORD *)(a1 + 8) = 62;
                v36 = (__m128i *)j__qalloc_or_throw(20, v32, v34, v35);
                *v36 = _mm_loadu_si128(v50);
                v36[1].m128i_i32[0] = v50[1].m128i_i32[0];
                *(_QWORD *)(a1 + 24) = v36;
                copy_tinfo_t();
                v6 = 0;
                clear_tinfo_t();
                sub_11CDA0((__int64)&v55);
                goto LABEL_14;
              }
              sub_11CDA0((__int64)&v55);
            }
          }
        }
        sub_248280(a2, a1, &v51);
        goto LABEL_13;
      }
      v10 = *(unsigned __int8 *)(a2 + 130);
      v48 = get_tinfo_size();
      v13 = *(_DWORD *)(a1 + 8);
      if ( v13 == 61 )
      {
        v46 = *(_QWORD *)(a1 + 24);
        v23 = is_enum();
        v11 = v46;
        if ( !v23 )
        {
          v28 = is_char();
          v11 = v46;
          if ( !v28 )
          {
            v29 = (unsigned int)*(char *)(v46 + 12);
            v30 = *(_QWORD *)(v46 + 40);
            v11 = (unsigned int)is_stroff();
            v13 = *(_DWORD *)(a1 + 8);
            if ( (_BYTE)v11 )
              goto LABEL_19;
            if ( v13 != 61 )
              sub_23E360(v30, v29, v11);
            v47 = sub_255A30(*(_QWORD *)(a1 + 24), a1 + 48, v11, v12, v31);
            tinfo_property = get_tinfo_property();
            if ( v48 <= 8 )
            {
              v37 = v48;
              if ( v10 >= v48 )
                v37 = v10;
              sub_240CD0(a1, a2, v47, v37, tinfo_property, nullptr);
              if ( tinfo_property == (unsigned int)get_tinfo_property() )
              {
                v6 = 0;
                goto LABEL_14;
              }
            }
            if ( !v47 && (get_tinfo_property() & 0x3F) != 0x2D )
              goto LABEL_32;
            if ( (get_tinfo_property() & 0xF) == 0xA )
            {
              if ( (v47 & *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL)) == v47 && (unsigned __int8)is_mapped() )
              {
                v38 = get_tinfo_property();
                v55 = 0;
                v39 = sub_247D90(a2, -1, a1, v47, (unsigned int)&v55, v38, 0, v9);
                clear_tinfo_t();
                v44 = sub_247510(*(_QWORD *)(a2 + 112), v39, v40, v41, v42, v43);
                if ( a1 != v44 )
                  sub_23EB80((_QWORD *)a1, v44);
                sub_246B40(a1, a2, &v51);
                goto LABEL_13;
              }
              copy_tinfo_t();
              if ( *(_DWORD *)(*(_QWORD *)(a2 + 112) + 84LL) == 8 )
              {
                v12 = (unsigned int)(8 * v10 - 1);
                if ( (unsigned __int64)(int)v12 > 0x3F || ((-1LL << (8 * (unsigned __int8)v10 - 1)) & v47) == 0 )
                {
                  v55 = 23;
                  copy_tinfo_t();
                  clear_tinfo_t();
                }
              }
            }
            else if ( (get_tinfo_property() & 0x3F) == 0x2D
                   && (unsigned __int8)sub_240760(*(_QWORD *)(a1 + 24) + 8LL, &v51, nullptr, v47) )
            {
              goto LABEL_30;
            }
          }
        }
        v13 = *(_DWORD *)(a1 + 8);
      }
LABEL_19:
      if ( v13 == 48 && ((v51 & 0xE) != 0 || (v51 & 0x30) == 0) )
      {
        v14 = *(_QWORD *)(a1 + 48);
        if ( !(_BYTE)v14 || (v14 & 0xE) == 0 && (v14 & 0x30) != 0 )
          goto LABEL_39;
        v55 = 0;
        v55 = get_tinfo_property();
        v15 = get_tinfo_property();
        clear_tinfo_t();
        if ( (v15 & 0x3F) == 0x30 )
          goto LABEL_26;
      }
      if ( !(unsigned __int8)sub_32A510(a2, a1 + 48, &v51) )
      {
LABEL_26:
        if ( *(_DWORD *)(a1 + 8) != 48 )
        {
          if ( tinfo_size == v48 )
          {
LABEL_28:
            if ( *(_DWORD *)(a1 + 8) == 57 )
            {
              v24 = *(_QWORD *)(a1 + 24);
              if ( *(_DWORD *)(v24 + 8) == 68 && sub_2427E0(*(_BYTE **)(v24 + 24)) )
              {
                v25 = get_tinfo_property();
                if ( (v25 & 0x3E) != 0 && (v25 & 0xFu) <= 8 )
                {
                  qfree(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
                  sub_246AC0((__int64)&v53);
                  v26 = *(_QWORD *)(a1 + 24);
                  v27 = v53;
                  if ( (unsigned __int64)v54 < *((_QWORD *)&v54 + 1) )
                  {
                    if ( v53 )
                    {
                      if ( (_QWORD)v54 )
                      {
                        v27 = qrealloc();
                        if ( !v27 )
                          v27 = v53;
                      }
                    }
                  }
                  v53 = 0;
                  v54 = 0;
                  *(_QWORD *)(v26 + 24) = v27;
                  v55 = 0;
                  v57 = 0;
                  v58 = 0;
                  v59 = 0;
                  v61 = 0;
                  v63 = 16;
                  v56 = 0;
                  v60 = 0;
                  v62 = 0;
                  if ( !(unsigned __int8)get_tinfo_details() )
                  {
                    if ( !under_debugger )
                      sub_383060(51943);
                    BUG();
                  }
                  copy_tinfo_t();
                  create_tinfo();
                  sub_D0070(&v55);
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
LABEL_39:
        if ( tinfo_size == v48 )
        {
          if ( (_BYTE)v9 == 9 )
          {
            if ( tinfo_size == v48 )
              goto LABEL_30;
            goto LABEL_29;
          }
          if ( (getinf() & 0xF) != 2 && (get_tinfo_property() & 0xF) == 9 )
          {
            tinfo_size = get_tinfo_property();
            v22 = get_tinfo_property();
          }
          else
          {
            v22 = v48;
          }
          if ( tinfo_size == v22 )
            goto LABEL_30;
          goto LABEL_28;
        }
LABEL_29:
        sub_244D80((__int64 *)a1, (__int64)&v51, v11, v12);
LABEL_30:
        copy_tinfo_t();
LABEL_13:
        v6 = 1;
LABEL_14:
        clear_tinfo_t();
        return v6;
      }
LABEL_32:
      v6 = 0;
      goto LABEL_14;
    }
  }
  return 0;
}
