__int64 __fastcall sub_371330(__int64 *a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v7; // [rsp+20h] [rbp-38h]
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v2 = haystack;
  v8 = __readfsqword(0x28u);
  *(_QWORD *)(a2 + 8) = 0;
  v3 = a1[10] == 0;
  v5 = 0;
  if ( !v3 )
    v2 = (const char *)a1[9];
  if ( v2 )
  {
    v6[1] = v2;
    v7 = 256;
    v6[0] = get_idati();
    create_tinfo(&v5, 61, 61, v6);
  }
  if ( get_tinfo_tid(&v5, 0) != -1 )
  {
    if ( a1[5] == -1 )
      get_tinfo_size(0, v5, 0);
    *(_QWORD *)(a2 + 8) = (unsigned __int8)create_data(a1[1]);
  }
  clear_tinfo_t(&v5);
  return 0;
}
