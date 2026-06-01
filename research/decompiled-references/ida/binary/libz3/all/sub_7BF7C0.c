__int64 __fastcall sub_7BF7C0(__int64 a1, unsigned int a2, __int64 a3, int **a4, char a5, double a6)
{
  char **exception; // rbp
  __int64 v7; // rdx
  int v11; // eax
  int *v12; // rax
  __int64 v13; // r8
  __int64 (__fastcall *v14)(); // rax
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 result; // rax
  int *v18; // rbp
  int *v19; // r13
  int v20; // r12d
  _QWORD *v21; // rax
  int *v22; // rax
  int *v23; // rdx
  int v24; // edi
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rax
  _DWORD *v28; // rax
  unsigned int v29; // r14d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned int v33[3]; // [rsp+Ch] [rbp-5Ch] BYREF
  int *v34; // [rsp+18h] [rbp-50h] BYREF
  __int64 v35[9]; // [rsp+20h] [rbp-48h] BYREF

  v11 = *(_DWORD *)(a3 + 8);
  v33[0] = a2;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1680);
    }
    v12 = (int *)sub_81AF30(a3);
    sub_7B60C0((_QWORD *)a1, v33[0], v12, a4, v13, a6);
  }
  else
  {
    v28 = (_DWORD *)sub_828150(a3);
    sub_7BF3F0((_QWORD *)a1, v33[0], v28, a4);
  }
  v14 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 608LL);
  if ( v14 == sub_7C5860 )
  {
    v15 = *(__int64 **)(a1 + 160);
    if ( v15 )
      v16 = *v15;
    else
      v16 = *(_QWORD *)(a1 + 24);
    result = v16 + 24;
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64))v14)(a1);
  }
  if ( *(_BYTE *)(result + 328) && *(_QWORD *)(a1 + 24) && !a5 )
  {
    v34 = nullptr;
    v18 = *a4;
    if ( v18 )
    {
      v19 = &v18[*(v18 - 1)];
      if ( v19 != v18 )
      {
        v20 = *v18 ^ 1;
        v21 = (_QWORD *)sub_186B270(0x10u);
        *v21 = 2;
        v22 = (int *)(v21 + 1);
        v34 = v22;
        v23 = v22;
        while ( 1 )
        {
          *v22 = v20;
          v24 = *(v23 - 1);
          ++v18;
          v25 = (unsigned int)(v24 + 1);
          *(v23 - 1) = v25;
          if ( v19 == v18 )
            break;
          v26 = *(v23 - 2);
          v20 = *v18 ^ 1;
          if ( v26 == (_DWORD)v25 )
          {
            v29 = (3 * v26 + 1) >> 1;
            v30 = 4 * v29 + 8;
            if ( 4 * v24 + 12 >= (unsigned int)v30 || v26 >= v29 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v35, "Overflow encountered when expanding vector", v7);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v35);
              sub_233E40((__int64)v35);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v31 = (unsigned int *)sub_186B300(v23 - 2, v30);
            v23 = (int *)(v31 + 2);
            *v31 = v29;
            v32 = v31[1];
            v34 = v23;
            v22 = &v23[v32];
          }
          else
          {
            v22 = &v23[v25];
          }
        }
      }
    }
    sub_7B4F60(&v34, v33);
    v27 = *(_QWORD *)(a1 + 24);
    LODWORD(v35[0]) = 2;
    v35[1] = 0;
    HIDWORD(v35[0]) = *(_DWORD *)(a1 + 12);
    result = sub_11F1890(v27 + 552, &v34, v35);
    if ( v34 )
      return sub_186B220(v34 - 2);
  }
  return result;
}

