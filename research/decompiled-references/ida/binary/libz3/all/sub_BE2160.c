unsigned __int64 __fastcall sub_BE2160(__int64 a1)
{
  char **v1; // rbp
  char **v2; // rbp
  char **exception; // rbp
  __int64 v5; // rax
  unsigned int v6; // ebp
  int v7; // r12d
  __int64 v8; // rcx
  unsigned __int64 result; // rax
  _DWORD *v10; // rdx
  _DWORD *v11; // rdi
  unsigned int v12; // r13d
  size_t v13; // rsi
  unsigned int *v14; // rax
  unsigned int v15; // eax
  _QWORD *v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r14
  unsigned int v19; // r15d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // r14
  void *v23; // rax
  void *v24; // r12
  __int64 v25; // r15
  __int64 v26; // r13
  __int64 *v27; // rbp
  unsigned int v28; // eax
  _DWORD *v29; // rax
  int v30; // esi
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rax
  int *v34; // rsi
  int v35; // edx
  int v36; // edi
  int v37; // edx
  int v38; // r8d
  unsigned int v39; // r15d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // r14
  _QWORD *v43; // rdi
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // eax
  _QWORD *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r9
  int *v51; // rdx
  int v52; // eax
  __int64 v53; // r8
  int v54; // esi
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 *v57; // r13
  __int64 **v58; // rax
  __int64 v59; // [rsp+0h] [rbp-78h]
  _DWORD *v60; // [rsp+8h] [rbp-70h]
  __int64 v61[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    v7 = v6;
  }
  else
  {
    v7 = 0;
    v6 = 0;
  }
  v8 = *(_QWORD *)(a1 + 184);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  result = *(_QWORD *)(a1 + 192);
  v10 = (_DWORD *)result;
  if ( !result )
  {
    v11 = *(_DWORD **)(a1 + 200);
    if ( v11 )
    {
LABEL_7:
      *(v11 - 1) = 0;
      if ( !v6 )
      {
        if ( v8 )
        {
          *(_DWORD *)(v8 - 4) = 0;
          v10 = (_DWORD *)result;
          if ( !result )
            return result;
        }
        else if ( !result )
        {
          return result;
        }
        goto LABEL_60;
      }
LABEL_12:
      while ( 1 )
      {
        v15 = *(v11 - 2);
        if ( v15 >= v6 )
          break;
        v12 = (3 * v15 + 1) >> 1;
        v13 = 4 * v12 + 8;
        if ( 4 * v15 + 8 >= (unsigned int)v13 || v15 >= v12 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v61, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v61);
          sub_233E40((__int64)v61);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v14 = (unsigned int *)sub_186B300(v11 - 2, v13);
        v11 = v14 + 2;
        *v14 = v12;
        *(_QWORD *)(a1 + 200) = v14 + 2;
      }
      *(v11 - 1) = v6;
      result = (unsigned __int64)memset(v11, 255, 4LL * v6);
      v16 = *(_QWORD **)(a1 + 184);
      if ( v16 )
      {
        v17 = *((unsigned int *)v16 - 1);
        if ( (unsigned int)v17 >= v6 )
        {
          v10 = *(_DWORD **)(a1 + 192);
          *((_DWORD *)v16 - 1) = v6;
          if ( v10 )
            goto LABEL_16;
LABEL_46:
          v18 = 0;
          v44 = (_QWORD *)sub_186B270(0x18u);
          v10 = v44 + 1;
          *v44 = 2;
          *(_QWORD *)(a1 + 192) = v44 + 1;
          goto LABEL_21;
        }
      }
      else
      {
        v17 = 0;
        v45 = (_QWORD *)sub_186B270(0x18u);
        *v45 = 2;
        v16 = v45 + 1;
        *(_QWORD *)(a1 + 184) = v45 + 1;
      }
      while ( 1 )
      {
        result = *((unsigned int *)v16 - 2);
        if ( (unsigned int)result >= v6 )
          break;
        v39 = (unsigned int)(3 * result + 1) >> 1;
        v40 = 8 * v39 + 8;
        if ( 8 * (int)result + 8 >= (unsigned int)v40 || (unsigned int)result >= v39 )
        {
          v1 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v61, "Overflow encountered when expanding vector");
          *v1 = (char *)off_1C63128;
          sub_2333C0(v1 + 1, v61);
          sub_233E40((__int64)v61);
          __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v16 - 1, v40);
        v16 = v41 + 2;
        *v41 = v39;
        *(_QWORD *)(a1 + 184) = v41 + 2;
      }
      v42 = v17;
      *((_DWORD *)v16 - 1) = v6;
      v43 = &v16[v42];
      if ( v42 == v6 )
      {
        v10 = *(_DWORD **)(a1 + 192);
        if ( !v10 )
          goto LABEL_46;
      }
      else
      {
        result = (unsigned __int64)memset(v43, 0, 8LL * v6 - v42 * 8);
        v10 = *(_DWORD **)(a1 + 192);
        if ( !v10 )
          goto LABEL_46;
      }
LABEL_16:
      v18 = (unsigned int)*(v10 - 1);
      if ( (unsigned int)v18 >= v6 )
        goto LABEL_60;
LABEL_21:
      while ( 1 )
      {
        result = (unsigned int)*(v10 - 2);
        if ( (unsigned int)result >= v6 )
          break;
        v19 = (unsigned int)(3 * result + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * (int)result + 8 >= (unsigned int)v20 || (unsigned int)result >= v19 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v61, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v61);
          sub_233E40((__int64)v61);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v10 - 2, v20);
        v10 = v21 + 2;
        *v21 = v19;
        *(_QWORD *)(a1 + 192) = v21 + 2;
      }
      v22 = 2 * v18;
      *(v10 - 1) = v6;
      if ( v22 != 2LL * v6 )
        result = (unsigned __int64)memset(&v10[v22], 0, 8LL * v6 - v22 * 4);
      goto LABEL_24;
    }
    if ( v6 )
    {
LABEL_53:
      v48 = (_QWORD *)sub_186B270(0x10u);
      v11 = v48 + 1;
      *v48 = 2;
      *(_QWORD *)(a1 + 200) = v48 + 1;
      goto LABEL_12;
    }
    if ( !v8 )
      return result;
