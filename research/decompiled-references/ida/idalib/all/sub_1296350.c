void __fastcall sub_1296350(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // r13
  __int64 v6; // rax
  _BYTE *v7; // rsi
  signed __int64 v8; // rcx
  __int64 v9; // r15
  _QWORD *v10; // rax
  char v11; // r15
  void **v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD *); // [rsp+10h] [rbp-188h]
  signed __int64 v18; // [rsp+30h] [rbp-168h]
  signed __int64 v19; // [rsp+30h] [rbp-168h]
  _QWORD v20[4]; // [rsp+40h] [rbp-158h] BYREF
  __int16 v21; // [rsp+60h] [rbp-138h]
  _BYTE v22[32]; // [rsp+70h] [rbp-128h] BYREF
  __int16 v23; // [rsp+90h] [rbp-108h]
  void *v24; // [rsp+A0h] [rbp-F8h] BYREF
  signed __int64 v25; // [rsp+A8h] [rbp-F0h]
  _QWORD v26[2]; // [rsp+B0h] [rbp-E8h] BYREF
  __int16 v27; // [rsp+C0h] [rbp-D8h]
  _QWORD v28[4]; // [rsp+D0h] [rbp-C8h] BYREF
  __int16 v29; // [rsp+F0h] [rbp-A8h]
  _QWORD v30[4]; // [rsp+100h] [rbp-98h] BYREF
  _QWORD v31[4]; // [rsp+120h] [rbp-78h] BYREF
  _QWORD v32[4]; // [rsp+140h] [rbp-58h] BYREF
  _BYTE v33[56]; // [rsp+160h] [rbp-38h] BYREF

  v29 = 257;
  v23 = 257;
  v20[0] = "/../include/c++/v1";
  v3 = *(_QWORD *)(a1 + 8);
  v21 = 259;
  v27 = 257;
  sub_1130220(
    v30,
    *(_BYTE **)(v3 + 104),
    *(_QWORD *)(v3 + 112),
    (__int64)v20,
    (__int64)v22,
    (__int64)&v24,
    (__int64)v28);
  v20[0] = "/usr/include/c++/v1";
  v21 = 259;
  v4 = *(_QWORD *)(a1 + 8);
  v29 = 257;
  v27 = 257;
  v23 = 257;
  sub_1130220(
    v31,
    *(_BYTE **)(v4 + 488),
    *(_QWORD *)(v4 + 496),
    (__int64)v20,
    (__int64)v22,
    (__int64)&v24,
    (__int64)v28);
  v29 = 257;
  v5 = v30;
  v27 = 257;
  v23 = 257;
  v20[0] = "/usr/include/c++";
  v21 = 259;
  sub_1130220(
    v32,
    *(_BYTE **)(*(_QWORD *)(a1 + 8) + 488LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 496LL),
    (__int64)v20,
    (__int64)v22,
    (__int64)&v24,
    (__int64)v28);
  while ( 1 )
  {
    v6 = sub_112C5D0(a1);
    v7 = (_BYTE *)*v5;
    v8 = v5[1];
    v9 = v6;
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 96LL);
    v24 = v26;
    if ( &v7[v8] && !v7 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v8 > 0xF )
    {
      if ( v8 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v18 = v8;
      v10 = (_QWORD *)operator new(v8 + 1);
      v8 = v18;
      v24 = v10;
      v26[0] = v18;
LABEL_28:
      v19 = v8;
      memcpy(v10, v7, v8);
      v10 = v24;
      v8 = v19;
      goto LABEL_7;
    }
    if ( v8 == 1 )
    {
      LOBYTE(v26[0]) = *v7;
      v10 = v26;
      goto LABEL_7;
    }
    v10 = v26;
    if ( v8 )
      goto LABEL_28;
LABEL_7:
    v25 = v8;
    *((_BYTE *)v10 + v8) = 0;
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v25) <= 8 )
      std::__throw_length_error("basic_string::append");
    sub_9EE560(&v24, "/__config", 9u);
    v29 = 260;
    v28[0] = &v24;
    v11 = v15(v9, v28);
    if ( v24 != v26 )
      operator delete(v24);
    if ( v11 )
      break;
    v5 += 4;
    if ( v33 == (_BYTE *)v5 )
    {
      v12 = (void **)v33;
      do
      {
        while ( 1 )
        {
          v12 -= 4;
          if ( *v12 == v12 + 2 )
            break;
          operator delete(*v12);
          if ( v12 == v30 )
            return;
        }
      }
      while ( v12 != v30 );
      return;
    }
  }
  v29 = 260;
  v13 = v33;
  v28[0] = v5;
  sub_112FA80(a2, a3, (__int64)v28);
  while ( 1 )
  {
    v13 -= 4;
    v14 = (_QWORD *)*v13;
    if ( (_QWORD *)*v13 != v13 + 2 )
      break;
LABEL_22:
    if ( v13 == v30 )
      return;
  }
  while ( 1 )
  {
    operator delete(v14);
    if ( v13 == v30 )
      break;
    v13 -= 4;
    v14 = (_QWORD *)*v13;
    if ( (_QWORD *)*v13 == v13 + 2 )
      goto LABEL_22;
  }
}
