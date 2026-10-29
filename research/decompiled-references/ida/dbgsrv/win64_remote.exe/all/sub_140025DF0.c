/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140025DF0
// Address: 0x0000000140025DF0

//----- (0000000140025DF0) ----------------------------------------------------
__int64 __fastcall sub_140025DF0(__int64 a1, char *a2, char *a3, int a4)
{
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 v12; // [rsp+20h] [rbp-A8h]
  char v13; // [rsp+21h] [rbp-A7h]
  int v14; // [rsp+30h] [rbp-98h]

  v14 = *(_DWORD *)(a1 + 56);
  v13 = sub_140064080(1);
  v12 = sub_140021D00(a1, a2, a3, a4);
  sub_140064080(v13);
  v8 = sub_140063DE0();
  while ( *(_QWORD *)(a1 + 56) > (unsigned __int64)v14 )
  {
    if ( !sub_140028220(a1) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(508);
    }
  }
  v9 = *(_QWORD *)(a1 + 104);
  v10 = v9 + 32;
  if ( !v9 )
    v10 = 0;
  *(_QWORD *)(a1 + 128) = v10;
  if ( v12 )
    v8 = 0;
  sub_1400640B0(v8);
  return v12;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
