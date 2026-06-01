void __fastcall sub_1753A70(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v2; // r15
  unsigned int *v3; // r14
  int v4; // ebp
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rax
  char v9; // al
  int *v10; // rdx
  int *v11; // rcx
  int *v12; // rbx
  int *v13; // rbp
  int *v14; // r15
  _DWORD *v15; // rdi
  int *v16; // rbp
  int *v17; // rbx
  char v18; // r15
  int v19; // edx
  int v20; // eax
  _BYTE *v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-208h]
  int *v23; // [rsp+0h] [rbp-208h]
  unsigned int v24; // [rsp+Ch] [rbp-1FCh]
  char v25; // [rsp+Ch] [rbp-1FCh]
  void *v26[2]; // [rsp+10h] [rbp-1F8h] BYREF
  _DWORD v27[32]; // [rsp+20h] [rbp-1E8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-160h]
  _DWORD v30[32]; // [rsp+B0h] [rbp-158h] BYREF
  void *v31; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+138h] [rbp-D0h]
  _BYTE v33[128]; // [rsp+140h] [rbp-C8h] BYREF
  __m128i v34[4]; // [rsp+1C0h] [rbp-48h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 35;
  v5 = *a2;
  v6 = *a1;
  v27[0] = -1;
  v30[0] = -1;
  ptr = v30;
  *a2 = v6 & 0xFFFFFFFE | v5 & 1;
  *a1 = v5 & 0xFFFFFFFE | *a1 & 1;
  v7 = a1[1];
  a1[1] = a2[1];
  a2[1] = v7;
  v26[0] = v27;
  v26[1] = (void *)0x2000000001LL;
  v29 = 0x2000000001LL;
  v8 = 1;
  do
  {
    if ( v8 + 1 <= (unsigned __int64)HIDWORD(v29) )
    {
      *((_DWORD *)ptr + v8) = -1;
    }
    else
    {
      sub_2237220(&ptr, v30, v8 + 1, 4);
      *((_DWORD *)ptr + (unsigned int)v29) = -1;
    }
    v8 = (unsigned int)(v29 + 1);
    LODWORD(v29) = v29 + 1;
    --v4;
  }
  while ( v4 );
  v9 = *(_BYTE *)a2 & 1;
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v11 = (int *)(a1 + 2);
    v10 = (int *)(a2 + 2);
    if ( !v9 )
    {
      v22 = *((_QWORD *)a2 + 1);
      v24 = a2[4];
      goto LABEL_11;
    }
    v16 = (int *)(a1 + 2);
    v17 = (int *)(a2 + 2);
    v23 = (int *)(a1 + 162);
    while ( 1 )
    {
      v18 = 0;
      if ( (unsigned __int8)sub_2222ED0(v16, v26) )
      {
        if ( (unsigned __int8)sub_2222ED0(v17, v26) )
          goto LABEL_28;
      }
      else
      {
        v18 = sub_2222ED0(v16, &ptr) ^ 1;
        if ( (unsigned __int8)sub_2222ED0(v17, v26) )
          goto LABEL_28;
      }
      if ( (unsigned __int8)sub_2222ED0(v17, &ptr) )
      {
LABEL_28:
        v25 = 0;
        goto LABEL_29;
      }
      v20 = v16[2];
      if ( v18 )
      {
        v31 = v33;
        v32 = 0x2000000000LL;
        if ( v20 )
          sub_1744C20((char ***)&v31, (char ***)v16);
        v34[0] = _mm_loadu_si128((const __m128i *)v16 + 9);
        sub_1744C20((char ***)v16, (char ***)v17);
        *((__m128i *)v16 + 9) = _mm_loadu_si128((const __m128i *)v17 + 9);
        sub_1744C20((char ***)v17, (char ***)&v31);
        v21 = v31;
        *((__m128i *)v17 + 9) = _mm_load_si128(v34);
        if ( v21 != v33 )
          free(v21);
        goto LABEL_35;
      }
      v25 = 1;
LABEL_29:
      v19 = v16[2];
      v31 = v33;
      v32 = 0x2000000000LL;
      if ( v19 )
        sub_1744C20((char ***)&v31, (char ***)v16);
      sub_1744C20((char ***)v16, (char ***)v17);
      sub_1744C20((char ***)v17, (char ***)&v31);
      if ( v31 != v33 )
        free(v31);
      if ( v18 )
      {
        *((__m128i *)v17 + 9) = _mm_loadu_si128((const __m128i *)v16 + 9);
      }
      else if ( v25 )
      {
        *((__m128i *)v16 + 9) = _mm_loadu_si128((const __m128i *)v17 + 9);
      }
LABEL_35:
      v16 += 40;
      v17 += 40;
      if ( v16 == v23 )
        goto LABEL_36;
    }
  }
  v22 = *((_QWORD *)a1 + 1);
  v24 = a1[4];
  if ( !v9 )
  {
    *((_QWORD *)a1 + 1) = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = v22;
    a1[4] = a2[4];
    a2[4] = v24;
LABEL_36:
    v15 = ptr;
    if ( ptr != v30 )
      goto LABEL_19;
    goto LABEL_20;
  }
  v10 = (int *)(a1 + 2);
  v11 = (int *)(a2 + 2);
  v2 = a1;
  v3 = a2;
LABEL_11:
  *(_BYTE *)v2 |= 1u;
  v12 = v10;
  v13 = v11;
  v14 = v10 + 160;
  do
  {
    v12[2] = 0;
    *(_QWORD *)v12 = v12 + 4;
    v12[3] = 32;
    if ( v13[2] )
      sub_1744C20((char ***)v12, (char ***)v13);
    if ( *(int **)v13 != v13 + 4 )
      free(*(void **)v13);
    if ( !(unsigned __int8)sub_2222ED0(v12, v26) && !(unsigned __int8)sub_2222ED0(v12, &ptr) )
      *((__m128i *)v12 + 9) = _mm_loadu_si128((const __m128i *)v13 + 9);
    v12 += 40;
    v13 += 40;
  }
  while ( v14 != v12 );
  v15 = ptr;
  *(_BYTE *)v3 &= ~1u;
  *((_QWORD *)v3 + 1) = v22;
  v3[4] = v24;
  if ( v15 != v30 )
LABEL_19:
    free(v15);
LABEL_20:
  if ( v26[0] != v27 )
    free(v26[0]);
}
