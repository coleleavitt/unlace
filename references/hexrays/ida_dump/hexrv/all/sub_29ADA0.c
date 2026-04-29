__int64 __fastcall sub_29ADA0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 tinfo_size; // rbp
  __int64 v11; // rsi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rdi
  char v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-A0h] BYREF
  __int64 tinfo_property; // [rsp+10h] [rbp-98h] BYREF
  __int64 v24; // [rsp+18h] [rbp-90h]
  __int128 v25; // [rsp+20h] [rbp-88h] BYREF
  __int64 v26; // [rsp+30h] [rbp-78h] BYREF
  int v27; // [rsp+38h] [rbp-70h]
  __int16 v28; // [rsp+3Ch] [rbp-6Ch]
  __int64 v29; // [rsp+40h] [rbp-68h] BYREF
  __int64 v30; // [rsp+48h] [rbp-60h]
  __int64 v31; // [rsp+50h] [rbp-58h] BYREF
  __int64 v32; // [rsp+58h] [rbp-50h] BYREF
  __int64 v33; // [rsp+60h] [rbp-48h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 8);
  v34 = __readfsqword(0x28u);
  v8 = a3;
  if ( (*(_BYTE *)(a3 + 56) & 4) == 0 && (unsigned int)sub_250400(v7) )
  {
LABEL_10:
    if ( (get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) != 9 && *(_DWORD *)(v8 + 8) == 59 )
    {
      do
      {
        if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 48LL), 2) & 0x3F) != 0x1D )
          break;
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0);
        if ( get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(v8 + 24) + 48LL), 0) != tinfo_size
          || get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 48LL), 282) )
        {
          break;
        }
        v11 = *(_QWORD *)(v8 + 24);
        v12 = *(_DWORD *)(v11 + 8);
        if ( (unsigned int)(v12 - 59) > 1 )
          goto LABEL_16;
        v14 = *(_QWORD *)(v11 + 24);
        *(_QWORD *)&v25 = 0;
        if ( v12 == 60 )
          *(_QWORD *)&v25 = get_tinfo_property(*(_QWORD *)(v14 + 48), 9);
        else
          copy_tinfo_t(&v25, v14 + 48);
        if ( (int)sub_25E670(nullptr, &v25, *(unsigned int *)(*(_QWORD *)(v8 + 24) + 32LL), 0) <= 0 )
        {
          clear_tinfo_t(&v25);
          break;
        }
        clear_tinfo_t(&v25);
        v8 = *(_QWORD *)(v8 + 24);
      }
      while ( *(_DWORD *)(v8 + 8) == 59 );
    }
    v11 = v8;
