/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C0C50
// Address: 0x080C0C50

//----- (080C0C50) --------------------------------------------------------
int __cdecl sub_80C0C50(int a1, unsigned __int8 a2)
{
  _DWORD *v2; // edx
  int (__cdecl *v3)(_DWORD *, _DWORD); // eax
  _DWORD *v4; // ecx
  int (__cdecl *v5)(_DWORD, _DWORD); // edx
  _DWORD *v6; // ecx
  int (__cdecl *v7)(_DWORD, _DWORD); // eax
  _DWORD **v8; // edx
  int (__cdecl *v9)(_DWORD **, _DWORD); // ecx

  v2 = *(_DWORD **)(a1 + 16);
  v3 = *(int (__cdecl **)(_DWORD *, _DWORD))(*v2 + 64);
  if ( (char *)v3 != (char *)sub_80C0C50 )
    return v3(v2, a2);
  v4 = (_DWORD *)v2[4];
  v5 = *(int (__cdecl **)(_DWORD, _DWORD))(*v4 + 64);
  if ( (char *)v5 != (char *)v3 )
    return v5(v4, a2);
  v6 = (_DWORD *)v4[4];
  v7 = *(int (__cdecl **)(_DWORD, _DWORD))(*v6 + 64);
  if ( v7 != v5 )
    return v7(v6, a2);
  v4 = (_DWORD *)v6[4];
  v5 = *(int (__cdecl **)(_DWORD, _DWORD))(*v4 + 64);
  if ( v5 != v7 )
    return v5(v4, a2);
  v6 = (_DWORD *)v4[4];
  v7 = *(int (__cdecl **)(_DWORD, _DWORD))(*v6 + 64);
  if ( v7 != v5 )
    return v7(v6, a2);
  v4 = (_DWORD *)v6[4];
  v5 = *(int (__cdecl **)(_DWORD, _DWORD))(*v4 + 64);
  if ( v5 != v7 )
    return v5(v4, a2);
  v6 = (_DWORD *)v4[4];
  v7 = *(int (__cdecl **)(_DWORD, _DWORD))(*v6 + 64);
  if ( v7 != v5 )
    return v7(v6, a2);
  v8 = (_DWORD **)v6[4];
  v9 = (int (__cdecl *)(_DWORD **, _DWORD))(*v8)[16];
  if ( (char *)v9 == (char *)v7 )
    return (*(int (__cdecl **)(_DWORD *, _DWORD))(*v8[4] + 64))(v8[4], a2);
  else
    return v9(v8, a2);
}
