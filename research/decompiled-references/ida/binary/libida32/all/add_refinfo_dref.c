__int64 __fastcall add_refinfo_dref(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  char v9; // dl
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int v16; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v9 = calc_reference_data(&v16, &v17, a2, a3, a4);
  result = 0xFFFFFFFFLL;
  if ( v9 )
  {
    v11 = a5;
    if ( (*(_BYTE *)(a3 + 12) & 0x20) != 0 )
    {
      BYTE1(v11) = BYTE1(a5) | 1;
      a5 = v11;
    }
    insn_add_dref(a1, v16, a6, a5);
    if ( *(char *)(a3 + 12) >= 0 )
    {
      v12 = v17;
      if ( *(_DWORD *)(a1 + 8) != v17 )
      {
        v13 = getseg(v16);
        if ( v12 != (unsigned int)get_segm_base(v13) )
        {
          v14 = a5 & 0x20;
          v15 = v14;
          LOBYTE(v15) = v14 | 0x81;
          add_dref(*(unsigned int *)(a1 + 8), v17, v15);
        }
      }
    }
    return v16;
  }
  return result;
}

