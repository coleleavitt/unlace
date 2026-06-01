__int64 __fastcall dwarf_load_elf_symtab_symbols(__int64 a1, int *a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  char v10; // dl
  unsigned __int64 v11; // r12
  void *v12; // r13
  unsigned int random; // eax
  char *v14; // rbp
  char *v15; // r8
  _QWORD *v16; // r15
  char *v17; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  unsigned int v20; // eax
  char *v21; // rbp
  _QWORD *v22; // r14
  char *v23; // rsi
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  char *bufa; // [rsp+0h] [rbp-48h]
  char *buf; // [rsp+0h] [rbp-48h]
  unsigned int bufb; // [rsp+0h] [rbp-48h]
  char *ptr; // [rsp+8h] [rbp-40h]
  unsigned int ptra; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 480);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v4 = 184 * v2;
  v5 = 435;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + v4 + 56);
  if ( v7 < v8 )
    goto LABEL_3;
  v10 = *(_BYTE *)(a1 + 56);
  if ( v10 != 32 )
  {
    v5 = 415;
    if ( v10 != 64 )
      goto LABEL_3;
    v11 = v8 / 0x18;
    if ( v8 == 24 * (v8 / 0x18) )
    {
      v5 = 490;
      if ( v8 != v7 )
      {
        ptr = (char *)calloc(v8 / 0x18, 0x18u);
        if ( ptr )
        {
          v12 = calloc(v8 / 0x18, 0x40u);
          if ( v12 )
          {
            random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), ptr);
            if ( random )
            {
              bufb = random;
              free(ptr);
              free(v12);
              *a2 = 62;
              return bufb;
            }
            v14 = ptr;
            v15 = nullptr;
            v16 = v12;
            if ( v8 > 0x17 )
            {
              do
              {
                bufa = v15;
                *v16 = 0;
                (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v16, v14, 4);
                v16[1] = 0;
                (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v16 + 1, v14 + 8, 8);
                v16[2] = 0;
                (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v16 + 2, v14 + 16, 8);
                v16[3] = 0;
                (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v16 + 3, v14 + 4, 1);
                v16[4] = 0;
                (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v16 + 4, v14 + 5, 1);
                v17 = v14 + 6;
                v18 = v16 + 5;
                v16[5] = 0;
                v14 += 24;
                v16 += 8;
                (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v18, v17, 2);
                v15 = bufa + 1;
                v19 = *(v16 - 5) >> 4;
                *(v16 - 1) = *(v16 - 5) & 0xFLL;
                *(v16 - 2) = v19;
              }
              while ( (unsigned __int64)(bufa + 1) < v11 );
            }
            free(ptr);
LABEL_25:
            *(_QWORD *)(a1 + 448) = v12;
            *(_QWORD *)(a1 + 424) = v11;
            return 0;
          }
          free(ptr);
        }
LABEL_30:
        v5 = 62;
        goto LABEL_3;
      }
      goto LABEL_3;
    }
LABEL_16:
    v5 = 490;
    goto LABEL_3;
  }
  if ( (v8 & 0xF) != 0 )
    goto LABEL_16;
  v5 = 490;
  if ( v8 != v7 )
  {
    v11 = v8 >> 4;
    buf = (char *)calloc(v8 >> 4, 0x10u);
    if ( buf )
    {
      v12 = calloc(v8 >> 4, 0x40u);
      if ( v12 )
      {
        v20 = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), buf);
        if ( v20 )
        {
          ptra = v20;
          free(buf);
          free(v12);
          return ptra;
        }
        if ( v11 )
        {
          v21 = buf;
          v22 = v12;
          do
          {
            *v22 = 0;
            (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v22, v21, 4);
            v22[1] = 0;
            (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v22 + 1, v21 + 4, 4);
            v22[2] = 0;
            (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v22 + 2, v21 + 8, 4);
            v22[3] = 0;
            (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v22 + 3, v21 + 12, 1);
            v22[4] = 0;
            (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v22 + 4, v21 + 13, 1);
            v23 = v21 + 14;
            v24 = v22 + 5;
            v22[5] = 0;
            v21 += 16;
            v22 += 8;
            (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 96))(v24, v23, 2);
            v25 = *(v22 - 5) >> 4;
            *(v22 - 1) = *(v22 - 5) & 0xFLL;
            *(v22 - 2) = v25;
          }
          while ( v21 != &buf[16 * v11] );
        }
        free(buf);
        goto LABEL_25;
      }
      free(buf);
    }
    goto LABEL_30;
  }
LABEL_3:
  *a2 = v5;
  return 1;
}

