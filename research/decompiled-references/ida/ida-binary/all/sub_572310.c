unsigned __int64 __fastcall sub_572310(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  int v12; // eax
  int v13; // r14d
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  unsigned int v16; // ecx
  unsigned __int16 v17; // r15
  int v18; // ebp
  unsigned int v19; // ebp
  bool v20; // al
  char v21; // r9
  unsigned int v22; // edi
  unsigned int v23; // esi
  __int64 v24; // r11
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int16 v27; // bp
  __int64 v28; // r13
  char *v29; // rbp
  unsigned __int16 v30; // r12
  char *v31; // rax
  int v32; // ecx
  __int64 v33; // rdx
  __int64 *v34; // rax
  __int64 v35; // r12
  int v36; // r13d
  char *v37; // rax
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rbp
  const char *v43; // rbp
  char *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  int v47; // r12d
  __int64 v48; // rax
  char v49; // al
  char *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rsi
  char *v54; // rax
  char *v55; // rax
  __int64 v56; // rax
  __int64 *v57; // r12
  __int64 v58; // rax
  __int64 v59; // rsi
  unsigned int v60; // [rsp+4h] [rbp-64h]
  unsigned __int16 v61; // [rsp+4h] [rbp-64h]
  __int64 v65; // [rsp+20h] [rbp-48h]

  if ( *(_DWORD *)(a1 + 1376) )
  {
    v12 = *(_DWORD *)(a1 + 1376);
    v13 = v12;
    v65 = 48LL * a2;
    do
    {
      v14 = *(_QWORD *)(a1 + 1368) + 16LL * (unsigned int)(v12 - 1);
      v15 = *(_QWORD *)v14;
      if ( !*(_QWORD *)v14 )
        return 0;
      v16 = *(_DWORD *)(v14 + 12);
      if ( (v15 & 1) != 0 )
      {
        v17 = BYTE1(v15);
        v18 = HIBYTE(v15) + BYTE6(v15);
      }
      else
      {
        v18 = *(_DWORD *)(v15 + 16) + *(_DWORD *)(v15 + 4);
        v17 = *(_WORD *)(v15 + 40);
      }
      v19 = v16 + v18;
      if ( !v17 )
        v19 = -1;
      if ( a4 < v16 )
      {
        if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
        {
          v55 = sub_563060(*(_QWORD *)(a1 + 1256), v17);
          snprintf((char *)(a1 + 192), 0x400u, "before_reusable_node symbol:%s", v55);
          sub_55D530(a1);
        }
        return 0;
      }
      if ( v16 < a4 )
      {
        if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
        {
          v37 = sub_563060(*(_QWORD *)(a1 + 1256), v17);
          snprintf((char *)(a1 + 192), 0x400u, "past_reusable_node symbol:%s", v37);
          sub_55D530(a1);
        }
        v38 = a1 + 1368;
        if ( a4 < v19 )
        {
          v39 = *(_DWORD *)(a1 + 1376);
          if ( !v39 )
            sub_55D1C0(v38);
          v40 = *(_QWORD *)(a1 + 1368) + 16LL * (unsigned int)(v39 - 1);
          v41 = *(_QWORD *)v40;
          if ( (*(_QWORD *)v40 & 1) == 0 )
          {
            if ( *(_DWORD *)(v41 + 36) )
            {
              v47 = *(_DWORD *)(v40 + 12);
              sub_55ECB0(v38, 16);
              v51 = *(unsigned int *)(a1 + 1376);
              v12 = v51 + 1;
              *(_DWORD *)(a1 + 1376) = v51 + 1;
              v13 = v51 + 1;
LABEL_66:
              v52 = *(_QWORD *)(a1 + 1368) + 16 * v51;
              v53 = *(_QWORD *)(v41 - 8LL * *(unsigned int *)(v41 + 36));
              *(_DWORD *)(v52 + 8) = 0;
              *(_DWORD *)(v52 + 12) = v47;
              *(_QWORD *)v52 = v53;
              continue;
            }
          }
        }
      }
      else
      {
        v60 = *(_DWORD *)(v14 + 12);
        v20 = sub_5715E0(*(_QWORD *)(a1 + 1384), a5);
        v21 = v15 & 1;
        if ( v20 )
        {
          if ( v21 )
          {
            if ( (v15 & 0x10) == 0 )
            {
              if ( (v15 & 0x20) == 0 )
              {
LABEL_14:
                v22 = *(_DWORD *)(a1 + 1504);
                v23 = *(_DWORD *)(a1 + 1464);
                if ( v22 >= v23 )
                  goto LABEL_19;
                v24 = *(_QWORD *)(a1 + 1456);
                v25 = v24 + 24LL * v22;
                v26 = v24 + 24 * (v22 + (unsigned __int64)(v23 - 1 - v22)) + 24;
                while ( v60 >= *(_DWORD *)(v25 + 20) )
                {
                  v25 += 24;
                  if ( v25 == v26 )
                    goto LABEL_19;
                }
                if ( *(_DWORD *)(v25 + 16) >= v19 )
                {
LABEL_19:
                  v27 = BYTE1(v15);
                  if ( !v21 )
                  {
                    if ( *(_DWORD *)(v15 + 36) )
                      v27 = *(_WORD *)(v15 + 68);
                    else
                      v27 = *(_WORD *)(v15 + 40);
                  }
                  v28 = *(_QWORD *)(a1 + 1256);
                  v61 = *a3;
                  sub_562CE0(v28, *a3, v27, a6);
                  if ( sub_55DA00(v28, v61, v15, a6) )
                  {
                    if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
                    {
                      v54 = sub_563060(v28, v17);
                      snprintf((char *)(a1 + 192), 0x400u, "reuse_node symbol:%s", v54);
                      sub_55D530(a1);
                    }
                    sub_56C560((volatile signed __int32 *)v15);
                    return v15;
                  }
                  if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
                  {
                    v29 = sub_563060(v28, v27);
                    if ( (v15 & 1) != 0 )
                      v30 = BYTE1(v15);
                    else
                      v30 = *(_WORD *)(v15 + 40);
                    v31 = sub_563060(*(_QWORD *)(a1 + 1256), v30);
                    snprintf((char *)(a1 + 192), 0x400u, "cant_reuse_node symbol:%s, first_leaf_symbol:%s", v31, v29);
                    sub_55D530(a1);
                  }
                  v32 = *(_DWORD *)(a1 + 1376);
                  if ( !v32 )
LABEL_84:
                    __assert_fail(
                      "(uint32_t)((&self->stack)->size - 1) < (&self->stack)->size",
                      "lib/src/././reusable_node.h",
                      0x3Fu,
                      "reusable_node_descend");
                  v33 = *(_QWORD *)(a1 + 1368);
                  while ( 1 )
                  {
                    v34 = (__int64 *)(v33 + 16LL * (unsigned int)(v32 - 1));
                    v35 = *v34;
                    v36 = *((_DWORD *)v34 + 3);
                    if ( (*v34 & 1) != 0 || !*(_DWORD *)(v35 + 36) )
                      break;
                    sub_55ECB0(a1 + 1368, 16);
                    v56 = *(unsigned int *)(a1 + 1376);
                    v33 = *(_QWORD *)(a1 + 1368);
                    v32 = v56 + 1;
                    v57 = (__int64 *)(v35 - 8LL * *(unsigned int *)(v35 + 36));
                    v58 = v33 + 16 * v56;
                    *(_DWORD *)(a1 + 1376) = v32;
                    v59 = *v57;
                    *(_DWORD *)(v58 + 8) = 0;
                    *(_DWORD *)(v58 + 12) = v36;
                    *(_QWORD *)v58 = v59;
                    if ( !v32 )
                      goto LABEL_84;
                  }
                  sub_570E60(a1 + 1368);
                  return 0;
                }
                v43 = "contains_different_included_range";
LABEL_43:
                if ( *(_QWORD *)(a1 + 152) )
                {
LABEL_44:
                  v44 = sub_563060(*(_QWORD *)(a1 + 1256), v17);
                  snprintf((char *)(a1 + 192), 0x400u, "cant_reuse_node_%s tree:%s", v43, v44);
                  sub_55D530(a1);
                  v13 = *(_DWORD *)(a1 + 1376);
                  goto LABEL_45;
                }
LABEL_55:
                if ( *(_QWORD *)(a1 + 1400) )
                  goto LABEL_44;
LABEL_45:
                v45 = a1 + 1368;
                if ( !v13 )
                  goto LABEL_84;
                v46 = *(_QWORD *)(a1 + 1368) + 16LL * (unsigned int)(v13 - 1);
                v41 = *(_QWORD *)v46;
                v47 = *(_DWORD *)(v46 + 12);
                if ( (*(_QWORD *)v46 & 1) != 0 || !*(_DWORD *)(v41 + 36) )
                {
                  sub_570E60(v45);
                  sub_56EDA0(a1, a2, a7, a8, a9, a10);
                  v48 = *(_QWORD *)(a1 + 1216);
                  if ( a2 >= *(_DWORD *)(v48 + 8) )
                    sub_55D2E0();
                  v13 = *(_DWORD *)(a1 + 1376);
                  *a3 = **(_WORD **)(*(_QWORD *)v48 + v65);
                  v12 = v13;
                  continue;
                }
                sub_55ECB0(v45, 16);
                v51 = *(unsigned int *)(a1 + 1376);
                v12 = v51 + 1;
                *(_DWORD *)(a1 + 1376) = v51 + 1;
                v13 = v51 + 1;
                goto LABEL_66;
              }
              goto LABEL_57;
            }
          }
          else
          {
            v49 = *(_BYTE *)(v15 + 44);
            if ( (v49 & 0x20) == 0 )
            {
              if ( *(_WORD *)(v15 + 40) == 0xFFFF )
              {
                v43 = "is_error";
                goto LABEL_43;
              }
              if ( (*(_BYTE *)(v15 + 45) & 2) == 0 )
              {
                if ( (v49 & 0x18) == 0 )
                  goto LABEL_14;
                v43 = "is_fragile";
                if ( *(_QWORD *)(a1 + 152) )
                  goto LABEL_44;
                goto LABEL_55;
              }
LABEL_57:
              v43 = "is_missing";
              goto LABEL_43;
            }
          }
          v43 = "has_changes";
          goto LABEL_43;
        }
        if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
        {
          v50 = sub_563060(*(_QWORD *)(a1 + 1256), v17);
          snprintf((char *)(a1 + 192), 0x400u, "reusable_node_has_different_external_scanner_state symbol:%s", v50);
          sub_55D530(a1);
        }
        v38 = a1 + 1368;
      }
      sub_570E60(v38);
      v13 = *(_DWORD *)(a1 + 1376);
      v12 = v13;
    }
    while ( v12 );
  }
  return 0;
}
