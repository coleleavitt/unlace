void __fastcall sub_2222FC0(__int64 a1, int a2, __int64 a3)
{
  int v4; // ebx
  _QWORD *v5; // rax
  __int64 *v6; // r14
  __int64 *v7; // r13
  int v8; // ebx
  __int64 **v9; // rbp
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rsi
  __int64 **v13; // rbx
  __int64 v14; // rax
  __int64 **v15; // rbp
  int v16; // ebx
  __int64 **v17; // [rsp+8h] [rbp-190h]
  __int64 v18; // [rsp+20h] [rbp-178h]
  __int64 **ptr; // [rsp+38h] [rbp-160h]
  void *v20; // [rsp+40h] [rbp-158h] BYREF
  __int64 v21; // [rsp+48h] [rbp-150h]
  _BYTE v22[128]; // [rsp+50h] [rbp-148h] BYREF
  void *v23[2]; // [rsp+D0h] [rbp-C8h] BYREF
  _BYTE v24[184]; // [rsp+E0h] [rbp-B8h] BYREF

  v4 = *(_DWORD *)(a1 + 8);
  ptr = *(__int64 ***)a1;
  v5 = calloc((unsigned int)(a2 + 1), 8u);
  if ( !v5 && (a2 != -1 || (v5 = malloc(1u)) == nullptr) )
    sub_2221CE0("Allocation failed", 1u);
  *(_QWORD *)a1 = v5;
  v5[a2] = -1;
  v20 = v22;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = 0;
  v21 = 0x2000000000LL;
  if ( v4 )
  {
    v17 = ptr;
    v18 = (__int64)&ptr[(unsigned int)(v4 - 1) + 1];
    while ( 1 )
    {
      v6 = *v17;
      if ( *v17 )
      {
        if ( ((unsigned __int8)v6 & 1) == 0 )
          break;
      }
LABEL_11:
      if ( ++v17 == (__int64 **)v18 )
        goto LABEL_12;
    }
    while ( 1 )
    {
      v7 = (__int64 *)*v6;
      *v6 = 0;
      v8 = *(_DWORD *)(a1 + 8);
      v9 = *(__int64 ***)a1;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *, void **))(a3 + 16))(a1, v6, &v20);
      v11 = *(_DWORD *)(a1 + 12) + 1;
      v12 = (unsigned int)(2 * *(_DWORD *)(a1 + 8));
      if ( v11 > (unsigned int)v12 )
      {
        sub_2222FC0(a1, v12, a3);
        v15 = *(__int64 ***)a1;
        v16 = *(_DWORD *)(a1 + 8);
        v23[0] = v24;
        v23[1] = (void *)0x2000000000LL;
        v13 = &v15[(*(unsigned int (__fastcall **)(__int64, __int64 *, void **))(a3 + 16))(a1, v6, v23) & (v16 - 1)];
        if ( v23[0] != v24 )
          free(v23[0]);
        v14 = (__int64)*v13;
        ++*(_DWORD *)(a1 + 12);
        if ( !v14 )
LABEL_18:
          v14 = (unsigned __int64)v13 | 1;
      }
      else
      {
        *(_DWORD *)(a1 + 12) = v11;
        v13 = &v9[v10 & (unsigned int)(v8 - 1)];
        v14 = (__int64)*v13;
        if ( !*v13 )
          goto LABEL_18;
      }
      *v6 = v14;
      *v13 = v6;
      LODWORD(v21) = 0;
      if ( !v7 || ((unsigned __int8)v7 & 1) != 0 )
        goto LABEL_11;
      v6 = v7;
    }
  }
LABEL_12:
  free(ptr);
  if ( v20 != v22 )
    free(v20);
}
