/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD180
// Address: 0x080BD180

//----- (080BD180) --------------------------------------------------------
int __usercall sub_80BD180@<eax>(__m128i a1@<xmm0>, _DWORD *a2)
{
  int v2; // eax
  int v4; // ebp
  unsigned __int64 v5; // rax
  int (__cdecl *v6)(_DWORD, _DWORD, _DWORD, _DWORD); // eax
  int v7; // eax
  int v8; // edx
  int v9; // [esp+0h] [ebp-20h]

  v2 = a2[5];
  if ( v2 )
  {
    v4 = a2[4] + 20 * v2 - 20;
    v9 = a2[4];
    LODWORD(v5) = sub_80D0330();
    if ( v5 >= *(_QWORD *)(v4 + 8) )
    {
      v6 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))a2[1];
      if ( v6 )
      {
        v7 = v6(*(unsigned __int8 *)(v9 + 16), *(_DWORD *)(v9 + 4), *(_DWORD *)v9, a2[2]);
        if ( v7 == 2 )
        {
          a2[11] = "cancelled";
          a2[12] = -15059582;
          return 1;
        }
        if ( v7 == 1 )
        {
          a2[11] = "skip_iter";
          a2[12] = -21015;
        }
        else if ( a2[1] && (int)a2[3] >= 0 )
        {
          *(_DWORD *)(v4 + 8) = sub_80BBE00(a1);
          *(_DWORD *)(v4 + 12) = v8;
        }
        else
        {
          *(_DWORD *)(v4 + 8) = 0;
          *(_DWORD *)(v4 + 12) = 0;
        }
      }
    }
  }
  return 0;
}
// 80BD1D3: variable 'v5' is possibly undefined
// 80BD241: variable 'v8' is possibly undefined
