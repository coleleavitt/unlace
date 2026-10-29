void __fastcall sub_1BCA600(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  char *v7; // r12
  __int64 v9; // rdi
  __int64 *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rax
  int v17; // edx
  char v18; // al
  __int64 v19; // rdi
  __int64 *v20; // rbp
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  char *v26; // r15
  char *v27; // r8
  __int64 v28; // r12
  char *v29; // rbx
  __int64 v30; // rdx
  char v31; // r9
  char v32; // r8
  char v33; // si
  char v34; // cl
  char v35; // r9
  char v36; // al
  char v37; // di
  char v38; // si
  char v39; // dl
  __int64 v40; // rax
  char *v41; // r9
  char *v42; // rbx
  __int64 v43; // r8
  char v44; // di
  char v45; // al
  char v46; // si
  char v47; // cl
  char v48; // dl
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  int v52; // esi
  int v53; // edx
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // esi
  int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // esi
  __int64 v61; // rax
  int v62; // edx
  char v63; // al
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // esi
  __int64 v67; // rax
  int v68; // edx
  char v69; // al
  __int64 v70; // rax
  __m128d v71; // xmm0
  char v72; // r9
  char v73; // r8
  char v74; // si
  char v75; // cl
  char v76; // r9
  char v77; // r8
  char v78; // si
  char v79; // cl
  __int64 v80; // [rsp+0h] [rbp-68h]
  char *v81; // [rsp+8h] [rbp-60h]
  __int64 *v82; // [rsp+10h] [rbp-58h]
  __int64 *v83; // [rsp+18h] [rbp-50h]
  _QWORD v84[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 128 )
    return;
  v7 = (char *)a2;
  if ( !a3 )
  {
    v20 = a2;
    goto LABEL_25;
  }
  v80 = a3;
  v83 = &a1->m128i_i64[1];
  do
  {
    v9 = a1->m128i_i64[1];
    --v80;
    v10 = &a1->m128i_i64[v5 >> 4];
    v84[0] = a4;
    v11 = *v10;
    if ( v9 == *v10 )
      goto LABEL_9;
    v12 = *(unsigned __int8 *)(v11 + 16);
    if ( *(_BYTE *)(v9 + 16) != (_BYTE)v12 )
    {
      switch ( *(_BYTE *)(v9 + 16) )
      {
        case 0:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
          v31 = 0;
          v18 = 0;
          v32 = 1;
          v33 = 1;
          v34 = 1;
          goto LABEL_38;
        case 1:
        case 3:
        case 4:
          v31 = 1;
          v18 = 1;
          v32 = 1;
          v33 = 1;
          v34 = 1;
          goto LABEL_38;
        case 2:
          v31 = 0;
          v18 = 0;
          v32 = 0;
          v33 = 1;
          v34 = 1;
          goto LABEL_38;
        case 5:
        case 6:
          v31 = 0;
          v18 = 1;
          v32 = 1;
          v33 = 1;
          v34 = 1;
          goto LABEL_38;
        case 0xB:
        case 0xC:
          v31 = 0;
          v18 = 0;
          v32 = 0;
          v33 = 0;
          v34 = 0;
          goto LABEL_38;
        case 0xD:
          v31 = 0;
          v18 = 0;
          v32 = 0;
          v33 = 0;
          v34 = 1;
LABEL_38:
          switch ( v12 )
          {
            case 1LL:
            case 3LL:
            case 4LL:
              goto LABEL_8;
            case 2LL:
              v18 = v32;
              goto LABEL_17;
            case 5LL:
            case 6LL:
              v18 = v31;
              goto LABEL_17;
            case 7LL:
            case 8LL:
            case 9LL:
            case 10LL:
            case 15LL:
            case 16LL:
            case 17LL:
              goto LABEL_17;
            case 11LL:
            case 12LL:
              v18 = v34;
              goto LABEL_17;
            case 13LL:
              v18 = v33;
              goto LABEL_17;
            default:
              goto LABEL_147;
          }
        default:
          goto LABEL_147;
      }
      goto LABEL_147;
    }
    v14 = *(_QWORD *)(v9 + 8);
    if ( !v14 )
      goto LABEL_8;
    v15 = *(_DWORD *)(v14 + 24);
    v16 = *(_QWORD *)(v11 + 8);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 24);
      if ( !v15 )
        goto LABEL_8;
      if ( v17 )
      {
        v18 = sub_10246C0(*(_QWORD *)(a4 + 272), v15, v17);
LABEL_17:
        if ( !v18 )
        {
          v9 = a1->m128i_i64[1];
LABEL_8:
          v11 = v9;
LABEL_9:
          v13 = *((_QWORD *)v7 - 1);
          if ( v13 == v11 )
            goto LABEL_31;
          if ( *(_BYTE *)(v11 + 16) != *(_BYTE *)(v13 + 16) )
          {
            switch ( *(_BYTE *)(v11 + 16) )
            {
              case 1:
              case 3:
              case 4:
                v72 = 1;
                v69 = 1;
                v73 = 1;
                v74 = 1;
                v75 = 1;
                goto LABEL_121;
              case 2:
                v72 = 0;
                v69 = 0;
                v73 = 0;
                v74 = 1;
                v75 = 1;
                goto LABEL_121;
              case 5:
              case 6:
                v72 = 0;
                v69 = 1;
                v73 = 1;
                v74 = 1;
                v75 = 1;
                goto LABEL_121;
              case 7:
              case 8:
              case 9:
              case 0xA:
              case 0xF:
              case 0x10:
              case 0x11:
                v72 = 0;
                v69 = 0;
                v73 = 1;
                v74 = 1;
                v75 = 1;
                goto LABEL_121;
              case 0xB:
              case 0xC:
                v72 = 0;
                v69 = 0;
                v73 = 0;
                v74 = 0;
                v75 = 0;
                goto LABEL_121;
              case 0xD:
                v72 = 0;
                v69 = 0;
                v73 = 0;
                v74 = 0;
                v75 = 1;
LABEL_121:
                switch ( *(_BYTE *)(v13 + 16) )
                {
                  case 1:
                  case 3:
                  case 4:
                    goto LABEL_30;
                  case 2:
                    v69 = v73;
                    goto LABEL_114;
                  case 5:
                  case 6:
                    v69 = v72;
                    goto LABEL_114;
                  case 7:
                  case 8:
                  case 9:
                  case 0xA:
                  case 0xF:
                  case 0x10:
                  case 0x11:
                    goto LABEL_114;
                  case 0xB:
                  case 0xC:
                    v69 = v75;
                    goto LABEL_114;
                  case 0xD:
                    v69 = v74;
                    goto LABEL_114;
                  default:
                    goto LABEL_147;
                }
              default:
                goto LABEL_147;
            }
            goto LABEL_147;
          }
          v65 = *(_QWORD *)(v11 + 8);
          if ( !v65 )
            goto LABEL_30;
          v66 = *(_DWORD *)(v65 + 24);
          v67 = *(_QWORD *)(v13 + 8);
          if ( v67 )
          {
            v68 = *(_DWORD *)(v67 + 24);
            if ( !v66 )
              goto LABEL_30;
            if ( v68 )
            {
              v69 = sub_10246C0(*(_QWORD *)(v84[0] + 272LL), v66, v68);
LABEL_114:
              if ( !v69 )
              {
                v13 = *((_QWORD *)v7 - 1);
LABEL_30:
                v11 = v13;
LABEL_31:
                v24 = sub_1BCA490((__int64)v84, *v10, v11) == 0;
                v25 = a1->m128i_i64[0];
                if ( v24 )
                {
                  a1->m128i_i64[0] = *v10;
                  *v10 = v25;
                }
                else
                {
                  a1->m128i_i64[0] = *((_QWORD *)v7 - 1);
                  *((_QWORD *)v7 - 1) = v25;
                }
                v11 = a1->m128i_i64[0];
                goto LABEL_34;
              }
              v11 = a1->m128i_i64[1];
            }
          }
          else if ( !v66 )
          {
            goto LABEL_30;
          }
          v70 = a1->m128i_i64[0];
          a1->m128i_i64[0] = v11;
          a1->m128i_i64[1] = v70;
          goto LABEL_34;
        }
        v11 = *v10;
      }
    }
    else if ( !v15 )
    {
      goto LABEL_8;
    }
    v19 = *((_QWORD *)v7 - 1);
    if ( v19 == v11 )
      goto LABEL_99;
    if ( *(_BYTE *)(v11 + 16) != *(_BYTE *)(v19 + 16) )
    {
      switch ( *(_BYTE *)(v11 + 16) )
      {
        case 1:
        case 3:
        case 4:
          v76 = 1;
          v63 = 1;
          v77 = 1;
          v78 = 1;
          v79 = 1;
          goto LABEL_132;
        case 2:
          v76 = 0;
          v63 = 0;
          v77 = 0;
          v78 = 1;
          v79 = 1;
          goto LABEL_132;
        case 5:
        case 6:
          v76 = 0;
          v63 = 1;
          v77 = 1;
          v78 = 1;
          v79 = 1;
          goto LABEL_132;
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xF:
        case 0x10:
        case 0x11:
          v76 = 0;
          v63 = 0;
          v77 = 1;
          v78 = 1;
          v79 = 1;
          goto LABEL_132;
        case 0xB:
        case 0xC:
          v76 = 0;
          v63 = 0;
          v77 = 0;
          v78 = 0;
          v79 = 0;
          goto LABEL_132;
        case 0xD:
          v76 = 0;
          v63 = 0;
          v77 = 0;
          v78 = 0;
          v79 = 1;
LABEL_132:
          switch ( *(_BYTE *)(v19 + 16) )
          {
            case 1:
            case 3:
            case 4:
              goto LABEL_98;
            case 2:
              v63 = v77;
              goto LABEL_106;
            case 5:
            case 6:
              v63 = v76;
              goto LABEL_106;
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xF:
            case 0x10:
            case 0x11:
              goto LABEL_106;
            case 0xB:
            case 0xC:
              v63 = v79;
              goto LABEL_106;
            case 0xD:
              v63 = v78;
              goto LABEL_106;
            default:
              goto LABEL_147;
          }
        default:
          goto LABEL_147;
      }
      goto LABEL_147;
    }
    v59 = *(_QWORD *)(v11 + 8);
    if ( !v59 )
      goto LABEL_98;
    v60 = *(_DWORD *)(v59 + 24);
    v61 = *(_QWORD *)(v19 + 8);
    if ( v61 )
    {
      v62 = *(_DWORD *)(v61 + 24);
      if ( !v60 )
        goto LABEL_98;
      if ( v62 )
      {
        v63 = sub_10246C0(*(_QWORD *)(v84[0] + 272LL), v60, v62);
LABEL_106:
        if ( !v63 )
        {
          v19 = *((_QWORD *)v7 - 1);
LABEL_98:
          v11 = v19;
LABEL_99:
          if ( sub_1BCA490((__int64)v84, a1->m128i_i64[1], v11) )
          {
            v58 = a1->m128i_i64[0];
            a1->m128i_i64[0] = *((_QWORD *)v7 - 1);
            *((_QWORD *)v7 - 1) = v58;
            v11 = a1->m128i_i64[0];
          }
          else
          {
            v71 = (__m128d)_mm_loadu_si128(a1);
            v11 = a1->m128i_i64[1];
            *(__m128d *)a1 = _mm_shuffle_pd(v71, v71, 1);
          }
          goto LABEL_34;
        }
        v11 = *v10;
      }
    }
    else if ( !v60 )
    {
      goto LABEL_98;
    }
    v64 = a1->m128i_i64[0];
    a1->m128i_i64[0] = v11;
    *v10 = v64;
    v11 = a1->m128i_i64[0];
