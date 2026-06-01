_DWORD *__fastcall sub_1AF8BC0(__int64 *a1, __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  _DWORD *result; // rax
  _BYTE v16[200]; // [rsp+0h] [rbp-C8h] BYREF

  if ( (unsigned __int8)sub_FFF770(a2, a2, a3) )
  {
    v10 = (_QWORD *)sub_168B6C0((__int64)a1);
    v13 = v10[294];
    v10[304] += 24LL;
    v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10[295] >= v14 + 24 && v13 )
    {
      v10[294] = v14 + 24;
      result = (_DWORD *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      result = (_DWORD *)sub_986170((__int64)(v10 + 294), 24, 24, 3, v11, v12);
    }
    *result = a4;
    result[1] = a6;
    result[2] = 33;
    result[4] = a3;
    result[5] = a5;
    result[3] = a2;
  }
  else
  {
    sub_168B9F0((__int64)v16, a1, a3, 0x1152u, 0);
    sub_15F7200(v16);
    return nullptr;
  }
  return result;
}
