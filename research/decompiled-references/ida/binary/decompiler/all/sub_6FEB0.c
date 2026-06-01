_BOOL8 __fastcall sub_6FEB0(__int64 *a1, _QWORD *a2, int a3, int a4, char a5)
{
  _DWORD *v6; // rax
  __int64 v7; // rdx
  _DWORD *v9; // rdx
  _BOOL4 v10; // r13d
  __int64 (__fastcall *v12)(__int64, int); // rax
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, int); // rax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // [rsp+Ch] [rbp-3Ch]
  __int64 v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = (_DWORD *)a2[32];
  v7 = a2[33];
  v18[1] = __readfsqword(0x28u);
  v9 = &v6[v7];
  if ( v6 != v9 )
  {
    while ( a3 != *v6 )
    {
      if ( v9 == ++v6 )
        goto LABEL_8;
    }
    if ( v9 != v6 )
      return 0;
  }
LABEL_8:
  v12 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
  if ( v12 == sub_647B0 )
  {
    if ( !a1[10] )
      goto LABEL_12;
    v13 = *(_DWORD *)(a1[9] + 24LL * a4 + 8);
  }
  else
  {
    v17 = a4;
    v13 = v12((__int64)a1, a4);
    a4 = v17;
  }
  if ( v13 == 1 )
    return 0;
LABEL_12:
  v18[0] = __PAIR64__(a4, a3);
  v10 = sub_6ECE0(a1, v18, (__int64)(a1 + 19));
  if ( !v10 )
    return 0;
  if ( !a5 )
  {
    v14 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
    if ( v14 == sub_64790 )
    {
      if ( !a1[7] )
        return v10;
      v15 = *(_DWORD *)(a1[6] + 24LL * a3 + 8);
    }
    else
    {
      v15 = v14((__int64)a1, a3);
    }
    if ( v15 == 2 )
    {
      v16 = sub_6F520(a2, a3);
      if ( (unsigned __int64)v16 < a2[36] )
        return (*(_BYTE *)(a2[35] + 4LL * (int)v16) & 8) == 0;
    }
  }
  return v10;
}
