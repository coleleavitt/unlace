__int64 __fastcall sub_7A3040(__int64 a1, unsigned int a2, _DWORD *a3, __int64 *a4)
{
  char **exception; // r14
  char **v5; // r14
  __int64 result; // rax
  __int64 v9; // r12
  _QWORD *v11; // rbx
  _QWORD *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  _DWORD *v16; // r12
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 *v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  size_t v25; // rsi
  unsigned int *v26; // rax
  _DWORD *v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // r13
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 *v32; // rbp
  __int64 *v33; // r15
  int *v34; // rax
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rax
  int *v38; // rax
  int v39; // ecx
  unsigned int v40; // r8d
  size_t v41; // rsi
  unsigned int *v42; // rax
  _DWORD *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // r15
  __int64 v46; // r12
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rbp
  _QWORD *v50; // rax
  unsigned int v51; // [rsp+0h] [rbp-80h]
  unsigned int v52; // [rsp+0h] [rbp-80h]
  int v53; // [rsp+0h] [rbp-80h]
  int v54; // [rsp+4h] [rbp-7Ch]
  _QWORD v55[2]; // [rsp+18h] [rbp-68h] BYREF
  __int64 v56; // [rsp+28h] [rbp-58h] BYREF
  __int64 v57; // [rsp+30h] [rbp-50h]

  result = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(result + 368) )
  {
    v9 = a2;
    v11 = *(_QWORD **)(a1 + 8312);
    if ( v11 )
    {
      v12 = &v11[*((unsigned int *)v11 - 1)];
      if ( v11 >= v12 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v13 = *v11;
          if ( *v11 )
          {
            v14 = *(_QWORD *)(a1 + 8304);
            v15 = (*(_DWORD *)(v13 + 8))-- == 1;
            if ( v15 )
              break;
          }
          if ( ++v11 >= v12 )
            goto LABEL_9;
        }
        sub_15D7BC0(v14, v13);
        ++v11;
      }
      while ( v11 < v12 );
LABEL_9:
      v11 = *(_QWORD **)(a1 + 8312);
      if ( v11 )
LABEL_10:
        *((_DWORD *)v11 - 1) = 0;
    }
    if ( (_DWORD)v9 )
    {
      v16 = &a3[v9];
      while ( 1 )
      {
        v20 = *(_QWORD *)(a1 + 2328);
        v21 = *a3 >> 1;
        if ( !v20 )
          goto LABEL_20;
        if ( (unsigned int)v21 < *(_DWORD *)(v20 - 4) )
          break;
        v22 = *(__int64 **)(a1 + 8312);
        v20 = 0;
        if ( !v22 )
        {
LABEL_31:
          v30 = (_QWORD *)sub_186B270(0x18u);
          v22 = v30 + 1;
          *v30 = 2;
          v18 = 1;
          *(_QWORD *)(a1 + 8312) = v22;
          v19 = v22;
          goto LABEL_14;
        }
LABEL_21:
        v23 = *((_DWORD *)v22 - 1);
        if ( v23 == *((_DWORD *)v22 - 2) )
        {
          v24 = (3 * v23 + 1) >> 1;
          v25 = 8 * v24 + 8;
          if ( 8 * v23 + 8 >= (unsigned int)v25 || v23 >= v24 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v56, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v56);
            sub_233E40((__int64)&v56);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v51 = (3 * v23 + 1) >> 1;
          v26 = (unsigned int *)sub_186B300(v22 - 1, v25);
          v27 = v26 + 2;
          ++a3;
          *(_QWORD *)(a1 + 8312) = v26 + 2;
          *v26 = v51;
          LODWORD(v26) = v26[1];
          *(_QWORD *)&v27[2 * (unsigned int)v26] = v20;
          *(v27 - 1) = (_DWORD)v26 + 1;
          if ( a3 == v16 )
            goto LABEL_25;
        }
        else
        {
          v17 = v23;
          v18 = v23 + 1;
          v19 = &v22[v17];
LABEL_14:
          ++a3;
          *v19 = v20;
          *((_DWORD *)v22 - 1) = v18;
          if ( a3 == v16 )
            goto LABEL_25;
        }
      }
      v20 = *(_QWORD *)(v20 + 8 * v21);
      if ( v20 )
      {
        if ( (*a3 & 1) == 0 || (v20 = sub_15EC2C0(*(_QWORD *)(a1 + 144), v20)) != 0 )
          ++*(_DWORD *)(v20 + 8);
      }
LABEL_20:
      v22 = *(__int64 **)(a1 + 8312);
      if ( !v22 )
        goto LABEL_31;
      goto LABEL_21;
    }
