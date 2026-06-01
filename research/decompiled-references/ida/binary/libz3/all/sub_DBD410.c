__int64 __fastcall sub_DBD410(void **a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  char **exception; // rbp
  _QWORD *v5; // rax
  _QWORD *v7; // rax
  unsigned int i; // r14d
  int v9; // edx
  _DWORD *v10; // r15
  _DWORD *v12; // rax
  __int64 v13; // rsi
  _DWORD *v14; // rax
  __int64 v15; // r8
  __int64 j; // r13
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // r12
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  void *v34; // [rsp+18h] [rbp-B0h]
  unsigned __int8 v35; // [rsp+2Bh] [rbp-9Dh]
  unsigned int v36; // [rsp+2Ch] [rbp-9Ch]
  int v37[2]; // [rsp+40h] [rbp-88h] BYREF
  void *v38; // [rsp+48h] [rbp-80h]
  void *ptr[2]; // [rsp+50h] [rbp-78h] BYREF
  int v40; // [rsp+60h] [rbp-68h]
  __int64 v41[11]; // [rsp+70h] [rbp-58h] BYREF

  v5 = a1[5];
  if ( v5 )
  {
    if ( *((_DWORD *)v5 - 1) )
    {
      *v5 = *(_QWORD *)(a2 + 24);
      v7 = a1[2];
      if ( v7 )
      {
        for ( i = 0; i < *((_DWORD *)v7 - 1); ++i )
        {
          v9 = *(_DWORD *)(a2 + 16);
          v10 = (_DWORD *)v7[i];
          if ( v10[4] == v9 && (*(_WORD *)(a2 + 4) != 2 || v9 != 2) && v10[5] == *(_DWORD *)(a2 + 20) )
          {
            v12 = (_DWORD *)sub_186B270(0x80u);
            v40 = 0;
            v13 = *(_QWORD *)(a2 + 24);
            v12[2] = 0;
            v12[6] = 0;
            v12[10] = 0;
            v12[14] = 0;
            v12[18] = 0;
            v12[22] = 0;
            v12[26] = 0;
            v12[30] = 0;
            *(_QWORD *)v12 = 0;
            *((_QWORD *)v12 + 2) = 0;
            *((_QWORD *)v12 + 4) = 0;
            *((_QWORD *)v12 + 6) = 0;
            *((_QWORD *)v12 + 8) = 0;
            *((_QWORD *)v12 + 10) = 0;
            *((_QWORD *)v12 + 12) = 0;
            *((_QWORD *)v12 + 14) = 0;
            ptr[0] = v12;
            v14 = a1[3];
            ptr[1] = &byte_8;
            v35 = sub_DBBD80(a1, v13, v14[i], (__int64)ptr, v15);
            if ( v35 )
            {
              for ( j = 0; (unsigned int)j < v10[18]; ++j )
              {
                v21 = (unsigned int)v10[5];
                v22 = *(_DWORD *)(a2 + 20);
                *(_QWORD *)v37 = 0;
                v23 = *(_QWORD *)&v10[4 * v21 + 20 + 2 * j];
                v38 = *a1;
                sub_DBC750(a1, v23, v22, (__int64)ptr, v37);
                v24 = *(_QWORD *)v37;
                v34 = v38;
                if ( *(_QWORD *)v37 )
                  ++*(_DWORD *)(*(_QWORD *)v37 + 8LL);
                v25 = *(_QWORD **)(a3 + 8);
                if ( v25 )
                {
                  v26 = *((_DWORD *)v25 - 1);
                  if ( v26 == *((_DWORD *)v25 - 2) )
                  {
                    v27 = (3 * v26 + 1) >> 1;
                    v28 = 8 * v27 + 8;
                    if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v41, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v41);
                      sub_233E40((__int64)v41);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v36 = (3 * v26 + 1) >> 1;
                    v29 = (unsigned int *)sub_186B300(v25 - 1, v28);
                    v25 = v29 + 2;
                    *v29 = v36;
                    v30 = v29[1];
                    *(_QWORD *)(a3 + 8) = v29 + 2;
                    LODWORD(v29) = v30;
                    v19 = &v25[v30];
                    v18 = (_DWORD)v29 + 1;
                  }
                  else
                  {
                    v17 = v26;
                    v18 = v26 + 1;
                    v19 = &v25[v17];
                  }
                }
                else
                {
                  v31 = (_QWORD *)sub_186B270(0x18u);
                  v25 = v31 + 1;
                  *v31 = 2;
                  v19 = v31 + 1;
                  *(_QWORD *)(a3 + 8) = v31 + 1;
                  v18 = 1;
                }
                *v19 = v24;
                *((_DWORD *)v25 - 1) = v18;
                if ( v24 )
                {
                  if ( (*(_DWORD *)(v24 + 8))-- == 1 )
                    sub_15D7BC0(v34, v24);
                }
              }
              if ( ptr[0] )
                sub_186B220(ptr[0]);
              *a4 = i;
              return v35;
            }
            if ( ptr[0] )
              sub_186B220(ptr[0]);
            v7 = a1[2];
          }
          if ( !v7 )
            return 0;
        }
      }
    }
  }
  return 0;
}

