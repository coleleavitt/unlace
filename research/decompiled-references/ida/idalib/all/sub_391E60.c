__int64 __fastcall sub_391E60(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  int v4; // ebx
  char refinfo; // dl
  __int64 result; // rax
  const char *v7; // r13
  const char *v8; // r8
  void *ptr; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+8h] [rbp-98h]
  void *v11; // [rsp+20h] [rbp-80h] BYREF
  __int64 v12; // [rsp+28h] [rbp-78h]
  __int64 v13[2]; // [rsp+40h] [rbp-60h] BYREF
  int v14; // [rsp+58h] [rbp-48h]
  unsigned __int64 v15; // [rsp+68h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  v4 = a3;
  refinfo = get_refinfo(v13, a2, a3);
  result = 0;
  if ( refinfo )
  {
    v7 = haystack;
    sub_391D30((__int64)&v11, v13[1], "BADADDR");
    if ( v12 )
      v7 = (const char *)v11;
    sub_391D30((__int64)&ptr, v13[0], "BADADDR");
    v8 = haystack;
    if ( v10 )
      v8 = (const char *)ptr;
    sub_391720(a1, (__int64)"op_offset(x, %d, 0x%x, %s, %s, 0x%a)", v4, v14, v8, v7, a4);
    if ( ptr )
    {
      v10 = 0;
      qfree(ptr);
    }
    if ( v11 )
    {
      v12 = 0;
      qfree(v11);
    }
    return 29;
  }
  return result;
}