LABEL_34:
    v26 = (char *)v83;
    v27 = v7;
    v81 = v7;
    v28 = a4;
    v29 = v27;
    v30 = *v83;
    v82 = v83;
    if ( v11 != *v83 )
    {
      while ( *(_BYTE *)(v30 + 16) == *(_BYTE *)(v11 + 16) )
      {
        v50 = *(_QWORD *)(v30 + 8);
        if ( !v50 )
          goto LABEL_53;
        v51 = *(_QWORD *)(v11 + 8);
        v52 = *(_DWORD *)(v50 + 24);
        if ( v51 )
        {
          v53 = *(_DWORD *)(v51 + 24);
          if ( !v52 )
            goto LABEL_53;
          if ( v53 )
          {
            v36 = sub_10246C0(*(_QWORD *)(v28 + 272), v52, v53);
            v11 = a1->m128i_i64[0];
LABEL_51:
            if ( !v36 )
              goto LABEL_53;
          }
        }
        else if ( !v52 )
        {
          goto LABEL_53;
        }
LABEL_52:
        v26 += 8;
        v30 = *(_QWORD *)v26;
        v82 = (__int64 *)v26;
        if ( v11 == *(_QWORD *)v26 )
          goto LABEL_53;
      }
      switch ( *(_BYTE *)(v30 + 16) )
      {
        case 1:
        case 3:
        case 4:
          v35 = 1;
          v36 = 1;
          v37 = 1;
          v38 = 1;
          v39 = 1;
          goto LABEL_49;
        case 2:
          v35 = 0;
          v36 = 0;
          v37 = 0;
          v38 = 1;
          v39 = 1;
          goto LABEL_49;
        case 5:
        case 6:
          v35 = 0;
          v36 = 1;
          v37 = 1;
          v38 = 1;
          v39 = 1;
          goto LABEL_49;
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xF:
        case 0x10:
        case 0x11:
          v35 = 0;
          v36 = 0;
          v37 = 1;
          v38 = 1;
          v39 = 1;
          goto LABEL_49;
        case 0xB:
        case 0xC:
          v35 = 0;
          v36 = 0;
          v37 = 0;
          v38 = 0;
          v39 = 0;
          goto LABEL_49;
        case 0xD:
          v35 = 0;
          v36 = 0;
          v37 = 0;
          v38 = 0;
          v39 = 1;
LABEL_49:
          switch ( *(_BYTE *)(v11 + 16) )
          {
            case 1:
            case 3:
            case 4:
              goto LABEL_53;
            case 2:
              v36 = v37;
              goto LABEL_51;
            case 5:
            case 6:
              v36 = v35;
              goto LABEL_51;
            case 7:
            case 8:
            case 9:
            case 0xA:
            case 0xF:
            case 0x10:
            case 0x11:
              goto LABEL_51;
            case 0xB:
            case 0xC:
              v36 = v39;
              goto LABEL_51;
            case 0xD:
              v36 = v38;
              goto LABEL_51;
            default:
              goto LABEL_147;
          }
        default:
          break;
      }
LABEL_147:
      BUG();
    }
