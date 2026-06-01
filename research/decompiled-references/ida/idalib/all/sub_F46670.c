void __fastcall sub_F46670(__int64 a1, __int64 a2, double a3)
{
  char v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  _BYTE *v8; // rax
  char v9; // al
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __m128i *i; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // r14d
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rax
  size_t v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm2
  __m128i *v26; // rdx
  __m128 v27; // xmm0
  __m128i *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdi
  void (__fastcall *v35)(__int64, __int64, __int64); // rax
  __int64 v36; // rax
  _BYTE *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // xmm4
  __m128i *v45; // rdx
  __m128i *v46; // rcx
  __m128i v47; // xmm0
  void (__fastcall *v48)(__m128i *, __m128i *, __int64); // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __m128i *v51; // [rsp+0h] [rbp-E8h] BYREF
  __m128i *v52; // [rsp+8h] [rbp-E0h]
  __m128i v53; // [rsp+10h] [rbp-D8h] BYREF
  __m128 v54; // [rsp+20h] [rbp-C8h]
  __int64 v55; // [rsp+30h] [rbp-B8h]
  __m128i v56; // [rsp+38h] [rbp-B0h] BYREF
  void *v57; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-98h]
  __m128i v59; // [rsp+58h] [rbp-90h] BYREF
  __int64 v60; // [rsp+70h] [rbp-78h] BYREF
  __m128i v61; // [rsp+78h] [rbp-70h] BYREF
  void *v62; // [rsp+88h] [rbp-60h]
  __int64 v63; // [rsp+90h] [rbp-58h]
  __m128i v64[5]; // [rsp+98h] [rbp-50h] BYREF

  v4 = *(_BYTE *)(a1 + 1104);
  v5 = *(_QWORD *)(a1 + 1096);
  if ( !a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(*(_QWORD *)(a1 + 1096), 4, 0, 0);
      sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>> OpenACCClause");
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    }
    else
    {
      sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>> OpenACCClause");
    }
    return;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v5 + 24LL))(*(_QWORD *)(a1 + 1096), 4, 1, 0);
    sub_EB0C10(*(_QWORD *)(a1 + 1096), *(_BYTE *)(a2 + 8));
    switch ( *(_BYTE *)(a2 + 8) )
    {
      case 0:
      case 1:
      case 2:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x1B:
      case 0x1C:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x31:
      case 0x32:
      case 0x33:
        goto LABEL_50;
      case 3:
        goto LABEL_37;
      case 4:
        goto LABEL_35;
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
        goto LABEL_5;
      case 0x11:
        goto LABEL_10;
      case 0x19:
      case 0x1A:
        goto LABEL_17;
      case 0x1D:
        goto LABEL_26;
      case 0x29:
        goto LABEL_34;
      case 0x30:
        goto LABEL_51;
      default:
        goto LABEL_8;
    }
  }
  sub_EB0C10(*(_QWORD *)(a1 + 1096), *(_BYTE *)(a2 + 8));
  switch ( *(_BYTE *)(a2 + 8) )
  {
    case 0:
    case 1:
    case 2:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1B:
    case 0x1C:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x31:
    case 0x32:
    case 0x33:
LABEL_50:
      sub_995540(*(_QWORD *)(a1 + 1096), " clause");
      goto LABEL_7;
    case 3:
LABEL_37:
      sub_995540(*(_QWORD *)(a1 + 1096), " clause");
      if ( *(_BYTE *)(a2 + 32) == 1 )
      {
        v49 = sub_995540(*(_QWORD *)(a1 + 1096), " identifier '");
        if ( *(_BYTE *)(a2 + 32) == 1 )
        {
          v50 = sub_9954E0(
                  v49,
                  (const void *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 16LL),
                  **(unsigned int **)(*(_QWORD *)(a2 + 24) + 16LL));
          sub_995540(v50, "'");
          goto LABEL_7;
        }
LABEL_101:
        abort();
      }
      if ( !*(_BYTE *)(a1 + 1056) )
      {
        v22 = j__strlen(&byte_22F0C30);
        v55 = a1;
        v56.m128i_i64[0] = a2;
        v56.m128i_i64[1] = a1;
        v51 = &v59;
        v57 = &v59;
        sub_F24710(&v57, &byte_22F0C30, (__int64)(&byte_22F0C30 + v22));
        if ( *(_BYTE *)(a1 + 1057) )
        {
          v52 = (__m128i *)(a1 + 16);
          v61 = _mm_loadu_si128(&v56);
          v60 = v55;
          v62 = v64;
          if ( v57 == v51 )
          {
            v64[0] = _mm_loadu_si128(&v59);
          }
          else
          {
            v62 = v57;
            v64[0].m128i_i64[0] = v59.m128i_i64[0];
          }
          v23 = v58;
          v58 = 0;
          v59.m128i_i8[0] = 0;
          v63 = v23;
          v57 = &v59;
          v54.m128_u64[0] = 0;
          v24 = operator new(0x38u);
          v25 = _mm_loadu_si128(&v61);
          *(_QWORD *)v24 = v60;
          *(_QWORD *)(v24 + 24) = v24 + 40;
          v26 = (__m128i *)v62;
          *(__m128i *)(v24 + 8) = v25;
          if ( v26 == v64 )
          {
            *(__m128i *)(v24 + 40) = _mm_loadu_si128(v64);
          }
          else
          {
            *(_QWORD *)(v24 + 24) = v26;
            *(_QWORD *)(v24 + 40) = v64[0].m128i_i64[0];
          }
          v53.m128i_i64[0] = v24;
          *(_QWORD *)(v24 + 32) = v63;
          v51 = (__m128i *)sub_F4D380;
          v62 = v64;
          v63 = 0;
          v27 = _mm_loadh_ps((const double *)&v51);
          v64[0].m128i_i8[0] = 0;
          v54 = v27;
          v51 = &v53;
          sub_ACD330(a1 + 16, &v53);
          if ( v54.m128_u64[0] )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v54.m128_u64[0])(v51, v51, 3);
LABEL_46:
          if ( v62 != v64 )
            operator delete(v62);
          v28 = (__m128i *)v57;
          *(_BYTE *)(a1 + 1057) = 0;
          if ( v28 != &v59 )
            operator delete(v28);
          goto LABEL_7;
        }
        v38 = *(unsigned int *)(a1 + 24);
        v39 = *(_QWORD *)(a1 + 16);
        v53.m128i_i8[0] = 0;
        v40 = v39 + 32 * v38 - 32;
        if ( *(_QWORD *)(v40 + 16) )
        {
          v52 = &v53;
          (*(void (__fastcall **)(__int64))(v40 + 24))(v40);
          v41 = *(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32;
          v61 = _mm_loadu_si128(&v56);
          v60 = v55;
          v62 = v64;
          if ( v57 == v51 )
          {
            v64[0] = _mm_loadu_si128(&v59);
          }
          else
          {
            v62 = v57;
            v64[0].m128i_i64[0] = v59.m128i_i64[0];
          }
          v42 = v58;
          v51 = (__m128i *)v41;
          v58 = 0;
          v63 = v42;
          v57 = &v59;
          v59.m128i_i8[0] = 0;
          v54.m128_u64[0] = 0;
          v43 = operator new(0x38u);
          v44 = _mm_loadu_si128(&v61);
          v45 = v51;
          *(_QWORD *)v43 = v60;
          *(_QWORD *)(v43 + 24) = v43 + 40;
          v46 = (__m128i *)v62;
          *(__m128i *)(v43 + 8) = v44;
          if ( v46 == v64 )
          {
            *(__m128i *)(v43 + 40) = _mm_loadu_si128(v64);
          }
          else
          {
            *(_QWORD *)(v43 + 24) = v46;
            *(_QWORD *)(v43 + 40) = v64[0].m128i_i64[0];
          }
          v53.m128i_i64[0] = v43;
          v64[0].m128i_i8[0] = 0;
          v47 = _mm_load_si128(&v53);
          *(_QWORD *)(v43 + 32) = v63;
          v62 = v64;
          v63 = 0;
          v53 = _mm_loadu_si128(v45);
          v48 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v45[1].m128i_i64[0];
          *v45 = v47;
          v54.m128_u64[0] = (unsigned __int64)v48;
          v45[1].m128i_i64[0] = (__int64)sub_F26610;
          v54.m128_u64[1] = v45[1].m128i_u64[1];
          v45[1].m128i_i64[1] = (__int64)sub_F4D380;
          if ( v48 )
            v48(v52, v52, 3);
          goto LABEL_46;
        }
LABEL_99:
        std::__throw_bad_function_call();
      }
      *(_BYTE *)(a1 + 1056) = 0;
      if ( *(_BYTE *)(a2 + 32) )
        goto LABEL_101;
      sub_F439B0(a1, *(_QWORD *)(a2 + 24), a3);
      v29 = *(unsigned int *)(a1 + 24);
      if ( (_DWORD)v29 )
      {
        v30 = *(_QWORD *)(a1 + 16);
        LOBYTE(v60) = 1;
        v31 = v30 + 32 * v29 - 32;
        if ( !*(_QWORD *)(v31 + 16) )
          goto LABEL_99;
        while ( 1 )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(v31 + 24))(v31, &v60);
          v33 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
          *(_DWORD *)(a1 + 24) = v33;
          v34 = *(_QWORD *)(a1 + 16) + 32 * v33;
          v35 = *(void (__fastcall **)(__int64, __int64, __int64))(v34 + 16);
          if ( v35 )
            v35(v34, v34, 3);
          v36 = *(unsigned int *)(a1 + 24);
          if ( !(_DWORD)v36 )
            break;
          v32 = *(_QWORD *)(a1 + 16);
          LOBYTE(v60) = 1;
          v31 = v32 + 32 * v36 - 32;
          if ( !*(_QWORD *)(v31 + 16) )
            goto LABEL_99;
        }
      }
      v37 = *(_BYTE **)(a1 + 1064);
      *(_QWORD *)(a1 + 1072) = 0;
      *v37 = 0;
      sub_995540(*(_QWORD *)a1, "\n");
      *(_BYTE *)(a1 + 1056) = 1;
