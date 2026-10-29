__int64 __fastcall sub_AB9E50(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // r12
  unsigned int *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  int v14; // ecx
  __int64 result; // rax
  __int64 v16; // r14
  __int64 v17; // rdi
  _QWORD *v18; // rbx
  __int64 v19; // rbp
  _QWORD *v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // r14
  __int64 v28[2]; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+20h] [rbp-48h]

  v8 = (_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL * a2);
  v9 = (_QWORD *)*v8;
  if ( !*v8 )
  {
    LODWORD(v10) = 0;
    v25 = (_QWORD *)sub_186B270(0x10u);
    v9 = v25 + 1;
    *v25 = 2;
    *v8 = v25 + 1;
    v11 = (unsigned int *)(v25 + 1);
LABEL_3:
    *v11 = a3;
    ++*((_DWORD *)v9 - 1);
    v12 = a3 >> 1;
    if ( v12 )
      goto LABEL_4;
    return (__int64)sub_AB9200(a1, a2, v10);
  }
  v10 = *((unsigned int *)v9 - 1);
  v11 = (unsigned int *)v9 + v10;
  if ( (_DWORD)v10 != *((_DWORD *)v9 - 2) )
    goto LABEL_3;
  v22 = (unsigned int)(3 * v10 + 1) >> 1;
  v23 = 4 * v22 + 8;
  if ( 4 * (int)v10 + 8 >= (unsigned int)v23 || (unsigned int)v10 >= v22 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_139F3A(v28, "Overflow encountered when expanding vector", v4);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v28);
    sub_233E40((__int64)v28);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v24 = (unsigned int *)sub_186B300(v9 - 1, v23);
  *v8 = v24 + 2;
  *v24 = v22;
  v24[v24[1]++ + 2] = a3;
  v12 = a3 >> 1;
  if ( !v12 )
    return (__int64)sub_AB9200(a1, a2, v10);
LABEL_4:
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_DWORD *)(a1 + 8);
  result = *(unsigned __int8 *)(*(_QWORD *)(v13 + 8872) + 16LL * v12 + 15);
  if ( (_BYTE)result )
  {
    if ( (_DWORD)result != v14 )
      return result;
  }
  else if ( v14 != -1 )
  {
    sub_8F1CE0(v13, v12, v14);
    v26 = (_QWORD *)sub_180C100(a1 + 408, 16);
    *v26 = off_1C56648;
    v27 = v26;
    v26[1] = 0;
    v28[0] = (__int64)v26;
    sub_AB5C30((_QWORD *)(a1 + 536), v12, v28, 0);
    v28[0] = (__int64)off_1C566C0;
    v28[1] = a1;
    v29 = v12;
    sub_AC4C00(a1 + 392, v28);
    result = sub_180C100(a1 + 408, 16);
    *(_DWORD *)result = a2;
    *(_DWORD *)(result + 4) = v10;
    *(_QWORD *)(result + 8) = 0;
    v27[1] = result;
    return result;
  }
  v16 = *(_QWORD *)(a1 + 536);
  if ( v16 )
  {
    if ( v12 >= *(_DWORD *)(v16 - 4) )
      v16 = 0;
    else
      v16 = *(_QWORD *)(v16 + 8LL * v12);
  }
  v17 = a1;
  v18 = (_QWORD *)(a1 + 392);
  v19 = a1 + 408;
  sub_AB9B80(v17, *(int **)(v16 + 8), a2, v10);
  v20 = (_QWORD *)sub_180C100(v19, 16);
  v20[1] = v16;
  *v20 = off_1C566E8;
  v28[0] = (__int64)v20;
  sub_AB8A10(v18, v28);
  result = sub_180C100(v19, 16);
  v21 = *(_QWORD *)(v16 + 8);
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = v10;
  *(_QWORD *)(result + 8) = v21;
  *(_QWORD *)(v16 + 8) = result;
  return result;
}

