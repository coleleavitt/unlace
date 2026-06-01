unsigned __int64 __fastcall sub_1AB6D0(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v6; // [rsp+20h] [rbp-28h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a2 )
  {
    *(_BYTE *)(a2 + 8) = 0;
    *(_QWORD *)a2 = -1;
    v2 = *a1;
    v4 = 0;
    v6 = 257;
    v5[1] = v2;
    v5[0] = get_idati(a1);
    if ( (unsigned __int8)create_tinfo(&v4, 61, 189, v5) )
    {
      *(_QWORD *)a2 = get_tinfo_tid(&v4, 0);
      *(_BYTE *)(a2 + 8) = *((_BYTE *)a1 + 4);
    }
    clear_tinfo_t(&v4);
  }
  return v7 - __readfsqword(0x28u);
}
