__int64 __fastcall sub_30620(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 idati; // rax
  unsigned int v8; // edx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // [rsp+Fh] [rbp-59h]
  __int64 v12; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v14; // [rsp+30h] [rbp-38h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( *(_DWORD *)a4 != 2 || (*a5 & 0xFFFFFFFD) != 0 )
    return 0;
  idati = *(_QWORD *)(a4 + 8);
  v8 = *(_DWORD *)(a4 + 16);
  v12 = 0;
  v14 = 257;
  v13[1] = v8;
  if ( !idati )
    idati = get_idati();
  v13[0] = idati;
  if ( !(unsigned __int8)create_tinfo(&v12, 61, 189, v13)
    || (v10 = sub_57FF0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 144LL), &v12)) == 0 )
  {
    clear_tinfo_t(&v12);
    return 0;
  }
  v11 = v10;
  *a2 = *(_QWORD *)(a4 + 8);
  *a3 = *(_DWORD *)(a4 + 16);
  clear_tinfo_t(&v12);
  return v11;
}
