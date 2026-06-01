/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C0E20
// Address: 0x080C0E20

//----- (080C0E20) --------------------------------------------------------
char *__cdecl sub_80C0E20(int a1, __int16 a2, int a3)
{
  _QWORD *v3; // eax
  void *v4; // eax
  int v5; // esi
  char *result; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // edx
  void *v11; // eax
  void *v12; // eax
  unsigned int v13; // edx
  int v14; // ecx
  void *v15; // eax
  unsigned int v16; // edx
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // edx
  void *v20; // eax
  int v21; // ecx
  unsigned int v22; // edx
  void *v23; // eax
  __m128i si128; // xmm0
  char *v25; // eax
  void *v26; // eax
  unsigned int v27; // edx
  int v28; // ecx
  __m128i v29; // xmm0
  char *v30; // eax
  int v31; // [esp+3D4h] [ebp-54h]
  int v32; // [esp+3D8h] [ebp-50h]
  int v33; // [esp+3DCh] [ebp-4Ch]
  int v34; // [esp+3E0h] [ebp-48h]
  int v35; // [esp+3E4h] [ebp-44h]
  int v36; // [esp+3E8h] [ebp-40h]
  unsigned int v37; // [esp+3ECh] [ebp-3Ch]
  int v38; // [esp+3F0h] [ebp-38h]
  const char *v39; // [esp+3FCh] [ebp-2Ch]
  int v40; // [esp+3FCh] [ebp-2Ch]
  int v41; // [esp+3FCh] [ebp-2Ch]
  int v42; // [esp+3FCh] [ebp-2Ch]
  int v43; // [esp+3FCh] [ebp-2Ch]
  int v44; // [esp+3FCh] [ebp-2Ch]
  int v45; // [esp+3FCh] [ebp-2Ch]
  void *ptr; // [esp+400h] [ebp-28h] BYREF
  int v47; // [esp+404h] [ebp-24h]
  unsigned int v48; // [esp+408h] [ebp-20h]
  pthread_mutex_t *mutex; // [esp+40Ch] [ebp-1Ch]
  int v50; // [esp+410h] [ebp-18h]
  int v51; // [esp+414h] [ebp-14h]

  mutex = (pthread_mutex_t *)__readgsdword(0x14u);
  ptr = nullptr;
  v47 = 0;
  v48 = 0;
  if ( (a2 & 0x1000) != 0 )
  {
    v39 = "SSL_connect: ";
  }
  else if ( (a2 & 0x2000) != 0 )
  {
    v39 = "SSL_accept : ";
  }
  else
  {
    v39 = "SSL_???    : ";
  }
  v3 = sub_80CF920((int)&ptr, nullptr, 0xEu, 1u);
  ptr = v3;
  v47 = 14;
  *v3 = *(_QWORD *)v39;
  *(_QWORD *)((char *)v3 + 5) = *(_QWORD *)(v39 + 5);
  v4 = ptr;
  *((_BYTE *)ptr + 13) = 0;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_7;
    goto LABEL_22;
  }
  v42 = v47;
  if ( v47 )
  {
    v8 = v47 + 11;
    v7 = v47 + 12;
    v42 = v47 - 1;
    if ( v48 >= v47 + 12 )
      goto LABEL_21;
  }
  else
  {
    v7 = 13;
    v8 = 12;
    if ( v48 >= 0xD )
      goto LABEL_21;
  }
  v37 = v8;
  v38 = v7;
  v4 = sub_80CF920((int)&ptr, v4, v7, 1u);
  v8 = v37;
  v7 = v38;
  ptr = v4;
LABEL_21:
  v47 = v7;
  *((_BYTE *)v4 + v8) = 0;
  qmemcpy((char *)ptr + v42, " SSL_CB_LOOP", 12);
  if ( (a2 & 2) == 0 )
  {
LABEL_7:
    if ( (a2 & 4) == 0 )
      goto LABEL_8;
    goto LABEL_25;
  }
