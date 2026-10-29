/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80784C0
// Address: 0x080784C0

//----- (080784C0) --------------------------------------------------------
int __cdecl sub_80784C0(int a1)
{
  char *v1; // eax
  int v2; // edx
  int v3; // eax
  void **v4; // edi
  _BYTE *v5; // edx
  void *v6; // eax
  int result; // eax
  int v8; // [esp+0h] [ebp-14h] BYREF
  unsigned int v9; // [esp+4h] [ebp-10h]

  v9 = __readgsdword(0x14u);
  v1 = (char *)sub_8092A50(*(_DWORD **)(*(_DWORD *)(a1 + 60) + 16), &v8, nullptr, 0);
  sub_8077A20(a1, v1, v8);
  *(_DWORD *)(*(_DWORD *)(a1 + 104) + 12) = *(_DWORD *)(a1 + 80);
  v2 = *(_DWORD *)(a1 + 104);
  if ( *(_DWORD *)(a1 + 120) != 2 || *(_DWORD *)(v2 + 12) == 1 )
  {
    v3 = *(_DWORD *)(v2 + 36);
    if ( v3 && *(_DWORD *)(a1 + 240) + v3 != *(_DWORD *)(v2 + 12) )
    {
      result = sub_80C7880(1268);
    }
    else
    {
      v4 = *(void ***)(a1 + 108);
      *(_BYTE *)(a1 + 116) = -91;
      v5 = v4[1];
      v6 = *v4;
      if ( v4[2] < v5 + 1 )
      {
        v6 = sub_80CF920((int)v4, v6, (unsigned int)(v5 + 1), 1u);
        v5 = v4[1];
        *v4 = v6;
      }
      v5[(_DWORD)v6] = -91;
      v4[1] = (char *)v4[1] + 1;
      ++*(_DWORD *)(a1 + 112);
      sub_8078190(a1, 0);
      result = 0;
    }
  }
  else
  {
    result = sub_80C7880(1585);
  }
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
