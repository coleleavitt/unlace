_QWORD *__fastcall sub_1F1DE80(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  _QWORD *v9; // r12
  __int64 v10; // rdx
  int v11; // eax
  __int64 (__fastcall *v12)(__int64); // rdx
  int v13; // eax
  _QWORD *v14; // rdx
  size_t v15; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  int v20; // [rsp+4h] [rbp-2B4h]
  _QWORD *v21; // [rsp+18h] [rbp-2A0h] BYREF
  _QWORD v22[2]; // [rsp+20h] [rbp-298h] BYREF
  _QWORD *v23; // [rsp+30h] [rbp-288h] BYREF
  char v24; // [rsp+38h] [rbp-280h]
  _QWORD *v25; // [rsp+40h] [rbp-278h] BYREF
  char v26; // [rsp+48h] [rbp-270h]
  _QWORD *v27[3]; // [rsp+50h] [rbp-268h] BYREF
  int v28; // [rsp+68h] [rbp-250h]
  void *ptr[2]; // [rsp+70h] [rbp-248h] BYREF
  _BYTE v30[568]; // [rsp+80h] [rbp-238h] BYREF

  v3 = sub_1F1F8D0(a1, a2);
  v4 = v3 + 2704;
  v5 = v3;
  v6 = *(_QWORD *)(v3 + 2720);
  v7 = *(unsigned int *)(v5 + 2736);
  v22[0] = v4;
  v22[1] = 8 * v6 - v7;
  sub_1EAF7C0((__int64 *)v27, v4, v8);
  v9 = v27[0];
  if ( v27[0] )
  {
    sub_1EBF0A0(a1, v27);
    if ( v27[0] )
      (*(void (__fastcall **)(_QWORD *))(*v27[0] + 8LL))(v27[0]);
    v9 = nullptr;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *(_DWORD *)(a1 + 13208);
    *(_DWORD *)(a1 + 13208) = 1;
    v12 = *(__int64 (__fastcall **)(__int64))(v10 + 184);
    v20 = v11;
    if ( v12 == sub_1EA8950 )
    {
      v13 = *(_DWORD *)(a1 + 9408);
      *(_DWORD *)(a1 + 9408) = v13 + 1;
      if ( !v13 )
      {
        v17 = *(_QWORD *)(a1 + 496);
        if ( v17 )
          sub_224E010(v17);
      }
    }
    else
    {
      v12(a1 + 24);
    }
    sub_1EAF8B0((__int64)&v23, v4);
    if ( (v24 & 1) != 0 )
    {
      v18 = v23;
      v23 = nullptr;
      v27[0] = v18;
      sub_1EBF0A0(a1, v27);
      if ( v27[0] )
        (*(void (__fastcall **)(_QWORD *))(*v27[0] + 8LL))(v27[0]);
    }
    else
    {
      v14 = *(_QWORD **)(a1 + 144);
      ptr[0] = v30;
      ptr[1] = (void *)0x4000000000LL;
      v27[0] = v14;
      v27[2] = (_QWORD *)v5;
      v27[1] = (_QWORD *)a1;
      v28 = 0;
      sub_2027F10(&v25, v4, (unsigned int)v23, ptr, 0);
      if ( (v26 & 1) != 0 )
      {
        v19 = v25;
        v25 = nullptr;
        v21 = v19;
        sub_1EBF0A0(a1, &v21);
        if ( v21 )
          (*(void (__fastcall **)(_QWORD *))(*v21 + 8LL))(v21);
      }
      else if ( (_DWORD)v25 == 123 )
      {
        v9 = (_QWORD *)sub_1F1DB20((__int64)v27);
      }
      else
      {
        v15 = j__strlen("malformed AST file: missing C++ ctor initializers");
        sub_1EAD680(a1, "malformed AST file: missing C++ ctor initializers", v15);
      }
      sub_A0AE90((__int64 *)&v25);
      if ( ptr[0] != v30 )
        free(ptr[0]);
    }
    sub_A0AE90((__int64 *)&v23);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 192LL))(a1 + 24);
    *(_DWORD *)(a1 + 13208) = v20;
  }
  sub_1EAF840((__int64)v22);
  return v9;
}
