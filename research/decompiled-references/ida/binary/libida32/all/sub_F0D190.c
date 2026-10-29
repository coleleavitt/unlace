void __fastcall sub_F0D190(__int64 ***a1, char *a2)
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
  __int64 *v27; // rbp
  __int64 *v28; // rdx
  __int64 *v29; // r13
  __int64 v30; // rdi
  void *v31; // rdx
  __int64 v32; // rsi
  __int64 *v33; // rbp
  __int64 v34; // r12
  __int64 v35; // rdi
  _WORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // r14
  _BYTE *v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  _WORD *v44; // rdi
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned int *v47; // rsi
  size_t v48; // r8
  const void *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  _WORD *v52; // rdx
  __int64 v53; // r12
  __int64 v54; // rax
  _BYTE *v55; // rdx
  __int64 v56; // rdi
  _WORD *v57; // rdx
  __int64 *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 *v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdi
  void (__fastcall *v66)(__int64, __int64, __int64); // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rbp
  size_t v70; // rax
  unsigned int v71; // [rsp+0h] [rbp-78h]
  unsigned __int64 v72; // [rsp+8h] [rbp-70h]
  size_t v73; // [rsp+18h] [rbp-60h]
  void *v74[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v75; // [rsp+30h] [rbp-48h] BYREF

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
  v13 = v2[5];
  v14 = *v2;
  if ( v13 )
  {
    v69 = sub_22581D0(*v14, v2[4], v13);
    v70 = j__strlen(": ");
    sub_9717A0(v69, ": ", v70);
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
    sub_974DF0((__int64)(v14 + 133), v14[134], 0, nullptr, 1u);
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
    sub_974DF0((__int64)(v21 + 133), (*v2)[134], 0, nullptr, 1u);
    v23 = (__int64 *)v21[133];
  }
  *((_BYTE *)v23 + v22) = 32;
  v26 = v21[133];
  v21[134] = v24;
  *(_BYTE *)(v26 + v22 + 1) = 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *((_BYTE *)*v2 + 1057) = 1;
  v71 = *((_DWORD *)*v2 + 6);
  v27 = (__int64 *)sub_B747D0((__int64)v2[1]);
  v29 = v28;
  v30 = v2[2][137];
  v31 = *(void **)(v30 + 32);
  if ( *(_QWORD *)(v30 + 24) - (_QWORD)v31 > 0xCu )
  {
    qmemcpy(v31, "Overrides: [ ", 13);
    *(_QWORD *)(v30 + 32) += 13LL;
  }
  else
  {
    sub_22581D0(v30, "Overrides: [ ", 13);
  }
  v32 = *v27;
  v33 = v27 + 1;
  sub_F031D0((__int64)(v2 + 3), v32);
  for ( ; v29 != v33; ++v33 )
  {
    while ( 1 )
    {
      v34 = *v33;
      v35 = v2[2][137];
      v36 = *(_WORD **)(v35 + 32);
      if ( *(_QWORD *)(v35 + 24) - (_QWORD)v36 > 1u )
      {
        *v36 = 8236;
        *(_QWORD *)(v35 + 32) += 2LL;
      }
      else
      {
        sub_22581D0(v35, ", ", 2);
      }
      v37 = *(_QWORD *)(v34 + 48);
      if ( (v37 & 8) != 0 )
      {
        v38 = *(_QWORD *)(v34 + 48) & 7LL
            | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL));
        v72 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v72 = v37 & 0xFFFFFFFFFFFFFFF0LL;
        v38 = *(_QWORD *)(v34 + 48) & 7LL;
      }
      v39 = sub_2257C70(v2[3][137], v34);
      v40 = *(_BYTE **)(v39 + 32);
      if ( *(_BYTE **)(v39 + 24) == v40 )
      {
        v39 = sub_22581D0(v39, " ", 1);
      }
      else
      {
        *v40 = 32;
        ++*(_QWORD *)(v39 + 32);
      }
      v41 = *(_QWORD *)(sub_B68470(v34 + 72) + 16);
      if ( (v41 & 4) != 0 )
        v42 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v42 = v41 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v42 )
        BUG();
      v43 = *(_QWORD *)(v42 - 24);
      v44 = *(_WORD **)(v39 + 32);
      v45 = *(_QWORD *)(v39 + 24) - (_QWORD)v44;
      if ( (v43 & 7) == 0 )
      {
        v46 = v43 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v46 )
        {
          v47 = *(unsigned int **)(v46 + 16);
          v48 = *v47;
          v49 = v47 + 4;
          if ( v48 <= v45 )
          {
            if ( v48 )
            {
              v73 = v48;
              memcpy(v44, v49, v48);
              v68 = *(_QWORD *)(v39 + 24);
              v44 = (_WORD *)(v73 + *(_QWORD *)(v39 + 32));
              *(_QWORD *)(v39 + 32) = v44;
              v45 = v68 - (_QWORD)v44;
            }
          }
          else
          {
            v50 = sub_22581D0(v39, v49, v48);
            v44 = *(_WORD **)(v50 + 32);
            v39 = v50;
            v45 = *(_QWORD *)(v50 + 24) - (_QWORD)v44;
          }
        }
      }
      if ( v45 > 1 )
      {
        *v44 = 14906;
        *(_QWORD *)(v39 + 32) += 2LL;
      }
      else
      {
        v39 = sub_22581D0(v39, "::", 2);
      }
      v51 = sub_B62620(v39, *(_QWORD *)(v34 + 40));
      v52 = *(_WORD **)(v51 + 32);
      v53 = v51;
      if ( *(_QWORD *)(v51 + 24) - (_QWORD)v52 > 1u )
      {
        *v52 = 10016;
        *(_QWORD *)(v51 + 32) += 2LL;
      }
      else
      {
        v53 = sub_22581D0(v51, " '", 2);
      }
      sub_F54690(v74, v72, v38, v2[3] + 143);
      v54 = sub_22581D0(v53, v74[0], v74[1]);
      v55 = *(_BYTE **)(v54 + 32);
      if ( *(_BYTE **)(v54 + 24) == v55 )
      {
        sub_22581D0(v54, "'", 1);
      }
      else
      {
        *v55 = 39;
        ++*(_QWORD *)(v54 + 32);
      }
      if ( v74[0] == &v75 )
        break;
      operator delete(v74[0]);
      if ( v29 == ++v33 )
        goto LABEL_45;
    }
  }
