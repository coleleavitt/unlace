__int64 __fastcall sub_B39AB0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned __int8 a7,
        int a8,
        __int16 a9,
        char a10)
{
  char **exception; // rbx
  __int64 v14; // rax
  bool v15; // al
  bool v16; // zf
  _DWORD *v17; // rdx
  char v18; // al
  bool v19; // dl
  __int16 v20; // ax
  __int16 v21; // ax
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // r13
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r14
  _QWORD *v36; // rdx
  _QWORD *v37; // rax
  unsigned int v38; // ecx
  size_t v39; // rsi
  unsigned int *v40; // rax
  unsigned int v41; // [rsp+Ch] [rbp-6Ch]
  __int64 v42[11]; // [rsp+20h] [rbp-58h] BYREF

  memset((void *)a2, 0, 0x70u);
  v14 = qword_1C7ED50;
  *(_DWORD *)(a2 + 64) = -1;
  *(_QWORD *)a2 = a4;
  *(_QWORD *)(a2 + 88) = v14;
  v15 = 0;
  v16 = *(_WORD *)(a4 + 4) == 0;
  *(_QWORD *)(a2 + 8) = a2;
  *(_QWORD *)(a2 + 16) = a2;
  *(_DWORD *)(a2 + 32) = 1;
  *(_DWORD *)(a2 + 36) = a5;
  *(_DWORD *)(a2 + 40) = -1;
  *(_BYTE *)(a2 + 44) = 8 * (a6 & 1);
  if ( v16 )
  {
    v17 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
    if ( v17 )
    {
      if ( !*v17 )
        v15 = v17[1] == 2;
    }
  }
  v18 = (16 * v15) | *(_BYTE *)(a2 + 44) & 0xEF;
  v19 = 0;
  *(_BYTE *)(a2 + 44) = v18;
  if ( (v18 & 8) == 0 && *(_DWORD *)(a4 + 24) == 2 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 24LL);
    if ( v27 )
      v19 = (*(_BYTE *)(v27 + 17) & 8) != 0;
  }
  *(_BYTE *)(a2 + 44) = (32 * v19) | *(_BYTE *)(a2 + 44) & 0xDF;
  v20 = (unsigned __int8)sub_15D2CB0(a1, a4) << 6;
  *(_DWORD *)(a2 + 48) = a8;
  HIBYTE(v20) |= 4u;
  *(_WORD *)(a2 + 52) = -256;
  v21 = *(_WORD *)(a2 + 44) & 0xF83F | ((a9 << 8) | (a7 << 7) | v20) & 0x7C0;
  *(_WORD *)(a2 + 44) = v21;
  if ( (v21 & 8) == 0 )
  {
    v22 = *(unsigned int *)(*(_QWORD *)a2 + 24LL);
    if ( (_DWORD)v22 )
    {
      if ( a10 )
      {
        v28 = 8 * v22;
        v29 = 0;
        do
        {
          v34 = *(_QWORD *)(*a3 + 8LL * **(unsigned int **)(a4 + v29 + 32));
          *(_QWORD *)(a2 + v29 + 112) = v34;
          v35 = *(_QWORD *)(v34 + 8);
          v36 = *(_QWORD **)(v35 + 56);
          *(_BYTE *)(v35 + 45) = *(_BYTE *)(v35 + 45) & 0xF9 | 4;
          if ( v36 )
          {
            v30 = *((_DWORD *)v36 - 1);
            if ( v30 == *((_DWORD *)v36 - 2) )
            {
              v38 = (3 * v30 + 1) >> 1;
              v39 = 8 * v38 + 8;
              if ( 8 * v30 + 8 >= (unsigned int)v39 || v30 >= v38 )
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
              v41 = (3 * v30 + 1) >> 1;
              v40 = (unsigned int *)sub_186B300(v36 - 1, v39);
              v36 = v40 + 2;
              *(_QWORD *)(v35 + 56) = v40 + 2;
              *v40 = v41;
              LODWORD(v40) = v40[1];
              v33 = &v36[(unsigned int)v40];
              v32 = (_DWORD)v40 + 1;
            }
            else
            {
              v31 = v30;
              v32 = v30 + 1;
              v33 = &v36[v31];
            }
          }
          else
          {
            v37 = (_QWORD *)sub_186B270(0x18u);
            v36 = v37 + 1;
            *v37 = 2;
            v32 = 1;
            *(_QWORD *)(v35 + 56) = v36;
            v33 = v36;
          }
          v29 += 8;
          *v33 = a2;
          *((_DWORD *)v36 - 1) = v32;
        }
        while ( v29 != v28 );
      }
      else
      {
        v23 = 8 * v22;
        v24 = 0;
        do
        {
          v25 = *(_QWORD *)(*a3 + 8LL * **(unsigned int **)(a4 + v24 + 32));
          *(_QWORD *)(a2 + v24 + 112) = v25;
          v24 += 8;
          *(_BYTE *)(*(_QWORD *)(v25 + 8) + 45LL) = *(_BYTE *)(*(_QWORD *)(v25 + 8) + 45LL) & 0xF9 | 4;
        }
        while ( v23 != v24 );
      }
    }
  }
  return a2;
}

