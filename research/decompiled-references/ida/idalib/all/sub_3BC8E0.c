unsigned __int64 __fastcall sub_3BC8E0(__int64 a1, const char *a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rbp
  char v7; // r14
  __int64 v8; // rsi
  unsigned __int64 *v9; // rbx
  __int64 v10; // r15
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  int v13; // eax
  char v14; // al
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // r10d
  size_t v20; // r11
  size_t v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // r10d
  size_t v25; // r8
  __int64 v26; // r11
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  size_t v30; // r8
  size_t v31; // r10
  unsigned __int64 v32; // r11
  void *v33; // rdi
  char *v35; // rsi
  __int64 v36; // rax
  char *v37; // rsi
  __int64 v38; // rax
  char *v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // [rsp+0h] [rbp-A8h]
  __int64 v42; // [rsp+8h] [rbp-A0h]
  _BYTE *v43; // [rsp+10h] [rbp-98h]
  const char *v44; // [rsp+18h] [rbp-90h]
  size_t v45; // [rsp+20h] [rbp-88h]
  size_t v46; // [rsp+28h] [rbp-80h]
  size_t v47; // [rsp+30h] [rbp-78h]
  __int64 v48; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v50; // [rsp+48h] [rbp-60h]
  _BYTE src[5]; // [rsp+5Eh] [rbp-4Ah] BYREF
  _BYTE v52[5]; // [rsp+63h] [rbp-45h] BYREF
  unsigned __int64 v53[8]; // [rsp+68h] [rbp-40h] BYREF

  v44 = a2;
  v4 = *(_DWORD *)(a1 + 1248);
  v53[0] = __readfsqword(0x28u);
  if ( v4 )
    return v53[0] - __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a1;
  v7 = a4;
  v8 = 0x100000000LL;
  v42 = 0x100000000LL;
  if ( *(_DWORD *)(v5 + 24) == 8 )
  {
    v42 = -1;
    v9 = nullptr;
    if ( (_BYTE)a4 )
      goto LABEL_4;
    goto LABEL_80;
  }
  v9 = nullptr;
  if ( !(_BYTE)a4 )
LABEL_80:
    v9 = *(unsigned __int64 **)(a1 + 1160);
LABEL_4:
  v10 = *(_QWORD *)(a3 + 24);
  ptr = nullptr;
  v41 = a3 + 8;
  v50 = 0;
  if ( v10 == a3 + 8 )
    return v53[0] - __readfsqword(0x28u);
  LOBYTE(v43) = 0;
  v11 = 0;
  do
  {
    v15 = *(_QWORD *)(v10 + 40);
    v16 = *(_QWORD *)(v10 + 32);
    if ( v15 )
    {
      if ( v16 < v11 )
        sub_378C70((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v44, "ea >= covered", 0.0);
      a3 = v42 - v16;
      if ( v42 - v16 < v15 )
        sub_378C70((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v44, "si.size <= ea_end - ea", 0.0);
      if ( (*(_BYTE *)(v10 + 49) & 4) == 0 )
        sub_378C70((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v44, "is_head(si.flags)", 0.0);
      v11 = v15 + v16;
LABEL_10:
      if ( !v9 )
        goto LABEL_36;
      goto LABEL_11;
    }
    v17 = *(_DWORD *)(v10 + 48) & 0x600;
    if ( v17 == 512 )
    {
      if ( v16 >= v11 )
        sub_378C70((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v44, "ea < covered", 0.0);
      if ( !v9 )
        goto LABEL_15;
LABEL_11:
      v12 = v9[1];
      if ( v16 < *v9 )
      {
        if ( v16 != v12 )
          goto LABEL_15;
      }
      else
      {
        if ( v16 < v12 )
        {
          v13 = *(_DWORD *)(v10 + 48);
          if ( (v13 & 0x100) == 0 || (_BYTE)v13 )
            sub_378C70(
              (__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)",
              v44,
              "has_value(si.flags) && (si.flags & MS_VAL) == 0",
              0.0);
LABEL_15:
          if ( v7 )
            goto LABEL_30;
          goto LABEL_16;
        }
        if ( v16 != v12 )
          goto LABEL_36;
      }
      v9 += 2;
      if ( v9 == (unsigned __int64 *)(*(_QWORD *)(v6 + 1160) + 16LL * *(_QWORD *)(v6 + 1168)) )
        v9 = nullptr;
LABEL_36:
      if ( v7 )
        goto LABEL_30;
      if ( v16 == -1 )
        goto LABEL_38;
      goto LABEL_16;
    }
    if ( v17 )
      sub_378C70((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v44, "is_unknown(si.flags)", 0.0);
    if ( v16 >= v11 )
    {
      v11 = *(_QWORD *)(v10 + 32);
      goto LABEL_10;
    }
    if ( !(_BYTE)v43 )
      sub_368890();
    LODWORD(v43) = *(_DWORD *)(v10 + 48);
    if ( (unsigned __int8)must_journal(a1, v8, a3) )
    {
      v18 = pack_dq(src, v53, v16) - (_QWORD)src;
      v19 = (unsigned int)v43;
      v20 = v18;
      if ( !v18 )
        goto LABEL_52;
      v21 = v50;
      v22 = v50 + v18;
      if ( __CFADD__((_QWORD)v50, v18) )
      {
        if ( (unsigned __int64)v50 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v50 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v50 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_51:
          LODWORD(v43) = v19;
          memcpy((char *)ptr + v21, src, v20);
          v19 = (unsigned int)v43;
LABEL_52:
          LODWORD(v45) = v19;
          v43 = v52;
          v23 = pack_dd(src, v52, v19) - (_QWORD)src;
          v24 = v45;
          v25 = v23;
          if ( !v23 )
            goto LABEL_58;
          v26 = v50;
          v27 = v50 + v23;
          if ( __CFADD__((_QWORD)v50, v23) )
          {
            if ( (unsigned __int64)v50 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v50 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v50 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_57:
              LODWORD(v45) = v24;
              memcpy((char *)ptr + v26, src, v25);
              v24 = v45;
LABEL_58:
              v28 = v24;
              v8 = (__int64)v43;
              BYTE1(v28) = BYTE1(v24) | 2;
              v29 = pack_dd(src, v43, v28) - (_QWORD)src;
              v30 = v29;
              if ( !v29 )
                goto LABEL_27;
              v31 = v50;
              v32 = v50 + v29;
              if ( __CFADD__((_QWORD)v50, v29) )
              {
                if ( (unsigned __int64)v50 > 0x7FFFFFFFFFFFFFFELL )
                {
                  if ( (_QWORD)v50 != 0x7FFFFFFFFFFFFFFFLL )
                    *(_QWORD *)&v50 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_63:
                  v8 = (__int64)src;
                  memcpy((char *)ptr + v31, src, v30);
                  goto LABEL_27;
                }
                v32 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v39 = (char *)ptr;
              v40 = v50;
              if ( *((_QWORD *)&v50 + 1) < v32 )
              {
                v46 = v50;
                v45 = v30;
                v43 = (_BYTE *)v32;
                ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
                v39 = (char *)ptr;
                v31 = v46;
                v40 = v50;
                v30 = v45;
                v32 = (unsigned __int64)v43;
              }
              v46 = v31;
              v45 = v30;
              v43 = (_BYTE *)v32;
              memset(&v39[v40], 0, v32 - v40);
              v30 = v45;
              v31 = v46;
              *(_QWORD *)&v50 = v43;
              goto LABEL_63;
            }
            v27 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v35 = (char *)ptr;
          v36 = v50;
          if ( *((_QWORD *)&v50 + 1) < v27 )
          {
            v48 = v50;
            v47 = v25;
            LODWORD(v46) = v45;
            v45 = v27;
            ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
            v35 = (char *)ptr;
            v26 = v48;
            v36 = v50;
            v25 = v47;
            v24 = v46;
            v27 = v45;
          }
          v48 = v26;
          v47 = v25;
          LODWORD(v46) = v24;
          v45 = v27;
          memset(&v35[v36], 0, v27 - v36);
          v24 = v46;
          v25 = v47;
          v26 = v48;
          *(_QWORD *)&v50 = v45;
          goto LABEL_57;
        }
        v22 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v37 = (char *)ptr;
      v38 = v50;
      if ( *((_QWORD *)&v50 + 1) < v22 )
      {
        v47 = v50;
        v46 = v20;
        LODWORD(v45) = (_DWORD)v43;
        v43 = (_BYTE *)v22;
        ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
        v37 = (char *)ptr;
        v21 = v47;
        v38 = v50;
        v20 = v46;
        v19 = v45;
        v22 = (unsigned __int64)v43;
      }
      v47 = v21;
      v46 = v20;
      LODWORD(v45) = v19;
      v43 = (_BYTE *)v22;
      memset(&v37[v38], 0, v22 - v38);
      v19 = v45;
      v20 = v46;
      v21 = v47;
      *(_QWORD *)&v50 = v43;
      goto LABEL_51;
    }
LABEL_27:
    *(_DWORD *)(v10 + 48) |= 0x200u;
    v11 = v16;
    LOBYTE(v43) = 1;
    if ( v9 )
      goto LABEL_11;
    if ( v7 )
    {
      LOBYTE(v43) = v7;
LABEL_30:
      if ( *(_QWORD *)(v6 + 1048) )
      {
        v8 = v16;
        if ( rangeset_t_find_range(v6 + 1040, v16) )
          sub_378C70((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v44, "!vmem_ranges.contains(ea)", 0.0);
      }
      goto LABEL_19;
    }
LABEL_16:
    if ( v16 == *(_QWORD *)(v6 + 1208) )
    {
      v14 = *(_BYTE *)(v6 + 1216);
    }
    else
    {
      *(_QWORD *)(v6 + 1208) = v16;
      v8 = v16;
      v14 = rangeset_t_find_range(v6 + 1120, v16) != 0;
      *(_BYTE *)(v6 + 1216) = v14;
    }
    if ( !v14 )
LABEL_38:
      sub_378C70((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v44, "is_sparse_ea(ea)", 0.0);
LABEL_19:
    a1 = v10;
    v10 = std::_Rb_tree_increment(v10, v8, a3, a4);
  }
  while ( v10 != v41 );
  v33 = ptr;
  if ( (_QWORD)v50 )
  {
    add_undo_record(6, ptr, v50);
    v33 = ptr;
    if ( ptr )
    {
LABEL_66:
      *(_QWORD *)&v50 = 0;
      qfree(v33);
    }
  }
  else if ( ptr )
  {
    goto LABEL_66;
  }
  return v53[0] - __readfsqword(0x28u);
}
