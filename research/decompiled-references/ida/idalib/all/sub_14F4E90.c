__int64 __fastcall sub_14F4E90(__int64 a1, int a2, __m128i a3, __m128 a4)
{
  int *v4; // r14
  unsigned __int16 v6; // r15
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // r8d
  int v14; // eax
  __int64 *v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  size_t v18; // rax
  __int64 v19; // rbx
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-120h]
  int v25; // [rsp+8h] [rbp-120h]
  __int64 v26; // [rsp+8h] [rbp-120h]
  __int16 v27; // [rsp+1Eh] [rbp-10Ah] BYREF
  void *v28; // [rsp+20h] [rbp-108h] BYREF
  __int64 v29; // [rsp+28h] [rbp-100h]
  _BYTE v30[32]; // [rsp+30h] [rbp-F8h] BYREF
  void *v31; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-D0h]
  _BYTE v33[64]; // [rsp+60h] [rbp-C8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-80h]
  _BYTE v36[120]; // [rsp+B0h] [rbp-78h] BYREF

  v4 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v31 = v33;
  v28 = v30;
  v32 = 0x800000000LL;
  v29 = 0x800000000LL;
  ptr = v36;
  v35 = 0x800000000LL;
  while ( 1 )
  {
    sub_14F4710((const __m128i *)a1, 1, a3, a4);
    if ( *(_WORD *)(a1 + 32) == 3 )
    {
      v22 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v22 + 760) )
      {
        *(_BYTE *)(v22 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v22 + 48) + 6LL) = 1;
      }
      v23 = *(_QWORD *)(a1 + 96);
      *(_WORD *)(a1 + 32) = 1;
      sub_171A1B0(*(_QWORD *)(v23 + 656), *(_QWORD *)(v23 + 608));
      goto LABEL_16;
    }
    if ( (unsigned __int8)sub_15648A0(a1) )
    {
      v27 = 63;
      sub_15680D0(a1, &v27, 1, 0);
      goto LABEL_16;
    }
    v6 = *(_WORD *)(a1 + 32);
    v7 = sub_141A630(v6);
    if ( v6 == 1 || v7 )
      v8 = 0;
    else
      v8 = *(_QWORD *)(a1 + 24);
    v9 = (unsigned int)v32;
    v10 = (unsigned int)v32 + 1LL;
    if ( v10 > HIDWORD(v32) )
    {
      v26 = v8;
      sub_2237220(&v31, v33, v10, 8);
      v9 = (unsigned int)v32;
      v8 = v26;
    }
    *((_QWORD *)v31 + v9) = v8;
    v11 = (unsigned int)v29;
    LODWORD(v32) = v32 + 1;
    v12 = (unsigned int)v29 + 1LL;
    v13 = *(_DWORD *)(a1 + 16);
    if ( v12 > HIDWORD(v29) )
    {
      v25 = *(_DWORD *)(a1 + 16);
      sub_2237220(&v28, v30, v12, 4);
      v11 = (unsigned int)v29;
      v13 = v25;
    }
    *((_DWORD *)v28 + v11) = v13;
    v14 = *(_DWORD *)(a1 + 16);
    v15 = *(__int64 **)(a1 + 8);
    LODWORD(v29) = v29 + 1;
    *(_DWORD *)(a1 + 40) = v14;
    sub_14634E0(v15, v4);
    v16 = 0;
    if ( *(_WORD *)(a1 + 32) == 47 )
      v16 = sub_14F4DE0(a1, *(double *)a3.m128i_i64, a4);
    v17 = (unsigned int)v35 + 1LL;
    if ( v17 > HIDWORD(v35) )
      break;
    *((_QWORD *)ptr + (unsigned int)v35) = v16;
    LODWORD(v35) = v35 + 1;
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_15;
LABEL_26:
    v21 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v21, v4);
  }
  v24 = v16;
  sub_2237220(&ptr, v36, v17, 8);
  *((_QWORD *)ptr + (unsigned int)v35) = v24;
  LODWORD(v35) = v35 + 1;
  if ( *(_WORD *)(a1 + 32) == 66 )
    goto LABEL_26;
LABEL_15:
  v18 = j__strlen("@class");
  if ( (unsigned __int8)sub_1569A00(a1, 63, 15, "@class", v18) )
  {
LABEL_16:
    v19 = sub_17A2530(*(_QWORD *)(a1 + 96), 0, 0);
    goto LABEL_17;
  }
  v19 = sub_18A7D10(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), a2, (_DWORD)v31, (_DWORD)v28, (_DWORD)ptr, v35, v32);
LABEL_17:
  if ( ptr != v36 )
    free(ptr);
  if ( v28 != v30 )
    free(v28);
  if ( v31 != v33 )
    free(v31);
  return v19;
}