LABEL_45:
  v56 = v2[2][137];
  v57 = *(_WORD **)(v56 + 32);
  if ( *(_QWORD *)(v56 + 24) - (_QWORD)v57 > 1u )
  {
    *v57 = 23840;
    *(_QWORD *)(v56 + 32) += 2LL;
  }
  else
  {
    sub_22581D0(v56, " ]", 2);
  }
  v58 = *v2;
  v59 = *((unsigned int *)*v2 + 6);
  if ( v71 < (unsigned int)v59 )
  {
    v60 = v58[2];
    LOBYTE(v74[0]) = 1;
    v61 = v60 + 32 * v59 - 32;
    if ( !*(_QWORD *)(v61 + 16) )
LABEL_73:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, void **))(v61 + 24))(v61, v74);
      v63 = *v2;
      v64 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v63 + 6) = v64;
      v65 = v63[2] + 32 * v64;
      v66 = *(void (__fastcall **)(__int64, __int64, __int64))(v65 + 16);
      if ( v66 )
        v66(v65, v65, 3);
      v58 = *v2;
      v67 = *((unsigned int *)*v2 + 6);
      if ( v71 >= (unsigned int)v67 )
        break;
      v62 = v58[2];
      LOBYTE(v74[0]) = 1;
      v61 = v62 + 32 * v67 - 32;
      if ( !*(_QWORD *)(v61 + 16) )
        goto LABEL_73;
    }
  }
  sub_F0CD60(v58 + 133, v58[134] - 2);
}

