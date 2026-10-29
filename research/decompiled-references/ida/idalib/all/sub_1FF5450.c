void __fastcall sub_1FF5450(__int64 a1, const char *a2, _QWORD *a3, const char **a4)
{
  size_t v6; // rax
  __int64 v7; // rax
  const char *v8; // r14
  _QWORD *v9; // r13
  size_t v10; // rax
  void *v11; // r12
  _QWORD *v12; // rax
  void *v13[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = strlen(a2);
  sub_2217250(a1, a2, v6);
  v7 = a3[1];
  v8 = *a4;
  v9 = v14;
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = v7;
  v13[0] = v14;
  if ( !v8 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v10 = strlen(v8);
  v11 = (void *)v10;
  if ( v10 > 0xF )
  {
    v12 = (_QWORD *)operator new(v10 + 1);
    v14[0] = v11;
    v13[0] = v12;
    goto LABEL_11;
  }
  if ( v10 == 1 )
  {
    LOBYTE(v14[0]) = *v8;
    goto LABEL_5;
  }
  if ( v10 )
  {
    v12 = v14;
LABEL_11:
    memcpy(v12, v8, (size_t)v11);
    v9 = v13[0];
  }
LABEL_5:
  v13[1] = v11;
  *((_BYTE *)v11 + (_QWORD)v9) = 0;
  sub_9EE8A0(a1 + 120, (__int64)v13);
  *(_BYTE *)(a1 + 192) = 1;
  sub_9EE8A0(a1 + 160, (__int64)v13);
  if ( v13[0] != v14 )
    operator delete(v13[0]);
}
