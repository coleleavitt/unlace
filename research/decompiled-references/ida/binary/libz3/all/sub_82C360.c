__int64 __fastcall sub_82C360(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12,
        void *a13,
        int a14,
        int a15,
        __int64 a16)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v19; // r12
  size_t v20; // rsi
  char v21; // r13
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  _QWORD *v25; // rdx
  __int64 v26; // rbp
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rcx
  __int64 v31; // rdi
  unsigned int v32; // r13d
  unsigned int *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36[9]; // [rsp+10h] [rbp-48h] BYREF

  result = sub_18290A0(*(_QWORD *)(a1 + 40));
  if ( (_BYTE)result )
  {
    if ( *(_QWORD *)(a1 + 464) )
    {
      result = *(_QWORD *)(a1 + 56);
      if ( result )
      {
        result = *(unsigned int *)(result - 4);
        if ( (_DWORD)result )
        {
          v19 = *(_QWORD *)(a1 + 48);
          LODWORD(v20) = 24;
          v21 = *(_BYTE *)(a1 + 920);
          v22 = sub_180C100(v19 + 2144, 24);
          v25 = *(_QWORD **)(v19 + 2128);
          v26 = v22;
          *(_QWORD *)v22 = off_1C54EE8;
          *(_QWORD *)(v22 + 8) = a1 + 920;
          *(_BYTE *)(v22 + 16) = v21;
          if ( v25 )
          {
            v27 = *((_DWORD *)v25 - 1);
            if ( v27 == *((_DWORD *)v25 - 2) )
            {
              v32 = (3 * v27 + 1) >> 1;
              v20 = 8 * v32 + 8;
              if ( 8 * v27 + 8 >= (unsigned int)v20 || v27 >= v32 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v36, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v36);
                sub_233E40((__int64)v36);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v33 = (unsigned int *)sub_186B300(v25 - 1, v20);
              v34 = v33[1];
              v25 = v33 + 2;
              *(_QWORD *)(v19 + 2128) = v33 + 2;
              *v33 = v32;
              LODWORD(v33) = v34;
              v30 = &v25[v34];
              v29 = (_DWORD)v33 + 1;
            }
            else
            {
              v28 = v27;
              v29 = v27 + 1;
              v30 = &v25[v28];
            }
          }
          else
          {
            v35 = (_QWORD *)sub_186B270(0x18u);
            v25 = v35 + 1;
            *v35 = 2;
            v29 = 1;
            *(_QWORD *)(v19 + 2128) = v25;
            v30 = v25;
          }
          *v30 = v26;
          v31 = *(_QWORD *)(a1 + 464);
          *((_DWORD *)v25 - 1) = v29;
          *(_BYTE *)(a1 + 920) = 1;
          return sub_FFD310(v31, v20, (int)v25, (int)v30, v23, v24, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
        }
      }
    }
  }
  return result;
}

