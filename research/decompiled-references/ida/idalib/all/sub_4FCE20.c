__int64 __fastcall sub_4FCE20(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char v4; // al
  Elf64_Sym *v5; // rbp
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rax
  __int64 v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(_BYTE *)(a2 + 1);
  v10[1] = __readfsqword(0x28u);
  if ( v4 == 1 )
  {
    v5 = &stru_10000;
    v9 = (unsigned int)get_dtype_size(*(unsigned __int8 *)(a2 + 5)) - 1;
    if ( (unsigned int)v9 <= 7 )
    {
      LODWORD(v5) = dword_23AE1C0[v9];
      if ( (_DWORD)v5 != (_DWORD)&stru_10000 )
        LODWORD(v5) = *(unsigned __int16 *)(a2 + 6) | (unsigned int)v5;
    }
  }
  else
  {
    if ( v4 != 4 )
      return (unsigned int)&stru_10000;
    v5 = &stru_10000;
    if ( (unsigned __int8)sub_4FC450(a1, v10, a2, a3, a4) )
    {
      v7 = (unsigned int)get_dtype_size(*(unsigned __int8 *)(a2 + 5)) - 1;
      if ( (unsigned int)v7 <= 7 )
      {
        LODWORD(v5) = dword_23AE1C0[v7];
        if ( (_DWORD)v5 != (_DWORD)&stru_10000 )
        {
          if ( (unsigned __int64)(v10[0] + 0x7FFFFFF) > 0xFFFFFFE )
            return (unsigned int)&stru_10000;
          v8 = v10[0];
          if ( v10[0] < 0 )
          {
            LODWORD(v5) = (unsigned int)v5 | 0x8000000;
            v8 = -LODWORD(v10[0]);
          }
          LODWORD(v5) = v8 | (unsigned int)v5 | 0x80000000;
        }
      }
    }
  }
  return (unsigned int)v5;
}
