void __fastcall sub_F503A0(__int64 ***a1, char *a2)
{
  __int64 **v2; // rbx
  char v3; // r14
  __int64 v4; // rdi
  _BYTE *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // r12
  char v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  __int64 *v13; // rdx
  __int64 *v14; // rbp
  __int64 v15; // r15
  __int64 *v16; // rax
  unsigned __int64 v17; // r9
  int v18; // r14d
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rbp
  __int64 v22; // r14
  __int64 *v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rdi
  unsigned int v29; // ebp
  __m128i *v30; // rdx
  size_t v31; // rsi
  __int64 v32; // rbp
  size_t v33; // rax
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rdi
  void (__fastcall *v42)(__int64, __int64, __int64); // rax
  __int64 v43; // rax
  size_t v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // [rsp+8h] [rbp-60h] BYREF
  __int128 v49; // [rsp+10h] [rbp-58h] BYREF
  __int128 v50; // [rsp+20h] [rbp-48h]

  v2 = *a1;
  v3 = *a2;
  v4 = ***a1;
  v5 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(v4 + 24) )
  {
    sub_227BA10(v4, 10);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v5 + 1;
    *v5 = 10;
  }
  v6 = *v2;
  v7 = **v2;
  v8 = *((_BYTE *)*v2 + 8);
  v9 = v7;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, 4, 0, 0);
    v6 = *v2;
    v9 = **v2;
  }
  v10 = sub_227BF10(v9, v6[133], v6[134]);
  v11 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_227BA10(v10, v3 == 0 ? 124 : 96);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = v3 == 0 ? 124 : 96;
  }
  v12 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v10 + 24) )
  {
    sub_227BA10(v10, 45);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v12 + 1;
    *v12 = 45;
  }
  v13 = v2[6];
  v14 = *v2;
  if ( v13 )
  {
    v32 = sub_227BF10(*v14, v2[5], v13);
    v33 = j__strlen(": ");
    sub_9954E0(v32, ": ", v33);
    v14 = *v2;
  }
  v15 = v14[134];
  v16 = (__int64 *)v14[133];
  v17 = v15 + 1;
  v18 = v3 == 0 ? 124 : 32;
  if ( v16 == v14 + 135 )
    v19 = 15;
  else
    v19 = v14[135];
  if ( v17 > v19 )
  {
    v31 = v14[134];
    v48 = (__int64 *)(v15 + 1);
    sub_998B30((__int64)(v14 + 133), v31, 0, nullptr, 1u);
    v16 = (__int64 *)v14[133];
    v17 = v15 + 1;
  }
  *((_BYTE *)v16 + v15) = v18;
  v20 = v14[133];
  v14[134] = v17;
  *(_BYTE *)(v20 + v15 + 1) = 0;
  v21 = *v2;
  v22 = (*v2)[134];
  v23 = (__int64 *)(*v2)[133];
  v24 = v22 + 1;
  if ( v23 == *v2 + 135 )
    v25 = 15;
  else
    v25 = v21[135];
  if ( v24 > v25 )
  {
    sub_998B30((__int64)(v21 + 133), (*v2)[134], 0, nullptr, 1u);
    v23 = (__int64 *)v21[133];
  }
  *((_BYTE *)v23 + v22) = 32;
  v26 = v21[133];
  v21[134] = v24;
  *(_BYTE *)(v26 + v22 + 1) = 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *((_BYTE *)*v2 + 1057) = 1;
  v27 = (__int64)v2[4];
  v28 = *(_QWORD *)(v27 + 1096);
  v29 = *((_DWORD *)*v2 + 6);
  v30 = *(__m128i **)(v28 + 32);
  if ( *(_QWORD *)(v28 + 24) - (_QWORD)v30 > 0xFu )
  {
    *v30 = _mm_load_si128((const __m128i *)&xmmword_23A9110);
    *(_QWORD *)(v28 + 32) += 16LL;
  }
  else
  {
    sub_227BF10(v28, "TemplateArgument", 16);
  }
  switch ( (_DWORD)v2[1] & 0x7FFFFFFF )
  {
    case 0:
      sub_995540(*(_QWORD *)(v27 + 1096), " null");
      break;
    case 1:
      sub_995540(*(_QWORD *)(v27 + 1096), " type");
      sub_F2AF30(v27, (const __m128i *)(v2 + 1));
      break;
    case 2:
      sub_995540(*(_QWORD *)(v27 + 1096), " decl");
      sub_F2AF30(v27, (const __m128i *)(v2 + 1));
      if ( v2[3] )
      {
        v48 = v2[3];
        v49 = 0u;
        v50 = (__int128)_mm_loadh_ps((const double *)&v48);
        v44 = j__strlen(&byte_22F0C30);
        sub_F3F2B0(v27, (__int64)&byte_22F0C30, v44, v45, v46, v47, v49, v50);
      }
      break;
    case 3:
      sub_995540(*(_QWORD *)(v27 + 1096), " nullptr");
      sub_F2AF30(v27, (const __m128i *)(v2 + 1));
      break;
    case 4:
      sub_995540(*(_QWORD *)(v27 + 1096), " integral");
      sub_F2AF30(v27, (const __m128i *)(v2 + 1));
      break;
    case 5:
      sub_995540(*(_QWORD *)(v27 + 1096), " structural value");
      sub_F2AF30(v27, (const __m128i *)(v2 + 1));
      break;
    case 6:
      sub_F4F380(v27, (const __m128i *)(v2 + 1));
      break;
    case 7:
      sub_F4F2E0(v27, (const __m128i *)(v2 + 1));
      break;
    case 8:
      sub_995540(*(_QWORD *)(v27 + 1096), " expr");
      if ( (*((_BYTE *)v2 + 12) & 1) != 0 )
        sub_995540(*(_QWORD *)(v27 + 1096), " canonical");
      goto LABEL_30;
    case 9:
      sub_995540(*(_QWORD *)(v27 + 1096), " pack");
LABEL_30:
      sub_F2AF30(v27, (const __m128i *)(v2 + 1));
      break;
  }
  v34 = *v2;
  v35 = *((unsigned int *)*v2 + 6);
  if ( v29 < (unsigned int)v35 )
  {
    v36 = v34[2];
    LOBYTE(v49) = 1;
    v37 = v36 + 32 * v35 - 32;
    if ( !*(_QWORD *)(v37 + 16) )
LABEL_51:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, __int128 *))(v37 + 24))(v37, &v49);
      v39 = *v2;
      v40 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v39 + 6) = v40;
      v41 = v39[2] + 32 * v40;
      v42 = *(void (__fastcall **)(__int64, __int64, __int64))(v41 + 16);
      if ( v42 )
        v42(v41, v41, 3);
      v34 = *v2;
      v43 = *((unsigned int *)*v2 + 6);
      if ( v29 >= (unsigned int)v43 )
        break;
      v38 = v34[2];
      LOBYTE(v49) = 1;
      v37 = v38 + 32 * v43 - 32;
      if ( !*(_QWORD *)(v37 + 16) )
        goto LABEL_51;
    }
  }
  sub_F30AA0(v34 + 133, v34[134] - 2);
}
