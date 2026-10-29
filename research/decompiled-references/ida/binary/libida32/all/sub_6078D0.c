__int64 __fastcall sub_6078D0(unsigned int a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // r12
  int v8; // eax
  const char *v9; // rdx
  __int64 v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  result = 1;
  if ( !a2 )
  {
    if ( !a3 )
      return 1;
    v6 = a4[1];
    v7 = *(_QWORD *)(v6 + 32);
    v8 = idt_get_by_ordinal(*a4, a3, v10);
    if ( !v8 )
    {
      if ( *(_BYTE *)(v6 + 45) )
      {
        v9 = *(const char **)(v10[0] + 8);
        if ( !v9 || !*v9 )
          return 1;
        sub_59A4E0(v7, a3, v9, 0);
      }
      sub_607650(v7, a1, v10[0]);
      return 1;
    }
    if ( v8 == 3 )
      return 1;
    return 0xFFFFFFFFLL;
  }
  return result;
}

