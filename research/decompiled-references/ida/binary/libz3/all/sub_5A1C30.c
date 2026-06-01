void __fastcall sub_5A1C30(__int64 a1, _QWORD **a2, _QWORD *a3, _QWORD *a4)
{
  char **v4; // rbp
  char **exception; // rbp
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  char i; // al
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  unsigned int *v19; // rdi
  _QWORD *v20; // rdx
  _QWORD *v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rsi
  int v24; // eax
  unsigned int *v25; // rdi
  unsigned int v26; // r8d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // r9d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rsi
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  unsigned int v36; // [rsp+10h] [rbp-78h]
  _QWORD *v37; // [rsp+10h] [rbp-78h]
  _QWORD *v38; // [rsp+10h] [rbp-78h]
  unsigned int v39; // [rsp+1Ch] [rbp-6Ch]
  __int64 v40; // [rsp+28h] [rbp-60h] BYREF
  __int64 v41[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *a2;
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v12 = 8 * v8;
      v13 = 0;
      for ( i = sub_4C4270(v9, v7, (__int64)&v40); ; i = sub_4C4270(v9, &(*a2)[v13 / 8], (__int64)&v40) )
      {
        if ( i )
        {
          v15 = (_QWORD *)*a3;
          if ( *a3 )
          {
            v16 = *((_DWORD *)v15 - 1);
            if ( v16 == *((_DWORD *)v15 - 2) )
            {
              v26 = (3 * v16 + 1) >> 1;
              v27 = 8 * v26 + 8;
              if ( 8 * v16 + 8 >= (unsigned int)v27 || v16 >= v26 )
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
              v36 = (3 * v16 + 1) >> 1;
              v28 = (unsigned int *)sub_186B300(v15 - 1, v27);
              v29 = v28[1];
              v15 = v28 + 2;
              *v28 = v36;
              *a3 = v28 + 2;
              v19 = &v28[2 * v29 + 2];
              v18 = v29 + 1;
            }
            else
            {
              v17 = v16;
              v18 = v16 + 1;
              v19 = (unsigned int *)&v15[v17];
            }
          }
          else
          {
            v34 = (_QWORD *)sub_186B270(0x18u);
            v15 = v34 + 1;
            *v34 = 2;
            v18 = 1;
            *a3 = v15;
            v19 = (unsigned int *)v15;
          }
          v13 += 8LL;
          *(_QWORD *)v19 = v40;
          *((_DWORD *)v15 - 1) = v18;
          if ( v13 == v12 )
            return;
        }
        else
        {
          v20 = (_QWORD *)*a4;
          v21 = &(*a2)[v13 / 8];
          if ( *a4 )
          {
            v22 = *((_DWORD *)v20 - 1);
            if ( v22 == *((_DWORD *)v20 - 2) )
            {
              v30 = (3 * v22 + 1) >> 1;
              v31 = 8 * v30 + 8;
              if ( 8 * v22 + 8 >= (unsigned int)v31 || v22 >= v30 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v41, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v41);
                sub_233E40((__int64)v41);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v39 = (3 * v22 + 1) >> 1;
              v37 = &(*a2)[v13 / 8];
              v32 = (unsigned int *)sub_186B300(v20 - 1, v31);
              v21 = v37;
              v33 = v32[1];
              v20 = v32 + 2;
              *v32 = v39;
              *a4 = v32 + 2;
              v25 = &v32[2 * v33 + 2];
              v24 = v33 + 1;
            }
            else
            {
              v23 = v22;
              v24 = v22 + 1;
              v25 = (unsigned int *)&v20[v23];
            }
          }
          else
          {
            v38 = &(*a2)[v13 / 8];
            v35 = (_QWORD *)sub_186B270(0x18u);
            v21 = v38;
            v20 = v35 + 1;
            *v35 = 2;
            v24 = 1;
            *a4 = v20;
            v25 = (unsigned int *)v20;
          }
          v13 += 8LL;
          *(_QWORD *)v25 = *v21;
          *((_DWORD *)v20 - 1) = v24;
          if ( v13 == v12 )
            return;
        }
      }
    }
  }
}