LABEL_7:
      if ( v4 )
LABEL_8:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
LABEL_9:
      sub_F29AE0(a1, a2);
      sub_F2A050(a1, *(_QWORD *)(a2 + 12));
      return;
    case 4:
LABEL_35:
      sub_995540(*(_QWORD *)(a1 + 1096), " clause");
      if ( *(_BYTE *)(a2 + 48) )
        sub_995540(*(_QWORD *)(a1 + 1096), ": force");
      goto LABEL_7;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
LABEL_5:
      sub_995540(*(_QWORD *)(a1 + 1096), " clause");
      if ( *(_BYTE *)(a2 + 40) )
      {
        v6 = sub_995540(*(_QWORD *)(a1 + 1096), " modifiers: ");
        sub_EB11A0(v6, *(_BYTE *)(a2 + 40));
      }
      goto LABEL_7;
    case 0x11:
LABEL_10:
      v7 = *(_QWORD *)(a1 + 1096);
      v8 = *(_BYTE **)(v7 + 32);
      if ( *(_QWORD *)(v7 + 24) <= (unsigned __int64)v8 )
      {
        v7 = sub_227BA10(v7, 40);
      }
      else
      {
        *(_QWORD *)(v7 + 32) = v8 + 1;
        *v8 = 40;
      }
      v9 = *(_BYTE *)(a2 + 24);
      if ( v9 == 1 )
      {
        v10 = sub_995540(v7, "present");
      }
      else if ( v9 )
      {
        if ( v9 != 2 )
          goto LABEL_100;
        v10 = sub_995540(v7, "<invalid>");
      }
      else
      {
        v10 = sub_995540(v7, "none");
      }
      v11 = *(_BYTE **)(v10 + 32);
      if ( *(_QWORD *)(v10 + 24) <= (unsigned __int64)v11 )
      {
        sub_227BA10(v10, 41);
      }
      else
      {
        *(_QWORD *)(v10 + 32) = v11 + 1;
        *v11 = 41;
      }
      goto LABEL_7;
    case 0x19:
    case 0x1A:
