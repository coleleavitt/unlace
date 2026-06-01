__int64 __fastcall sub_60EE60(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v10; // rsi
  __int64 tinfo_size; // rax
  unsigned __int64 v13; // rbx
  char tinfo_property; // dl
  int v15; // r8d
  int v16; // r9d
  __int64 flags_by_size; // rax
  unsigned __int8 v19; // dl
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 reftype_by_size; // al
  __int64 v23; // rax
  __int64 tinfo_tid; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  const char *v30; // rsi
  __int64 v31; // [rsp+0h] [rbp-A8h]
  __int64 v32; // [rsp+0h] [rbp-A8h]
  char v33; // [rsp+8h] [rbp-A0h]
  unsigned int v34; // [rsp+14h] [rbp-94h] BYREF
  __int64 v35; // [rsp+18h] [rbp-90h] BYREF
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int128 v37; // [rsp+28h] [rbp-80h]
  _BYTE v38[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v10 = *a5;
  v39 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(&v34, v10, 0);
  if ( tinfo_size == -1 )
  {
    LODWORD(v13) = 0;
    return (unsigned int)v13;
  }
  v13 = tinfo_size;
  if ( a2 )
    *a2 = tinfo_size;
  if ( a6 )
    *a6 = v34;
  v35 = 0;
  copy_tinfo_t(&v35);
  while ( 2 )
  {
    tinfo_property = get_tinfo_property(v35, 2);
    switch ( tinfo_property & 0xF )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        if ( !a3 )
          goto LABEL_19;
        flags_by_size = get_flags_by_size(v13);
        *a3 = flags_by_size;
        LOBYTE(v13) = flags_by_size != 0;
        goto LABEL_12;
      case 9:
        if ( !a3 )
          goto LABEL_19;
        v19 = tinfo_property & 0x30;
        if ( v19 != 32 )
        {
          if ( v19 <= 0x20u )
          {
            v20 = 2147484672LL;
            if ( v19 )
              v20 = 2415920128LL;
            *a3 = v20;
            goto LABEL_19;
          }
          if ( v19 != 48 )
            goto LABEL_33;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 11LL) & 8) == 0 )
          {
            *a3 = 268436480;
            goto LABEL_19;
          }
LABEL_48:
          *a3 = 1073742848;
          goto LABEL_19;
        }
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
        if ( v27 == v13 )
          goto LABEL_48;
        if ( v13 == 8 )
        {
          *a3 = 2415920128LL;
LABEL_19:
          LODWORD(v13) = 1;
          goto LABEL_12;
        }
        if ( v13 == 4 )
        {
          *a3 = 2147484672LL;
          goto LABEL_19;
        }
        if ( v27 >= v13 )
          goto LABEL_33;
        qsnprintf((unsigned int)v38, 32, (unsigned int)"LONG_DOUBLE_%d", v13, v15, v16);
        v28 = sub_6BB3C0(a1, 0, v38);
        if ( v28 != -1 )
          goto LABEL_45;
        ptr = nullptr;
        v37 = 0;
        sub_35A790((char **)&ptr);
        v30 = haystack;
        if ( (_QWORD)v37 )
          v30 = (const char *)ptr;
        parse_decls(0, v30, 0, 1024);
        v28 = sub_6BB3C0(a1, 0, v38);
        if ( ptr )
        {
          v32 = v28;
          *(_QWORD *)&v37 = 0;
          qfree(ptr);
          v28 = v32;
        }
        if ( v28 != -1 )
        {
LABEL_45:
          if ( a4 )
            *(_QWORD *)a4 = v28;
          *a3 = 1610613760;
          goto LABEL_19;
        }
        LODWORD(v13) = 0;
LABEL_12:
        clear_tinfo_t(&v35);
        return (unsigned int)v13;
      case 0xA:
        if ( !a3 )
          goto LABEL_23;
        v21 = get_flags_by_size(v13);
        if ( !v21 )
        {
          *a3 = 0;
          LODWORD(v13) = 0;
          goto LABEL_12;
        }
        *a3 = v21 | 0x55555505500000LL;
LABEL_23:
        if ( a4 )
        {
          reftype_by_size = get_reftype_by_size(v13);
          *(_QWORD *)(a4 + 16) = 0;
          *(_DWORD *)(a4 + 24) = reftype_by_size;
          *(_OWORD *)a4 = -1;
        }
        goto LABEL_19;
      case 0xB:
        ptr = nullptr;
        ptr = (void *)get_tinfo_property(v35, 289);
        copy_tinfo_t(&v35);
        clear_tinfo_t(&ptr);
        v23 = get_tinfo_size(0, v35, 0);
        goto LABEL_26;
      case 0xD:
        v33 = tinfo_property;
        if ( get_tinfo_property(*a5, 281) )
        {
          if ( a3 )
            *a3 = get_flags_by_size(v13);
          goto LABEL_19;
        }
        tinfo_tid = get_tinfo_tid(&v35, 1);
        v25 = tinfo_tid;
        if ( tinfo_tid != -1 )
        {
          if ( (v33 & 0x30) == 0x20 )
          {
            if ( a3 )
            {
              v31 = tinfo_tid;
              v29 = get_flags_by_size(v13);
              v25 = v31;
              *a3 = v29 | 0x88888808800000LL;
            }
            if ( a4 )
            {
              *(_QWORD *)a4 = v25;
              *(_BYTE *)(a4 + 8) = 0;
            }
          }
          else
          {
            if ( a3 )
              *a3 = 1610613760;
            if ( a4 )
              *(_QWORD *)a4 = tinfo_tid;
          }
          goto LABEL_19;
        }
        if ( (get_merge_state(&v35, 1) & 2) == 0 )
        {
LABEL_33:
          LODWORD(v13) = 0;
          goto LABEL_12;
        }
        ptr = &word_10 + 1;
        copy_tinfo_t(&v35);
        clear_tinfo_t(&ptr);
        v23 = get_tinfo_size(0, v35, 0);
LABEL_26:
        v13 = v23;
        continue;
      case 0xE:
        if ( !a3 )
          goto LABEL_19;
        LOWORD(ptr) = 0;
        BYTE2(ptr) = 0;
        if ( !(unsigned __int8)get_tinfo_details(v35, 14, &ptr) )
          goto LABEL_33;
        v26 = get_flags_by_size((BYTE1(ptr) + 7) >> 3);
        *a3 = v26;
        if ( v26 )
          goto LABEL_19;
        LODWORD(v13) = 0;
        goto LABEL_12;
      default:
        goto LABEL_33;
    }
  }
}
