void __fastcall sub_AEFD70(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rax
  int **v9; // r8
  _QWORD *v10; // r15
  int v11; // r14d
  char v12; // bp
  __int64 v13; // rax
  unsigned int v14; // r13d
  size_t v15; // rdi
  __int64 v16; // rax
  _DWORD *v17; // rcx
  _QWORD *v18; // rdi
  __int64 v19; // r11
  unsigned __int64 v20; // rax
  __int64 v21; // r11
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  int **v24; // [rsp+0h] [rbp-78h]
  int **v26; // [rsp+10h] [rbp-68h]
  _DWORD *v27; // [rsp+10h] [rbp-68h]
  int **v28; // [rsp+10h] [rbp-68h]
  int **v29; // [rsp+18h] [rbp-60h]
  __int64 v30[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(_QWORD **)(a1 + 96);
  v5 = 2LL * *(unsigned int *)(a1 + 104);
  v6 = &v4[v5];
  if ( v4 != &v4[v5] )
  {
    while ( *v4 <= 1u )
    {
      v4 += 2;
      if ( v6 == v4 )
        return;
    }
    while ( v6 != v4 )
    {
      v7 = v4[1];
      if ( *(_DWORD *)(v7 + 24) == 7 )
      {
        v9 = *(int ***)(v7 + 40);
        if ( v9 )
        {
          v24 = &v9[*((unsigned int *)v9 - 1)];
          if ( v24 != v9 )
          {
            v10 = (_QWORD *)*a2;
            v11 = **v9;
            v12 = *((_BYTE *)*v9 + 16);
            if ( !*a2 )
            {
              v28 = *(int ***)(v7 + 40);
              v22 = (_QWORD *)sub_186B270(0x18u);
              v9 = v28;
              v10 = v22 + 1;
              *v22 = 2;
              *a2 = v22 + 1;
              v23 = v22 + 1;
              goto LABEL_16;
            }
            while ( 1 )
            {
              v13 = *((unsigned int *)v10 - 1);
              if ( (_DWORD)v13 == *((_DWORD *)v10 - 2) )
              {
                v14 = (unsigned int)(3 * v13 + 1) >> 1;
                v15 = 8 * v14 + 8;
                if ( 8 * (int)v13 + 8 >= (unsigned int)v15 || (unsigned int)v13 >= v14 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_140FB4(v30, "Overflow encountered when expanding vector", v3);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v30);
                  sub_233E40((__int64)v30);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v26 = v9;
                v16 = sub_186B270(v15);
                v9 = v26;
                v17 = (_DWORD *)v16;
                v10 = (_QWORD *)(v16 + 8);
                v18 = (_QWORD *)*a2;
                if ( *a2 )
                {
                  v19 = *((unsigned int *)v18 - 1);
                  v20 = 0;
                  v17[1] = v19;
                  v21 = 8 * v19;
                  if ( v21 )
                  {
                    do
                    {
                      *(_QWORD *)&v17[v20 / 4 + 2] = v18[v20 / 8];
                      v20 += 8LL;
                    }
                    while ( v21 != v20 );
                  }
                  v29 = v26;
                  v27 = v17;
                  sub_186B220(v18 - 1);
                  v17 = v27;
                  v9 = v29;
                  v23 = &v10[v27[1]];
                }
                else
                {
                  *(_DWORD *)(v16 + 4) = 0;
                  v23 = (_QWORD *)(v16 + 8);
                }
                *v17 = v14;
                *a2 = v10;
              }
              else
              {
                v23 = &v10[v13];
              }
LABEL_16:
              *(_DWORD *)v23 = v11;
              ++v9;
              *((_BYTE *)v23 + 4) = v12;
              ++*((_DWORD *)v10 - 1);
              if ( v24 == v9 )
                break;
              v11 = **v9;
              v12 = *((_BYTE *)*v9 + 16);
            }
          }
        }
      }
      v8 = v4 + 2;
      if ( v6 == v4 + 2 )
        break;
      while ( 1 )
      {
        v4 = v8;
        if ( *v8 > 1u )
          break;
        v8 += 2;
        if ( v6 == v8 )
          return;
      }
    }
  }
}

