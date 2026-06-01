unsigned __int64 __fastcall sub_3B7D50(__int64 a1, const char *a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned int *v7; // rbx
  __int64 v8; // r15
  unsigned int v9; // r12d
  bool v10; // cf
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  char v14; // al
  int v15; // eax
  unsigned int v16; // r13d
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // r10d
  size_t v20; // r8
  __int64 v21; // r11
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // r10d
  size_t v25; // r8
  __int64 v26; // r11
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  size_t v30; // r8
  __int64 v31; // r10
  unsigned __int64 v32; // r11
  void *v33; // rdi
  char *v35; // rsi
  __int64 v36; // rax
  char *v37; // rsi
  __int64 v38; // rax
  char *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-A0h]
  _QWORD *v42; // [rsp+10h] [rbp-98h]
  const char *v43; // [rsp+18h] [rbp-90h]
  size_t v44; // [rsp+20h] [rbp-88h]
  __int64 v45; // [rsp+28h] [rbp-80h]
  size_t v46; // [rsp+30h] [rbp-78h]
  __int64 v47; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v49; // [rsp+48h] [rbp-60h]
  _BYTE src[5]; // [rsp+63h] [rbp-45h] BYREF
  _QWORD v51[8]; // [rsp+68h] [rbp-40h] BYREF

  v43 = a2;
  v4 = *(unsigned int *)(a1 + 1224);
  v51[0] = __readfsqword(0x28u);
  if ( (_DWORD)v4 )
    return v51[0] - __readfsqword(0x28u);
  v5 = a1;
  v7 = nullptr;
  if ( !a4 )
    v7 = *(unsigned int **)(a1 + 1152);
  v8 = *(_QWORD *)(a3 + 24);
  ptr = nullptr;
  v41 = a3 + 8;
  v49 = 0;
  if ( v8 == a3 + 8 )
    return v51[0] - __readfsqword(0x28u);
  LOBYTE(v42) = 0;
  v9 = 0;
  do
  {
    v15 = *(_DWORD *)(v8 + 36);
    v16 = *(_DWORD *)(v8 + 32);
    if ( v15 )
    {
      if ( v16 < v9 )
        sub_375320((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v43, "ea >= covered", 0.0);
      v10 = __CFADD__(v16, v15);
      v11 = v16 + v15;
      if ( v10 )
        sub_375320((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v43, "si.size <= ea_end - ea", 0.0);
      if ( (*(_BYTE *)(v8 + 41) & 4) == 0 )
        sub_375320((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v43, "is_head(si.flags)", 0.0);
      v9 = v11;
LABEL_10:
      if ( !v7 )
        goto LABEL_36;
      goto LABEL_11;
    }
    v17 = *(_DWORD *)(v8 + 40) & 0x600;
    if ( v17 == 512 )
    {
      if ( v16 >= v9 )
        sub_375320((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v43, "ea < covered", 0.0);
      if ( !v7 )
        goto LABEL_15;
LABEL_11:
      v12 = v7[1];
      if ( v16 < *v7 )
      {
        if ( v16 != v12 )
          goto LABEL_15;
      }
      else
      {
        if ( v16 < v12 )
        {
          v13 = *(_DWORD *)(v8 + 40);
          if ( (v13 & 0x100) == 0 || (_BYTE)v13 )
            sub_375320(
              (__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)",
              v43,
              "has_value(si.flags) && (si.flags & MS_VAL) == 0",
              0.0);
LABEL_15:
          if ( a4 )
            goto LABEL_30;
          goto LABEL_16;
        }
        if ( v16 != v12 )
          goto LABEL_36;
      }
      v7 += 2;
      if ( v7 == (unsigned int *)(*(_QWORD *)(v5 + 1152) + 8LL * *(_QWORD *)(v5 + 1160)) )
        v7 = nullptr;
LABEL_36:
      if ( a4 )
        goto LABEL_30;
      if ( v16 == -1 )
        goto LABEL_38;
      goto LABEL_16;
    }
    if ( v17 )
      sub_375320((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v43, "is_unknown(si.flags)", 0.0);
    if ( v16 >= v9 )
    {
      v9 = *(_DWORD *)(v8 + 32);
      goto LABEL_10;
    }
    if ( !(_BYTE)v42 )
      sub_365330();
    LODWORD(v42) = *(_DWORD *)(v8 + 40);
    if ( (unsigned __int8)must_journal(a1, v4, a3) )
    {
      LODWORD(v44) = (_DWORD)v42;
      v42 = v51;
      v18 = pack_dd(src, v51, v16) - (_QWORD)src;
      v19 = v44;
      v20 = v18;
      if ( !v18 )
        goto LABEL_52;
      v21 = v49;
      v22 = v49 + v18;
      if ( __CFADD__((_QWORD)v49, v18) )
      {
        if ( (unsigned __int64)v49 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_51:
          LODWORD(v44) = v19;
          memcpy((char *)ptr + v21, src, v20);
          v19 = v44;
LABEL_52:
          LODWORD(v44) = v19;
          v23 = pack_dd(src, v42, v19) - (_QWORD)src;
          v24 = v44;
          v25 = v23;
          if ( !v23 )
            goto LABEL_58;
          v26 = v49;
          v27 = v49 + v23;
          if ( __CFADD__((_QWORD)v49, v23) )
          {
            if ( (unsigned __int64)v49 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_57:
              LODWORD(v44) = v24;
              memcpy((char *)ptr + v26, src, v25);
              v24 = v44;
LABEL_58:
              v28 = v24;
              v4 = (unsigned __int64)v42;
              BYTE1(v28) = BYTE1(v24) | 2;
              v29 = pack_dd(src, v42, v28) - (_QWORD)src;
              v30 = v29;
              if ( !v29 )
                goto LABEL_27;
              v31 = v49;
              v32 = v49 + v29;
              if ( __CFADD__((_QWORD)v49, v29) )
              {
                if ( (unsigned __int64)v49 > 0x7FFFFFFFFFFFFFFELL )
                {
                  if ( (_QWORD)v49 != 0x7FFFFFFFFFFFFFFFLL )
                    *(_QWORD *)&v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_63:
                  v4 = (unsigned __int64)src;
                  memcpy((char *)ptr + v31, src, v30);
                  goto LABEL_27;
                }
                v32 = 0x7FFFFFFFFFFFFFFFLL;
              }
              v39 = (char *)ptr;
              v40 = v49;
              if ( *((_QWORD *)&v49 + 1) < v32 )
              {
                v45 = v49;
                v44 = v30;
                v42 = (_QWORD *)v32;
                ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
                v39 = (char *)ptr;
                v31 = v45;
                v40 = v49;
                v30 = v44;
                v32 = (unsigned __int64)v42;
              }
              v45 = v31;
              v44 = v30;
              v42 = (_QWORD *)v32;
              memset(&v39[v40], 0, v32 - v40);
              v30 = v44;
              v31 = v45;
              *(_QWORD *)&v49 = v42;
              goto LABEL_63;
            }
            v27 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v35 = (char *)ptr;
          v36 = v49;
          if ( *((_QWORD *)&v49 + 1) < v27 )
          {
            v47 = v49;
            v46 = v25;
            LODWORD(v45) = v44;
            v44 = v27;
            ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
            v35 = (char *)ptr;
            v26 = v47;
            v36 = v49;
            v25 = v46;
            v24 = v45;
            v27 = v44;
          }
          v47 = v26;
          v46 = v25;
          LODWORD(v45) = v24;
          v44 = v27;
          memset(&v35[v36], 0, v27 - v36);
          v24 = v45;
          v25 = v46;
          v26 = v47;
          *(_QWORD *)&v49 = v44;
          goto LABEL_57;
        }
        v22 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v37 = (char *)ptr;
      v38 = v49;
      if ( *((_QWORD *)&v49 + 1) < v22 )
      {
        v47 = v49;
        v46 = v20;
        LODWORD(v45) = v44;
        v44 = v22;
        ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
        v37 = (char *)ptr;
        v21 = v47;
        v38 = v49;
        v20 = v46;
        v19 = v45;
        v22 = v44;
      }
      v47 = v21;
      v46 = v20;
      LODWORD(v45) = v19;
      v44 = v22;
      memset(&v37[v38], 0, v22 - v38);
      v19 = v45;
      v20 = v46;
      v21 = v47;
      *(_QWORD *)&v49 = v44;
      goto LABEL_51;
    }
LABEL_27:
    *(_DWORD *)(v8 + 40) |= 0x200u;
    v9 = v16;
    LOBYTE(v42) = 1;
    if ( v7 )
      goto LABEL_11;
    if ( a4 )
    {
      LOBYTE(v42) = a4;
LABEL_30:
      if ( *(_QWORD *)(v5 + 1040) )
      {
        v4 = v16;
        if ( rangeset_t_find_range(v5 + 1032, v16) )
          sub_375320((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v43, "!vmem_ranges.contains(ea)", 0.0);
      }
      goto LABEL_19;
    }
LABEL_16:
    if ( v16 == *(_DWORD *)(v5 + 1196) )
    {
      v14 = *(_BYTE *)(v5 + 1200);
    }
    else
    {
      *(_DWORD *)(v5 + 1196) = v16;
      v4 = v16;
      v14 = rangeset_t_find_range(v5 + 1112, v16) != 0;
      *(_BYTE *)(v5 + 1200) = v14;
    }
    if ( !v14 )
LABEL_38:
      sub_375320((__int64)"***CORRUPTED DATABASE (%s): %s (ea=%a)", v43, "is_sparse_ea(ea)", 0.0);
LABEL_19:
    a1 = v8;
    v8 = std::_Rb_tree_increment();
  }
  while ( v8 != v41 );
  v33 = ptr;
  if ( (_QWORD)v49 )
  {
    add_undo_record(6, ptr, v49);
    v33 = ptr;
    if ( ptr )
    {
LABEL_66:
      *(_QWORD *)&v49 = 0;
      qfree(v33);
    }
  }
  else if ( ptr )
  {
    goto LABEL_66;
  }
  return v51[0] - __readfsqword(0x28u);
}

