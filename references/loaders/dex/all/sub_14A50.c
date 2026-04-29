__int64 __fastcall sub_14A50(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v5; // r14d
  unsigned __int8 byte; // r12
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  const char *v10; // r8
  const char *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int8 v15; // r12
  __int64 v16; // rax
  const char *v17; // rsi
  __int64 word; // rsi
  unsigned int v19; // ebx
  unsigned int v20; // r12d
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int8 v23; // bl
  int v24; // eax
  char v25; // cl
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rdi
  int v30; // edx
  __int64 v31; // rbp
  const char *v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  const char *v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdi
  int v38; // edx
  const char *v39; // rcx
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  const char *v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbp
  const char *v47; // rcx
  __int64 v48; // rcx
  __int64 max_strlit_length; // rax
  struct _Unwind_Exception *v50; // rbx
  int v52; // [rsp+Ch] [rbp-8Ch]
  const char *v53; // [rsp+10h] [rbp-88h] BYREF
  __int128 v54; // [rsp+18h] [rbp-80h]
  const char *v55; // [rsp+30h] [rbp-68h] BYREF
  __int128 v56; // [rsp+38h] [rbp-60h]
  _BYTE v57[8]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v58; // [rsp+58h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( a4 == 127 )
    sub_7550((__int64)"Too deep encoded array nesting");
  v5 = a4 + 1;
  byte = get_byte(a2);
  create_data(a2, 0, 1, -1);
  v53 = nullptr;
  v8 = byte & 0x1F;
  v54 = 0;
  if ( a3 != -1 )
    sub_E410((__int64 *)&v53, (__int64)"[0x%x] ", a3);
  v9 = num_flag();
  set_op_type(a2, v9, 0);
  switch ( (char)v8 )
  {
    case 0:
      v10 = "VALUE_BYTE";
      break;
    case 1:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 18:
    case 19:
    case 20:
      v10 = "";
      break;
    case 2:
      v10 = "VALUE_SHORT";
      break;
    case 3:
      v10 = "VALUE_CHAR";
      break;
    case 4:
      v10 = "VALUE_INT";
      break;
    case 6:
      v10 = "VALUE_LONG";
      break;
    case 16:
      v10 = "VALUE_FLOAT";
      break;
    case 17:
      v10 = "VALUE_DOUBLE";
      break;
    case 21:
      v10 = "VALUE_METHOD_TYPE";
      break;
    case 22:
      v10 = "VALUE_METHOD_HANDLE";
      break;
    case 23:
      v10 = "VALUE_STRING";
      break;
    case 24:
      v10 = "VALUE_TYPE";
      break;
    case 25:
      v10 = "VALUE_FIELD";
      break;
    case 26:
      v10 = "VALUE_METHOD";
      break;
    case 27:
      v10 = "VALUE_ENUM";
      break;
    case 28:
      v10 = "VALUE_ARRAY";
      break;
    case 29:
      v10 = "VALUE_ANNOTATION";
      break;
    case 30:
      v10 = "VALUE_NULL";
      break;
    case 31:
      v10 = "VALUE_BOOLEAN";
      break;
  }
  v11 = s1;
  if ( (_QWORD)v54 )
    v11 = v53;
  sub_13370(a2, (__int64)"%selement type: (0x%hhx) %s", v11, (unsigned __int8)v8, v10);
  v12 = 4293066845LL;
  v13 = a2 + 1;
  if ( !_bittest64(&v12, v8) )
  {
    sub_72E0((__int64)"Unknown value format 0x%hhx for encoded_value at %a\n", (unsigned __int8)v8, 0.0);
    v13 = -1;
    goto LABEL_10;
  }
  if ( (_BYTE)v8 != 30 )
  {
    v15 = byte >> 5;
    switch ( (_BYTE)v8 )
    {
      case 0x1F:
        v17 = "value = true";
        if ( !v15 )
          v17 = "value = false";
        set_cmt(a2, v17, 0);
        break;
      case 0x1C:
        v16 = sub_153B0(a1, 0xFFFFFFFFLL, a2 + 1, v5);
        goto LABEL_34;
      case 0x1D:
        v16 = sub_14760(a1, a2 + 1, v5);
LABEL_34:
        v13 = v16;
        break;
      default:
        if ( (_BYTE)v8 )
        {
          v23 = v15 + 1;
          switch ( v15 )
          {
            case 1u:
              create_data(v13, 0x10000000, 2, -1);
              word = (unsigned __int16)get_word(v13);
              v19 = word;
              LOBYTE(v20) = 2;
              v21 = 2;
              break;
            case 2u:
            case 4u:
            case 5u:
            case 6u:
              v21 = v23;
              create_data(v13, 0, v23, -1);
              get_bytes(v57, v23, v13, 0, 0);
              v24 = v15;
              v20 = 0;
              word = 0;
              v52 = v24;
              do
              {
                v25 = getinf_flag(3, 32);
                v26 = v52 - v20;
                if ( v25 )
                  v26 = v20;
                ++v20;
                word = (word << 8) | (unsigned __int8)v57[v26];
              }
              while ( v20 != v23 );
              v19 = word;
              break;
            case 3u:
              create_data(v13, 0x20000000, 4, -1);
              word = (unsigned int)get_dword(v13, 0x20000000, v28);
              LOBYTE(v20) = 4;
              v21 = 4;
              v19 = word;
              break;
            case 7u:
              create_data(v13, 805306368, 8, -1);
              word = get_qword(v13);
              v19 = word;
              LOBYTE(v20) = 8;
              v21 = 8;
              break;
            default:
              goto LABEL_39;
          }
        }
        else
        {
LABEL_39:
          create_data(v13, 0, 1, -1);
          word = (unsigned __int8)get_byte(v13);
          v19 = word;
          LOBYTE(v20) = 1;
          v21 = 1;
        }
        switch ( (char)v8 )
        {
          case 2:
          case 4:
            v27 = word << (64 - 8 * (unsigned __int8)v20) >> (64 - 8 * (unsigned __int8)v20);
            sub_13370(v13, (__int64)" Value : 0x%x (%d)", v27, v27);
            break;
          case 3:
            sub_13370(v13, (__int64)"Value: %u", v19);
            break;
          case 6:
            v48 = word << (64 - 8 * (unsigned __int8)v20) >> (64 - 8 * (unsigned __int8)v20);
            sub_13370(v13, (__int64)"Value: 0x%llx (%lld)", v48, v48);
            break;
          case 16:
            sub_13370(v13, (__int64)"Value: %f", COERCE_FLOAT(v19 << (8 * (4 - v21))));
            break;
          case 17:
            sub_13370(v13, (__int64)"Value: %lf", COERCE_DOUBLE(word << (8 * (8 - (unsigned __int8)v21))));
            break;
          case 21:
            sub_13370(v13, (__int64)"Method prototype id: (0x%x)", v19);
            break;
          case 22:
            sub_13370(v13, (__int64)"Method handle: (0x%x)", v19);
            break;
          case 23:
            v55 = nullptr;
            v56 = 0;
            v43 = *(_QWORD *)(a1 + 8);
            v44 = (unsigned int)(*(_DWORD *)a1 - 1);
            if ( v44 >= *(_QWORD *)(v43 + 56) )
              goto LABEL_91;
            v45 = netnode_altval(*(_QWORD *)(*(_QWORD *)(v43 + 48) + 8 * v44), (unsigned int)word, 595);
            v46 = v45;
            if ( v45 )
            {
              max_strlit_length = get_max_strlit_length(v45, 0, 7);
              get_strlit_contents(&v55, v46, max_strlit_length, 0, 0, 1);
            }
            v47 = s1;
            if ( (_QWORD)v56 )
              v47 = v55;
            sub_13370(v13, (__int64)"String: (0x%x) '%s'", v19, v47);
            v36 = (__int64)v55;
            if ( v55 )
              goto LABEL_84;
            break;
          case 24:
            v55 = nullptr;
            v56 = 0;
            v40 = *(_QWORD *)(a1 + 8);
            v41 = (unsigned int)(*(_DWORD *)a1 - 1);
            if ( v41 >= *(_QWORD *)(v40 + 56) )
              goto LABEL_90;
            sub_8BD0((__int64)&v55, *(_QWORD *)(*(_QWORD *)(v40 + 48) + 8 * v41), v19, 0x55u);
            v42 = s1;
            if ( (_QWORD)v56 )
              v42 = v55;
            sub_13370(v13, (__int64)"Type: (0x%x) '%s'", v19, v42);
            v36 = (__int64)v55;
            if ( v55 )
              goto LABEL_84;
            break;
          case 25:
            v55 = nullptr;
            v37 = *(_QWORD *)(a1 + 8);
            v38 = *(_DWORD *)a1;
            v56 = 0;
            sub_89A0(v37, (__int64 *)&v55, v38, v19);
            v31 = (__int64)v55;
            v39 = v55;
            if ( !(_QWORD)v56 )
              v39 = s1;
            sub_13370(v13, (__int64)"Field: (0x%x) '%s'", v19, v39);
            if ( v31 )
              goto LABEL_59;
            break;
          case 26:
            v55 = nullptr;
            v56 = 0;
            v33 = *(_QWORD *)(a1 + 8);
            v34 = (unsigned int)(*(_DWORD *)a1 - 1);
            if ( v34 >= *(_QWORD *)(v33 + 56) )
            {
              sub_59F0();
LABEL_90:
              sub_59F0();
LABEL_91:
              v50 = (struct _Unwind_Exception *)sub_59F0();
              if ( (_BYTE)v8 )
                qfree((unsigned __int8)v8);
              if ( v53 )
              {
                *(_QWORD *)&v54 = 0;
                qfree(v53);
              }
              _Unwind_Resume(v50);
            }
            if ( (unsigned __int8)sub_8BD0((__int64)&v55, *(_QWORD *)(*(_QWORD *)(v33 + 48) + 8 * v34), v19, 0x4Eu) )
              sub_57A0(&v55);
            v35 = s1;
            if ( (_QWORD)v56 )
              v35 = v55;
            sub_13370(v13, (__int64)"Method: (0x%x) '%s'", v19, v35);
            v36 = (__int64)v55;
            if ( v55 )
            {
LABEL_84:
              *(_QWORD *)&v56 = 0;
              qfree(v36);
            }
            break;
          case 27:
            v55 = nullptr;
            v29 = *(_QWORD *)(a1 + 8);
            v30 = *(_DWORD *)a1;
            v56 = 0;
            sub_89A0(v29, (__int64 *)&v55, v30, v19);
            v31 = (__int64)v55;
            v32 = v55;
            if ( !(_QWORD)v56 )
              v32 = s1;
            sub_13370(v13, (__int64)"Enum: (0x%x) '%s'", v19, v32);
            if ( v31 )
LABEL_59:
              qfree(v31);
            break;
          default:
            break;
        }
        v22 = num_flag();
        set_op_type(v13, v22, 0);
        v13 += v21;
        break;
    }
  }
LABEL_10:
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  return v13;
}
