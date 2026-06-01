__int64 __fastcall sub_884C0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 module_data; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int8 v12; // [rsp+Fh] [rbp-79h]
  _QWORD v13[6]; // [rsp+10h] [rbp-78h] BYREF
  int v14; // [rsp+40h] [rbp-48h]
  char v15; // [rsp+44h] [rbp-44h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  result = 0;
  if ( a4 <= 13 )
  {
    module_data = get_module_data();
    v10 = j__qalloc_or_throw(1512, a2, v8, v9);
    sub_336F00(v10, module_data);
    v13[0] = a2;
    v13[1] = a2 + a3;
    v11 = *(_QWORD *)(v10 + 1504);
    v13[2] = v10;
    v13[3] = v11;
    v13[4] = -1;
    v13[5] = 4;
    v14 = a4;
    v15 = 1;
    result = sub_883D0(a1, (__int64)v13);
    if ( v10 )
    {
      v12 = result;
      sub_84290(v10);
      j__qfree(v10);
      return v12;
    }
  }
  return result;
}