LABEL_59:
    *(_DWORD *)(v8 - 4) = 0;
    if ( !result )
      return result;
    goto LABEL_60;
  }
  v11 = *(_DWORD **)(a1 + 200);
  *(_DWORD *)(result - 4) = 0;
  if ( v11 )
    goto LABEL_7;
  if ( v6 )
    goto LABEL_53;
  if ( v8 )
    goto LABEL_59;
LABEL_60:
  *(v10 - 1) = v6;
LABEL_24:
  if ( !*(_BYTE *)(a1 + 248) && v7 > 0 )
  {
    v23 = (void *)v7;
    v24 = nullptr;
    v60 = v23;
    do
    {
      v25 = *(_QWORD *)(a1 + 16);
      v26 = 8LL * (_QWORD)v24;
      v27 = *(__int64 **)(*(_QWORD *)(a1 + 32) + 8LL * (_QWORD)v24);
      v59 = *v27;
      if ( !(unsigned int)sub_8E7030(v25)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v25 + 7488) + 56LL))(
             *(_QWORD *)(v25 + 7488),
             v59) )
      {
        v28 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (_QWORD)v24) + 8LL), *(_DWORD *)(a1 + 8));
        sub_BDF810(a1, (unsigned int)v24, v28);
        v29 = *(_DWORD **)(*(_QWORD *)(*v27 + 16) + 24LL);
        if ( v29 )
        {
          v30 = *(_DWORD *)(a1 + 8);
          if ( v30 == *v29 )
          {
            v31 = v29[1];
            if ( v31 )
            {
              if ( v31 == 2 )
              {
                v49 = *(_QWORD *)(a1 + 200);
                v50 = v27[14];
                v51 = (int *)(v49 + 4LL * (_QWORD)v24);
                v52 = *v51;
                if ( *v51 >= 0 )
                {
                  v53 = v52;
                  v54 = *(_DWORD *)(v49 + 4LL * v52);
                  if ( v54 < -1 )
                  {
                    v26 = 8LL * v52;
                  }
                  else
                  {
                    if ( v54 == -1 )
                    {
                      v56 = v52;
                    }
                    else
                    {
                      do
                      {
                        v55 = v54;
                        v54 = *(_DWORD *)(v49 + 4LL * v54);
                        v56 = v55;
                      }
                      while ( v54 >= 0 );
                    }
                    while ( 1 )
                    {
                      *v51 = v56;
                      v51 = (int *)(v49 + 4 * v53);
                      if ( *v51 < 0 )
                        break;
                      v53 = *v51;
                    }
                    v26 = 8 * v56;
                  }
                }
                v57 = (__int64 *)(*(_QWORD *)(a1 + 184) + v26);
                if ( !*v57 )
                  *v57 = v50;
              }
              else if ( v31 == 4 )
              {
                LODWORD(v33) = sub_B39350(v27[14], v30);
                v32 = *(_QWORD *)(a1 + 200);
                v33 = (unsigned int)v33;
                v34 = (int *)(v32 + 4LL * (unsigned int)v33);
                v35 = *v34;
                if ( *v34 >= 0 )
                {
                  v33 = v35;
                  v36 = *(_DWORD *)(v32 + 4LL * v35);
                  if ( v36 >= -1 )
                  {
                    if ( v36 == -1 )
                    {
                      v38 = *v34;
                    }
                    else
                    {
                      do
                      {
                        v37 = v36;
                        v36 = *(_DWORD *)(v32 + 4LL * v36);
                        v38 = v37;
                      }
                      while ( v36 >= 0 );
                    }
                    while ( 1 )
                    {
                      *v34 = v38;
                      v34 = (int *)(v32 + 4 * v33);
                      if ( *v34 < 0 )
                        break;
                      v33 = *v34;
                    }
                    v33 = v38;
                  }
                }
                v58 = (__int64 **)(*(_QWORD *)(a1 + 184) + 8 * v33);
                if ( !*v58 )
                  *v58 = v27;
              }
            }
            else
            {
              v46 = sub_B39350(v27[14], v30);
              v47 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v46) + 8LL), *(_DWORD *)(a1 + 8));
              sub_BDF810(a1, (unsigned int)v24, v47);
            }
          }
        }
      }
      result = (unsigned __int64)v60;
      v24 = (char *)v24 + 1;
    }
    while ( v24 != v60 );
  }
  return result;
}

