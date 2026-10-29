__int64 __fastcall sub_870370(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // eax
  _QWORD *v9; // rbp
  _QWORD *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r14d
  _QWORD *v17; // r15
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  bool v20; // zf
  int v21; // eax
  _QWORD *v22; // r15
  __int64 *v23; // rbp
  unsigned __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 result; // rax
  __int64 *v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  __int64 *v31; // rbx
  unsigned __int64 v32; // rbp
  __int64 v33; // rsi
  __int64 *v34; // rbx
  unsigned __int64 v35; // rbp
  __int64 v36; // rsi
  unsigned int v37; // [rsp+0h] [rbp-C8h]
  __int64 v40; // [rsp+38h] [rbp-90h]
  int v41; // [rsp+4Ch] [rbp-7Ch] BYREF
  _QWORD *v42; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v43; // [rsp+58h] [rbp-70h] BYREF
  __int64 v44; // [rsp+60h] [rbp-68h] BYREF
  _QWORD *v45; // [rsp+68h] [rbp-60h]
  __int64 v46; // [rsp+70h] [rbp-58h] BYREF
  _QWORD *v47; // [rsp+78h] [rbp-50h]
  __int64 v48; // [rsp+80h] [rbp-48h] BYREF
  _QWORD *v49; // [rsp+88h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  v46 = v5;
  v47 = nullptr;
  if ( v6 )
  {
    v7 = **(unsigned int **)(a2 + 32);
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 - 4) )
      v6 = 0;
    else
      v6 = *(_QWORD *)(v6 + 8 * v7);
  }
  v8 = sub_86BFC0((unsigned int *)a1, v6);
  v44 = v5;
  v45 = nullptr;
  sub_86BC60(a1, v8, (__int64)&v44);
  v9 = v45;
  v40 = v44;
  if ( *(_DWORD *)(a2 + 24) <= 1u )
  {
    result = sub_86FBB0((_QWORD *)a1, (unsigned int *)a2, (__int64)&v44);
    v22 = v9;
  }
  else
  {
    v37 = 1;
    v10 = nullptr;
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
      if ( v11 )
      {
        v12 = **(unsigned int **)(a2 + 8LL * v37 + 32);
        if ( (unsigned int)v12 >= *(_DWORD *)(v11 - 4) )
          v11 = 0;
        else
          v11 = *(_QWORD *)(v11 + 8 * v12);
      }
      v13 = *(unsigned int *)(a1 + 12);
      v14 = (char *)(v11 + 88);
      v15 = (unsigned int)(*(int *)(v11 + 88) >> 8);
      if ( (_DWORD)v15 == -1 )
        goto LABEL_36;
      while ( 1 )
      {
        v15 = (unsigned int)*v14;
        if ( (_DWORD)v15 == (_DWORD)v13 )
          break;
        v14 = *((char **)v14 + 1);
        if ( !v14 )
          goto LABEL_36;
      }
      v13 = (unsigned int)(*(int *)v14 >> 8);
      v16 = v13;
      if ( (_DWORD)v13 == -1 )
      {
LABEL_36:
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v11, v15, v13);
        v26 = sub_15D1F10(*(_QWORD *)v11);
        if ( (unsigned __int8)sub_1673B10(a1 + 128, v26) )
          sub_86BD80((_QWORD *)a1, v16);
      }
      v48 = v5;
      v49 = v10;
      sub_86BC60(a1, v16, (__int64)&v48);
      v17 = v47;
      v5 = v48;
      v10 = v49;
      if ( v47 )
      {
        v18 = (unsigned __int64)&v47[*((unsigned int *)v47 - 1)];
        if ( (unsigned __int64)v47 >= v18 )
          goto LABEL_22;
        do
        {
          while ( 1 )
          {
            v19 = *v17;
            if ( *v17 )
            {
              v20 = (*(_DWORD *)(v19 + 8))-- == 1;
              if ( v20 )
                break;
            }
            if ( (unsigned __int64)++v17 >= v18 )
              goto LABEL_21;
          }
          sub_15D7BC0(v46, v19);
          ++v17;
        }
        while ( (unsigned __int64)v17 < v18 );
LABEL_21:
        v17 = v47;
        if ( v47 )
LABEL_22:
          *((_DWORD *)v17 - 1) = 0;
      }
      v21 = v9 ? *((_DWORD *)v9 - 1) : 0;
      v41 = v21;
      v42 = v9;
      v20 = *(_QWORD *)(a3 + 16) == 0;
      v43 = v10;
      if ( v20 )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, int *, _QWORD **, _QWORD **, __int64 *))(a3 + 24))(a3, &v41, &v42, &v43, &v46);
      ++v37;
      v22 = v47;
      v47 = v9;
      if ( v37 >= *(_DWORD *)(a2 + 24) )
        break;
      if ( v10 )
      {
        v23 = v10;
        v24 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
        if ( (unsigned __int64)v10 < v24 )
        {
          do
          {
            while ( 1 )
            {
              v25 = *v23;
              if ( *v23 )
              {
                v20 = (*(_DWORD *)(v25 + 8))-- == 1;
                if ( v20 )
                  break;
              }
              if ( (unsigned __int64)++v23 >= v24 )
                goto LABEL_34;
            }
            sub_15D7BC0(v5, v25);
            ++v23;
          }
          while ( (unsigned __int64)v23 < v24 );
        }
LABEL_34:
        *((_DWORD *)v10 - 1) = 0;
      }
      v9 = v22;
    }
    v45 = v22;
    result = sub_86FBB0((_QWORD *)a1, (unsigned int *)a2, (__int64)&v44);
    if ( v10 )
    {
      v28 = v10;
      v29 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
      if ( (unsigned __int64)v10 < v29 )
      {
        do
        {
          while ( 1 )
          {
            v30 = *v28;
            if ( *v28 )
            {
              v20 = (*(_DWORD *)(v30 + 8))-- == 1;
              if ( v20 )
                break;
            }
            if ( (unsigned __int64)++v28 >= v29 )
              goto LABEL_47;
          }
          ++v28;
          sub_15D7BC0(v5, v30);
        }
        while ( (unsigned __int64)v28 < v29 );
      }
LABEL_47:
      result = sub_186B220(v10 - 1);
    }
  }
  v31 = v47;
  if ( v47 )
  {
    result = *((unsigned int *)v47 - 1);
    v32 = (unsigned __int64)&v47[result];
    if ( (unsigned __int64)v47 >= v32 )
      goto LABEL_56;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v20 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v20 )
            break;
        }
        if ( (unsigned __int64)++v31 >= v32 )
          goto LABEL_55;
      }
      result = sub_15D7BC0(v46, v33);
      ++v31;
    }
    while ( (unsigned __int64)v31 < v32 );
LABEL_55:
    v31 = v47;
    if ( v47 )
LABEL_56:
      result = sub_186B220(v31 - 1);
  }
  if ( v22 )
  {
    v34 = v22;
    v35 = (unsigned __int64)&v22[*((unsigned int *)v22 - 1)];
    if ( (unsigned __int64)v22 < v35 )
    {
      do
      {
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 )
          {
            v20 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v20 )
              break;
          }
          if ( (unsigned __int64)++v34 >= v35 )
            return sub_186B220(v22 - 1);
        }
        ++v34;
        sub_15D7BC0(v40, v36);
      }
      while ( (unsigned __int64)v34 < v35 );
    }
    return sub_186B220(v22 - 1);
  }
  return result;
}

