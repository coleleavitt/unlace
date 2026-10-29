unsigned __int64 __fastcall sub_7F09D0(__int64 a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rdi
  _BYTE v7[4]; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int v8; // [rsp+10h] [rbp-38h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)xrefblk_t_first_from(v7, a2, 0) )
  {
    do
    {
      v5 = v8;
      *(_DWORD *)(v4 + 28) = 1;
      *(_DWORD *)(v4 + 24) = v5;
      if ( (get_flags_ex(v5, 4) & 0xC000) != 0x4000 )
      {
        sub_3BE850(*(_QWORD *)a1, (__int64 *)v4, v8);
        *(_DWORD *)(v4 + 28) = 0;
      }
      if ( ++v3 == 32 )
        break;
      v4 += 32;
    }
    while ( (unsigned __int8)xrefblk_t_next_from(v7) );
  }
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 24) = v3;
  return v9 - __readfsqword(0x28u);
}

