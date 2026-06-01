/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C20F0
// Address: 0x080C20F0

//----- (080C20F0) --------------------------------------------------------
int __cdecl sub_80C20F0(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax

  v1 = (*(int (__cdecl **)(_DWORD))(*(_DWORD *)*a1 + 48))(*a1);
  v2 = (*(int (__cdecl **)(_DWORD, int, const char *))(*(_DWORD *)*a1 + 52))(*a1, v1, "irs");
  a1[1] = v2;
  if ( !v2 )
    return 0;
  (*(void (__cdecl **)(_DWORD, int, int (__cdecl *)(int)))(*(_DWORD *)*a1 + 56))(*a1, v2, sub_80C01A0);
  (*(void (__cdecl **)(_DWORD, _DWORD, _BOOL4 (__cdecl *)(int, int)))(*(_DWORD *)*a1 + 60))(*a1, a1[1], sub_80C01D0);
  (*(void (__cdecl **)(_DWORD, _DWORD, int (__cdecl *)(int, char *)))(*(_DWORD *)*a1 + 64))(*a1, a1[1], sub_80C0300);
  (*(void (__cdecl **)(_DWORD, _DWORD, int (__cdecl *)(int)))(*(_DWORD *)*a1 + 68))(*a1, a1[1], sub_80C06F0);
  (*(void (__cdecl **)(_DWORD, _DWORD, int (__cdecl *)(int)))(*(_DWORD *)*a1 + 72))(*a1, a1[1], sub_80C05F0);
  (*(void (__cdecl **)(_DWORD, _DWORD, int (__cdecl *)(int)))(*(_DWORD *)*a1 + 76))(*a1, a1[1], sub_80C02C0);
  return 1;
}
