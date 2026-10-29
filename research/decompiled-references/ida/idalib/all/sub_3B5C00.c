__int64 __fastcall sub_3B5C00(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rax
  void (*v5)(void); // rax
  __int64 *std_dirtree; // r14
  const char *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // ebp
  char v13; // r13
  __int64 **v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // r14
  unsigned int v17; // eax
  __int64 *v18; // r12
  __int64 (__fastcall *v19)(__int64, __int64, __int64, int, int, int); // rax
  int v20; // eax
  __int64 (*v21)(); // rax
  int v23; // eax
  unsigned int v24; // [rsp+Ch] [rbp-6Ch]
  __int64 v25; // [rsp+17h] [rbp-61h] BYREF
  char v26; // [rsp+1Fh] [rbp-59h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v3 = *a1;
  v29 = __readfsqword(0x28u);
  v5 = *(void (**)(void))(v3 + 296);
  if ( (char *)v5 == (char *)sub_3A9750 )
    *(_BYTE *)(*(_QWORD *)(qword_2CCB598 + 1576) + 308LL) = 1;
  else
    v5();
  ptr = nullptr;
  std_dirtree = (__int64 *)get_std_dirtree(5);
  v28 = 0;
  if ( a2 )
  {
    sub_35A790((char **)&ptr);
    v7 = haystack;
    if ( (_QWORD)v28 )
      v7 = (const char *)ptr;
    v8 = *std_dirtree;
    v26 = 0;
    v25 = -1;
    dirtree_resolve_path(&v25, v8, v7);
    v12 = v25;
    v13 = v26;
    if ( v25 )
    {
      if ( v25 == -1 )
      {
        v13 = 0;
        v12 = 0;
      }
      else if ( v26 )
      {
        v23 = sub_3B5AD0(std_dirtree, v25, a3);
        v12 = 0;
        if ( v23 >= 0 )
        {
          v12 = v23;
          v13 = 0;
        }
      }
      else
      {
        v12 = 0;
      }
    }
    else
    {
      v14 = *(__int64 ***)(qword_2CCB598 + 1576);
      v15 = *v14;
      v16 = (__int64)&(*v14)[(_QWORD)v14[1]];
      if ( (__int64 *)v16 == *v14 )
      {
        v13 = 0;
      }
      else
      {
        v17 = a3;
        v13 = 0;
        v18 = v15;
        v24 = v17;
        do
        {
          while ( 1 )
          {
            v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int, int, int))(*a1 + 112);
            v20 = v19 == sub_3B5AC0
                ? sub_3B59C0(*v18, v24, v9, (int)v15, v10, v11)
                : ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))v19)(a1, *v18, v24);
            if ( !v20 )
              break;
            ++v18;
            v12 += v20 == 2;
            if ( (__int64 *)v16 == v18 )
              goto LABEL_14;
          }
          ++v18;
          v13 = 1;
        }
        while ( (__int64 *)v16 != v18 );
      }
    }
LABEL_14:
    v21 = *(__int64 (**)())(*a1 + 304);
    if ( v21 == sub_3A9770 )
      *(_BYTE *)(*(_QWORD *)(qword_2CCB598 + 1576) + 308LL) = 0;
    else
      ((void (__fastcall *)(__int64 *))v21)(a1);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)qword_2C819A8 + 16LL))(
      qword_2C819A8,
      2,
      0,
      0,
      4);
    if ( v13 )
      v12 = -1;
    if ( ptr )
    {
      *(_QWORD *)&v28 = 0;
      qfree(ptr);
    }
  }
  else
  {
    return 0;
  }
  return v12;
}
