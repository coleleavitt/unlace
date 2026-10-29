__int64 __fastcall sub_1EE06E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, _QWORD *a5, char a6)
{
  __int64 v8; // rax
  unsigned int v9; // ebp
  size_t v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v15; // [rsp+28h] [rbp-290h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-288h] BYREF
  unsigned int *v17[2]; // [rsp+40h] [rbp-278h] BYREF
  _QWORD *v18; // [rsp+50h] [rbp-268h] BYREF
  char v19; // [rsp+58h] [rbp-260h]
  _QWORD *v20; // [rsp+60h] [rbp-258h] BYREF
  char v21; // [rsp+68h] [rbp-250h]
  void *ptr[2]; // [rsp+70h] [rbp-248h] BYREF
  _BYTE v23[568]; // [rsp+80h] [rbp-238h] BYREF

  v8 = 8LL * *(_QWORD *)(a3 + 16) - *(unsigned int *)(a3 + 32);
  v16[0] = a3;
  v16[1] = v8;
  sub_1EAF7C0((__int64 *)ptr, a3, a4);
  if ( ptr[0] )
  {
    sub_1EBF0A0(a1, (_QWORD **)ptr);
    if ( ptr[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr[0] + 8LL))(ptr[0]);
    v9 = 1;
  }
  else
  {
    v17[0] = nullptr;
    ptr[0] = v23;
    ptr[1] = (void *)0x4000000000LL;
    v17[1] = nullptr;
    sub_1EAF8B0((__int64)&v18, a3);
    v9 = v19 & 1;
    if ( (v19 & 1) != 0 )
    {
      v12 = v18;
      v18 = nullptr;
      v20 = v12;
      sub_1EBF0A0(a1, &v20);
      if ( v20 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 8LL))(v20);
    }
    else
    {
      sub_2027F10(&v20, a3, (unsigned int)v18, ptr, v17);
      v9 = v21 & 1;
      if ( (v21 & 1) != 0 )
      {
        v13 = v20;
        v20 = nullptr;
        v15 = v13;
        sub_1EBF0A0(a1, &v15);
        if ( v15 )
          (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
      }
      else if ( (unsigned int)((_DWORD)v20 - 143) > 1 )
      {
        v9 = 1;
        v11 = j__strlen("Expected decl specs block");
        sub_1EAD680(a1, "Expected decl specs block", v11);
      }
      else
      {
        sub_1EDFDF0(a1, a5, v17[0], a2, a6);
      }
      sub_A0AE90((__int64 *)&v20);
    }
    sub_A0AE90((__int64 *)&v18);
    if ( ptr[0] != v23 )
      free(ptr[0]);
  }
  sub_1EAF840((__int64)v16);
  return v9;
}
