__int64 __fastcall sub_B4A4F0(__int64 a1, unsigned int a2, double *a3)
{
  char **exception; // rbp
  __int64 v6; // rax
  unsigned int v7; // r15d
  __int64 *v8; // rbp
  __int64 v9; // r14
  unsigned int v10; // eax
  _QWORD *v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // r14
  unsigned int v14; // r8d
  size_t v15; // rsi
  unsigned int v16; // r14d
  unsigned int *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // r14
  __int64 result; // rax
  int v26; // ebx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  _QWORD *v31; // rsi
  int v32; // edx
  __int64 v33; // r14
  unsigned int v34; // eax
  __int64 v35; // rdi
  __int64 *v36; // rdi
  _QWORD *v37; // rax
  __int64 v38; // rsi
  unsigned int v39; // ebx
  unsigned int *v40; // rax
  __int64 v41; // rdi
  _QWORD *v42; // rax
  _QWORD *v43; // rsi
  __int64 v44; // [rsp+0h] [rbp-78h]
  int v45; // [rsp+0h] [rbp-78h]
  unsigned int v46; // [rsp+Ch] [rbp-6Ch]
  __int64 v47[11]; // [rsp+20h] [rbp-58h] BYREF

  do
  {
    v6 = a2;
    v7 = a2;
    a2 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4LL * a2);
  }
  while ( v7 != a2 );
  v8 = *(__int64 **)(*(_QWORD *)(a1 + 232) + 8 * v6);
  v9 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
  if ( *v8 && *(_DWORD *)(*v8 - 4) )
  {
    LODWORD(v44) = a1 + 56;
    v23 = sub_15F0DD0(a1 + 56, v9);
    goto LABEL_15;
  }
  v44 = a1 + 56;
  v10 = sub_15F10D0(a1 + 56, *(_QWORD *)(v9 + 48));
  v11 = (_QWORD *)*v8;
  v12 = v10;
  if ( *v8 )
  {
    v46 = *((_DWORD *)v11 - 1);
    if ( v46 < v10 )
      goto LABEL_11;
    *((_DWORD *)v11 - 1) = v10;
  }
  else if ( v10 )
  {
    v37 = (_QWORD *)sub_186B270(0x18u);
    v46 = 0;
    v11 = v37 + 1;
    *v37 = 2;
    *v8 = (__int64)(v37 + 1);
LABEL_11:
    while ( 1 )
    {
      v18 = *((_DWORD *)v11 - 2);
      if ( v18 >= v12 )
        break;
      v14 = (3 * v18 + 1) >> 1;
      v15 = 8 * v14 + 8;
      v16 = v14;
      if ( 8 * v18 + 8 >= (unsigned int)v15 || v18 >= v14 )
        goto LABEL_34;
      v17 = (unsigned int *)sub_186B300(v11 - 1, v15);
      v11 = v17 + 2;
      *v8 = (__int64)(v17 + 2);
      *v17 = v16;
    }
    v19 = *(_QWORD *)a3;
    *((_DWORD *)v11 - 1) = v12;
    v20 = 8LL * v46;
    v13 = *(_QWORD *)(v19 + 16);
    v21 = &v11[(unsigned __int64)v20 / 8];
    v22 = 8LL * v12;
    if ( v20 != v22 )
      memset(v21, 0, v22 - v20);
    goto LABEL_14;
  }
  v13 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
LABEL_14:
  v23 = sub_15F0DD0(v44, v13);
LABEL_15:
  v24 = v23;
  result = *v8;
  v26 = v24;
  if ( !*(_QWORD *)(*v8 + 8 * v24) )
  {
    result = sub_8E81B0(*(_QWORD **)(a1 + 16), a3);
    if ( (_DWORD)result != 1 )
    {
      if ( (_DWORD)result == -1 && v8[1] )
      {
        result = sub_15F0BB0(v44, *(_QWORD *)(*(_QWORD *)a3 + 16LL), result, v27, v28, v29);
        v38 = v8[1];
        if ( *(_QWORD *)(*(_QWORD *)v38 + 16LL) == result )
          return sub_B4A170(a1, v38, a3);
      }
      else
      {
        v45 = result;
        *(_QWORD *)(*v8 + 8 * v24) = a3;
        v30 = sub_180C100(a1 + 312, 24);
        v31 = *(_QWORD **)(a1 + 296);
        v32 = v45;
        v33 = v30;
        *(_QWORD *)v30 = off_1C573B8;
        *(_QWORD *)(v30 + 8) = v8;
        *(_DWORD *)(v30 + 16) = v26;
        if ( v31 )
        {
          v34 = *((_DWORD *)v31 - 1);
          if ( v34 == *((_DWORD *)v31 - 2) )
          {
            v39 = (3 * v34 + 1) >> 1;
            if ( 8 * v34 + 8 >= 8 * v39 + 8 || v34 >= v39 )
            {
LABEL_34:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v47, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v47);
              sub_233E40((__int64)v47);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v40 = (unsigned int *)sub_186B300(v31 - 1, 8 * v39 + 8);
            v32 = v45;
            v41 = v40[1];
            v31 = v40 + 2;
            *v40 = v39;
            *(_QWORD *)(a1 + 296) = v40 + 2;
            LODWORD(v40) = v41;
            v36 = &v31[v41];
            result = (unsigned int)((_DWORD)v40 + 1);
          }
          else
          {
            v35 = v34;
            result = v34 + 1;
            v36 = &v31[v35];
          }
        }
        else
        {
          v42 = (_QWORD *)sub_186B270(0x18u);
          v32 = v45;
          v43 = v42;
          *v42 = 2;
          result = 1;
          v31 = v43 + 1;
          *(_QWORD *)(a1 + 296) = v31;
          v36 = v31;
        }
        *v36 = v33;
        *((_DWORD *)v31 - 1) = result;
        if ( v32 == -1 )
          return sub_B4A7F0(a1, v7, a3);
      }
    }
  }
  return result;
}