LABEL_22:
  v43 = v47;
  if ( v47 )
  {
    v9 = v47 + 11;
    v10 = v47 + 12;
    v43 = v47 - 1;
    v11 = ptr;
    if ( v48 >= v47 + 12 )
      goto LABEL_24;
  }
  else
  {
    v11 = ptr;
    v10 = 13;
    v9 = 12;
    if ( v48 >= 0xD )
      goto LABEL_24;
  }
  v37 = v9;
  v38 = v10;
  v11 = sub_80CF920((int)&ptr, v11, v10, 1u);
  v9 = v37;
  v10 = v38;
  ptr = v11;
LABEL_24:
  v47 = v10;
  *((_BYTE *)v11 + v9) = 0;
  qmemcpy((char *)ptr + v43, " SSL_CB_EXIT", 12);
  if ( (a2 & 4) == 0 )
  {
LABEL_8:
    if ( (a2 & 8) == 0 )
      goto LABEL_9;
    goto LABEL_28;
  }
LABEL_25:
  v44 = v47;
  if ( v47 )
  {
    v14 = v47 + 11;
    v13 = v47 + 12;
    v44 = v47 - 1;
    v12 = ptr;
    if ( v48 >= v47 + 12 )
      goto LABEL_27;
  }
  else
  {
    v12 = ptr;
    v13 = 13;
    v14 = 12;
    if ( v48 >= 0xD )
      goto LABEL_27;
  }
  v37 = v14;
  v38 = v13;
  v12 = sub_80CF920((int)&ptr, v12, v13, 1u);
  v14 = v37;
  v13 = v38;
  ptr = v12;
LABEL_27:
  v47 = v13;
  *((_BYTE *)v12 + v14) = 0;
  qmemcpy((char *)ptr + v44, " SSL_CB_READ", 12);
  if ( (a2 & 8) == 0 )
  {
LABEL_9:
    v40 = a2 & 0x4000;
    if ( (a2 & 0x4000) == 0 )
      goto LABEL_10;
    goto LABEL_31;
  }
LABEL_28:
  v45 = v47;
  if ( v47 )
  {
    v17 = v47 + 12;
    v16 = v47 + 13;
    v45 = v47 - 1;
    v15 = ptr;
    if ( v48 >= v47 + 13 )
      goto LABEL_30;
  }
  else
  {
    v15 = ptr;
    v16 = 14;
    v17 = 13;
    if ( v48 >= 0xE )
      goto LABEL_30;
  }
  v37 = v17;
  v38 = v16;
  v15 = sub_80CF920((int)&ptr, v15, v16, 1u);
  v17 = v37;
  v16 = v38;
  ptr = v15;
LABEL_30:
  v47 = v16;
  *((_BYTE *)v15 + v17) = 0;
  qmemcpy((char *)ptr + v45, " SSL_CB_WRITE", 13);
  v40 = a2 & 0x4000;
  if ( (a2 & 0x4000) == 0 )
  {
LABEL_10:
    if ( (a2 & 0x10) == 0 )
      goto LABEL_11;
    goto LABEL_34;
  }
LABEL_31:
  v38 = v47;
  if ( v47 )
  {
    v18 = v47 + 12;
    v19 = v47 + 13;
    v38 = v47 - 1;
    v20 = ptr;
    if ( v48 >= v47 + 13 )
      goto LABEL_33;
  }
  else
  {
    v20 = ptr;
    v19 = 14;
    v18 = 13;
    if ( v48 >= 0xE )
      goto LABEL_33;
  }
  v36 = v18;
  v37 = v19;
  v20 = sub_80CF920((int)&ptr, v20, v19, 1u);
  v18 = v36;
  v19 = v37;
  ptr = v20;
