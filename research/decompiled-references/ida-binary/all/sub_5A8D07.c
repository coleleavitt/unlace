std::string *__fastcall sub_5A8D07(std::string *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned __int16 *v4; // rax
  _WORD *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v10; // [rsp+28h] [rbp-98h] BYREF
  __int64 v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[8]; // [rsp+38h] [rbp-88h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-80h] BYREF
  __int64 v14; // [rsp+60h] [rbp-60h] BYREF
  __int64 v15; // [rsp+68h] [rbp-58h] BYREF
  char v16; // [rsp+76h] [rbp-4Ah] BYREF
  char v17; // [rsp+77h] [rbp-49h] BYREF
  __int64 v18; // [rsp+78h] [rbp-48h]
  unsigned __int64 v20; // [rsp+88h] [rbp-38h]
  unsigned __int64 v21; // [rsp+90h] [rbp-30h]
  __int64 v22; // [rsp+98h] [rbp-28h]
  __int64 v23; // [rsp+A0h] [rbp-20h]
  int v24; // [rsp+ACh] [rbp-14h]

  if ( (unsigned __int8)sub_5A91E0(a2) )
  {
    std::string::string(a1);
  }
  else
  {
    v14 = sub_5A9222(a2, 0);
    sub_5A9242(v13);
    if ( a3 )
    {
      v24 = 0;
      v3 = sub_5A92A2(a2);
      sub_5A9154(v13, v3);
      v23 = sub_5A910E(v13, 0);
      v10 = sub_5A92C8(a2);
      while ( 1 )
      {
        v15 = sub_5A92F8(a2);
        if ( !(unsigned __int8)sub_5A9329(&v10, &v15) )
          break;
        v4 = (unsigned __int16 *)sub_5A9386(&v10);
        v5 = (_WORD *)(2LL * v24 + v23);
        *v5 = sub_5A8CE9(*v4);
        sub_5A9366(&v10);
        ++v24;
      }
      v14 = sub_5A910E(v13, 0);
    }
    v6 = v14;
    v22 = v6 + 2 * sub_5A92A2(a2);
    v21 = 4 * sub_5A92A2(a2);
    v7 = operator new[](v21);
    sub_5A9398(v12, v7);
    v11 = sub_5A93DC(v12);
    v20 = v11 + v21;
    if ( (unsigned int)sub_5AF4E2(&v14, v22, &v11, v11 + v21, 0) )
    {
      std::allocator<char>::allocator(&v17);
      std::string::string(a1, &unk_75B748, &v17);
      std::allocator<char>::~allocator(&v17);
    }
    else
    {
      v18 = sub_5A93DC(v12);
      std::allocator<char>::allocator(&v16);
      std::string::string(a1, v18, &v16);
      std::allocator<char>::~allocator(&v16);
    }
    sub_5A93B2(v12);
    sub_5A925E(v13);
  }
  return a1;
}
