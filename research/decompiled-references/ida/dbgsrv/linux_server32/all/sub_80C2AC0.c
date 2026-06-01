/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C2AC0
// Address: 0x080C2AC0

//----- (080C2AC0) --------------------------------------------------------
int __cdecl sub_80C2AC0(_DWORD *a1)
{
  int v1; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // edi
  __int64 v7; // [esp+0h] [ebp-410h] BYREF
  _QWORD v8[127]; // [esp+8h] [ebp-408h]
  unsigned int v9; // [esp+400h] [ebp-10h]

  v9 = __readgsdword(0x14u);
  v1 = (*(int (__cdecl **)(_DWORD))(dword_811E820 + 120))(a1[12]);
  if ( v1 )
  {
    v2 = v1;
    v3 = (*(int (__cdecl **)(_DWORD))(dword_811E820 + 124))(a1[12]);
    if ( v3 )
    {
      a1[9] = v3;
      a1[8] = "openssl_verify";
      v5 = 0;
    }
    else
    {
      v4 = (*(int (__cdecl **)(int))(dword_811E820 + 176))(v2);
      if ( (*(int (__cdecl **)(int, int, __int64 *, int))(dword_811E820 + 160))(v4, 13, &v7, 1024) <= 0
        || v7 == 0x6C616E7265746E69LL
        && v8[0] == 0x7961722D7865682ELL
        && *(_QWORD *)((char *)v8 + 6) == 0x6D6F632E737961LL )
      {
        a1[8] = "invalid_remote_certificate";
        v5 = 0;
      }
      else
      {
        v5 = 1;
      }
    }
    (*(void (__cdecl **)(int))(dword_811E820 + 172))(v2);
  }
  else
  {
    a1[8] = "openssl";
    v5 = 0;
  }
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v5;
}
// 811E820: using guessed type int dword_811E820;
