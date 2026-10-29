/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96E50
// Address: 0x00096E50

//----- (00096E50) --------------------------------------------------------
char __cdecl sub_96E50(_DWORD *a1)
{
  int v1; // eax
  int v2; // edi
  int v3; // esi
  unsigned __int64 v4; // rax
  int (__cdecl *v5)(_DWORD, _DWORD, _DWORD, _DWORD); // ecx
  int v6; // eax
  int *v8; // esi
  int v9; // eax
  int v10; // edx
  unsigned int v11; // [esp+4h] [ebp-18h]
  unsigned int v12; // [esp+8h] [ebp-14h]

  v1 = a1[5];
  if ( v1 )
  {
    v2 = a1[4];
    v3 = 5 * v1;
    LODWORD(v4) = qtime64();
    if ( v4 >= *(_QWORD *)(v2 + 4 * v3 - 12) )
    {
      v11 = HIDWORD(v4);
      v12 = v4;
      v5 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))a1[1];
      if ( v5 )
      {
        v6 = v5(*(unsigned __int8 *)(v2 + 16), *(_DWORD *)(v2 + 4), *(_DWORD *)v2, a1[2]);
        if ( v6 == 2 )
        {
          a1[11] = "cancelled";
          a1[12] = -15059582;
          return 1;
        }
        if ( v6 == 1 )
        {
          a1[11] = "skip_iter";
          a1[12] = -21015;
        }
        else
        {
          v8 = (int *)(v2 + 4 * v3 - 12);
          v9 = 0;
          if ( (int)a1[3] < 0 )
          {
            v10 = 0;
          }
          else
          {
            v10 = 0;
            if ( a1[1] )
              v9 = sub_94A20(v12, v11, a1[3]);
          }
          *v8 = v9;
          v8[1] = v10;
        }
      }
    }
  }
  return 0;
}
// 96E8B: variable 'v4' is possibly undefined
// 96F27: variable 'v10' is possibly undefined
