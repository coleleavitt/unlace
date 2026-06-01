__int64 __fastcall add_refinfo_dref(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  char v9; // dl
  __int64 result; // rax
  unsigned int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v17[1] = __readfsqword(0x28u);
  v9 = calc_reference_data(&v16, v17, a2, a3, a4);
  result = -1;
  if ( v9 )
  {
    v11 = a5;
    if ( (*(_BYTE *)(a3 + 24) & 0x20) != 0 )
    {
      BYTE1(v11) = BYTE1(a5) | 1;
      a5 = v11;
    }
    insn_add_dref(a1, v16, a6, a5);
    if ( *(char *)(a3 + 24) >= 0 )
    {
      v12 = v17[0];
      if ( *(_QWORD *)(a1 + 16) != v17[0] )
      {
        v13 = getseg(v16);
        if ( v12 != get_segm_base(v13) )
        {
          v14 = a5 & 0x20;
          v15 = v14;
          LOBYTE(v15) = v14 | 0x81;
          add_dref(*(_QWORD *)(a1 + 16), v17[0], v15);
        }
      }
    }
    return v16;
  }
  return result;
}