LABEL_53:
    v40 = *((_QWORD *)v29 - 1);
    v41 = v29 - 8;
    if ( v11 == v40 )
      goto LABEL_68;
    v42 = v29 - 8;
    while ( 1 )
    {
      v43 = *(unsigned __int8 *)(v40 + 16);
      if ( *(_BYTE *)(v11 + 16) != (_BYTE)v43 )
      {
        switch ( *(_BYTE *)(v11 + 16) )
        {
          case 1:
          case 3:
          case 4:
            v44 = 1;
            v45 = 1;
            v46 = 1;
            v47 = 1;
            v48 = 1;
            goto LABEL_62;
          case 2:
            v44 = 0;
            v45 = 0;
            v46 = 0;
            v47 = 1;
            v48 = 1;
            goto LABEL_62;
          case 5:
          case 6:
            v44 = 0;
            v45 = 1;
            v46 = 1;
            v47 = 1;
            v48 = 1;
            goto LABEL_62;
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xF:
          case 0x10:
          case 0x11:
            v44 = 0;
            v45 = 0;
            v46 = 1;
            v47 = 1;
            v48 = 1;
            goto LABEL_62;
          case 0xB:
          case 0xC:
            v44 = 0;
            v45 = 0;
            v46 = 0;
            v47 = 0;
            v48 = 0;
            goto LABEL_62;
          case 0xD:
            v44 = 0;
            v45 = 0;
            v46 = 0;
            v47 = 0;
            v48 = 1;
LABEL_62:
            switch ( v43 )
            {
              case 1LL:
              case 3LL:
              case 4LL:
                goto LABEL_67;
              case 2LL:
                v45 = v46;
                goto LABEL_64;
              case 5LL:
              case 6LL:
                v45 = v44;
                goto LABEL_64;
              case 7LL:
              case 8LL:
              case 9LL:
              case 10LL:
              case 15LL:
              case 16LL:
              case 17LL:
                goto LABEL_64;
              case 11LL:
              case 12LL:
                v45 = v48;
                goto LABEL_64;
              case 13LL:
                v45 = v47;
                goto LABEL_64;
              default:
                goto LABEL_147;
            }
          default:
            goto LABEL_147;
        }
        goto LABEL_147;
      }
      v54 = *(_QWORD *)(v11 + 8);
      if ( !v54 )
        goto LABEL_67;
      v55 = *(_QWORD *)(v40 + 8);
      v56 = *(_DWORD *)(v54 + 24);
      if ( v55 )
        break;
      if ( !v56 )
        goto LABEL_67;
LABEL_66:
      v42 -= 8;
      v40 = *(_QWORD *)v42;
      if ( *(_QWORD *)v42 == v11 )
        goto LABEL_67;
    }
    v57 = *(_DWORD *)(v55 + 24);
    if ( !v56 )
      goto LABEL_67;
    if ( !v57 )
      goto LABEL_66;
    v45 = sub_10246C0(*(_QWORD *)(v28 + 272), v56, v57);
