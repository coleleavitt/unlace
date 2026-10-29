__int64 __fastcall sub_7C50(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebp
  unsigned int type_ordinal; // ebp
  unsigned int v5; // eax
  __int64 v6; // r15
  unsigned int v7; // eax
  int v8; // ebp
  __int64 v9; // rsi
  const char *v10; // rsi
  unsigned int v11; // eax
  const char *v12; // r14
  unsigned int v13; // eax
  __int64 v14; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+20h] [rbp-98h] BYREF
  __int64 v16; // [rsp+28h] [rbp-90h] BYREF
  const char *v17; // [rsp+30h] [rbp-88h] BYREF
  __int128 v18; // [rsp+38h] [rbp-80h]
  __int128 v19; // [rsp+50h] [rbp-68h] BYREF
  __int64 v20; // [rsp+60h] [rbp-58h] BYREF
  int v21; // [rsp+68h] [rbp-50h]
  __int16 v22; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v23; // [rsp+78h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  switch ( *a2 )
  {
    case 'B':
      type_ordinal = get_type_ordinal(0, "byte");
      if ( type_ordinal )
        goto LABEL_9;
      v5 = alloc_type_ordinals(0, 1);
      *(_QWORD *)&v19 = 18;
      type_ordinal = v5;
      if ( (unsigned int)save_tinfo(&v19, 0, v5, "byte", 4) )
        goto LABEL_41;
      goto LABEL_7;
    case 'C':
      LODWORD(v6) = get_type_ordinal(0, "wchar16_t");
      if ( (_DWORD)v6 )
        goto LABEL_15;
      v7 = alloc_type_ordinals(0, 1);
      v14 = 114;
      if ( (unsigned int)save_tinfo(&v14, 0, v7, "_wchar16_t", 4)
        || (v15 = 0,
            v16 = 0,
            v17 = nullptr,
            v19 = 0,
            copy_tinfo_t((char *)&v19 + 8, &v17),
            v20 = 0,
            copy_tinfo_t(&v20, &v16),
            v21 = 0,
            v22 = 0,
            clear_tinfo_t(&v17),
            clear_tinfo_t(&v16),
            copy_tinfo_t(&v19, &v14),
            create_tinfo(&v15, 10, 10, &v19),
            clear_tinfo_t(&v20),
            clear_tinfo_t((char *)&v19 + 8),
            clear_tinfo_t(&v19),
            v6 = (unsigned int)alloc_type_ordinals(0, 1),
            v8 = save_tinfo(&v15, 0, v6, "wchar16_t", 4),
            clear_tinfo_t(&v15),
            v8) )
      {
        clear_tinfo_t(&v14);
        return 0;
      }
      clear_tinfo_t(&v14);
LABEL_15:
      LOWORD(v20) = 1;
      *((_QWORD *)&v19 + 1) = (unsigned int)v6;
      goto LABEL_10;
    case 'D':
      v9 = 25;
      return create_tinfo(a1, v9, 7, 0);
    case 'F':
      v9 = 9;
      return create_tinfo(a1, v9, 7, 0);
    case 'I':
      v9 = 20;
      return create_tinfo(a1, v9, 7, 0);
    case 'J':
      v9 = 21;
      return create_tinfo(a1, v9, 7, 0);
    case 'L':
      v17 = nullptr;
      v18 = 0;
      v2 = sub_6F70((__int64 *)&v17, (__int64)a2);
      if ( !(_BYTE)v2 )
        goto LABEL_30;
      v10 = s1;
      v14 = 0;
      if ( (_QWORD)v18 )
        v10 = v17;
      v11 = get_type_ordinal(0, v10);
      if ( v11 )
      {
        LOWORD(v20) = 1;
        *((_QWORD *)&v19 + 1) = v11;
        *(_QWORD *)&v19 = get_idati();
        create_tinfo(&v14, 61, 189, &v19);
      }
      else
      {
        v12 = s1;
        if ( (_QWORD)v18 )
          v12 = v17;
        LOWORD(v20) = 0;
        *((_QWORD *)&v19 + 1) = "";
        *(_QWORD *)&v19 = get_idati();
        create_tinfo(&v14, 13, 189, &v19);
        if ( (unsigned int)save_tinfo(&v14, 0, 0, v12, 5) )
        {
          v2 = 0;
          goto LABEL_29;
        }
      }
      v15 = 0;
      v16 = 0;
      v19 = 0;
      copy_tinfo_t((char *)&v19 + 8, &v16);
      v20 = 0;
      copy_tinfo_t(&v20, &v15);
      v21 = 0;
      v22 = 0;
      clear_tinfo_t(&v16);
      clear_tinfo_t(&v15);
      copy_tinfo_t(&v19, &v14);
      create_tinfo(a1, 10, 10, &v19);
      clear_tinfo_t(&v20);
      clear_tinfo_t((char *)&v19 + 8);
      clear_tinfo_t(&v19);
LABEL_29:
      clear_tinfo_t(&v14);
LABEL_30:
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
      }
      return v2;
    case 'S':
      v9 = 19;
      return create_tinfo(a1, v9, 7, 0);
    case 'V':
      v9 = 1;
      return create_tinfo(a1, v9, 7, 0);
    case 'Z':
      type_ordinal = get_type_ordinal(0, "boolean");
      if ( type_ordinal )
        goto LABEL_9;
      v13 = alloc_type_ordinals(0, 1);
      *(_QWORD *)&v19 = 24;
      type_ordinal = v13;
      if ( (unsigned int)save_tinfo(&v19, 0, v13, "boolean", 4) )
      {
LABEL_41:
        clear_tinfo_t(&v19);
        return 0;
      }
      else
      {
LABEL_7:
        clear_tinfo_t(&v19);
LABEL_9:
        LOWORD(v20) = 1;
        *((_QWORD *)&v19 + 1) = type_ordinal;
LABEL_10:
        *(_QWORD *)&v19 = get_idati();
        v2 = 1;
        create_tinfo(a1, 61, 189, &v19);
      }
      return v2;
    case '[':
      v17 = nullptr;
      v2 = sub_7C50(&v17, a2 + 1);
      if ( (_BYTE)v2 )
      {
        v19 = 0u;
        copy_tinfo_t(&v19, &v17);
        v2 = create_tinfo(a1, 11, 11, &v19);
        clear_tinfo_t(&v19);
      }
      clear_tinfo_t(&v17);
      return v2;
    default:
      return 0;
  }
}