LABEL_25:
    v56 = *a4;
    v57 = a4[1];
    sub_7A0B20(v55, a1, &v56);
    result = *(unsigned int *)a4;
    v28 = v55[0];
    v29 = v55[1];
    if ( (unsigned int)(result - 1) <= 1 )
    {
      result = sub_7F7540(a1 + 3144, a1 + 8304, v55[0]);
    }
    else if ( !(_DWORD)result && *(_BYTE *)(a1 + 8160) )
    {
      v31 = *(_QWORD **)(a1 + 8152);
      if ( v31 )
        *((_DWORD *)v31 - 1) = 0;
      v32 = *(__int64 **)(a1 + 8312);
      if ( v32 )
      {
        v33 = &v32[*((unsigned int *)v32 - 1)];
        if ( v32 != v33 )
        {
          v34 = (int *)*v32;
          v35 = 0;
          if ( !*(_WORD *)(*v32 + 4) )
            goto LABEL_52;
LABEL_43:
          v36 = v35 + 2 * *v34;
          if ( v31 )
          {
            v37 = *((unsigned int *)v31 - 1);
            if ( (_DWORD)v37 == *((_DWORD *)v31 - 2) )
              goto LABEL_49;
LABEL_45:
            v38 = (int *)v31 + v37;
            goto LABEL_46;
          }
          v53 = v36;
          v50 = (_QWORD *)sub_186B270(0x10u);
          v31 = v50 + 1;
          *v50 = 2;
          v36 = v53;
          *(_QWORD *)(a1 + 8152) = v50 + 1;
          v38 = (int *)(v50 + 1);
LABEL_46:
          while ( 1 )
          {
            ++v32;
            *v38 = v36;
            ++*((_DWORD *)v31 - 1);
            if ( v32 == v33 )
              break;
            v34 = (int *)*v32;
            if ( !*(_WORD *)(*v32 + 4) )
            {
LABEL_52:
              LOBYTE(v35) = 0;
              do
              {
                v43 = *(_DWORD **)(*((_QWORD *)v34 + 2) + 24LL);
                if ( !v43 )
                  break;
                if ( *v43 )
                  break;
                if ( v43[1] != 8 )
                  break;
                if ( v34[6] != 1 )
                  break;
                v34 = *((int **)v34 + 4);
                LOBYTE(v35) = v35 ^ 1;
              }
              while ( !*((_WORD *)v34 + 2) );
              v35 = (unsigned __int8)v35;
              goto LABEL_43;
            }
            v39 = *v34;
            v37 = *((unsigned int *)v31 - 1);
            v36 = 2 * v39;
            if ( (_DWORD)v37 != *((_DWORD *)v31 - 2) )
              goto LABEL_45;
LABEL_49:
            v40 = (unsigned int)(3 * v37 + 1) >> 1;
            v41 = 4 * v40 + 8;
            if ( 4 * (int)v37 + 8 >= (unsigned int)v41 || (unsigned int)v37 >= v40 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v56, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, &v56);
              sub_233E40((__int64)&v56);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v54 = v36;
            v52 = (unsigned int)(3 * v37 + 1) >> 1;
            v42 = (unsigned int *)sub_186B300(v31 - 1, v41);
            v31 = v42 + 2;
            v36 = v54;
            *(_QWORD *)(a1 + 8152) = v42 + 2;
            *v42 = v52;
            v38 = (int *)&v42[v42[1] + 2];
          }
        }
      }
      v57 = 0;
      v56 = 0xFFFFFFFF00000000LL;
      result = sub_11F1890(a1 + 7480, a1 + 8152, &v56);
      if ( *(_BYTE *)(a1 + 8160) )
      {
        sub_7F5740(a1 + 3144);
        v44 = *(_QWORD *)(a1 + 8312);
        v45 = *(_QWORD *)(a1 + 3200);
        v46 = *(_QWORD *)(a1 + 8304);
        if ( v44 )
          v47 = *(unsigned int *)(v44 - 4);
        else
          v47 = 0;
        v48 = sub_15EC240(*(_QWORD *)(a1 + 8304), v47);
        v49 = v48;
        if ( v48 )
        {
          ++*(_DWORD *)(v48 + 8);
          result = sub_E5EBF0(v45, v48);
          v15 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v15 )
            result = sub_15D7BC0(v46, v49);
        }
        else
        {
          result = sub_E5EBF0(v45, 0);
        }
      }
    }
    if ( v28 )
    {
      v15 = (*(_DWORD *)(v28 + 8))-- == 1;
      if ( v15 )
        return sub_15D7BC0(v29, v28);
    }
  }
  return result;
}

