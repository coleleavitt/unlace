__int64 __fastcall sub_20F8790(__int64 a1, int a2)
{
  size_t v2; // rbp
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  char *v7; // rsi
  size_t v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  size_t v21; // r12
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  size_t v25; // rbp
  size_t v26; // rax
  _QWORD *v27; // rax
  char *v28; // rsi
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  size_t v33; // rbp
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  size_t v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  size_t v44; // rbp
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  size_t v51; // rbp
  size_t v52; // rax
  size_t v53; // rbp
  size_t v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  switch ( a2 )
  {
    case 0:
      v21 = j__strlen("Invalid");
      if ( v21 != j__strlen("invalid") || v21 && memcmp("invalid", "Invalid", v21) )
      {
        v22 = sub_9EE7C0((_QWORD *)a1, "'");
        v23 = sub_9EE7C0(v22, "invalid");
        v24 = sub_9EE7C0(v23, "'");
        sub_9EE7C0(v24, " ");
      }
      goto LABEL_34;
    case 1:
      v8 = j__strlen("Invalid");
      if ( j__strlen("target") == v8 )
      {
        if ( !v8 )
        {
LABEL_13:
          if ( j__strlen("teams") == v8 )
          {
            if ( !v8 )
            {
              if ( j__strlen("parallel") )
                goto LABEL_19;
              goto LABEL_104;
            }
            goto LABEL_15;
          }
          goto LABEL_16;
        }
        if ( !memcmp("target", "Invalid", v8) )
        {
          if ( v8 == j__strlen("teams") )
          {
LABEL_15:
            if ( !memcmp("teams", "Invalid", v8) )
            {
              if ( v8 != j__strlen("parallel") )
                goto LABEL_19;
              goto LABEL_18;
            }
          }
LABEL_16:
          v12 = sub_9EE7C0((_QWORD *)a1, "'");
          v13 = sub_9EE7C0(v12, "teams");
          v14 = sub_9EE7C0(v13, "'");
          sub_9EE7C0(v14, " ");
          v8 = j__strlen("Invalid");
          if ( j__strlen("parallel") != v8 )
            goto LABEL_19;
          if ( v8 )
          {
LABEL_18:
            if ( !memcmp("parallel", "Invalid", v8) )
            {
              if ( v8 != j__strlen("for") )
                goto LABEL_98;
              goto LABEL_21;
            }
LABEL_19:
            v15 = sub_9EE7C0((_QWORD *)a1, "'");
            v16 = sub_9EE7C0(v15, "parallel");
            v17 = sub_9EE7C0(v16, "'");
            sub_9EE7C0(v17, " ");
            v8 = j__strlen("Invalid");
            if ( j__strlen("for") != v8 )
              goto LABEL_98;
            if ( !v8 )
            {
LABEL_22:
              if ( j__strlen("simd") != v8 || v8 && memcmp("simd", "Invalid", v8) )
              {
                v18 = sub_9EE7C0((_QWORD *)a1, "'");
                v19 = sub_9EE7C0(v18, (char *)"simd");
                v20 = sub_9EE7C0(v19, "'");
                sub_9EE7C0(v20, " ");
              }
              v53 = j__strlen("Invalid");
              v54 = j__strlen("dispatch");
              if ( v54 != v53 || v54 && memcmp("dispatch", "Invalid", v54) )
              {
                v27 = sub_9EE7C0((_QWORD *)a1, "'");
                v28 = "dispatch";
                goto LABEL_33;
              }
              goto LABEL_34;
            }
LABEL_21:
            if ( !memcmp("for", "Invalid", v8) )
              goto LABEL_22;
LABEL_98:
            v63 = sub_9EE7C0((_QWORD *)a1, "'");
            v64 = sub_9EE7C0(v63, (char *)"for");
            v65 = sub_9EE7C0(v64, "'");
            sub_9EE7C0(v65, " ");
            v8 = j__strlen("Invalid");
            goto LABEL_22;
          }
LABEL_104:
          v8 = j__strlen("for");
          if ( !v8 )
            goto LABEL_22;
          goto LABEL_98;
        }
      }
      v9 = sub_9EE7C0((_QWORD *)a1, "'");
      v10 = sub_9EE7C0(v9, "target");
      v11 = sub_9EE7C0(v10, "'");
      sub_9EE7C0(v11, " ");
      v8 = j__strlen("Invalid");
      goto LABEL_13;
    case 2:
      v2 = j__strlen("Invalid");
      if ( j__strlen("kind") != v2 || v2 && memcmp("kind", "Invalid", v2) )
      {
        v6 = sub_9EE7C0((_QWORD *)a1, "'");
        v7 = "kind";
        goto LABEL_69;
      }
      goto LABEL_70;
  }
  if ( a2 != 3 )
  {
    if ( a2 != 4 )
    {
      if ( a2 == 5 )
      {
        v51 = j__strlen("Invalid");
        v52 = j__strlen("condition");
        if ( v52 != v51 || v52 && memcmp("condition", "Invalid", v52) )
        {
          v27 = sub_9EE7C0((_QWORD *)a1, "'");
          v28 = (char *)"condition";
          goto LABEL_33;
        }
      }
      goto LABEL_34;
    }
    v44 = j__strlen("Invalid");
    if ( j__strlen("vendor") != v44 || v44 && memcmp("vendor", "Invalid", v44) )
    {
      v45 = sub_9EE7C0((_QWORD *)a1, "'");
      v46 = sub_9EE7C0(v45, "vendor");
      v47 = sub_9EE7C0(v46, "'");
      sub_9EE7C0(v47, " ");
      v44 = j__strlen("Invalid");
    }
    if ( j__strlen("extension") != v44 || v44 && memcmp("extension", "Invalid", v44) )
    {
      v48 = sub_9EE7C0((_QWORD *)a1, "'");
      v49 = sub_9EE7C0(v48, (char *)"extension");
      v50 = sub_9EE7C0(v49, "'");
      sub_9EE7C0(v50, " ");
    }
    v33 = j__strlen("Invalid");
    if ( j__strlen("unified_address") == v33 )
    {
      if ( !v33 )
      {
LABEL_37:
        if ( j__strlen("unified_shared_memory") == v33 )
        {
          if ( !v33 )
          {
            if ( !j__strlen("reverse_offload") )
              goto LABEL_107;
            goto LABEL_43;
          }
          goto LABEL_39;
        }
        goto LABEL_40;
      }
      if ( !memcmp("unified_address", "Invalid", v33) )
      {
        if ( v33 == j__strlen("unified_shared_memory") )
        {
LABEL_39:
          if ( !memcmp("unified_shared_memory", "Invalid", v33) )
          {
            if ( v33 == j__strlen("reverse_offload") )
            {
LABEL_42:
              if ( !memcmp("reverse_offload", "Invalid", v33) )
              {
                if ( j__strlen("dynamic_allocators") != v33 )
                  goto LABEL_96;
                goto LABEL_45;
              }
              goto LABEL_43;
            }
            goto LABEL_43;
          }
        }
LABEL_40:
        v37 = sub_9EE7C0((_QWORD *)a1, "'");
        v38 = sub_9EE7C0(v37, "unified_shared_memory");
        v39 = sub_9EE7C0(v38, "'");
        sub_9EE7C0(v39, " ");
        v33 = j__strlen("Invalid");
        v40 = j__strlen("reverse_offload");
        if ( v40 == v33 )
        {
          if ( v40 )
            goto LABEL_42;
LABEL_107:
          if ( j__strlen("dynamic_allocators") )
            goto LABEL_96;
          goto LABEL_108;
        }
LABEL_43:
        v41 = sub_9EE7C0((_QWORD *)a1, "'");
        v42 = sub_9EE7C0(v41, "reverse_offload");
        v43 = sub_9EE7C0(v42, "'");
        sub_9EE7C0(v43, " ");
        v33 = j__strlen("Invalid");
        if ( j__strlen("dynamic_allocators") != v33 )
          goto LABEL_96;
        if ( v33 )
        {
LABEL_45:
          if ( !memcmp("dynamic_allocators", "Invalid", v33) )
          {
LABEL_46:
            if ( j__strlen("atomic_default_mem_order") == v33
              && (!v33 || !memcmp("atomic_default_mem_order", "Invalid", v33)) )
            {
              goto LABEL_34;
            }
LABEL_49:
            v27 = sub_9EE7C0((_QWORD *)a1, "'");
            v28 = "atomic_default_mem_order";
            goto LABEL_33;
          }
LABEL_96:
          v60 = sub_9EE7C0((_QWORD *)a1, "'");
          v61 = sub_9EE7C0(v60, "dynamic_allocators");
          v62 = sub_9EE7C0(v61, "'");
          sub_9EE7C0(v62, " ");
          v33 = j__strlen("Invalid");
          goto LABEL_46;
        }
LABEL_108:
        if ( !j__strlen("atomic_default_mem_order") )
          goto LABEL_34;
        goto LABEL_49;
      }
    }
    v34 = sub_9EE7C0((_QWORD *)a1, "'");
    v35 = sub_9EE7C0(v34, "unified_address");
    v36 = sub_9EE7C0(v35, "'");
    sub_9EE7C0(v36, " ");
    v33 = j__strlen("Invalid");
    goto LABEL_37;
  }
  v2 = j__strlen("Invalid");
  if ( j__strlen("kind") != v2 )
  {
LABEL_6:
    v3 = sub_9EE7C0((_QWORD *)a1, "'");
    v4 = sub_9EE7C0(v3, "kind");
    v5 = sub_9EE7C0(v4, "'");
    sub_9EE7C0(v5, " ");
    v2 = j__strlen("Invalid");
    goto LABEL_7;
  }
  if ( v2 )
  {
    if ( !memcmp("kind", "Invalid", v2) )
    {
      if ( v2 != j__strlen("device_num") )
        goto LABEL_10;
LABEL_9:
      if ( memcmp("device_num", "Invalid", v2) )
        goto LABEL_10;
      goto LABEL_70;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( j__strlen("device_num") != v2 )
  {
LABEL_10:
    v6 = sub_9EE7C0((_QWORD *)a1, "'");
    v7 = "device_num";
LABEL_69:
    v55 = sub_9EE7C0(v6, v7);
    v56 = sub_9EE7C0(v55, "'");
    sub_9EE7C0(v56, " ");
    v2 = j__strlen("Invalid");
    goto LABEL_70;
  }
  if ( v2 )
    goto LABEL_9;
LABEL_70:
  if ( j__strlen("arch") != v2 || v2 && memcmp("arch", "Invalid", v2) )
  {
    v57 = sub_9EE7C0((_QWORD *)a1, "'");
    v58 = sub_9EE7C0(v57, "arch");
    v59 = sub_9EE7C0(v58, "'");
    sub_9EE7C0(v59, " ");
  }
  v25 = j__strlen("Invalid");
  v26 = j__strlen("isa");
  if ( v26 != v25 || v26 && memcmp("isa", "Invalid", v26) )
  {
    v27 = sub_9EE7C0((_QWORD *)a1, "'");
    v28 = "isa";
LABEL_33:
    v29 = sub_9EE7C0(v27, v28);
    v30 = sub_9EE7C0(v29, "'");
    sub_9EE7C0(v30, " ");
  }
LABEL_34:
  v31 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v31 - 1;
  *(_BYTE *)(*(_QWORD *)a1 + v31 - 1) = 0;
  return a1;
}
