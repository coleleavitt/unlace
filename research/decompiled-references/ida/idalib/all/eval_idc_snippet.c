__int64 __fastcall eval_idc_snippet(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  int v7; // eax
  char v8; // bp
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // r14d
  _BYTE v13[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v6 = sub_78C130();
  v7 = sub_78C260(v6);
  v8 = v7;
  qsnprintf((unsigned int)v13, 16, (unsigned int)"___idcexec%d", v7, v9, v10);
  v11 = compile_idc_snippet((__int64)v13, a2, a3, a4, 0);
  if ( (_BYTE)v11 )
    v11 = call_idc_func(a1, v13, 0, 0, a3, a4);
  sub_78C2F0(v6, v8);
  return v11;
}
