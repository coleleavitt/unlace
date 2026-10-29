unsigned __int64 __fastcall sub_813C60(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // ebp
  unsigned __int64 v5; // rdi
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 16);
  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)xrefblk_t_first_from(&v7, a2, 0) )
  {
    v4 = 0;
    do
    {
      v5 = v8;
      *(_DWORD *)(v3 + 32) = 1;
      *(_QWORD *)(v3 + 24) = v5;
      if ( (get_flags_ex(v5, 4) & 0xC000) != 0x4000 )
      {
        sub_3C3970(*(_QWORD *)a1, (__int64 *)v3, v8);
        *(_DWORD *)(v3 + 32) = 0;
      }
      if ( ++v4 == 32 )
        break;
      v3 += 40;
    }
    while ( (unsigned __int8)xrefblk_t_next_from(&v7) );
  }
  else
  {
    v4 = 0;
  }
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 24) = v4;
  return v9 - __readfsqword(0x28u);
}
