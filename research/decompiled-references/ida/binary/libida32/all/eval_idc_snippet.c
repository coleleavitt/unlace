__int64 eval_idc_snippet()
{
  __int64 v0; // rbx
  int v1; // eax
  char v2; // bp
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // r14d
  char v7; // [rsp+0h] [rbp-68h]
  char v8; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v0 = sub_76BCD0();
  v1 = sub_76BE00(v0);
  v2 = v1;
  qsnprintf((int)&v8, 16, (int)"___idcexec%d", v1, v3, v4, v7);
  v5 = compile_idc_snippet();
  if ( (_BYTE)v5 )
    v5 = call_idc_func();
  sub_76BE90(v0, v2);
  return v5;
}