LABEL_64:
    if ( v45 )
    {
      v11 = a1->m128i_i64[0];
      goto LABEL_66;
    }
LABEL_67:
    v41 = v42;
LABEL_68:
    if ( v26 < v41 )
    {
      v49 = *(_QWORD *)v26;
      v29 = v41;
      *(_QWORD *)v26 = *(_QWORD *)v41;
      *(_QWORD *)v41 = v49;
      v11 = a1->m128i_i64[0];
      goto LABEL_52;
    }
    a4 = v28;
    sub_1BCA600(v26, v81, v80, v28);
    v5 = v26 - (char *)a1;
    if ( v26 - (char *)a1 <= 128 )
      return;
    v7 = v26;
  }
  while ( v80 );
  v20 = v82;
LABEL_25:
  v21 = v5 >> 3;
  v22 = ((v5 >> 3) - 2) >> 1;
  sub_1BC8A10((__int64)a1, v22, v5 >> 3, a1->m128i_i64[v22], a4);
  do
  {
    --v22;
    sub_1BC8A10((__int64)a1, v22, v21, a1->m128i_i64[v22], a4);
  }
  while ( v22 );
  do
  {
    v23 = *--v20;
    *v20 = a1->m128i_i64[0];
    sub_1BC8A10((__int64)a1, 0, ((char *)v20 - (char *)a1) >> 3, v23, a4);
  }
  while ( (char *)v20 - (char *)a1 > 8 );
}