LABEL_17:
      sub_995540(*(_QWORD *)(a1 + 1096), "(");
      v12 = *(unsigned int *)(a2 + 24);
      v51 = (__m128i *)(a2 + 32);
      v13 = *(_QWORD *)(a1 + 1096);
      v52 = (__m128i *)j__strlen(", ");
      v51 = (__m128i *)(a2 + 32 + 16 * v12);
      if ( (__m128i *)(a2 + 32) != v51 )
      {
        v14 = *(_QWORD *)(a2 + 40);
        if ( v14 )
          sub_9954E0(v13, (const void *)(*(_QWORD *)(v14 + 16) + 16LL), **(unsigned int **)(v14 + 16));
        else
          sub_995540(v13, "*");
        for ( i = (__m128i *)(a2 + 48); v51 != i; ++i )
        {
          sub_9954E0(v13, ", ", (size_t)v52);
          v16 = i->m128i_i64[1];
          v17 = *(_QWORD *)(a1 + 1096);
          if ( v16 )
            sub_9954E0(v17, (const void *)(*(_QWORD *)(v16 + 16) + 16LL), **(unsigned int **)(v16 + 16));
          else
            sub_995540(v17, "*");
        }
        v13 = *(_QWORD *)(a1 + 1096);
      }
      sub_995540(v13, ")");
      goto LABEL_7;
    case 0x1D:
