/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C06F0
// Address: 0x080C06F0

//----- (080C06F0) --------------------------------------------------------
int __cdecl sub_80C06F0(int a1)
{
  int *v1; // esi
  int (__cdecl *v2)(int); // eax
  _DWORD *v3; // ecx
  int (__cdecl *v4)(int); // edx
  _DWORD *v5; // ecx
  int (__cdecl *v6)(int); // eax
  _DWORD **v7; // edx
  int (__cdecl *v8)(int); // ecx
  char v9; // al
  int result; // eax

  v1 = (int *)(*(int (__cdecl **)(int, int))(*(_DWORD *)dword_811E820 + 92))(dword_811E820, a1);
  v2 = *(int (__cdecl **)(int))(*v1 + 76);
  if ( v2 == sub_80C0B20 )
  {
    v3 = (_DWORD *)v1[4];
    v4 = *(int (__cdecl **)(int))(*v3 + 76);
    if ( v4 == v2 )
    {
      v5 = (_DWORD *)v3[4];
      v6 = *(int (__cdecl **)(int))(*v5 + 76);
      if ( v6 == v4 )
      {
        v7 = (_DWORD **)v5[4];
        v8 = (int (__cdecl *)(int))(*v7)[19];
        if ( v8 == v6 )
          v9 = (*(int (__cdecl **)(_DWORD *))(*v7[4] + 76))(v7[4]);
        else
          v9 = v8((int)v7);
      }
      else
      {
        v9 = v6((int)v5);
      }
    }
    else
    {
      v9 = v4(v1[4]);
    }
  }
  else
  {
    v9 = v2((int)v1);
  }
  if ( v9 || sub_80BBF60(v1[4]) <= 0 )
  {
    result = -1;
LABEL_8:
    v1[8] = (int)"irs";
    return result;
  }
  result = sub_80BBF30(v1[4]);
  if ( result <= 0 )
    goto LABEL_8;
  return result;
}
// 811E820: using guessed type int dword_811E820;
