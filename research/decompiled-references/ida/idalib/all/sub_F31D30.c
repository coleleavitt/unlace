void __fastcall sub_F31D30(__int64 ***a1, char *a2)
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
  unsigned int v27; // r12d
  __int64 v28; // rdi
  void *v29; // rdx
  __int64 *v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rbp
  __int64 v33; // rdi
  _BYTE *v34; // rax
  _BYTE *v35; // rdx
  __int64 v36; // r13
  __int64 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdi
  void (__fastcall *v45)(__int64, __int64, __int64); // rax
  __int64 v46; // rax
  __int64 v47; // rbp
  size_t v48; // rax
  char v49[57]; // [rsp+1Fh] [rbp-39h] BYREF

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
  v13 = v2[18];
  v14 = *v2;
  if ( v13 )
  {
    v47 = sub_227BF10(*v14, v2[17], v13);
    v48 = j__strlen(": ");
    sub_9954E0(v47, ": ", v48);
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
    sub_998B30((__int64)(v14 + 133), v14[134], 0, nullptr, 1u);
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
  v27 = *((_DWORD *)*v2 + 6);
  v28 = v2[1][137];
  v29 = *(void **)(v28 + 32);
  if ( *(_QWORD *)(v28 + 24) - (_QWORD)v29 > 0xAu )
  {
    qmemcpy(v29, "Exceptions:", 11);
    *(_QWORD *)(v28 + 32) += 11LL;
  }
  else
  {
    sub_227BF10(v28, "Exceptions:", 11);
  }
  v30 = v2[7];
  if ( (_DWORD)v30 )
  {
    v31 = (__int64)v2[1];
    v32 = 0;
    v33 = *(_QWORD *)(v31 + 1096);
    v34 = *(_BYTE **)(v33 + 32);
    v35 = *(_BYTE **)(v33 + 24);
    while ( 1 )
    {
      v36 = v2[6][v32];
      if ( v34 < v35 )
      {
        *(_QWORD *)(v33 + 32) = v34 + 1;
        *v34 = 32;
      }
      else
      {
        sub_227BA10(v33, 32);
      }
      sub_F2A310(v31, v36, 1);
      if ( v32 == (_DWORD)v30 - 1 )
        break;
      v31 = (__int64)v2[1];
      v33 = *(_QWORD *)(v31 + 1096);
      v35 = *(_BYTE **)(v33 + 24);
      v34 = *(_BYTE **)(v33 + 32);
      if ( (_DWORD)v32 != -1 )
      {
        if ( v34 == v35 )
        {
          sub_227BF10(v33, ",", 1);
        }
        else
        {
          *v34 = 44;
          ++*(_QWORD *)(v33 + 32);
        }
        v31 = (__int64)v2[1];
        v33 = *(_QWORD *)(v31 + 1096);
        v34 = *(_BYTE **)(v33 + 32);
        v35 = *(_BYTE **)(v33 + 24);
      }
      ++v32;
    }
  }
  v37 = *v2;
  v38 = *((unsigned int *)*v2 + 6);
  if ( v27 < (unsigned int)v38 )
  {
    v39 = v37[2];
    v49[0] = 1;
    v40 = v39 + 32 * v38 - 32;
    if ( !*(_QWORD *)(v40 + 16) )
LABEL_49:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v40 + 24))(v40, v49);
      v42 = *v2;
      v43 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v42 + 6) = v43;
      v44 = v42[2] + 32 * v43;
      v45 = *(void (__fastcall **)(__int64, __int64, __int64))(v44 + 16);
      if ( v45 )
        v45(v44, v44, 3);
      v37 = *v2;
      v46 = *((unsigned int *)*v2 + 6);
      if ( v27 >= (unsigned int)v46 )
        break;
      v41 = v37[2];
      v49[0] = 1;
      v40 = v41 + 32 * v46 - 32;
      if ( !*(_QWORD *)(v40 + 16) )
        goto LABEL_49;
    }
  }
  sub_F30AA0(v37 + 133, v37[134] - 2);
}