LABEL_33:
  v47 = v19;
  *((_BYTE *)v20 + v18) = 0;
  qmemcpy((char *)ptr + v38, " SSL_CB_ALERT", 13);
  if ( (a2 & 0x10) == 0 )
  {
LABEL_11:
    if ( (a2 & 0x20) == 0 )
      goto LABEL_12;
    goto LABEL_37;
  }
LABEL_34:
  v38 = v47;
  if ( v47 )
  {
    v21 = v47 + 22;
    v22 = v47 + 23;
    v38 = v47 - 1;
    v23 = ptr;
    if ( v48 >= v47 + 23 )
      goto LABEL_36;
  }
  else
  {
    v23 = ptr;
    v22 = 24;
    v21 = 23;
    if ( v48 >= 0x18 )
      goto LABEL_36;
  }
  v36 = v21;
  v37 = v22;
  v23 = sub_80CF920((int)&ptr, v23, v22, 1u);
  v21 = v36;
  v22 = v37;
  ptr = v23;
LABEL_36:
  si128 = _mm_load_si128((const __m128i *)&xmmword_80DE2C0);
  v47 = v22;
  *((_BYTE *)v23 + v21) = 0;
  v25 = (char *)ptr + v38;
  *(__m128i *)v25 = si128;
  *(_DWORD *)(v25 + 19) = 1414676820;
  *(_DWORD *)(v25 + 15) = 1398752587;
  if ( (a2 & 0x20) == 0 )
    goto LABEL_12;
LABEL_37:
  v38 = v47;
  if ( v47 )
  {
    v28 = v47 + 21;
    v27 = v47 + 22;
    v38 = v47 - 1;
    v26 = ptr;
    if ( v48 >= v47 + 22 )
      goto LABEL_39;
LABEL_47:
    v36 = v28;
    v37 = v27;
    v26 = sub_80CF920((int)&ptr, v26, v27, 1u);
    v28 = v36;
    v27 = v37;
    ptr = v26;
    goto LABEL_39;
  }
  v26 = ptr;
  v27 = 23;
  v28 = 22;
  if ( v48 < 0x17 )
    goto LABEL_47;
LABEL_39:
  v29 = _mm_load_si128((const __m128i *)&xmmword_80DE2C0);
  v47 = v27;
  *((_BYTE *)v26 + v28) = 0;
  v30 = (char *)ptr + v38;
  *(__m128i *)v30 = v29;
  *(_DWORD *)(v30 + 18) = 1162760004;
  *(_DWORD *)(v30 + 14) = 1598376769;
LABEL_12:
  sub_8058290();
  v50 = (*(int (__stdcall **)(int, int, int, int, int, int, int, unsigned int, int, void **, int, int, void *, int, unsigned int))(dword_811E820 + 152))(
          a1,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          &ptr,
          a1,
          v40,
          ptr,
          v47,
          v48);
  mutex = (pthread_mutex_t *)"TLS:  [state] %s\n";
  sub_8058290();
  if ( v41 )
  {
    v5 = (*(int (__cdecl **)(int))(dword_811E820 + 100))(a3);
    v51 = (*(int (__cdecl **)(int))(dword_811E820 + 96))(a3);
    v50 = v5;
    mutex = (pthread_mutex_t *)"TLS:  %s: %s\n";
    sub_8058290();
  }
  if ( ptr )
  {
    v47 = 0;
    sub_80CF780(ptr);
  }
  result = (char *)mutex - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80C0F50: variable 'v31' is possibly undefined
// 80C0F50: variable 'v32' is possibly undefined
// 80C0F50: variable 'v33' is possibly undefined
// 80C0F50: variable 'v34' is possibly undefined
// 80C0F50: variable 'v35' is possibly undefined
// 80C0F50: variable 'v36' is possibly undefined
// 80C0F50: variable 'v37' is possibly undefined
// 80C0F50: variable 'v38' is possibly undefined
// 80C0F6D: variable 'v41' is possibly undefined
// 80DE2C0: using guessed type __int128 xmmword_80DE2C0;
// 811E820: using guessed type int dword_811E820;
