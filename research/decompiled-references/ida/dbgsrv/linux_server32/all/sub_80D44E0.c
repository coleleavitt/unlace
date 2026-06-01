/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D44E0
// Address: 0x080D44E0

//----- (080D44E0) --------------------------------------------------------
int __cdecl sub_80D44E0(_DWORD *a1, int a2)
{
  int v2; // esi
  int v3; // ebp
  _DWORD *v4; // edi
  void (__cdecl *v5)(_DWORD, int); // edx
  int v6; // eax
  int v7; // ecx
  void (__cdecl *v9)(_DWORD, int); // [esp+Ch] [ebp-20h]
  int v10; // [esp+Ch] [ebp-20h]

  v2 = a2;
  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  v9 = (void (__cdecl *)(_DWORD, int))a1[9];
  if ( !v9 )
    return -2;
  v3 = sub_80D4390((int)a1);
  if ( v3 )
    return -2;
  v4 = (_DWORD *)a1[7];
  v5 = v9;
  if ( a2 < 0 )
  {
    if ( a2 < -15 )
      return -2;
    v2 = -a2;
  }
  else
  {
    v3 = (a2 >> 4) + 5;
    if ( a2 < 48 )
      v2 = a2 & 0xF;
    v6 = 0;
    if ( !v2 )
      goto LABEL_9;
  }
  if ( (unsigned int)(v2 - 8) > 7 )
    return -2;
  v6 = v2;
LABEL_9:
  v7 = v4[14];
  if ( v7 )
  {
    if ( v4[10] != v6 )
    {
      v10 = v6;
      v5(a1[10], v7);
      v6 = v10;
      v4[14] = 0;
    }
  }
  v4[3] = v3;
  v4[10] = v6;
  return sub_80D4490(a1);
}
