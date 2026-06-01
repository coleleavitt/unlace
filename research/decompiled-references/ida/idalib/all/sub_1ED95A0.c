__int64 __fastcall sub_1ED95A0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, int a6)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  size_t v24; // rax
  __int64 v25; // [rsp+18h] [rbp-2A0h] BYREF
  _QWORD *v26; // [rsp+28h] [rbp-290h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-288h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-278h] BYREF
  _QWORD *v29; // [rsp+50h] [rbp-268h] BYREF
  char v30; // [rsp+58h] [rbp-260h]
  _QWORD *v31; // [rsp+60h] [rbp-258h] BYREF
  char v32; // [rsp+68h] [rbp-250h]
  void *ptr[2]; // [rsp+70h] [rbp-248h] BYREF
  _BYTE v34[568]; // [rsp+80h] [rbp-238h] BYREF

  v9 = *(unsigned int *)(a3 + 32);
  v10 = 8LL * *(_QWORD *)(a3 + 16);
  v25 = a5;
  v27[0] = a3;
  v27[1] = v10 - v9;
  sub_1EAF7C0((__int64 *)ptr, a3, a4);
  if ( ptr[0] )
  {
    sub_1EBF0A0(a1, (_QWORD **)ptr);
    if ( ptr[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr[0] + 8LL))(ptr[0]);
    v11 = 1;
    goto LABEL_5;
  }
  v28[0] = 0;
  ptr[0] = v34;
  ptr[1] = (void *)0x4000000000LL;
  v28[1] = 0;
  sub_1EAF8B0((__int64)&v29, a3);
  v11 = v30 & 1;
  if ( (v30 & 1) != 0 )
  {
    v20 = v29;
    v29 = nullptr;
    v31 = v20;
    sub_1EBF0A0(a1, &v31);
    if ( v31 )
      (*(void (__fastcall **)(_QWORD *))(*v31 + 8LL))(v31);
    goto LABEL_12;
  }
  sub_2027F10(&v31, a3, (unsigned int)v29, ptr, v28);
  v11 = v32 & 1;
  if ( (v32 & 1) != 0 )
  {
    v21 = v31;
    v31 = nullptr;
    v26 = v21;
    sub_1EBF0A0(a1, &v26);
    if ( v26 )
      (*(void (__fastcall **)(_QWORD *))(*v26 + 8LL))(v26);
    goto LABEL_11;
  }
  if ( a6 == 1 )
  {
    if ( (_DWORD)v31 != 84 )
    {
      v11 = 1;
      v23 = j__strlen("Expected module local visible lookup table block");
      sub_1EAD680(a1, "Expected module local visible lookup table block", v23);
      goto LABEL_11;
    }
    v17 = v28[0];
    v18 = a1 + 3912;
    goto LABEL_21;
  }
  if ( a6 != 2 )
  {
    if ( a6 )
      goto LABEL_11;
    if ( (_DWORD)v31 != 83 )
    {
      v11 = 1;
      v22 = j__strlen("Expected visible lookup table block");
      sub_1EAD680(a1, "Expected visible lookup table block", v22);
      goto LABEL_11;
    }
    v17 = v28[0];
    v18 = a1 + 3888;
LABEL_21:
    v19 = sub_1ED9450(v18, &v25, v13, v14, v15, v16);
    sub_1EAE080((__int64)v19, a2, v17);
    goto LABEL_11;
  }
  if ( (_DWORD)v31 != 85 )
  {
    v11 = 1;
    v24 = j__strlen("Expected TU local lookup table block");
    sub_1EAD680(a1, "Expected TU local lookup table block", v24);
    goto LABEL_11;
  }
  if ( *(_DWORD *)(a2 + 4) == 4 )
  {
    v17 = v28[0];
    v18 = a1 + 3936;
    goto LABEL_21;
  }
LABEL_11:
  sub_A0AE90((__int64 *)&v31);
LABEL_12:
  sub_A0AE90((__int64 *)&v29);
  if ( ptr[0] != v34 )
    free(ptr[0]);
LABEL_5:
  sub_1EAF840((__int64)v27);
  return v11;
}
