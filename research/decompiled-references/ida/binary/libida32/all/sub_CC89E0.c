void (__fastcall *__fastcall sub_CC89E0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        unsigned int a9,
        char a10))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  unsigned __int8 v10; // r12
  unsigned __int8 v11; // bp
  unsigned __int8 v12; // bl
  __int64 v13; // r14
  unsigned __int8 v14; // si
  unsigned __int8 v15; // si
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // r15d
  __int64 v22; // rbp
  int v23; // r12d
  int v24; // edx
  __int64 v25; // r15
  void (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned __int8 v27; // al
  unsigned __int8 v28; // r12
  unsigned __int8 v29; // bp
  unsigned __int8 v30; // bl
  __int64 v31; // r11
  __int64 v32; // rdi
  char v33; // dl
  __int64 v34; // rsi
  unsigned __int8 v35; // al
  unsigned __int8 v36; // al
  unsigned __int8 v37; // al
  __int64 v38; // rcx
  void (__fastcall *v39)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp-10h] [rbp-68h]
  int v41; // [rsp+8h] [rbp-50h]
  void (__fastcall *v42)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+8h] [rbp-50h]
  int v43; // [rsp+14h] [rbp-44h]
  char v44; // [rsp+1Ch] [rbp-3Ch]

  v10 = a5;
  v11 = a4;
  v12 = a3;
  v13 = a2 + a9;
  *(_DWORD *)(v13 - 16) = a9;
  *(_QWORD *)(v13 - 8) = a8;
  v44 = a6 & (a7 ^ 1);
  *(_BYTE *)(v13 - 12) = (16 * (v44 & 1))
                       | (8 * (a10 & 1))
                       | (2 * (*(_BYTE *)(a8 + 60) & 1)) & 0xE7
                       | *(_BYTE *)(v13 - 12) & 0xE5
                       | 4;
  v14 = a3;
  if ( !a3 )
    v14 = *(_BYTE *)(a8 + 56);
  *(_BYTE *)(v13 - 12) = v14 & 1 | *(_BYTE *)(v13 - 12) & 0xFE;
  v15 = a4;
  if ( !a4 )
    v15 = *(_BYTE *)(a8 + 57);
  *(_BYTE *)(v13 - 11) &= ~1u;
  *(_BYTE *)(v13 - 12) = (32 * (a7 & 1)) | ((v15 & 1) << 6) | *(_BYTE *)(v13 - 12) & 0x9F;
  v16 = *(_QWORD *)(a8 + 32);
  v17 = *(_QWORD *)(v16 + 8);
  v18 = 32LL * *(unsigned int *)(v16 + 16);
  v19 = v17 + v18;
  if ( v17 != v17 + v18 )
  {
    v41 = a3;
    v20 = *(_QWORD *)(v16 + 8);
    v43 = a6;
    v21 = a5;
    v22 = v19;
    v23 = a4;
    do
    {
      v24 = *(_DWORD *)(v20 + 8);
      v20 += 32;
      sub_CC89E0(a1, v13, v41, v23, v21, v43, a7, *(_QWORD *)(v20 - 16), v24, 0);
    }
    while ( v20 != v22 );
    v12 = a3;
    v11 = a4;
    v10 = a5;
    v16 = *(_QWORD *)(a8 + 32);
  }
  v25 = *(_QWORD *)(v16 + 280);
  result = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v25
                                                                                               + 24LL
                                                                                               * *(unsigned int *)(v16 + 288));
  v42 = result;
  if ( (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v25 != result )
  {
    v27 = v10;
    v28 = v11;
    v29 = v12;
    v30 = v27;
    do
    {
      v32 = *(_QWORD *)(v25 + 16);
      v33 = *(_BYTE *)(v32 + 60);
      v34 = v13 + *(unsigned int *)(v25 + 8);
      *(_DWORD *)(v34 - 16) = *(_DWORD *)(v25 + 8);
      *(_QWORD *)(v34 - 8) = v32;
      *(_BYTE *)(v34 - 12) = (32 * (a7 & 1))
                           | (16 * (v44 & 1)) & 0xDF
                           | (2 * (v33 & 1)) & 0xDF
                           | *(_BYTE *)(v34 - 12) & 0xC9;
      v35 = v29;
      if ( !v29 )
        v35 = *(_BYTE *)(v32 + 56);
      *(_BYTE *)(v34 - 12) = v35 & 1 | *(_BYTE *)(v34 - 12) & 0xFE;
      v36 = v28;
      if ( !v28 )
        v36 = *(_BYTE *)(v32 + 57);
      *(_BYTE *)(v34 - 12) = *(_BYTE *)(v34 - 12) & 0xBF | ((v36 & 1) << 6);
      v37 = v30;
      if ( !v30 )
        v37 = *(_BYTE *)(v32 + 59);
      *(_BYTE *)(v34 - 11) = v37 & 1 | *(_BYTE *)(v34 - 11) & 0xFE;
      result = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v32 + 64);
      if ( result )
      {
        v31 = 1;
        if ( !a7 )
        {
          v38 = *(_QWORD *)(v32 + 32);
          if ( !v38 || v33 == 1 )
            v31 = 0;
          else
            v31 = *(unsigned __int8 *)(v38 + 648);
        }
        result(
          a1,
          v34,
          *(_BYTE *)(v34 - 12) & 1,
          (*(_BYTE *)(v34 - 12) & 0x40) != 0,
          *(_BYTE *)(v34 - 11) & 1,
          (*(_BYTE *)(v34 - 12) & 0x10) != 0,
          v31,
          v32);
        result = v39;
      }
      v25 += 24;
    }
    while ( (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v25 != v42 );
  }
  return result;
}

