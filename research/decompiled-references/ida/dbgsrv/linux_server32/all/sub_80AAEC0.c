/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AAEC0
// Address: 0x080AAEC0

//----- (080AAEC0) --------------------------------------------------------
int __cdecl sub_80AAEC0(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  void *v5; // edx
  char *s; // [esp+4h] [ebp-2Ch]
  void *ptr[3]; // [esp+8h] [ebp-28h] BYREF
  unsigned int v8; // [esp+14h] [ebp-1Ch]

  v8 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 152) )
    goto LABEL_4;
  v2 = *(_DWORD *)(a1 + 244);
  *(_BYTE *)(a1 + 153) = 0;
  v3 = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)v2 + 68))(v2, a1 + 200, a2);
  *(_BYTE *)(a1 + 152) = v3 > 0;
  if ( v3 <= 0 )
  {
    *(_BYTE *)(a1 + 153) = 1;
LABEL_4:
    result = 0;
    goto LABEL_5;
  }
  sub_80BD060((int *)ptr, 4);
  sub_80B8A50((char **)ptr, (char *)(a1 + 200));
  result = sub_80BC530(a1 + 100, (int *)ptr);
  v5 = ptr[0];
  *(_BYTE *)(a1 + 152) = 0;
  if ( v5 )
  {
    s = (char *)result;
    ptr[1] = nullptr;
    sub_80CF780(v5);
    result = (int)s;
  }
LABEL_5:
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
