/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C0800
// Address: 0x080C0800

//----- (080C0800) --------------------------------------------------------
int __cdecl sub_80C0800(int a1)
{
  _DWORD *v1; // edx
  int (__cdecl *v2)(_DWORD); // eax
  _DWORD *v3; // ecx
  int (__cdecl *v4)(_DWORD); // edx
  _DWORD *v5; // ecx
  int (__cdecl *v6)(_DWORD); // eax
  _DWORD **v7; // edx
  int (__cdecl *v8)(_DWORD **); // ecx

  v1 = *(_DWORD **)(a1 + 16);
  v2 = *(int (__cdecl **)(_DWORD))(*v1 + 68);
  if ( v2 != sub_80C0800 )
    return v2(*(_DWORD *)(a1 + 16));
  v3 = (_DWORD *)v1[4];
  v4 = *(int (__cdecl **)(_DWORD))(*v3 + 68);
  if ( v4 != v2 )
    return v4(v3);
  v5 = (_DWORD *)v3[4];
  v6 = *(int (__cdecl **)(_DWORD))(*v5 + 68);
  if ( v6 != v4 )
    return v6(v5);
  v3 = (_DWORD *)v5[4];
  v4 = *(int (__cdecl **)(_DWORD))(*v3 + 68);
  if ( v4 != v6 )
    return v4(v3);
  v5 = (_DWORD *)v3[4];
  v6 = *(int (__cdecl **)(_DWORD))(*v5 + 68);
  if ( v6 != v4 )
    return v6(v5);
  v3 = (_DWORD *)v5[4];
  v4 = *(int (__cdecl **)(_DWORD))(*v3 + 68);
  if ( v4 != v6 )
    return v4(v3);
  v5 = (_DWORD *)v3[4];
  v6 = *(int (__cdecl **)(_DWORD))(*v5 + 68);
  if ( v6 != v4 )
    return v6(v5);
  v7 = (_DWORD **)v5[4];
  v8 = (int (__cdecl *)(_DWORD **))(*v7)[17];
  if ( (char *)v8 == (char *)v6 )
    return (*(int (__cdecl **)(_DWORD *))(*v7[4] + 68))(v7[4]);
  else
    return v8(v7);
}
