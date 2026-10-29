/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47669D
// Address: 0x0047669D

//----- (0047669D) --------------------------------------------------------
int __cdecl sub_47669D(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // edx
  _DWORD *v5; // ecx
  int v6; // eax
  void (__cdecl *v7)(int); // edi
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // [esp-4h] [ebp-14h]
  int v14; // [esp+Ch] [ebp-4h]

  v2 = sub_47841D();
  v3 = v2;
  if ( v2 )
  {
    v4 = *v2;
    v5 = (_DWORD *)*v2;
    v6 = *v2 + 144;
    if ( *v3 == v6 )
    {
LABEL_5:
      v5 = nullptr;
    }
    else
    {
      while ( *v5 != a1 )
      {
        v5 += 3;
        if ( v5 == (_DWORD *)v6 )
          goto LABEL_5;
      }
    }
    if ( v5 )
    {
      v7 = (void (__cdecl *)(int))v5[2];
      if ( v7 )
      {
        if ( v7 == (void (__cdecl *)(int))5 )
        {
          v5[2] = 0;
          return 1;
        }
        if ( v7 == (void (__cdecl *)(int))1 )
          return -1;
        v14 = v3[1];
        v3[1] = a2;
        if ( v5[1] != 8 )
        {
          v13 = v5[1];
          v5[2] = 0;
          v7(v13);
          goto LABEL_38;
        }
        v9 = v4 + 36;
        v10 = v4 + 144;
        while ( v9 != v10 )
        {
          *(_DWORD *)(v9 + 8) = 0;
          v9 += 12;
        }
        v11 = v3[2];
        if ( *v5 > 0xC0000091 )
        {
          switch ( *v5 )
          {
            case 0xC0000092:
              v12 = 138;
              goto LABEL_35;
            case 0xC0000093:
              v12 = 133;
              goto LABEL_35;
            case 0xC00002B4:
              v12 = 142;
              goto LABEL_35;
            case 0xC00002B5:
              v12 = 141;
              goto LABEL_35;
          }
        }
        else
        {
          switch ( *v5 )
          {
            case 0xC0000091:
              v12 = 132;
              goto LABEL_35;
            case 0xC000008D:
              v12 = 130;
              goto LABEL_35;
            case 0xC000008E:
              v12 = 131;
              goto LABEL_35;
            case 0xC000008F:
              v12 = 134;
              goto LABEL_35;
            case 0xC0000090:
              v12 = 129;
LABEL_35:
              v3[2] = v12;
              break;
          }
        }
        v7(8);
        v3[2] = v11;
LABEL_38:
        v3[1] = v14;
        return -1;
      }
    }
  }
  return 0;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
