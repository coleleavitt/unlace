__int64 __fastcall sub_B3F3F0(__int64 a1, __int64 a2, int a3, unsigned int **a4, int a5)
{
  char **exception; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  bool v9; // r13
  __int64 v10; // r14
  unsigned int *v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  _QWORD *v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int **v19; // rdx
  unsigned int *v20; // rbx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // edx
  unsigned int *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // r13
  char v29; // [rsp+4h] [rbp-74h]
  unsigned int v30; // [rsp+4h] [rbp-74h]
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)v6 )
  {
    v8 = a2;
    v9 = a5 == 0;
    v10 = a2 + 8 * v6;
    if ( a5 != 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        v11 = *(unsigned int **)(v8 + 32);
        v12 = sub_8E80A0((_QWORD *)a1, v11);
        if ( a3 == v12 )
          return 1;
        if ( !v9 || !v29 )
        {
          if ( v12 )
            goto LABEL_6;
          *a4 = v11;
        }
        v29 = 1;
LABEL_6:
        v8 += 8;
        if ( v8 == v10 )
          return 0;
      }
    }
    v15 = nullptr;
    do
    {
      v20 = *(unsigned int **)(v8 + 32);
      v21 = sub_8E80A0((_QWORD *)a1, v20);
      if ( v21 == a3 )
      {
        if ( !v15 )
          return 1;
        v13 = 1;
        goto LABEL_24;
      }
      if ( !v21 )
      {
        if ( v15 )
        {
          v16 = *((_DWORD *)v15 - 1);
          if ( v16 == *((_DWORD *)v15 - 2) )
          {
            v24 = (3 * v16 + 1) >> 1;
            v25 = 8 * v24 + 8;
            if ( 8 * v16 + 8 >= v25 || v16 >= v24 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v32, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v32);
              sub_233E40((__int64)v32);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v30 = (3 * v16 + 1) >> 1;
            v26 = (unsigned int *)sub_186B300(v15 - 1, v25);
            v27 = v26[1];
            v15 = v26 + 2;
            *v26 = v30;
            LODWORD(v26) = v27;
            v19 = (unsigned int **)&v15[v27];
            v18 = (_DWORD)v26 + 1;
          }
          else
          {
            v17 = v16;
            v18 = v16 + 1;
            v19 = (unsigned int **)&v15[v17];
          }
        }
        else
        {
          v28 = (_QWORD *)sub_186B270(0x18u);
          *v28 = 2;
          v18 = 1;
          v15 = v28 + 1;
          v19 = (unsigned int **)v15;
        }
        *v19 = v20;
        *((_DWORD *)v15 - 1) = v18;
      }
      v8 += 8;
    }
    while ( v10 != v8 );
    if ( v15 )
    {
      v22 = *((_DWORD *)v15 - 1);
      if ( v22 )
      {
        v13 = 0;
        if ( v22 == 1 )
        {
          *a4 = (unsigned int *)*v15;
        }
        else
        {
          v23 = 214013 * *(_DWORD *)(a1 + 7504) + 2531011;
          *(_DWORD *)(a1 + 7504) = v23;
          *a4 = (unsigned int *)v15[(HIWORD(v23) & 0x7FFFu) % v22];
        }
      }
      else
      {
        v13 = 0;
      }
LABEL_24:
      sub_186B220(v15 - 1);
      return v13;
    }
  }
  return 0;
}

