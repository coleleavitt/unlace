void __fastcall reg_finder_invalidate_cache_0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  char *v4; // rbx
  __int64 func; // rdi
  bool v10; // al
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r14
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rax
  char **v22; // r14
  char *v23; // rdi
  char *v24; // r15
  char *v25; // rbp
  _QWORD *v26; // r13
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  int v33[2]; // [rsp+0h] [rbp-48h]

  v4 = *(char **)(a1 + 216);
  if ( v4 )
    return;
  if ( a2 == -1 )
    goto LABEL_28;
  if ( a3 == -1
    || ((func = get_func(a2)) == 0 ? (v10 = get_fchunk(a3) == 0) : (v10 = (int)get_func_chunknum(func, a3) >= 0), v10) )
  {
    v11 = *(_QWORD *)(a1 + 200);
    v12 = *(_QWORD **)(v11 + 16);
    if ( v12 )
    {
      v13 = (_QWORD *)(v11 + 8);
      do
      {
        while ( 1 )
        {
          v14 = v12[2];
          v15 = v12[3];
          if ( v12[4] < a2 )
            break;
          v13 = v12;
          v12 = (_QWORD *)v12[2];
          if ( !v14 )
            goto LABEL_12;
        }
        v12 = (_QWORD *)v12[3];
      }
      while ( v15 );
LABEL_12:
      if ( (_QWORD *)(v11 + 8) != v13 && a2 >= v13[4] )
      {
        if ( a3 != -1 && (a4 - 18 <= 1 || a4 == 21) )
        {
          v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL);
          if ( v16 == sub_4F3C60 )
          {
            *(_BYTE *)(a1 + 240) = 1;
            v17 = a3;
            v18 = -1;
            goto LABEL_24;
          }
          v15 = a3;
          v31 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD))v16)(a1, a3, a4);
          v11 = *(_QWORD *)(a1 + 200);
          *(_BYTE *)(a1 + 240) = 1;
          v17 = v31;
          v18 = v32;
          if ( v13 != (_QWORD *)(v11 + 8) )
          {
LABEL_24:
            while ( v13[4] == a2 )
            {
              v19 = v13[6];
              v20 = *(_QWORD **)(a1 + 192);
              if ( *(_BYTE *)(*v20 + 48 * v19 + 24) != 2 )
              {
                v15 = v17;
                if ( (unsigned __int8)sub_5002C0(a1, v17, v18, *((_DWORD *)v13 + 10), v19) )
                {
                  *(_BYTE *)(a1 + 240) = 0;
                  goto LABEL_28;
                }
                v11 = *(_QWORD *)(a1 + 200);
              }
              *(_QWORD *)v33 = v11;
              v21 = std::_Rb_tree_increment(v13, v15, v20, v11);
              v11 = *(_QWORD *)v33;
              v13 = (_QWORD *)v21;
              if ( v21 == *(_QWORD *)v33 + 8LL )
                break;
            }
          }
          *(_BYTE *)(a1 + 240) = 0;
          return;
        }
LABEL_28:
        v22 = *(char ***)(a1 + 192);
        v23 = *v22;
        if ( *v22 )
        {
          v24 = v22[1];
          if ( v24 )
          {
            do
            {
              v25 = &v23[48 * (_QWORD)v4];
              v26 = *((_QWORD **)v25 + 4);
              if ( v26 )
              {
                if ( v26[4] )
                {
                  if ( !under_debugger )
                    interr(2871);
                  BUG();
                }
                v27 = (void *)v26[6];
                v26[9] = 0;
                if ( v27 )
                {
                  v26[7] = 0;
                  qfree(v27);
                }
                v28 = (void *)v26[3];
                if ( v28 )
                {
                  v26[4] = 0;
                  qfree(v28);
                }
                operator delete(v26, 0x58u);
              }
              v29 = *(void **)v25;
              if ( *(_QWORD *)v25 )
              {
                *((_QWORD *)v25 + 1) = 0;
                qfree(v29);
              }
              ++v4;
              v23 = *v22;
            }
            while ( v24 != v4 );
          }
          v22[1] = nullptr;
          qfree(v23);
          *v22 = nullptr;
          v22[2] = nullptr;
        }
        v22[3] = nullptr;
        v30 = *(_QWORD *)(a1 + 200);
        sub_4F4D50(*(_QWORD **)(v30 + 16));
        *(_QWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 24) = v30 + 8;
        *(_QWORD *)(v30 + 32) = v30 + 8;
        *(_QWORD *)(v30 + 40) = 0;
      }
    }
  }
}
