__int64 __fastcall sub_599F20(int a1, _QWORD *a2, char *a3, int a4, int a5, int a6)
{
  char **exception; // rbx
  int v8; // r13d
  __int64 v9; // rbp
  char *v10; // r15
  char *v11; // rbp
  _QWORD *v12; // rax
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // ecx
  _BYTE *v16; // rax
  _DWORD *v17; // rbx
  char v18; // dl
  __int64 v19; // rax
  unsigned int v20; // edx
  size_t v21; // rsi
  unsigned int v22; // r12d
  unsigned int *v23; // rax
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // ebp
  int v28; // [rsp+0h] [rbp-78h]
  void *v29; // [rsp+10h] [rbp-68h]
  int v30[2]; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+28h] [rbp-50h]

  v8 = (int)a2;
  if ( *a2 && (v9 = *(unsigned int *)(*a2 - 4LL), (_DWORD)v9) )
  {
    v10 = a3;
    v11 = &a3[v9];
    v12 = (_QWORD *)sub_186B270(0xAu);
    v15 = 1;
    *v12 = 2;
    v16 = v12 + 1;
    v17 = v16;
    while ( 1 )
    {
      v18 = *v10++;
      *v16 = v18;
      *(v17 - 1) = v15;
      if ( v11 == v10 )
        break;
      if ( *(v17 - 2) == v15 )
      {
        v20 = (3 * v15 + 1) >> 1;
        v21 = v20 + 8;
        v22 = v20;
        if ( v15 + 8 >= (unsigned int)v21 || v15 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v30, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v30);
          sub_233E40((__int64)v30);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v17 - 2, v21);
        v17 = v23 + 2;
        *v23 = v22;
        v24 = v23[1];
        v25 = v24;
        v16 = (char *)v17 + v24;
        v15 = v25 + 1;
      }
      else
      {
        v19 = v15++;
        v16 = (char *)v17 + v19;
      }
    }
    v31 = a4;
    *(_QWORD *)v30 = v17;
    v26 = sub_59DA20(a1 + 40, v8, (int)v30, v15, v13, v14, v28, a1, v29);
    sub_186B220(v17 - 2);
  }
  else
  {
    v31 = a4;
    *(_QWORD *)v30 = 0;
    return (unsigned int)sub_59DA20(a1 + 40, (int)a2, (int)v30, a4, a5, a6, v28, a1, v29);
  }
  return v26;
}

