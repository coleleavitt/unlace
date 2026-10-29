__int64 __fastcall sub_9D0A80(_QWORD *a1, unsigned int a2, int *a3, int a4, __int64 *a5)
{
  __int64 v6; // rdi
  int *v7; // rbx
  unsigned int v8; // eax
  unsigned int *v9; // rdx
  bool v10; // cl
  _QWORD *v11; // rbp
  _DWORD *v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  bool v16; // dl
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r13
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rdx
  void *v24; // r13
  int v25; // r8d
  int v26; // r9d
  void *v27; // r13
  int v28; // eax
  __int64 v29; // r13
  _DWORD *v30; // rax
  unsigned int v31; // edx
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rdi
  int v35; // ecx
  __int64 v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  bool v43; // zf
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  char **exception; // rbx
  _QWORD *v48; // [rsp+0h] [rbp-B8h]
  int *v49; // [rsp+8h] [rbp-B0h]
  unsigned int v50; // [rsp+10h] [rbp-A8h]
  bool v51; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v52; // [rsp+17h] [rbp-A1h]
  __int64 v53; // [rsp+18h] [rbp-A0h]
  __int64 v56; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v57; // [rsp+38h] [rbp-80h] BYREF
  int v58; // [rsp+40h] [rbp-78h] BYREF
  char v59; // [rsp+44h] [rbp-74h]
  __int64 v60; // [rsp+48h] [rbp-70h]
  int v61; // [rsp+50h] [rbp-68h] BYREF
  char v62; // [rsp+54h] [rbp-64h]
  __int64 v63; // [rsp+58h] [rbp-60h]
  __int64 v64; // [rsp+60h] [rbp-58h] BYREF
  __int64 v65; // [rsp+68h] [rbp-50h]

  v53 = a1[3];
  if ( a2 )
  {
    v6 = a1[74];
    v7 = a3;
    v8 = 0;
    v9 = (unsigned int *)(a3 + 8);
    do
    {
      ++v8;
      v10 = (*(_BYTE *)(v6 + 4LL * *v9 + 3) & 0x40) != 0;
      v9 += 10;
    }
    while ( v10 && v8 < a2 );
    v52 = v10;
    v11 = nullptr;
    v56 = v53;
    v49 = &v7[10 * a2];
    do
    {
      v59 &= 0xFCu;
      v62 &= 0xFCu;
      v58 = 0;
      v27 = qword_1C7F2C0;
      v60 = 0;
      v61 = 1;
      v63 = 0;
      if ( (v7[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v58, v7);
      else
        v58 = *v7;
      if ( (v7[5] & 1) != 0 )
      {
        sub_182C690(v27, &v61, v7 + 4);
      }
      else
      {
        v28 = v7[4];
        v62 &= ~1u;
        v61 = v28;
      }
      v29 = **(_QWORD **)(a1[4] + 8LL * (unsigned int)v7[8]);
      v48 = a1 + 43;
      v30 = *(_DWORD **)(sub_15D1F10(v29) + 24);
      if ( v30 && *v30 == 5 && v30[1] == 1 && !v52 )
        v29 = sub_15E1A70(a1[43]);
      if ( (v59 & 1) != 0 || v58 != 1 || (v62 & 1) != 0 || v61 != 1 )
      {
        v12 = *(_DWORD **)(sub_15D1F10(v29) + 24);
        v16 = 0;
        if ( v12 && *v12 == 5 )
          v16 = v12[1] == 1;
        v17 = a1[44];
        if ( !v17 )
        {
          v51 = v16;
          sub_16669E0(v48);
          v17 = a1[44];
          v16 = v51;
        }
        sub_166A700(v17, (unsigned int)&v58, v16, v13, v14, v15);
        v18 = sub_15E1B70(a1[43]);
        v19 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        if ( v11 )
        {
          v20 = *((_DWORD *)v11 - 1);
          if ( v20 == *((_DWORD *)v11 - 2) )
          {
            v31 = (3 * v20 + 1) >> 1;
            v32 = 8 * v31 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v32 || v20 >= v31 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_98B3B0(&v64, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v64);
              sub_233E40((__int64)&v64);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v50 = (3 * v20 + 1) >> 1;
            v33 = (unsigned int *)sub_186B300(v11 - 1, v32);
            v11 = v33 + 2;
            *v33 = v50;
            LODWORD(v33) = v33[1];
            v23 = &v11[(unsigned int)v33];
            v22 = (_DWORD)v33 + 1;
          }
          else
          {
            v21 = v20;
            v22 = v20 + 1;
            v23 = &v11[v21];
          }
        }
        else
        {
          v46 = (_QWORD *)sub_186B270(0x18u);
          v11 = v46 + 1;
          *v46 = 2;
          v22 = 1;
          v23 = v11;
        }
        *v23 = v19;
        *((_DWORD *)v11 - 1) = v22;
      }
      else
      {
        v64 = v29;
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        v57 = v11;
        sub_98C750(&v57, &v64);
        v11 = v57;
      }
      v7 += 10;
      v24 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v58);
      sub_182CBA0(v24, &v61);
    }
    while ( v7 != v49 );
    v34 = a1[43];
    if ( v11 )
    {
      v35 = *((_DWORD *)v11 - 1);
      if ( v35 == 1 )
      {
        v36 = *v11;
        if ( !*(_WORD *)(*v11 + 4LL) )
          goto LABEL_41;
      }
      goto LABEL_53;
    }
  }
  else
  {
    v56 = a1[3];
    v45 = a1 + 43;
    v34 = a1[43];
    v48 = v45;
    v52 = 1;
  }
  v11 = nullptr;
LABEL_53:
  v36 = sub_15E1AF0(v34);
  if ( !v36 )
  {
    v37 = a1[44];
    if ( v37 )
      goto LABEL_42;
    goto LABEL_55;
  }
LABEL_41:
  v37 = a1[44];
  ++*(_DWORD *)(v36 + 8);
  if ( v37 )
    goto LABEL_42;
LABEL_55:
  sub_16669E0(v48);
  v37 = a1[44];
LABEL_42:
  sub_166A700(v37, a4, v52, v35, v25, v26);
  v38 = sub_15E1B70(a1[43]);
  v39 = v38;
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  sub_98B270(*a5, a5[1]);
  v40 = a1[2];
  *a5 = v39;
  v64 = 0;
  v65 = v53;
  sub_14BB8A0(v40 + 7456, v39, a5, &v64);
  v41 = v64;
  if ( v64 )
  {
    v42 = v65;
    v43 = (*(_DWORD *)(v64 + 8))-- == 1;
    if ( v43 )
      sub_15D7BC0(v42, v41);
  }
  if ( v36 )
  {
    v43 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v43 )
      sub_15D7BC0(v53, v36);
  }
  v57 = v11;
  return sub_2334C0(&v56);
}

