__int64 __fastcall sub_984CA0(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v5; // rax
  _DWORD *v6; // rbx
  _DWORD *i; // r13
  _QWORD *v8; // rdx
  __int64 v9; // rax
  unsigned int *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  unsigned int *v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // ebp
  __int64 v16; // rax
  unsigned int v17; // edi
  int v18; // ecx
  unsigned int v20; // r15d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r15d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 328);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  sub_984A90(a1, a2, a1 + 328);
  v6 = *(_DWORD **)(a1 + 328);
  if ( v6 )
  {
    for ( i = &v6[*(v6 - 1)]; i != v6; ++v6 )
    {
      v14 = *(_QWORD *)(a1 + 24);
      v15 = *v6 >> 1;
      v16 = *(_QWORD *)(v14 + 8872) + 16LL * v15;
      v17 = *(_BYTE *)(v16 + 11) & 1;
      if ( (*(_BYTE *)(v16 + 11) & 1) == 0 )
      {
        v18 = *(_DWORD *)(v16 + 8);
        if ( *(_DWORD *)(v14 + 9468) < (v18 & 0xFFFFFFu) )
        {
          if ( (*(_DWORD *)(a1 + 352) & (1 << v18)) == 0 )
            return v17;
          *(_BYTE *)(v16 + 11) |= 1u;
          v8 = *(_QWORD **)(a1 + 336);
          if ( v8 )
          {
            v9 = *((unsigned int *)v8 - 1);
            if ( (_DWORD)v9 == *((_DWORD *)v8 - 2) )
            {
              v20 = (unsigned int)(3 * v9 + 1) >> 1;
              v21 = 4 * v20 + 8;
              if ( 4 * (int)v9 + 8 >= (unsigned int)v21 || (unsigned int)v9 >= v20 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v30, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v30);
                sub_233E40((__int64)v30);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v22 = (unsigned int *)sub_186B300(v8 - 1, v21);
              v8 = v22 + 2;
              *v22 = v20;
              v23 = v22[1];
              *(_QWORD *)(a1 + 336) = v8;
              v10 = (unsigned int *)v8 + v23;
            }
            else
            {
              v10 = (unsigned int *)v8 + v9;
            }
          }
          else
          {
            v28 = (_QWORD *)sub_186B270(0x10u);
            v8 = v28 + 1;
            *v28 = 2;
            *(_QWORD *)(a1 + 336) = v28 + 1;
            v10 = (unsigned int *)(v28 + 1);
          }
          *v10 = v15;
          ++*((_DWORD *)v8 - 1);
          v11 = *(_QWORD **)(a1 + 344);
          if ( v11 )
          {
            v12 = *((unsigned int *)v11 - 1);
            if ( (_DWORD)v12 == *((_DWORD *)v11 - 2) )
            {
              v24 = (unsigned int)(3 * v12 + 1) >> 1;
              v25 = 4 * v24 + 8;
              if ( 4 * (int)v12 + 8 >= (unsigned int)v25 || (unsigned int)v12 >= v24 )
              {
                v2 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v30, "Overflow encountered when expanding vector");
                *v2 = (char *)off_1C63128;
                sub_2333C0(v2 + 1, v30);
                sub_233E40((__int64)v30);
                __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v26 = (unsigned int *)sub_186B300(v11 - 1, v25);
              v11 = v26 + 2;
              *v26 = v24;
              v27 = v26[1];
              *(_QWORD *)(a1 + 344) = v11;
              v13 = (unsigned int *)v11 + v27;
            }
            else
            {
              v13 = (unsigned int *)v11 + v12;
            }
          }
          else
          {
            v29 = (_QWORD *)sub_186B270(0x10u);
            v11 = v29 + 1;
            *v29 = 2;
            *(_QWORD *)(a1 + 344) = v29 + 1;
            v13 = (unsigned int *)(v29 + 1);
          }
          *v13 = v15;
          ++*((_DWORD *)v11 - 1);
        }
      }
    }
  }
  return 1;
}

