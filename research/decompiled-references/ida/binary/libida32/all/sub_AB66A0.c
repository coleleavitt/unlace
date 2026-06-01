void __fastcall sub_AB66A0(__int64 ***a1, char *a2)
{
  __int64 **v2; // rbx
  char v3; // bp
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
  __int64 *v14; // rdi
  __int64 *v15; // rbp
  __int64 v16; // r14
  __int64 *v17; // rax
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  size_t v21; // r9
  __int64 *v22; // r13
  unsigned int v23; // ebp
  __int64 v24; // r12
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  void (__fastcall *v35)(__int64, __int64, __int64); // rax
  __int64 v36; // rax
  const __m128i *v37; // r12
  const __m128i *v38; // r14
  const __m128i *v39; // rsi
  __int64 v40; // rax
  char v41[57]; // [rsp+Fh] [rbp-39h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = ***a1;
  v5 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(v4 + 24) )
  {
    sub_2257CD0(v4, 10);
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
  v10 = sub_22581D0(v9, v6[133], v6[134]);
  v11 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_2257CD0(v10, v3 == 0 ? 124 : 96);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = v3 == 0 ? 124 : 96;
  }
  v12 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v10 + 24) )
  {
    sub_2257CD0(v10, 45);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v12 + 1;
    *v12 = 45;
  }
  v13 = v2[9];
  v14 = *v2;
  if ( v13 )
  {
    v40 = sub_22581D0(*v14, v2[8], v13);
    sub_971800(v40, ": ");
    v14 = *v2;
  }
  sub_A4B8D0(v14 + 133, v3 == 0 ? 124 : 32);
  v15 = *v2;
  v16 = (*v2)[134];
  v17 = (__int64 *)(*v2)[133];
  v18 = v16 + 1;
  if ( v17 == *v2 + 135 )
    v19 = 15;
  else
    v19 = v15[135];
  if ( v18 > v19 )
  {
    sub_974DF0((__int64)(v15 + 133), (*v2)[134], 0, nullptr, 1u);
    v17 = (__int64 *)v15[133];
  }
  *((_BYTE *)v17 + v16) = 32;
  v20 = v15[133];
  v15[134] = v18;
  *(_BYTE *)(v20 + v16 + 1) = 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v21 = 0;
  *((_BYTE *)*v2 + 1057) = 1;
  v22 = v2[7];
  v23 = *((_DWORD *)*v2 + 6);
  v24 = (__int64)(v2[1] + 1);
  if ( v22 )
    v21 = j__strlen((const char *)v2[7]);
  sub_F2B6E0(v24, v2 + 2, v2[5], v2[6], v22, v21);
  v26 = (__int64)v2[1];
  switch ( (_DWORD)v2[2] & 0x7FFFFFFF )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      break;
    case 1:
      sub_AB4A40((__int64)v2[1], (__int64)v2[3]);
      break;
    case 8:
      sub_AAE4E0(v26 + 8, 0, 0, (__int64)v2[3], (__int64)v2[1], v25);
      break;
    case 9:
      v37 = (const __m128i *)v2[3];
      v38 = (const __m128i *)((char *)v37 + 24 * *((unsigned int *)v2 + 5));
      while ( v38 != v37 )
      {
        v39 = v37;
        v37 = (const __m128i *)((char *)v37 + 24);
        sub_AB2BB0(v26, v39, 0);
      }
      break;
  }
  v27 = *v2;
  v28 = *((unsigned int *)*v2 + 6);
  if ( v23 < (unsigned int)v28 )
  {
    v29 = v27[2];
    v41[0] = 1;
    v30 = v29 + 32 * v28 - 32;
    if ( !*(_QWORD *)(v30 + 16) )
LABEL_37:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v30 + 24))(v30, v41);
      v32 = *v2;
      v33 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v32 + 6) = v33;
      v34 = v32[2] + 32 * v33;
      v35 = *(void (__fastcall **)(__int64, __int64, __int64))(v34 + 16);
      if ( v35 )
        v35(v34, v34, 3);
      v27 = *v2;
      v36 = *((unsigned int *)*v2 + 6);
      if ( v23 >= (unsigned int)v36 )
        break;
      v31 = v27[2];
      v41[0] = 1;
      v30 = v31 + 32 * v36 - 32;
      if ( !*(_QWORD *)(v30 + 16) )
        goto LABEL_37;
    }
  }
  sub_AA8930(v27 + 133, v27[134] - 2);
}

