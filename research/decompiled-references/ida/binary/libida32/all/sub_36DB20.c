__int64 __fastcall sub_36DB20(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v7; // [rsp+20h] [rbp-38h]
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v2 = haystack;
  v8 = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 8) = 0;
  v3 = *(_QWORD *)(a1 + 80) == 0;
  v5 = 0;
  if ( !v3 )
    v2 = *(const char **)(a1 + 72);
  if ( v2 )
  {
    v6[1] = v2;
    v7 = 256;
    v6[0] = get_idati();
    create_tinfo(&v5, 61, 61, v6);
  }
  if ( (unsigned int)get_tinfo_tid(&v5, 0) != -1 )
  {
    if ( *(_DWORD *)(a1 + 40) == -1 )
      get_tinfo_size(0, v5, 0);
    *(_DWORD *)(a2 + 8) = (unsigned __int8)create_data(*(_DWORD *)(a1 + 8));
  }
  clear_tinfo_t(&v5);
  return 0;
}

