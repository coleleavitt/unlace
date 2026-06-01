__int64 __fastcall sub_14BDFA0(__int64 a1, __m128 a2, __m128 a3)
{
  int *v4; // rbx
  int v5; // eax
  __int64 *v6; // rdi
  int v7; // r13d
  char v8; // al
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // r14d
  char v12; // dl
  void **v13; // rax
  void *v14; // rdx
  unsigned int v15; // eax
  size_t v16; // rax
  int *i; // rbp
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  size_t v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 *v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  void *v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rdi
  char v33; // bl
  __int64 v34; // rax
  char v35; // dl
  __int64 *v36; // rdi
  unsigned int v37; // [rsp+0h] [rbp-1D8h]
  __int64 v38; // [rsp+0h] [rbp-1D8h]
  __int64 v39; // [rsp+0h] [rbp-1D8h]
  __int64 v40; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v41; // [rsp+28h] [rbp-1B0h]
  _BYTE *v42; // [rsp+30h] [rbp-1A8h] BYREF
  char v43; // [rsp+38h] [rbp-1A0h]
  __int64 v44; // [rsp+40h] [rbp-198h]
  int v45; // [rsp+48h] [rbp-190h]
  __int16 v46; // [rsp+4Ch] [rbp-18Ch]
  __int64 (__fastcall *v47)(__int64); // [rsp+50h] [rbp-188h]
  __int64 v48; // [rsp+58h] [rbp-180h]
  __int64 v49; // [rsp+60h] [rbp-178h]
  _WORD v50[40]; // [rsp+70h] [rbp-168h] BYREF
  void *v51; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-110h]
  _BYTE v53[96]; // [rsp+D0h] [rbp-108h] BYREF
  void *ptr; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+138h] [rbp-A0h]
  _BYTE v56[152]; // [rsp+140h] [rbp-98h] BYREF

  v4 = (int *)(a1 + 16);
  sub_15687A0(a1, a1 + 16);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = v5;
  sub_14634E0(v6, v4);
  v7 = *(_DWORD *)(a1 + 40);
  v42 = (_BYTE *)(a1 + 1952);
  v8 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v43 = v8;
  v44 = a1;
  v45 = 1507350;
  v46 = 63;
  v47 = sub_146A990;
  v48 = 0;
  v49 = 0;
  if ( (unsigned __int8)sub_156A040(&v42, 14, &byte_22F0C30, 0) )
    goto LABEL_2;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
  {
    if ( (unsigned __int8)sub_15612F0(a1, 4, &ptr) )
      goto LABEL_6;
LABEL_28:
    v31 = *(_QWORD *)(a1 + 96);
    sub_18C74E0(v31, 0, 0, 4);
    v40 = sub_14BDAD0(a1, 0, (__m128i)a2);
    if ( v40 == 1 )
    {
      LOWORD(ptr) = 23;
      sub_15680D0(a1, &ptr, 1, 1);
      sub_190D5E0(v31);
      result = 1;
      goto LABEL_3;
    }
    v32 = v31;
    v11 = 0;
    sub_190D5E0(v32);
    goto LABEL_8;
  }
  if ( !sub_147F1B0(a1) )
    goto LABEL_28;
LABEL_6:
  v10 = sub_1496480(a1, nullptr, 5, 3u, nullptr, 0, (__m128i)a2, a3);
  v11 = v10;
  if ( v12 )
  {
LABEL_30:
    LOWORD(ptr) = 23;
    sub_15680D0(a1, &ptr, 1, 1);
LABEL_2:
    result = 1;
    goto LABEL_3;
  }
  v13 = *(void ***)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 24LL);
  v14 = *v13;
  v55 = (__int64)(v13 + 1);
  ptr = v14;
  v15 = sub_F6CCB0((__int64 *)&ptr, a2);
  sub_1564820(&ptr, a1, v15, (**(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL) & 0x10) == 0 ? 1946 : 2065);
  sub_AEA040((__int64)&ptr);
  v40 = 0;
