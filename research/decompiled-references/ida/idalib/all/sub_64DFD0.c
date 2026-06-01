__int64 __fastcall sub_64DFD0(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  const char *v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v5 = a2;
  v10[1] = (const char *)__readfsqword(0x28u);
  if ( !a2 )
    v5 = *(_QWORD *)(a1 + 8);
  v7 = sub_64DE20(v5, a3);
  if ( !v7 )
    return 0;
  v8 = v7 + 4;
  if ( *(_BYTE *)(v7 + 4) == 35 && !*(_BYTE *)(v7 + 5) )
    v8 = v7 + 5;
  if ( a4 )
  {
    sub_6474E0(v7, v10, 0, 0, 0, 0);
    *a4 = *v10[0];
  }
  return v8;
}
