__int64 __fastcall sub_12D90(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int qword; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rax
  unsigned int v20; // r12d
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int16 custom_fixup; // ax
  __int64 v26; // rdx
  __int64 v27; // rcx
  size_t v28; // rdx
  _BYTE *v29; // rsi
  __int64 v30; // r13
  size_t v31; // r8
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  void *v34; // rax
  int v36; // [rsp+8h] [rbp-60h]
  size_t v37; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v39; // [rsp+18h] [rbp-50h]
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 1);
  v5 = *(_QWORD *)(a2 + 5);
  v6 = *(_QWORD *)(a2 + 3);
  v40 = __readfsqword(0x28u);
  v7 = *a2;
  v9 = (unsigned int)is_loaded(v4);
  qword = 0;
  if ( (_BYTE)v9 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 508LL) == 2 )
      qword = get_qword(v4);
    else
      qword = get_dword(v4, a2, v8, v9, v10);
  }
  v12 = (unsigned __int8)v7;
  if ( (unsigned __int8)v7 > 0x2Cu )
  {
    if ( (unsigned __int8)v7 > 0xA7u )
    {
      v32 = (unsigned int)(unsigned __int8)v7 - 216;
      if ( (unsigned int)v32 <= 0x11 )
      {
        v33 = 260601;
        return _bittest64(&v33, v32) + 2LL;
      }
      return 2;
    }
    if ( (unsigned __int8)v7 <= 0x6Au )
    {
      v15 = (unsigned __int8)v7 - 46;
      if ( v15 <= 0x3A )
      {
        result = 3;
        v16 = 1LL << v15;
        v17 = (1LL << v15) & 0x7E7E7FBFD180000LL;
        if ( v17 )
          return result;
        if ( (v16 & 0x11B1F) != 0 )
        {
LABEL_53:
          v18 = 4;
LABEL_16:
          sub_42050(a1, v4, v6, v17, v5 - v6, v18, 0, 0, 0);
          return 0;
        }
        if ( (v16 & 0x400040000LL) != 0 )
        {
LABEL_15:
          LODWORD(v17) = v5;
          v18 = 12;
          goto LABEL_16;
        }
      }
      return 2;
    }
    v13 = 0x1888C00000BF3F23LL;
    if ( _bittest64(&v13, (unsigned int)(unsigned __int8)v7 - 107) )
      return 3;
    if ( (unsigned __int8)v7 != 129 )
      return 2;
    v39 = 0;
    src = nullptr;
    if ( get_ea_name(&src, v5, 0, 0) <= 0 )
    {
LABEL_25:
      if ( src )
      {
        *(_QWORD *)&v39 = 0;
        qfree(src);
      }
      goto LABEL_15;
    }
    v28 = v39;
    v29 = src;
    if ( (_QWORD)v39 )
    {
      v30 = v39 + 1;
      v31 = v39 - 1;
      if ( *((_QWORD *)&v39 + 1) >= (unsigned __int64)(v39 + 1) )
        goto LABEL_47;
    }
    else
    {
      if ( *((_QWORD *)&v39 + 1) > 1u )
      {
        *(_QWORD *)&v39 = 2;
        *((_BYTE *)src + 1) = 0;
LABEL_49:
        *(_BYTE *)src = 46;
        set_name(v4, src, 6144);
        goto LABEL_25;
      }
      v31 = 0;
      v30 = 2;
    }
    v37 = v31;
    v34 = (void *)qvector_reserve(&src, src, v30, 1);
    v31 = v37;
    src = v34;
    v29 = v34;
    v28 = v37 + 1;
LABEL_47:
    *(_QWORD *)&v39 = v30;
    v29[v28] = 0;
    if ( v31 )
      memmove((char *)src + 1, src, v31);
    goto LABEL_49;
  }
  switch ( (char)v7 )
  {
    case 0:
      return 0;
    case 1:
      LODWORD(v17) = v5 + qword;
      v18 = 4;
      goto LABEL_16;
    case 2:
      goto LABEL_41;
    case 3:
    case 4:
    case 7:
    case 8:
    case 9:
    case 10:
      return 3;
    case 5:
      return 2;
    case 6:
      goto LABEL_36;
    case 11:
    case 12:
    case 13:
      v20 = qword;
      v21 = ((_WORD)qword << 8) & 0x400 | (qword >> 3) & 0x3FF | (qword << 16) & 0x10000 | (qword >> 5) & 0xF800;
      v22 = v21;
      if ( (v21 & 0x10000) != 0 )
        v22 = v21 | 0xFFFFFFFFFFFE0000LL;
      v23 = (__int64)(v6 - 8 - v4 + 4 * v22) >> 2;
      if ( (_BYTE)v7 != 13 )
      {
        v24 = ((__int64)(v6 - 8 - v4 + 4 * v22) >> 2) & 0x1FFFF;
        if ( (v23 & 0x10000) != 0 )
          v24 = v23 | 0xFFFFFFFFFFFE0000LL;
        if ( v23 != v24 )
        {
          v36 = v23;
          sub_40E00(v4, v5, v24, v23 | 0xFFFFFFFFFFFE0000LL, v10);
          LODWORD(v23) = v36;
        }
      }
      v18 = 4;
      LODWORD(v17) = (32 * v23) & 0x1F0000
                   | ((int)v23 >> 8) & 4
                   | (8 * (_WORD)v23) & 0x1FF8
                   | WORD1(v23) & 1
                   | v20 & 0xFFE0E002;
      goto LABEL_16;
    default:
      v19 = 0x1FC4C498C000LL;
      if ( _bittest64(&v19, (unsigned __int8)v7) )
      {
        LODWORD(v17) = 0;
        goto LABEL_53;
      }
      if ( (unsigned __int8)v7 == 22 )
      {
LABEL_36:
        custom_fixup = *(_WORD *)(a1 + 350);
        if ( custom_fixup == 0x8000 )
        {
          custom_fixup = find_custom_fixup("R11");
          *(_WORD *)(a1 + 350) = custom_fixup;
        }
        v26 = (unsigned int)a2[7];
        if ( (_DWORD)v26 )
        {
          v27 = *(_QWORD *)(a4 + 16);
        }
        else
        {
          LODWORD(v27) = get_fixup_value(v4, custom_fixup, v26, v12);
          custom_fixup = *(_WORD *)(a1 + 350);
        }
      }
      else
      {
        if ( (unsigned __int8)v7 != 18 )
          return 2;
LABEL_41:
        custom_fixup = *(_WORD *)(a1 + 348);
        if ( custom_fixup == 0x8000 )
        {
          custom_fixup = find_custom_fixup("L21");
          *(_WORD *)(a1 + 348) = custom_fixup;
        }
        if ( a2[7] )
        {
          v27 = *(_QWORD *)(a4 + 16);
        }
        else
        {
          LODWORD(v27) = get_fixup_value(v4, custom_fixup, v8, v12);
          custom_fixup = *(_WORD *)(a1 + 348);
        }
      }
      sub_424F0(a1, v4, v6, v27, custom_fixup, 0, 0, 0);
      result = 0;
      break;
  }
  return result;
}

