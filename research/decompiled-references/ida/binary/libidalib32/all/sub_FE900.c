__int64 __fastcall sub_FE900(__int64 a1, __int64 *a2)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *module_data; // rax
  int v10; // edx
  int v11; // eax
  bool v12; // [rsp+17h] [rbp-11h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v2 = *((_DWORD *)a2 + 2);
  v13 = __readfsqword(0x28u);
  if ( v2 != 28 )
  {
    v3 = 6;
    if ( v2 != 34 )
      return v3;
  }
  v5 = *a2;
  v3 = 7;
  if ( *(_BYTE *)(*a2 + 1232) )
    return v3;
  v6 = *(_DWORD *)(a1 + 12);
  if ( !v6 )
  {
    module_data = (_QWORD *)get_module_data();
    v10 = *(_DWORD *)(a1 + 16);
    if ( v10 == 8 )
    {
      if ( !*(_QWORD *)(module_data[1] + 128LL) || *(char *)(*module_data + 130LL) <= 0 )
        return 5;
    }
    else
    {
      if ( v10 != 10 )
      {
        if ( v10 == 4 && *(_QWORD *)(module_data[1] + 120LL) && *(char *)(*module_data + 129LL) > 0 )
          goto LABEL_17;
        return 5;
      }
      if ( !*(_QWORD *)(module_data[1] + 136LL) || *(_QWORD *)(*module_data + 120LL) != 10 )
        return 5;
    }
LABEL_17:
    v11 = *((_DWORD *)a2 + 2);
    v6 = *(_DWORD *)(a1 + 12);
    if ( v11 == 34 || v11 == 28 )
      v5 = *a2;
    else
      v5 = 0;
  }
  v7 = *(_QWORD *)(v5 + 752);
  v12 = *(_DWORD *)(v7 + 36) == v6;
  if ( v12 && (unsigned int)(v6 - 2) > 2 )
    v12 = *(_DWORD *)(a1 + 16) == *(_DWORD *)(v7 + 24);
  v8 = sub_19D0F0(a2[9]);
  if ( v8 )
    sub_19C000(v8, 7, &v12);
  return 3;
}

