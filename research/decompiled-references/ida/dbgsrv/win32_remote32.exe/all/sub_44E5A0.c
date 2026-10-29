/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E5A0
// Address: 0x0044E5A0

//----- (0044E5A0) --------------------------------------------------------
char __thiscall sub_44E5A0(unsigned int *this)
{
  int v2; // edi
  int v3; // ebx
  unsigned int v4; // ebp
  int v5; // edi
  unsigned int v6; // edx
  int (__cdecl *v7)(_DWORD, _DWORD, _DWORD, _DWORD); // ecx
  int v8; // eax
  int v10; // edx
  unsigned int v11; // [esp+10h] [ebp-4h]

  v2 = *(this + 5);
  if ( v2 )
  {
    v3 = *(this + 4);
    v4 = sub_453720();
    v5 = v3 + 24 * v2;
    v11 = v6;
    if ( __PAIR64__(v6, v4) >= *(_QWORD *)(v5 - 16) )
    {
      v7 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*(this + 1);
      if ( v7 )
      {
        v8 = v7(*(unsigned __int8 *)(v3 + 16), *(_DWORD *)(v3 + 4), *(_DWORD *)v3, *(this + 2));
        if ( v8 == 2 )
        {
          *(this + 11) = (unsigned int)"cancelled";
          *(this + 12) = -15059582;
          return 1;
        }
        if ( v8 == 1 )
        {
          *(this + 11) = (unsigned int)"skip_iter";
          *(this + 12) = -21015;
          return 0;
        }
        if ( *(this + 1) && (int)*(this + 3) > -1 )
        {
          *(_DWORD *)(v5 - 16) = sub_44D840(v4, v11, *(this + 3));
          *(_DWORD *)(v5 - 12) = v10;
          return 0;
        }
        *(_DWORD *)(v5 - 16) = 0;
        *(_DWORD *)(v5 - 12) = 0;
      }
    }
  }
  return 0;
}
// 44E5C4: variable 'v6' is possibly undefined
// 44E64E: variable 'v10' is possibly undefined
