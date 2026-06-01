void __fastcall sub_5FEC70(__int64 *a1, __int64 a2, unsigned __int8 a3, int a4, __int64 a5, _QWORD *a6)
{
  char **exception; // r12
  char **v7; // r12
  __int64 v8; // r15
  __int64 i; // r12
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  _BYTE *v15; // rdx
  __int64 v16; // rax
  bool v17; // cl
  unsigned int v18; // eax
  __int64 v19; // rsi
  int v20; // eax
  bool *v21; // rsi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbx
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r9d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rsi
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v39; // [rsp+10h] [rbp-98h]
  unsigned int v42; // [rsp+28h] [rbp-80h]
  bool v43; // [rsp+28h] [rbp-80h]
  bool v44; // [rsp+28h] [rbp-80h]
  unsigned int v45; // [rsp+2Ch] [rbp-7Ch]
  __int64 v46; // [rsp+40h] [rbp-68h] BYREF
  __int64 v47; // [rsp+48h] [rbp-60h]
  __int64 v48[11]; // [rsp+50h] [rbp-58h] BYREF

  v8 = *(unsigned int *)(a2 + 56);
  if ( (_DWORD)v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      while ( 1 )
      {
        if ( a4 != (_DWORD)i )
        {
          v23 = *(_QWORD *)(a2 + 8 * i + 80);
          v24 = *a1;
          v46 = 0;
          v47 = v24;
          sub_5FAE80(a1, v23 & 0xFFFFFFFFFFFFFFF8LL, a3, &v46);
          v25 = v46;
          v39 = v47;
          if ( v46 )
            ++*(_DWORD *)(v46 + 8);
          v26 = *(_QWORD **)(a5 + 8);
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
                sub_24ABB0(v48, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v48);
                sub_233E40((__int64)v48);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v42 = (3 * v27 + 1) >> 1;
              v30 = (unsigned int *)sub_186B300(v26 - 1, v29);
              v26 = v30 + 2;
              *v30 = v42;
              v31 = v30[1];
              *(_QWORD *)(a5 + 8) = v30 + 2;
              LODWORD(v30) = v31;
              v14 = &v26[v31];
              v13 = (_DWORD)v30 + 1;
            }
            else
            {
              v12 = v27;
              v13 = v27 + 1;
              v14 = &v26[v12];
            }
          }
          else
          {
            v36 = (_QWORD *)sub_186B270(0x18u);
            v26 = v36 + 1;
            *v36 = 2;
            v14 = v36 + 1;
            *(_QWORD *)(a5 + 8) = v36 + 1;
            v13 = 1;
          }
          *v14 = v25;
          *((_DWORD *)v26 - 1) = v13;
          v15 = (_BYTE *)*a6;
          v16 = *(_QWORD *)(a2 + 8 * i + 80) & 7LL;
          v17 = v16 == 1;
          if ( *a6 )
          {
            v18 = *((_DWORD *)v15 - 1);
            if ( v18 == *((_DWORD *)v15 - 2) )
            {
              v32 = (3 * v18 + 1) >> 1;
              v33 = v32 + 8;
              if ( v18 + 8 >= (unsigned int)v33 || v18 >= v32 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v48, "Overflow encountered when expanding vector");
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, v48);
                sub_233E40((__int64)v48);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v45 = (3 * v18 + 1) >> 1;
              v43 = v17;
              v34 = (unsigned int *)sub_186B300(v15 - 8, v33);
              v35 = v34[1];
              v15 = v34 + 2;
              *a6 = v34 + 2;
              v17 = v43;
              *v34 = v45;
              LODWORD(v34) = v35;
              v21 = &v15[v35];
              v20 = (_DWORD)v34 + 1;
            }
            else
            {
              v19 = v18;
              v20 = v18 + 1;
              v21 = &v15[v19];
            }
          }
          else
          {
            v44 = v16 == 1;
            v37 = (_QWORD *)sub_186B270(0xAu);
            v15 = v37 + 1;
            *v37 = 2;
            v17 = v44;
            v20 = 1;
            *a6 = v15;
            v21 = v15;
          }
          *v21 = v17;
          *((_DWORD *)v15 - 1) = v20;
          if ( v25 )
          {
            if ( (*(_DWORD *)(v25 + 8))-- == 1 )
              break;
          }
        }
        if ( ++i == v8 )
          return;
      }
      sub_15D7BC0(v39, v25);
    }
  }
}

