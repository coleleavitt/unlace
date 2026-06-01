void __fastcall sub_C82170(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // rax
  int v8; // edi
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rdx
  void *v17; // r15
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  _BOOL4 v23; // edx
  _DWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rax
  int v29; // edi
  __int64 *v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 *v33; // rsi
  __int64 v34; // rdx
  __int64 *v35; // r8
  __int64 *i; // rax
  __int64 v37; // rdx
  void *v38; // r13
  __int64 v39; // rbp
  __int64 v40; // rax
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  _BOOL4 v44; // edx
  _DWORD *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  void *v51; // rbx
  void *v52; // r15
  _Unwind_Exception *v53; // [rsp+0h] [rbp-78h]
  int v54; // [rsp+8h] [rbp-70h]
  _BOOL4 v55; // [rsp+Ch] [rbp-6Ch]
  _BOOL4 v56; // [rsp+Ch] [rbp-6Ch]
  int v57; // [rsp+10h] [rbp-68h]
  __int64 v58; // [rsp+18h] [rbp-60h] BYREF
  __int64 v59; // [rsp+20h] [rbp-58h]
  __int64 v60; // [rsp+28h] [rbp-50h] BYREF
  __int64 v61; // [rsp+30h] [rbp-48h]
  char v62; // [rsp+38h] [rbp-40h]

  if ( !*(_WORD *)(a2 + 4) && !*(_DWORD *)(a2 + 24) )
  {
    v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( (!v4 || *v4 == -1)
      && ((v5 = *(_DWORD **)(sub_15D1F10(a2) + 24)) != nullptr && *v5 == 5 && v5[1] == 1
       || (v6 = *(_DWORD **)(sub_15D1F10(a2) + 24)) != nullptr && *v6 == 5 && !v6[1]) )
    {
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_DWORD *)(a2 + 12);
      v57 = a2;
      v58 = 0;
      v60 = 1;
      v9 = *(__int64 **)(v7 + 16);
      v10 = *(unsigned int *)(v7 + 24);
      v62 = 0;
      v59 = 0;
      v61 = 0;
      v11 = 48LL * (v8 & (unsigned int)(v10 - 1));
      v12 = 48 * v10;
      v13 = &v9[(unsigned __int64)v11 / 8];
      v14 = &v9[6 * v10];
      v15 = &v9[(unsigned __int64)v11 / 8];
      if ( v11 != v12 )
      {
        do
        {
          v16 = *v15;
          if ( (unsigned __int64)*v15 > 1 )
          {
            if ( *(_DWORD *)(v16 + 12) == v8 && a2 == v16 )
            {
LABEL_57:
              v52 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v58);
              sub_182CBA0(v52, &v60);
              goto LABEL_25;
            }
          }
          else if ( !v16 )
          {
            goto LABEL_19;
          }
          v15 += 6;
        }
        while ( v14 != v15 );
      }
      for ( ; v13 != v9; v9 += 6 )
      {
        v49 = *v9;
        if ( (unsigned __int64)*v9 > 1 )
        {
          if ( *(_DWORD *)(v49 + 12) == v8 && a2 == v49 )
            goto LABEL_57;
        }
        else if ( !v49 )
        {
          break;
        }
      }
LABEL_19:
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v58);
      sub_182CBA0(v17, &v60);
      v18 = *(_QWORD *)(a1 + 24);
      v19 = sub_15D1F10(a2);
      v23 = 0;
      v24 = *(_DWORD **)(v19 + 24);
      if ( v24 && *v24 == 5 )
        v23 = v24[1] == 1;
      v25 = *(_QWORD *)(a1 + 8);
      v26 = *(_QWORD *)(a1 + 40);
      if ( !v25 )
      {
        v55 = v23;
        v53 = *(_Unwind_Exception **)(a1 + 40);
        sub_16669E0(a1);
        v25 = *(_QWORD *)(a1 + 8);
        v23 = v55;
      }
      sub_166A700(v25, v26, v23, v20, v21, v22);
      v27 = sub_15E1B70(*(_QWORD *)a1);
      sub_EDBA20(v18, v27, 0, v53, v54, v57, v58, v59);
      ++*(_DWORD *)(a1 + 48);
LABEL_25:
      v28 = *(_QWORD *)(a1 + 16);
      v29 = *(_DWORD *)(a2 + 12);
      v58 = 0;
      v60 = 1;
      v30 = *(__int64 **)(v28 + 40);
      v31 = *(unsigned int *)(v28 + 48);
      v62 = 0;
      v59 = 0;
      v61 = 0;
      v32 = v31 - 1;
      v31 *= 48;
      v33 = (__int64 *)((char *)v30 + v31);
      v34 = 48LL * (v29 & v32);
      v35 = &v30[(unsigned __int64)v34 / 8];
      if ( v34 != v31 )
      {
        for ( i = &v30[(unsigned __int64)v34 / 8]; v33 != i; i += 6 )
        {
          v37 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v37 + 12) == v29 && a2 == v37 )
            {
LABEL_56:
              v51 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v58);
              sub_182CBA0(v51, &v60);
              return;
            }
          }
          else if ( !v37 )
          {
            goto LABEL_32;
          }
        }
      }
      for ( ; v35 != v30; v30 += 6 )
      {
        v50 = *v30;
        if ( (unsigned __int64)*v30 > 1 )
        {
          if ( *(_DWORD *)(v50 + 12) == v29 && a2 == v50 )
            goto LABEL_56;
        }
        else if ( !v50 )
        {
          break;
        }
      }
LABEL_32:
      v38 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v58);
      sub_182CBA0(v38, &v60);
      v39 = *(_QWORD *)(a1 + 24);
      v40 = sub_15D1F10(a2);
      v44 = 0;
      v45 = *(_DWORD **)(v40 + 24);
      if ( v45 && *v45 == 5 )
        v44 = v45[1] == 1;
      v46 = *(_QWORD *)(a1 + 8);
      v47 = *(_QWORD *)(a1 + 32);
      if ( !v46 )
      {
        v56 = v44;
        v53 = *(_Unwind_Exception **)(a1 + 32);
        sub_16669E0(a1);
        v46 = *(_QWORD *)(a1 + 8);
        v44 = v56;
      }
      sub_166A700(v46, v47, v44, v41, v42, v43);
      v48 = sub_15E1B70(*(_QWORD *)a1);
      sub_EDBA20(v39, v48, 0, v53, v54, a2, v58, v59);
      ++*(_DWORD *)(a1 + 48);
    }
  }
}

