__int64 __fastcall sub_B3A240(
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
  __int64 v14; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  bool v18; // al
  bool v19; // zf
  _DWORD *v20; // rcx
  char v21; // al
  bool v22; // cl
  unsigned __int8 v23; // al
  __int16 v24; // ax
  __int16 v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v31; // rax
  __int64 v32; // r12
  unsigned int v33; // eax
  __int64 v34; // rsi
  int v35; // eax
  __int64 *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r13
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  unsigned int v41; // edx
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rsi
  unsigned int v46; // [rsp+4h] [rbp-74h]
  __int64 v48[11]; // [rsp+20h] [rbp-58h] BYREF

  v14 = 112;
  if ( !a6 )
    v14 = (unsigned int)(8 * *(_DWORD *)(a4 + 24) + 112);
  v16 = sub_180C100(a2, v14);
  memset((void *)v16, 0, 0x70u);
  v17 = qword_1C7ED50;
  *(_QWORD *)v16 = a4;
  *(_DWORD *)(v16 + 64) = -1;
  *(_QWORD *)(v16 + 88) = v17;
  v18 = 0;
  v19 = *(_WORD *)(a4 + 4) == 0;
  *(_QWORD *)(v16 + 8) = v16;
  *(_QWORD *)(v16 + 16) = v16;
  *(_DWORD *)(v16 + 32) = 1;
  *(_DWORD *)(v16 + 36) = a5;
  *(_DWORD *)(v16 + 40) = -1;
  *(_BYTE *)(v16 + 44) = 8 * (a6 & 1);
  if ( v19 )
  {
    v20 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
    if ( v20 )
    {
      if ( !*v20 )
        v18 = v20[1] == 2;
    }
  }
  v21 = (16 * v18) | *(_BYTE *)(v16 + 44) & 0xEF;
  v22 = 0;
  *(_BYTE *)(v16 + 44) = v21;
  if ( (v21 & 8) == 0 && *(_DWORD *)(a4 + 24) == 2 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 24LL);
    if ( v31 )
      v22 = (*(_BYTE *)(v31 + 17) & 8) != 0;
  }
  *(_BYTE *)(v16 + 44) = (32 * v22) | *(_BYTE *)(v16 + 44) & 0xDF;
  v23 = sub_15D2CB0(a1, a4);
  *(_WORD *)(v16 + 52) = -256;
  v24 = v23 << 6;
  *(_DWORD *)(v16 + 48) = a8;
  HIBYTE(v24) |= 4u;
  v25 = *(_WORD *)(v16 + 44) & 0xF83F | (v24 | (a7 << 7) | (a9 << 8)) & 0x7C0;
  *(_WORD *)(v16 + 44) = v25;
  if ( (v25 & 8) == 0 )
  {
    v26 = *(unsigned int *)(*(_QWORD *)v16 + 24LL);
    if ( (_DWORD)v26 )
    {
      if ( a10 )
      {
        v32 = 0;
        do
        {
          v37 = *(_QWORD *)(*a3 + 8LL * **(unsigned int **)(a4 + v32 + 32));
          *(_QWORD *)(v16 + v32 + 112) = v37;
          v38 = *(_QWORD *)(v37 + 8);
          v39 = *(_QWORD **)(v38 + 56);
          *(_BYTE *)(v38 + 45) = *(_BYTE *)(v38 + 45) & 0xF9 | 4;
          if ( v39 )
          {
            v33 = *((_DWORD *)v39 - 1);
            if ( v33 == *((_DWORD *)v39 - 2) )
            {
              v41 = (3 * v33 + 1) >> 1;
              v42 = 8 * v41 + 8;
              if ( 8 * v33 + 8 >= (unsigned int)v42 || v33 >= v41 )
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
              v46 = (3 * v33 + 1) >> 1;
              v43 = (unsigned int *)sub_186B300(v39 - 1, v42);
              v44 = v43[1];
              v39 = v43 + 2;
              *(_QWORD *)(v38 + 56) = v43 + 2;
              *v43 = v46;
              LODWORD(v43) = v44;
              v36 = &v39[v44];
              v35 = (_DWORD)v43 + 1;
            }
            else
            {
              v34 = v33;
              v35 = v33 + 1;
              v36 = &v39[v34];
            }
          }
          else
          {
            v40 = (_QWORD *)sub_186B270(0x18u);
            v39 = v40 + 1;
            *v40 = 2;
            v35 = 1;
            *(_QWORD *)(v38 + 56) = v39;
            v36 = v39;
          }
          v32 += 8;
          *v36 = v16;
          *((_DWORD *)v39 - 1) = v35;
        }
        while ( v32 != 8 * v26 );
      }
      else
      {
        v27 = 8 * v26;
        v28 = 0;
        do
        {
          v29 = *(_QWORD *)(*a3 + 8LL * **(unsigned int **)(a4 + v28 + 32));
          *(_QWORD *)(v16 + v28 + 112) = v29;
          v28 += 8;
          *(_BYTE *)(*(_QWORD *)(v29 + 8) + 45LL) = *(_BYTE *)(*(_QWORD *)(v29 + 8) + 45LL) & 0xF9 | 4;
        }
        while ( v27 != v28 );
      }
    }
  }
  return v16;
}