LABEL_26:
      v18 = 0;
      sub_995540(*(_QWORD *)(a1 + 1096), " clause");
      if ( !*(_DWORD *)(a2 + 32) )
        goto LABEL_7;
      while ( 2 )
      {
        v19 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
        v20 = *(_BYTE *)(v18 + a2 + 8LL * *(unsigned int *)(a2 + 32) + 40);
        if ( v20 == 1 )
        {
          sub_995540(v19, "dim");
        }
        else if ( v20 )
        {
          if ( v20 != 2 )
          {
LABEL_100:
            sub_F47120();
            return;
          }
          sub_995540(v19, "static");
        }
        else
        {
          sub_995540(v19, "num");
        }
        if ( ++v18 >= *(_DWORD *)(a2 + 32) )
          goto LABEL_7;
        continue;
      }
    case 0x29:
LABEL_34:
      v21 = sub_995540(*(_QWORD *)(a1 + 1096), " clause Operator: ");
      switch ( *(_BYTE *)(a2 + 40) )
      {
        case 0:
          sub_995540(v21, "+");
          goto LABEL_7;
        case 1:
          sub_995540(v21, "*");
          goto LABEL_7;
        case 2:
          sub_995540(v21, "max");
          goto LABEL_7;
        case 3:
          sub_995540(v21, "min");
          goto LABEL_7;
        case 4:
          sub_995540(v21, "&");
          goto LABEL_7;
        case 5:
          sub_995540(v21, "|");
          goto LABEL_7;
        case 6:
          sub_995540(v21, "^");
          goto LABEL_7;
        case 7:
          sub_995540(v21, "&&");
          goto LABEL_7;
        case 8:
          sub_995540(v21, "||");
          goto LABEL_7;
        case 9:
          sub_995540(v21, "<invalid>");
          goto LABEL_7;
        default:
          goto LABEL_100;
      }
    case 0x30:
LABEL_51:
      sub_995540(*(_QWORD *)(a1 + 1096), " clause");
      if ( **(_QWORD **)(a2 + 24) )
        sub_995540(*(_QWORD *)(a1 + 1096), " has devnum");
      if ( *(_DWORD *)(a2 + 40) )
        sub_995540(*(_QWORD *)(a1 + 1096), " has queues tag");
      goto LABEL_7;
    default:
      goto LABEL_9;
  }
}