LABEL_16:
    v13 = *(_DWORD *)(a1 + 4);
    LODWORD(v31) = 1;
    HIDWORD(v31) = v13;
    v32 = 0;
    copy_tinfo_t(&v32, v11 + 48);
    sub_29AB70(a1, (unsigned int *)&v31);
    sub_29A030((__int64)&v31);
    return 1;
  }
  if ( v7 > 0x32 )
  {
    switch ( v7 )
    {
      case '3':
        if ( !(unsigned __int8)sub_29ADA0(
                                 (unsigned int)&v29,
                                 a2,
                                 *(_QWORD *)(v8 + 24),
                                 a4,
                                 a5,
                                 a6,
                                 v21,
                                 v22,
                                 tinfo_property,
                                 v24,
                                 v25,
                                 DWORD2(v25),
                                 v26,
                                 v27,
                                 0,
                                 0,
                                 v31,
                                 v32,
                                 v33) )
          goto LABEL_7;
        *(_QWORD *)&v25 = get_tinfo_property(v30, 9);
        if ( (_BYTE)v25 )
        {
          v31 = 1;
          v32 = 0;
          copy_tinfo_t(&v32, &v25);
          sub_29AB70(a1, (unsigned int *)&v31);
          sub_29A030((__int64)&v31);
          clear_tinfo_t(&v25);
          sub_29A030((__int64)&v29);
          return 1;
        }
        clear_tinfo_t(&v25);
LABEL_7:
        sub_29A030((__int64)&v29);
        return 0;
      case '4':
        if ( !(unsigned __int8)sub_29ADA0(
                                 a1,
                                 a2,
                                 *(_QWORD *)(v8 + 24),
                                 a4,
                                 a5,
                                 a6,
                                 v21,
                                 v22,
                                 tinfo_property,
                                 v24,
                                 v25,
                                 DWORD2(v25),
                                 v26,
                                 v27,
                                 v29,
                                 v30,
                                 v31,
                                 v32,
                                 v33) )
          return 0;
        v17 = *(_QWORD *)(a1 + 8);
        tinfo_property = 0;
        v24 = 0;
        if ( (unsigned __int8)get_tinfo_details(v17, 11, &tinfo_property) )
        {
          v21 = 0;
          v22 = 0;
          v25 = 0;
          copy_tinfo_t((char *)&v25 + 8, &v21);
          v26 = 0;
          copy_tinfo_t(&v26, &v22);
          v27 = 0;
          v28 = 0;
          clear_tinfo_t(&v21);
          clear_tinfo_t(&v22);
          v19 = v25;
          *(_QWORD *)&v25 = tinfo_property;
          tinfo_property = v19;
          create_tinfo(a1 + 8, 10, 10, &v25);
          clear_tinfo_t(&v26);
          clear_tinfo_t((char *)&v25 + 8);
          clear_tinfo_t(&v25);
          clear_tinfo_t(&tinfo_property);
        }
        else
        {
          clear_tinfo_t(&tinfo_property);
          sub_295680(a1 + 8, a1 + 8, 0, 0xAu);
        }
        return 1;
      case '9':
        v18 = *(_QWORD *)(v8 + 24);
        if ( *(_DWORD *)(v18 + 8) != 64 || !(unsigned __int8)sub_36FA60(a2, *(_QWORD *)(v18 + 24), 0) )
          return 0;
        tinfo_property = 0;
        tinfo_property = get_tinfo_property(*(_QWORD *)(v18 + 48), 10);
        *(_QWORD *)&v25 = get_tinfo_property(tinfo_property, 24);
        copy_tinfo_t(&tinfo_property, &v25);
        clear_tinfo_t(&v25);
        if ( !(_BYTE)tinfo_property )
        {
          clear_tinfo_t(&tinfo_property);
          return 0;
        }
        v20 = *(_DWORD *)(a1 + 4);
        LODWORD(v31) = 1;
        v32 = 0;
        HIDWORD(v31) = v20;
        copy_tinfo_t(&v32, &tinfo_property);
        sub_29AB70(a1, (unsigned int *)&v31);
        sub_29A030((__int64)&v31);
        clear_tinfo_t(&tinfo_property);
        break;
      case ';':
      case '<':
        goto LABEL_27;
      case '@':
        if ( (unsigned __int8)sub_36FA60(a2, *(_QWORD *)(v8 + 24), 0) )
          goto LABEL_10;
        return 0;
      case 'A':
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 432LL) + 104LL * *(int *)(v8 + 32) + 24) & 2) != 0 )
          goto LABEL_10;
        return 0;
      default:
        return 0;
    }
    return 1;
  }
  if ( v7 <= 0x10 )
    return 0;
  if ( ((1LL << v7) & 0x20000FFC60000LL) == 0 )
  {
    if ( ((1LL << v7) & 0x4000000380000LL) != 0 )
    {
LABEL_27:
      v15 = *(_QWORD *)(v8 + 48);
      if ( (_BYTE)v15 && ((v15 & 0xE) != 0 || (v15 & 0x30) == 0) )
      {
        *(_QWORD *)&v25 = get_tinfo_property(v15, 9);
        v16 = get_tinfo_property(v25, 2) & 0x3F;
        clear_tinfo_t(&v25);
        if ( v16 != 48 )
          goto LABEL_10;
      }
    }
    return 0;
  }
  *(_QWORD *)&v25 = 8;
  v31 = 1;
  v32 = 0;
  copy_tinfo_t(&v32, &v25);
  sub_29AB70(a1, (unsigned int *)&v31);
  sub_29A030((__int64)&v31);
  clear_tinfo_t(&v25);
  return 1;
}
