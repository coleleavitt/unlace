/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40EE90
// Address: 0x0040EE90

//----- (0040EE90) --------------------------------------------------------
int __stdcall sub_40EE90(_DWORD *a1, int a2, int a3, int *a4, int a5)
{
  int *v5; // esi
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // ebx
  int v9; // ebp
  int *v10; // ecx
  int v11; // eax
  unsigned __int8 *v12; // edx
  int v13; // eax
  __int64 v14; // rax
  int v15; // edx

  if ( !a1[50] && (a1[84] & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  v5 = a4;
  if ( !a4 )
    return -1;
  v6 = a1[65];
  *(_DWORD *)(v6 + 56) = a2;
  *(_DWORD *)(v6 + 52) = a3;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[65] + 8))(a1[65]) )
    return -1;
  v7 = a1[65];
  v8 = 0;
  if ( *(_DWORD *)(v7 + 12) )
  {
    v9 = 0;
    do
    {
      if ( (*(_BYTE *)(**(_DWORD **)(v7 + 4) + v9 + 8) & *(_BYTE *)(v7 + 52)) != 0 )
      {
        v10 = (int *)(v9 + *(_DWORD *)(v7 + 8));
        v11 = *v10;
        if ( *v10 == 3 )
        {
          ((void (__cdecl *)(int, int *, int))v10[2])(v7, v5, v10[4]);
        }
        else
        {
          v12 = (unsigned __int8 *)(v7 + v10[2]);
          if ( v11 )
          {
            v13 = v11 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
                sub_416290(v5, (unsigned int)v12, v10[3], 0);
            }
            else
            {
              sub_416290(v5, (unsigned int)v12, v10[3], -1);
            }
          }
          else
          {
            switch ( v10[3] )
            {
              case 1:
                v14 = *v12;
                break;
              case 2:
                v14 = *(unsigned __int16 *)v12;
                break;
              case 4:
                v14 = *(unsigned int *)v12;
                break;
              case 8:
                v14 = *(_QWORD *)v12;
                break;
              default:
                v14 = 0;
                break;
            }
            v5[2] = sub_4175C0(v10, v14, SHIDWORD(v14));
            v5[3] = v15;
          }
        }
      }
      ++v8;
      v5 += 6;
      v9 += 20;
    }
    while ( v8 < *(_DWORD *)(v7 + 12) );
  }
  return 1;
}
// 40EF0D: conditional instruction was optimized away because eax.4!=0
// 40EFB5: variable 'v15' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
