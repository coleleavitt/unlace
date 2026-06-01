/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF240
// Address: 0x000BF240

//----- (000BF240) --------------------------------------------------------
char __cdecl sub_BF240(void *a1, void *lpsrc, _DWORD *a3)
{
  void *v3; // eax
  _DWORD v5[4]; // [esp+0h] [ebp-4Ch] BYREF
  int v6; // [esp+10h] [ebp-3Ch]
  int v7; // [esp+14h] [ebp-38h]
  int v8; // [esp+18h] [ebp-34h]
  int v9; // [esp+1Ch] [ebp-30h]
  int v10; // [esp+20h] [ebp-2Ch]
  int v11; // [esp+24h] [ebp-28h]
  int v12; // [esp+28h] [ebp-24h]
  int v13; // [esp+2Ch] [ebp-20h]
  _DWORD v14[7]; // [esp+30h] [ebp-1Ch]

  if ( a1 == lpsrc )
    return 1;
  if ( lpsrc )
  {
    v3 = _dynamic_cast(
           lpsrc,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
           0);
    if ( v3 )
    {
      v5[0] = v3;
      v5[1] = 0;
      v5[2] = a1;
      v5[3] = -1;
      *(_DWORD *)((char *)v14 + 3) = 0;
      v7 = 0;
      v6 = 0;
      v9 = 0;
      v8 = 0;
      v11 = 0;
      v10 = 0;
      v13 = 0;
      v12 = 0;
      v14[0] = 1;
      (*(void (__cdecl **)(void *, _DWORD *, _DWORD, int))(*(_DWORD *)v3 + 28))(v3, v5, *a3, 1);
      if ( v8 == 1 )
      {
        *a3 = v6;
        return 1;
      }
    }
  }
  return 0;
}
// 139448: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *);
// 139458: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__class_type_info)(std::type_info *);
