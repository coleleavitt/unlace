unsigned __int64 __fastcall sub_43890(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  size_t v3; // rax
  _BYTE v5[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned int *)(a1 + 12);
  v6[0] = __readfsqword(0x28u);
  v3 = sub_93A50(v5, v6, v2) - (_QWORD)v5;
  if ( v3 )
    sub_3DC50(a2, v5, v3);
  return v6[0] - __readfsqword(0x28u);
}

