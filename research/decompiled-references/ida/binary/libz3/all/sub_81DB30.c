__int64 __fastcall sub_81DB30(__int64 a1, __int64 *a2, unsigned int a3)
{
  char **exception; // rbp
  char **v4; // rbp
  __int64 v5; // r15
  __int64 v8; // r14
  _OWORD *v9; // rax
  _QWORD *v10; // rdx
  _OWORD *v11; // r12
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rcx
  _QWORD *v16; // r12
  __int64 v17; // r15
  __int64 result; // rax
  unsigned int **v19; // rdx
  unsigned int ***v20; // r14
  unsigned int ***v21; // r13
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // r15
  unsigned int v27; // eax
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int *v30; // rax
  _DWORD *v31; // rdx
  __int64 *v32; // rcx
  _QWORD *v33; // rax
  unsigned int v34; // ecx
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  unsigned int v39; // [rsp+Ch] [rbp-6Ch]
  unsigned int v40; // [rsp+Ch] [rbp-6Ch]
  __int64 v41[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a3;
  v8 = sub_7CC270(a2[10], *(_QWORD **)(a1 + 80), *(unsigned int ***)(a2[11] + 8LL * a3));
  if ( (_DWORD)v5 != (unsigned int)sub_7E69A0(a1, v8) )
  {
    sub_1872CE0("");
    sub_1873130(114, 44);
  }
  v9 = (_OWORD *)sub_186B270(0x10u);
  v10 = *(_QWORD **)(a1 + 312);
  v11 = v9;
  *v9 = 0;
  if ( v10 )
  {
    v12 = *((_DWORD *)v10 - 1);
    if ( v12 == *((_DWORD *)v10 - 2) )
    {
      v34 = (3 * v12 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v35 || v12 >= v34 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v41, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v41);
        sub_233E40((__int64)v41);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (3 * v12 + 1) >> 1;
      v36 = (unsigned int *)sub_186B300(v10 - 1, v35);
      v10 = v36 + 2;
      *v36 = v40;
      v37 = v36[1];
      *(_QWORD *)(a1 + 312) = v36 + 2;
      LODWORD(v36) = v37;
      v15 = &v10[v37];
      v14 = (_DWORD)v36 + 1;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = &v10[v13];
    }
  }
  else
  {
    v38 = (_QWORD *)sub_186B270(0x18u);
    v10 = v38 + 1;
    *v38 = 2;
    v14 = 1;
    *(_QWORD *)(a1 + 312) = v10;
    v15 = v10;
  }
  *v15 = v11;
  v16 = (_QWORD *)v10[v5];
  *((_DWORD *)v10 - 1) = v14;
  v17 = *(_QWORD *)(a2[39] + 8 * v5);
  result = sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, v8, a3, *(unsigned int *)(a1 + 12));
  v19 = *(unsigned int ***)(v17 + 8);
  if ( v19 && !v16[1] )
  {
    result = sub_7CC270(a2[10], *(_QWORD **)(a1 + 80), v19);
    v16[1] = result;
  }
  v20 = *(unsigned int ****)v17;
  if ( *(_QWORD *)v17 )
  {
    result = *((unsigned int *)v20 - 1);
    v21 = &v20[result];
    if ( v21 != v20 )
    {
      while ( 1 )
      {
        v24 = sub_7CC270(a2[10], *(_QWORD **)(a1 + 80), *v20);
        v25 = (_QWORD *)*v16;
        v26 = v24;
        if ( !*v16 )
          break;
        v27 = *((_DWORD *)v25 - 1);
        if ( v27 == *((_DWORD *)v25 - 2) )
        {
          v28 = (3 * v27 + 1) >> 1;
          v29 = 8 * v28 + 8;
          if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v41, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v41);
            sub_233E40((__int64)v41);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v39 = (3 * v27 + 1) >> 1;
          ++v20;
          v30 = (unsigned int *)sub_186B300(v25 - 1, v29);
          v31 = v30 + 2;
          *v16 = v30 + 2;
          *v30 = v39;
          LODWORD(v30) = v30[1];
          v32 = (__int64 *)&v31[2 * (unsigned int)v30];
          result = (unsigned int)((_DWORD)v30 + 1);
          *v32 = v26;
          *(v31 - 1) = result;
          if ( v21 == v20 )
            return result;
        }
        else
        {
          v22 = v27;
          result = v27 + 1;
          v23 = &v25[v22];
LABEL_13:
          ++v20;
          *v23 = v26;
          *((_DWORD *)v25 - 1) = result;
          if ( v21 == v20 )
            return result;
        }
      }
      v33 = (_QWORD *)sub_186B270(0x18u);
      v25 = v33 + 1;
      *v33 = 2;
      result = 1;
      *v16 = v25;
      v23 = v25;
      goto LABEL_13;
    }
  }
  return result;
}

