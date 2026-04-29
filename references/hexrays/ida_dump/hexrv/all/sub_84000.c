__int64 __fastcall sub_84000(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 module_data; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int8 v10; // [rsp+Fh] [rbp-79h]
  _QWORD v11[6]; // [rsp+10h] [rbp-78h] BYREF
  int v12; // [rsp+40h] [rbp-48h]
  char v13; // [rsp+44h] [rbp-44h]
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  result = 0;
  if ( a4 <= 13 )
  {
    module_data = get_module_data((unsigned int)dword_4C1BB8);
    v8 = j__qalloc_or_throw(1512);
    sub_331960(v8, module_data);
    v11[0] = a2;
    v11[1] = a2 + a3;
    v9 = *(_QWORD *)(v8 + 1504);
    v11[2] = v8;
    v11[3] = v9;
    v11[4] = -1;
    v11[5] = 4;
    v12 = a4;
    v13 = 1;
    result = sub_83F10(a1, (__int64)v11);
    if ( v8 )
    {
      v10 = result;
      sub_7FDD0(v8);
      j__qfree(v8);
      return v10;
    }
  }
  return result;
}
