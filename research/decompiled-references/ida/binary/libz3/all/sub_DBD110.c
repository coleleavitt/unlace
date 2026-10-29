__int64 __fastcall sub_DBD110(void **a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char **exception; // r12
  _QWORD *v5; // rax
  _QWORD *v7; // rax
  unsigned int i; // ebp
  int v9; // edx
  _DWORD *v10; // r15
  unsigned int v11; // r14d
  _DWORD *v13; // rax
  __int64 v14; // rsi
  _DWORD *v15; // rax
  __int64 v16; // r8
  __int64 j; // r13
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // rbp
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  void *v32; // rdi
  _QWORD *v33; // rax
  void *v36; // [rsp+18h] [rbp-B0h]
  unsigned int v37; // [rsp+2Ch] [rbp-9Ch]
  int v38[2]; // [rsp+40h] [rbp-88h] BYREF
  void *v39; // [rsp+48h] [rbp-80h]
  void *ptr[2]; // [rsp+50h] [rbp-78h] BYREF
  int v41; // [rsp+60h] [rbp-68h]
  __int64 v42[11]; // [rsp+70h] [rbp-58h] BYREF

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
            v13 = (_DWORD *)sub_186B270(0x80u);
            v41 = 0;
            v14 = *(_QWORD *)(a2 + 24);
            v13[2] = 0;
            v13[6] = 0;
            v13[10] = 0;
            v13[14] = 0;
            v13[18] = 0;
            v13[22] = 0;
            v13[26] = 0;
            v13[30] = 0;
            *(_QWORD *)v13 = 0;
            *((_QWORD *)v13 + 2) = 0;
            *((_QWORD *)v13 + 4) = 0;
            *((_QWORD *)v13 + 6) = 0;
            *((_QWORD *)v13 + 8) = 0;
            *((_QWORD *)v13 + 10) = 0;
            *((_QWORD *)v13 + 12) = 0;
            *((_QWORD *)v13 + 14) = 0;
            ptr[0] = v13;
            v15 = a1[3];
            ptr[1] = &byte_8;
            v11 = sub_DBBD80(a1, v14, v15[i], (__int64)ptr, v16);
            if ( (_BYTE)v11 )
            {
              for ( j = 0; (unsigned int)j < v10[18]; ++j )
              {
                v22 = (unsigned int)v10[5];
                v23 = *(_DWORD *)(a2 + 20);
                *(_QWORD *)v38 = 0;
                v24 = *(_QWORD *)&v10[4 * v22 + 20 + 2 * j];
                v39 = *a1;
                sub_DBC750(a1, v24, v23, (__int64)ptr, v38);
                v25 = *(_QWORD *)v38;
                v36 = v39;
                if ( *(_QWORD *)v38 )
                  ++*(_DWORD *)(*(_QWORD *)v38 + 8LL);
                v26 = *(_QWORD **)(a3 + 8);
                if ( v26 )
                {
                  v27 = *((_DWORD *)v26 - 1);
                  if ( v27 == *((_DWORD *)v26 - 2) )
                  {
                    v28 = (3 * v27 + 1) >> 1;
                    v29 = 8 * v28 + 8;
                    if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v42, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v42);
                      sub_233E40((__int64)v42);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v37 = (3 * v27 + 1) >> 1;
                    v30 = (unsigned int *)sub_186B300(v26 - 1, v29);
                    v26 = v30 + 2;
                    *v30 = v37;
                    v31 = v30[1];
                    *(_QWORD *)(a3 + 8) = v30 + 2;
                    LODWORD(v30) = v31;
                    v20 = &v26[v31];
                    v19 = (_DWORD)v30 + 1;
                  }
                  else
                  {
                    v18 = v27;
                    v19 = v27 + 1;
                    v20 = &v26[v18];
                  }
                }
                else
                {
                  v33 = (_QWORD *)sub_186B270(0x18u);
                  v26 = v33 + 1;
                  *v33 = 2;
                  v20 = v33 + 1;
                  *(_QWORD *)(a3 + 8) = v33 + 1;
                  v19 = 1;
                }
                *v20 = v25;
                *((_DWORD *)v26 - 1) = v19;
                if ( v25 )
                {
                  if ( (*(_DWORD *)(v25 + 8))-- == 1 )
                    sub_15D7BC0(v36, v25);
                }
              }
              v32 = ptr[0];
              *a4 = v10[11];
              if ( v32 )
                sub_186B220(v32);
              return v11;
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

