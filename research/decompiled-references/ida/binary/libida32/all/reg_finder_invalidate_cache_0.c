void __fastcall reg_finder_invalidate_cache_0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char *v4; // rbx
  __int64 v7; // rsi
  __int64 v9; // rsi
  __int64 func; // rdi
  int func_chunknum; // eax
  bool v12; // al
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 (__fastcall *v18)(__int64, int); // rax
  unsigned __int64 v19; // r14
  const char *v20; // rcx
  char **v21; // r13
  char *v22; // rdi
  char *v23; // r14
  char *v24; // rbp
  _QWORD *v25; // r15
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax

  v4 = *(char **)(a1 + 184);
  if ( v4 )
    return;
  if ( a2 == -1 )
    goto LABEL_27;
  v7 = a3;
  if ( a3 == -1
    || ((v9 = a3, (func = get_func(a2)) == 0)
      ? (v7 = a3, v12 = get_fchunk(a3) == 0)
      : (func_chunknum = get_func_chunknum(func, v9), v7 = a3, v12 = func_chunknum >= 0),
        v12) )
  {
    v13 = *(_QWORD *)(a1 + 168);
    v14 = *(_QWORD *)(v13 + 16);
    if ( v14 )
    {
      v15 = v13 + 8;
      do
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v14 + 16);
          v17 = *(_QWORD *)(v14 + 24);
          if ( *(_DWORD *)(v14 + 32) < a2 )
            break;
          v15 = v14;
          v14 = *(_QWORD *)(v14 + 16);
          if ( !v16 )
            goto LABEL_12;
        }
        v14 = *(_QWORD *)(v14 + 24);
      }
      while ( v17 );
LABEL_12:
      if ( v13 + 8 != v15 && a2 >= *(_DWORD *)(v15 + 32) )
      {
        if ( (_DWORD)v7 != -1 && (a4 - 18 <= 1 || a4 == 21) )
        {
          v18 = *(unsigned __int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 16LL);
          if ( v18 == sub_4DC6B0 )
          {
            *(_BYTE *)(a1 + 208) = 1;
            v19 = v7 | 0xFFFFFFFF00000000LL;
            goto LABEL_23;
          }
          v30 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))v18)(a1, v7, a4, v17);
          v13 = *(_QWORD *)(a1 + 168);
          *(_BYTE *)(a1 + 208) = 1;
          v19 = v30;
          if ( v15 != v13 + 8 )
          {
LABEL_23:
            while ( *(_DWORD *)(v15 + 32) == a2 )
            {
              v20 = *(const char **)(v15 + 40);
              if ( *(_BYTE *)(**(_QWORD **)(a1 + 160) + 48LL * (_QWORD)v20 + 24) != 2 )
              {
                if ( (unsigned __int8)sub_4E8F00(a1, v19, *(_DWORD *)(v15 + 36), v20) )
                {
                  *(_BYTE *)(a1 + 208) = 0;
                  goto LABEL_27;
                }
                v13 = *(_QWORD *)(a1 + 168);
              }
              v15 = std::_Rb_tree_increment();
              if ( v15 == v13 + 8 )
                break;
            }
          }
          *(_BYTE *)(a1 + 208) = 0;
          return;
        }
LABEL_27:
        v21 = *(char ***)(a1 + 160);
        v22 = *v21;
        if ( *v21 )
        {
          v23 = v21[1];
          if ( v23 )
          {
            do
            {
              v24 = &v22[48 * (_QWORD)v4];
              v25 = *((_QWORD **)v24 + 4);
              if ( v25 )
              {
                if ( v25[4] )
                {
                  if ( !under_debugger )
                    interr(2871);
                  BUG();
                }
                v26 = (void *)v25[6];
                v25[9] = 0;
                if ( v26 )
                {
                  v25[7] = 0;
                  qfree(v26);
                }
                v27 = (void *)v25[3];
                if ( v27 )
                {
                  v25[4] = 0;
                  qfree(v27);
                }
                operator delete(v25, 0x58u);
              }
              v28 = *(void **)v24;
              if ( *(_QWORD *)v24 )
              {
                *((_QWORD *)v24 + 1) = 0;
                qfree(v28);
              }
              ++v4;
              v22 = *v21;
            }
            while ( v23 != v4 );
          }
          v21[1] = nullptr;
          qfree(v22);
          *v21 = nullptr;
          v21[2] = nullptr;
        }
        v21[3] = nullptr;
        v29 = *(_QWORD *)(a1 + 168);
        sub_4DDD50(*(_QWORD **)(v29 + 16));
        *(_QWORD *)(v29 + 16) = 0;
        *(_QWORD *)(v29 + 24) = v29 + 8;
        *(_QWORD *)(v29 + 32) = v29 + 8;
        *(_QWORD *)(v29 + 40) = 0;
      }
    }
  }
}

