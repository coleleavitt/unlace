__int64 __fastcall sub_3710F0(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v7; // [rsp+20h] [rbp-28h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v2 = haystack;
  v8 = __readfsqword(0x28u);
  *(_QWORD *)(a2 + 8) = -1;
  v3 = *(_QWORD *)(a1 + 48) == 0;
  v5 = 0;
  if ( !v3 )
    v2 = *(const char **)(a1 + 40);
  if ( v2 )
  {
    v6[1] = v2;
    v7 = 256;
    v6[0] = get_idati();
    if ( (unsigned __int8)create_tinfo(&v5, 61, 61, v6) )
      *(_QWORD *)(a2 + 8) = get_tinfo_tid(&v5, 1);
  }
  clear_tinfo_t(&v5);
  return 0;
}
