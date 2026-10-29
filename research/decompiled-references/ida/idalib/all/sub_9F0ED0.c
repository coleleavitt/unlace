__int64 __fastcall sub_9F0ED0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  unsigned int v5; // eax
  int v6; // eax
  int v7; // ebp
  size_t v8; // rax
  _BYTE v10[24]; // [rsp+0h] [rbp-178h] BYREF
  void *v11; // [rsp+18h] [rbp-160h]
  __int64 v12; // [rsp+28h] [rbp-150h] BYREF
  __int64 *v13; // [rsp+40h] [rbp-138h] BYREF
  __int64 v14; // [rsp+48h] [rbp-130h]
  __int64 v15; // [rsp+50h] [rbp-128h] BYREF

  v3 = *(_QWORD *)(a2 + 2312);
  v4 = *(_QWORD *)(a2 + 2320);
  v5 = sub_BF7FE0(a3);
  v6 = sub_13DC060(v5, 0, v3, v4);
  if ( v6 )
  {
    v7 = v6;
    v8 = j__strlen(".data()");
    sub_9EC740((__int64)v10, v7, ".data()", v8, 0);
    v13 = &v15;
    v14 = 0x400000000LL;
    sub_9EEBE0((__int64)&v13, (__int64)v10, (__int64)&v13);
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    *(_QWORD *)a1 = a1 + 16;
    if ( (_DWORD)v14 )
      sub_9F0880(a1, (__int64)&v13);
    *(_BYTE *)(a1 + 272) = 1;
    sub_9ED140((__int64)&v13);
    if ( v11 != &v12 )
      operator delete(v11);
  }
  else
  {
    *(_BYTE *)(a1 + 272) = 0;
  }
  return a1;
}