LABEL_8:
  v16 = j__strlen(&byte_22F0C30);
  if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v16) )
    goto LABEL_30;
  v37 = 0;
  v51 = v53;
  v52 = 0xC00000000LL;
  ptr = v56;
  v55 = 0xC00000000LL;
  for ( i = v4; ; sub_14634E0(v36, i) )
  {
    if ( *(_WORD *)(a1 + 32) == 82 )
    {
      if ( v37 )
      {
        sub_1564840(v50, a1, i, 1593);
        sub_AEA040((__int64)v50);
        sub_1564820(v50, a1, v37, 2053);
        sub_AEA040((__int64)v50);
        v50[0] = 23;
        sub_15680D0(a1, v50, 1, 1);
        result = 1;
        goto LABEL_23;
      }
      v18 = *(__int64 **)(a1 + 8);
      v19 = 0;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v18, i);
      v37 = *(_DWORD *)(a1 + 40);
    }
    else
    {
      v33 = *(_BYTE *)(a1 + 2040);
      *(_BYTE *)(a1 + 2040) = 1;
      v34 = sub_1496480(a1, nullptr, 27, 3u, nullptr, 0, (__m128i)a2, a3);
      if ( v35 )
      {
        v50[0] = 23;
        sub_15680D0(a1, v50, 1, 1);
        result = 1;
        *(_BYTE *)(a1 + 2040) = v33;
        goto LABEL_23;
      }
      *(_BYTE *)(a1 + 2040) = v33;
      v19 = v34;
    }
    v20 = (unsigned int)v52;
    v21 = (unsigned int)v52 + 1LL;
    if ( v21 > HIDWORD(v52) )
    {
      sub_2237220(&v51, v53, v21, 8);
      v20 = (unsigned int)v52;
    }
    *((_QWORD *)v51 + v20) = v19;
    LODWORD(v52) = v52 + 1;
    v22 = j__strlen(&byte_22F0C30);
    if ( (unsigned __int8)sub_1569A00(a1, 62, 14, &byte_22F0C30, v22)
      || (v23 = sub_14BDAD0(a1, 0, (__m128i)a2), v23 == 1) )
    {
      v50[0] = 23;
      sub_15680D0(a1, v50, 1, 1);
      result = 1;
      goto LABEL_23;
    }
    v26 = (unsigned int)v55;
    v27 = (__int64 *)HIDWORD(v55);
    v28 = v23 & 0xFFFFFFFFFFFFFFFELL;
    v29 = (unsigned int)v55 + 1LL;
    if ( v29 > HIDWORD(v55) )
      break;
    v30 = ptr;
    *((_QWORD *)ptr + (unsigned int)v55) = v28;
    LODWORD(v55) = v55 + 1;
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_19;
LABEL_34:
    v36 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  }
  v27 = (__int64 *)v56;
  v41 = v28;
  sub_2237220(&ptr, v56, v29, 8);
  v26 = (unsigned int)v55;
  v30 = ptr;
  *((_QWORD *)ptr + (unsigned int)v55) = v41;
  LODWORD(v55) = v55 + 1;
  if ( *(_WORD *)(a1 + 32) == 66 )
    goto LABEL_34;
LABEL_19:
  sub_14808E0((__int64)&v42, v27, (__int64)v30, v26, v24, v25);
  result = 1;
  if ( HIDWORD(v49) )
  {
    if ( v40 )
      v11 = v40 & 0xFFFFFFFE;
    result = sub_1931760(
               *(_QWORD *)(a1 + 96),
               v7,
               v37,
               HIDWORD(v49),
               v40 != 0,
               v11,
               (__int64)v51,
               (unsigned int)v52,
               (__int64)ptr,
               (unsigned int)v55);
  }
LABEL_23:
  if ( ptr != v56 )
  {
    v38 = result;
    free(ptr);
    result = v38;
  }
  if ( v51 != v53 )
  {
    v39 = result;
    free(v51);
    result = v39;
  }
LABEL_3:
  *v42 = v43;
  return result;
}
