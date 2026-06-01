unsigned __int64 sub_EBE70()
{
  size_t v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 debugger_plugins; // r12
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  const void *v12; // r15
  __int64 v13; // rbx
  size_t v14; // rax
  size_t v15; // r8
  size_t v16; // r9
  __int64 v17; // rsi
  void *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  _BOOL8 v21; // rsi
  __int64 bpt_kernel_interface; // rax
  const char *v24; // rsi
  char v25; // bl
  _QWORD *v26; // rbx
  char *v27; // r13
  __int64 v28; // rbp
  unsigned __int8 v29; // bl
  char v30; // si
  char *v31; // r12
  char *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // al
  bool v37; // r15
  _QWORD *v38; // rdi
  __int64 v39; // rax
  char v40; // r14
  int v41; // ebp
  __int64 v42; // rax
  char v43; // r12
  char *v44; // rdi
  _QWORD *v45; // rax
  char *v46; // rdi
  __int64 v47; // r15
  const char *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rbx
  _QWORD *v52; // rdx
  void *v53; // [rsp+0h] [rbp-A0h]
  size_t v54; // [rsp+8h] [rbp-98h]
  size_t v55; // [rsp+10h] [rbp-90h]
  _QWORD *v56; // [rsp+20h] [rbp-80h]
  char *s1; // [rsp+28h] [rbp-78h] BYREF
  __int128 v58; // [rsp+30h] [rbp-70h]
  const char *v59; // [rsp+48h] [rbp-58h] BYREF
  __int128 v60; // [rsp+50h] [rbp-50h]
  unsigned __int64 v61; // [rsp+60h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v58 = 0;
  s1 = nullptr;
  if ( (unsigned __int8)sub_E5800((__int64 *)&s1, "Platform") )
  {
    v0 = v58;
    if ( (unsigned __int64)v58 > 1 )
    {
      v31 = s1;
      v32 = qword_252470;
      if ( *(&xmmword_252478 + 1) < (unsigned __int64)v58 )
      {
        qword_252470 = (char *)qvector_reserve();
        v32 = qword_252470;
      }
      xmmword_252478 = v0;
      memmove(v32, v31, v0 - 1);
      qword_252470[v0 - 1] = 0;
    }
    else
    {
      xmmword_252478 = 0;
    }
  }
  debugger_plugins = get_debugger_plugins();
  if ( (debug & 0x10000) != 0 )
  {
    v59 = nullptr;
    v60 = 0;
    if ( debugger_plugins )
    {
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 2;
      v10 = 0;
      while ( 1 )
      {
        if ( v7 < 2 )
          goto LABEL_17;
        while ( 1 )
        {
          *(_QWORD *)&v60 = v9;
          *(_BYTE *)(v6 + v10) = 32;
          v59[v10 + 1] = 0;
          v11 = v56[2 * v8 + 1];
          v12 = *(const void **)(v11 + 8);
          if ( v12 )
          {
            v13 = v60;
            v14 = strlen(*(const char **)(v11 + 8));
            v15 = v14;
            v16 = v14;
            if ( v13 )
            {
              --v13;
              v16 = v14 + v13;
            }
            v17 = (__int64)v59;
            v18 = (void *)(v16 + 1);
            if ( *((_QWORD *)&v60 + 1) < v16 + 1 )
            {
              v55 = v14;
              v54 = v16;
              v53 = (void *)(v16 + 1);
              v59 = (const char *)qvector_reserve();
              v15 = v55;
              v17 = (__int64)v59;
              v16 = v54;
              v18 = v53;
            }
            *(_QWORD *)&v60 = v18;
            *(_BYTE *)(v17 + v16) = 0;
            memmove((void *)&v59[v13], v12, v15);
          }
          ++v8;
          v10 = v60;
          if ( debugger_plugins == v8 )
          {
            v24 = ::s1;
            if ( (_QWORD)v60 )
              v24 = v59;
            sub_8F740((__int64)"Loaded debugger plugins:%s\n", v24);
            if ( v59 )
            {
              *(_QWORD *)&v60 = 0;
              qfree();
            }
LABEL_27:
            if ( debugger_plugins == 1 )
            {
              sub_E7D10(v56, 0, v1, v2, v3, v4);
              goto LABEL_34;
            }
            v25 = sub_E5800((__int64 *)&s1, "Name");
            if ( v25 )
            {
              v26 = v56;
              v27 = (char *)::s1;
              if ( (_QWORD)v58 )
                v27 = s1;
              v28 = 0;
              while ( strcmp(v27, *(const char **)(*v26 + 16LL)) )
              {
                ++v28;
                v26 += 2;
                if ( debugger_plugins == v28 )
                  goto LABEL_34;
              }
              sub_E7D10(v26, 0, v1, v2, v3, v4);
LABEL_34:
              v19 = 1;
              v20 = dbg;
              if ( !dbg )
              {
LABEL_35:
                v29 = 1;
                v30 = 0;
                goto LABEL_38;
              }
              goto LABEL_20;
            }
            if ( !(unsigned __int8)sub_E5800((__int64 *)&s1, "Host") )
            {
              v36 = reg_str_get();
              v37 = v36;
              v25 = 1;
              if ( !v36 )
              {
LABEL_46:
                if ( debugger_plugins == 2 )
                {
                  v38 = v56;
                  v39 = v56[1];
                  if ( *(_DWORD *)(v39 + 16) == *(_DWORD *)(v56[3] + 16LL) )
                  {
                    if ( v37 != (*(_BYTE *)(v39 + 32) & 1) )
                      v38 = v56 + 2;
                    sub_E7D10(v38, 0, v33, (__int64)(v56 + 2), v34, v35);
                    goto LABEL_34;
                  }
                }
                v59 = nullptr;
                v60 = 0;
                if ( (unsigned __int8)sub_BE490((__int64 *)&v59) )
                {
                  if ( (_QWORD)v60 )
                  {
                    v40 = v37;
                    v41 = 0;
                    v42 = 0;
                    v43 = !v37;
                    while ( 1 )
                    {
                      v46 = (char *)::s1;
                      v47 = 24 * v42;
                      v48 = &v59[24 * v42];
                      if ( *((_QWORD *)v48 + 1) )
                        v46 = *(char **)v48;
                      v45 = (_QWORD *)sub_BF800(v46, v40);
                      if ( v45 )
                        break;
                      if ( v25 )
                      {
                        v44 = (char *)::s1;
                        if ( *(_QWORD *)&v59[v47 + 8] )
                          v44 = *(char **)&v59[v47];
                        v45 = (_QWORD *)sub_BF800(v44, v43);
                        if ( v45 )
                          break;
                      }
                      v42 = ++v41;
                      if ( v41 >= (unsigned __int64)v60 )
                        goto LABEL_60;
                    }
                    sub_E7D10(v45, 0, v1, v2, v3, v4);
                    goto LABEL_60;
                  }
                  if ( !v59 )
                  {
LABEL_67:
                    v19 = 1;
                    v20 = dbg;
                    if ( !dbg )
                      goto LABEL_35;
                    goto LABEL_20;
                  }
                }
                else
                {
LABEL_60:
                  v49 = (__int64)v59;
                  if ( !v59 )
                    goto LABEL_67;
                  v50 = v60;
                  if ( (_QWORD)v60 )
                  {
                    v51 = 0;
                    do
                    {
                      v52 = (_QWORD *)(v49 + 24 * v51);
                      if ( *v52 )
                      {
                        v52[1] = 0;
                        qfree();
                        v49 = (__int64)v59;
                      }
                      ++v51;
                    }
                    while ( v50 != v51 );
                  }
                }
                *(_QWORD *)&v60 = 0;
                qfree();
                goto LABEL_67;
              }
              v25 = v36;
            }
            v37 = (unsigned __int64)v58 > 1;
            goto LABEL_46;
          }
          v7 = *((_QWORD *)&v60 + 1);
          v6 = (__int64)v59;
          v9 = 2;
          if ( !(_QWORD)v60 )
            break;
          v9 = v60 + 1;
          v10 = v60 - 1;
          if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
          {
LABEL_17:
            v59 = (const char *)qvector_reserve();
            v6 = (__int64)v59;
          }
        }
      }
    }
    sub_8F740((__int64)"Loaded debugger plugins:%s\n", ::s1);
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree();
    }
  }
  else if ( debugger_plugins )
  {
    goto LABEL_27;
  }
  v19 = 0;
  v20 = dbg;
  if ( !dbg )
  {
    v29 = 0;
    v30 = 2;
LABEL_38:
    sub_E7D10(nullptr, v30, v1, v2, v3, v4);
    v20 = dbg;
    v19 = v29;
  }
LABEL_20:
  v21 = v20 != 0;
  sub_10AF30(v19, v21);
  TView::disableCommand((TView *)unk_24EFE6, v21);
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 272LL))(bpt_kernel_interface, 1);
  if ( s1 )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  return v61 - __readfsqword(0x28u);
}

