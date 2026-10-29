/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_demangle
// Address: 0x00000000000D2A70

//----- (00000000000D2A70) ----------------------------------------------------
char *_cxa_demangle(const char *lpmangled, char *lpout, size_t *lpoutlen, int *lpstatus)
{
  void *v6; // r13
  char *v7; // rbx
  size_t v8; // rax
  _QWORD *v9; // rdx
  char *v10; // rbx
  __int64 v11; // rcx
  const char *v12; // rdi
  const char *v13; // rsi
  char *v14; // r12
  _QWORD *v15; // rax
  char *v16; // r12
  const char *v17; // rdx
  const char *v18; // rsi
  const char *v19; // rdx
  char v20; // r8
  const char *v21; // rbx
  size_t v22; // r12
  size_t v23; // rdx
  unsigned __int64 v24; // rcx
  void *v25; // rax
  size_t v26; // rsi
  void **v27; // rdi
  void **v28; // rax
  const char *v30; // rdx
  unsigned int v31; // edi
  bool v32; // bl
  _QWORD *v33; // rbx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  const char *v36; // [rsp+0h] [rbp-1358h]
  const char *v37; // [rsp+8h] [rbp-1350h]
  void *ptr; // [rsp+10h] [rbp-1348h] BYREF
  size_t v39; // [rsp+18h] [rbp-1340h]
  unsigned __int64 v40; // [rsp+20h] [rbp-1338h]
  __int64 v41; // [rsp+28h] [rbp-1330h]
  const char *v42; // [rsp+30h] [rbp-1328h] BYREF
  const char *v43; // [rsp+38h] [rbp-1320h]
  void *v44; // [rsp+40h] [rbp-1318h]
  _BYTE *v45; // [rsp+48h] [rbp-1310h]
  void **v46; // [rsp+50h] [rbp-1308h]
  _BYTE v47[256]; // [rsp+58h] [rbp-1300h] BYREF
  void *v48[3]; // [rsp+158h] [rbp-1200h] BYREF
  _BYTE v49[256]; // [rsp+170h] [rbp-11E8h] BYREF
  void *v50[3]; // [rsp+270h] [rbp-10E8h] BYREF
  _BYTE v51[64]; // [rsp+288h] [rbp-10D0h] BYREF
  void *v52[3]; // [rsp+2C8h] [rbp-1090h] BYREF
  _BYTE v53[32]; // [rsp+2E0h] [rbp-1078h] BYREF
  __int16 v54; // [rsp+300h] [rbp-1058h] BYREF
  char v55; // [rsp+302h] [rbp-1056h]
  _OWORD v56[256]; // [rsp+310h] [rbp-1048h] BYREF
  void *v57; // [rsp+1310h] [rbp-48h]
  unsigned __int64 v58; // [rsp+1320h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  if ( !lpmangled || (v6 = lpout) != nullptr && !lpoutlen )
  {
    if ( lpstatus )
      *lpstatus = -3;
    return nullptr;
  }
  v8 = strlen(lpmangled);
  v42 = lpmangled;
  v43 = &lpmangled[v8];
  v44 = v47;
  v45 = v47;
  v46 = v48;
  v48[0] = v49;
  v48[1] = v49;
  v48[2] = v50;
  v50[0] = v51;
  v50[1] = v51;
  v50[2] = v52;
  v52[0] = v53;
  v52[1] = v53;
  v52[2] = &v54;
  v54 = 1;
  v55 = 0;
  v56[0] = 0;
  v57 = v56;
  v41 = -1;
  if ( v8 < 2 || *lpmangled != 95 )
    goto LABEL_39;
  if ( lpmangled[1] == 90 )
  {
    v42 = lpmangled + 2;
    v10 = sub_D3180((__int64)&v42);
    v11 = 4294967294LL;
    if ( !v10 )
      goto LABEL_60;
    v12 = v42;
    v13 = v43;
    if ( v43 != v42 )
    {
      if ( *v42 != 46 )
        goto LABEL_60;
      v14 = (char *)v57;
      v11 = *((_QWORD *)v57 + 1);
      if ( (unsigned __int64)(v11 + 48) < 0xFF0 )
      {
        v9 = (char *)v57 + 8;
      }
      else
      {
        v36 = v42;
        v37 = v43;
        v15 = (_QWORD *)operator new[](0x1000u);
        *v15 = v14;
        v9 = v15 + 1;
        v15[1] = 0;
        v57 = v15;
        v11 = 0;
        v14 = (char *)v15;
        v13 = v37;
        v12 = v36;
      }
      *v9 = v11 + 48;
      *(_DWORD *)&v14[v11 + 24] = 16843009;
      *(_QWORD *)&v14[v11 + 16] = off_152FB8;
      *(_QWORD *)&v14[v11 + 32] = v10;
      v10 = &v14[v11 + 16];
      *(_QWORD *)&v14[v11 + 40] = v12;
      *(_QWORD *)&v14[v11 + 48] = v13;
      v42 = v43;
      if ( &v14[v11] == (char *)-16LL )
        goto LABEL_59;
LABEL_41:
      if ( v6 )
      {
        v22 = *lpoutlen;
      }
      else
      {
        v22 = 1024;
        v6 = malloc(0x400u);
        if ( !v6 )
        {
          LODWORD(v11) = -1;
          v6 = nullptr;
          if ( !lpstatus )
            goto LABEL_62;
          goto LABEL_61;
        }
      }
      v39 = 0;
      ptr = v6;
      v40 = v22;
      (*(void (__fastcall **)(char *, void **, _QWORD *, __int64))(*(_QWORD *)v10 + 24LL))(v10, &ptr, v9, v11);
      if ( v10[9] != 1 )
        (*(void (__fastcall **)(char *, void **))(*(_QWORD *)v10 + 32LL))(v10, &ptr);
      v23 = v39;
      v24 = v39 + 1;
      if ( v39 + 1 >= v40 )
      {
        v26 = 2 * v40;
        if ( 2 * v40 < v24 )
          v26 = v39 + 1;
        v40 = v26;
        v25 = realloc(ptr, v26);
        ptr = v25;
        v23 = v39;
        v24 = v39 + 1;
      }
      else
      {
        v25 = ptr;
      }
      v39 = v24;
      *((_BYTE *)v25 + v23) = 0;
      if ( lpoutlen )
        *lpoutlen = v39;
      LODWORD(v11) = 0;
      v6 = ptr;
      if ( !lpstatus )
        goto LABEL_62;
LABEL_61:
      *lpstatus = v11;
      goto LABEL_62;
    }
    goto LABEL_40;
  }
  if ( v8 < 4 || lpmangled[1] != 95 || lpmangled[2] != 95 || lpmangled[3] != 90 )
  {
LABEL_39:
    v10 = sub_D4260((__int64)&v42);
    v11 = 4294967294LL;
    if ( v43 != v42 )
      goto LABEL_60;
LABEL_40:
    if ( v10 )
      goto LABEL_41;
LABEL_59:
    LODWORD(v11) = -2;
    goto LABEL_60;
  }
  v42 = lpmangled + 4;
  v16 = sub_D3180((__int64)&v42);
  LODWORD(v11) = -2;
  if ( v16 )
  {
    v17 = v42;
    if ( (unsigned __int64)(v43 - v42) >= 0xD
      && *v42 == 95
      && v42[1] == 98
      && v42[2] == 108
      && v42[3] == 111
      && v42[4] == 99
      && v42[5] == 107
      && v42[6] == 95
      && v42[7] == 105
      && v42[8] == 110
      && v42[9] == 118
      && v42[10] == 111
      && v42[11] == 107
      && v42[12] == 101 )
    {
      v18 = v42 + 13;
      v42 += 13;
      if ( v17 + 13 == v43 )
      {
LABEL_86:
        if ( v43 == v18 )
        {
          v33 = v57;
          v11 = *((_QWORD *)v57 + 1);
          if ( (unsigned __int64)(v11 + 48) < 0xFF0 )
          {
            v35 = (char *)v57 + 8;
          }
          else
          {
            v34 = (_QWORD *)operator new[](0x1000u);
            *v34 = v33;
            v35 = v34 + 1;
            v34[1] = 0;
            v57 = v34;
            v11 = 0;
            v33 = v34;
          }
          *v35 = v11 + 48;
          v9 = v33;
          v10 = (char *)v33 + v11 + 16;
          *(_DWORD *)((char *)v9 + v11 + 24) = 16843029;
          *(_QWORD *)((char *)v9 + v11 + 16) = off_1518C8;
          *(__m128i *)((char *)v9 + v11 + 32) = _mm_unpacklo_epi64(
                                                  (__m128i)(unsigned __int64)"invocation function for block in ",
                                                  (__m128i)(unsigned __int64)"");
          *(_QWORD *)((char *)v9 + v11 + 48) = v16;
          if ( v10 )
            goto LABEL_41;
          goto LABEL_59;
        }
        goto LABEL_60;
      }
      if ( *v18 == 95 )
      {
        v19 = v17 + 14;
        v42 = v19;
        v20 = 1;
        v18 = v19;
        if ( v43 == v19 )
        {
LABEL_38:
          v21 = nullptr;
          v19 = v43;
          goto LABEL_84;
        }
      }
      else
      {
        v20 = 0;
        v19 = v17 + 13;
        if ( v43 == v18 )
          goto LABEL_38;
      }
      if ( (unsigned int)(*v18 - 48) <= 9 )
      {
        v30 = v18 + 1;
        do
        {
          v21 = v30;
          v42 = v30;
          if ( v43 == v30 )
            break;
          v31 = *v30++ - 48;
        }
        while ( v31 < 0xA );
        v19 = v21;
LABEL_85:
        v32 = v18 == v21;
        v18 = v19;
        if ( (v32 & (unsigned __int8)v20) != 0 )
          goto LABEL_60;
        goto LABEL_86;
      }
      v21 = nullptr;
LABEL_84:
      v18 = nullptr;
      goto LABEL_85;
    }
  }
LABEL_60:
  if ( lpstatus )
    goto LABEL_61;
LABEL_62:
  v7 = nullptr;
  if ( !(_DWORD)v11 )
    v7 = (char *)v6;
  v27 = (void **)v57;
  if ( v57 )
  {
    do
    {
      v28 = (void **)*v27;
      v57 = *v27;
      if ( v56 != (_OWORD *)v27 )
      {
        operator delete[](v27);
        v28 = (void **)v57;
      }
      v27 = v28;
    }
    while ( v28 );
  }
  v56[0] = 0;
  v57 = v56;
  if ( v52[0] != v53 )
    free(v52[0]);
  if ( v50[0] != v51 )
    free(v50[0]);
  if ( v48[0] != v49 )
    free(v48[0]);
  if ( v44 != v47 )
    free(v44);
  return v7;
}
// D2C76: conditional instruction was optimized away because cl.1==5F
// D2E05: variable 'v9' is possibly undefined
// D2E05: variable 'v11' is possibly undefined
// 1518C8: using guessed type __int64 (__fastcall *off_1518C8[7])();
// 152FB8: using guessed type __int64 (__fastcall *off_152FB8[7])();
