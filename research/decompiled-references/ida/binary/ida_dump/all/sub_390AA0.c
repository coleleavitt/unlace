unsigned __int64 __fastcall sub_390AA0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v7; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v8; // [rsp+98h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 16) = -1;
  *(_QWORD *)(a1 + 24) = -1;
  *(_QWORD *)a1 = &off_4E6B78;
  *(_QWORD *)(a1 + 40) = 0;
  copy_tinfo_t();
  *(_QWORD *)(a1 + 48) = 0;
  copy_tinfo_t();
  *(_DWORD *)(a1 + 56) = a5;
  *(_BYTE *)(a1 + 33) = (get_tinfo_property() & 0x3F) == 29;
  *(_BYTE *)(a1 + 32) = (get_tinfo_property() & 0x3F) == 29;
  *(_QWORD *)(a1 + 24) = get_tinfo_size();
  if ( *(_DWORD *)(a1 + 56) != -1 )
  {
    if ( *(_BYTE *)(a1 + 33) )
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
    else
    {
      v7 = *(unsigned int *)(a1 + 56);
      find_tinfo_udt_member();
      *(_QWORD *)(a1 + 16) = v7 >> 3;
      clear_tinfo_t();
    }
  }
  return v8 - __readfsqword(0x28u);
}
