__int64 __fastcall sub_FD740(unsigned int a1)
{
  const char *v1; // rax
  __int64 *v3; // rdi
  char v4; // dl
  char v5; // dl
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-1428h] BYREF
  char v8; // [rsp+3FFh] [rbp-1029h] BYREF
  _BYTE v9[4104]; // [rsp+400h] [rbp-1028h] BYREF
  unsigned __int64 v10; // [rsp+1408h] [rbp-20h]

  v1 = "Call flow of ";
  v10 = __readfsqword(0x28u);
  v3 = &v7;
  while ( 1 )
  {
    v4 = *v1++;
    *(_BYTE *)v3 = v4;
    if ( !v4 )
      break;
    v3 = (__int64 *)((char *)v3 + 1);
    if ( v3 == (__int64 *)&v8 )
    {
      v8 = 0;
      break;
    }
  }
  get_root_filename();
  v5 = sub_FD590(a1, v9);
  result = 1;
  if ( v5 )
    return (unsigned __int8)gen_simple_call_chart();
  return result;
}

