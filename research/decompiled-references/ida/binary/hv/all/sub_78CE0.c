__int64 __fastcall sub_78CE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // edx
  int **v5; // r9
  __int64 v6; // r11
  int v7; // esi
  unsigned int v8; // edx
  int *v9; // rcx
  __int64 v10; // rcx
  int *v11; // rcx
  __int64 v12; // rcx

  if ( *(_DWORD *)(a1 + 616) <= 6u )
  {
    if ( !byte_1671A1 )
      sub_96F80(3325);
    BUG();
  }
  result = a1 + 96;
  v4 = 2;
  v5 = &off_163BA0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v4 & 0xFFFFFFFD;
    switch ( v7 )
    {
      case 1:
        *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 41);
        break;
      case 2:
        *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 49);
        break;
      case 3:
        *(_QWORD *)(a1 + 288) = *(_QWORD *)(a2 + 57);
        break;
      case 4:
        *(_QWORD *)(a1 + 344) = *(_QWORD *)(a2 + 65);
        break;
      case 5:
        *(_QWORD *)(a1 + 400) = *(_QWORD *)(a2 + 73);
        v9 = *v5;
        *(_DWORD *)(result + 40) = v8;
        *(_QWORD *)result = v9;
        v10 = *(_QWORD *)(result + 24);
        *(_DWORD *)(result + 44) = 0;
        *(_QWORD *)(result + 16) = v10;
        if ( v10 )
        {
          *(_QWORD *)(a1 + 384) = v6;
        }
        else
        {
          *(_QWORD *)(result + 8) = 0;
          *(_DWORD *)(result + 40) = v8 | 0x20;
        }
        return result;
      default:
        *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 33);
        break;
    }
    v11 = *v5;
    *(_DWORD *)(result + 40) = v8;
    *(_DWORD *)(result + 44) = 0;
    *(_QWORD *)result = v11;
    v12 = *(_QWORD *)(result + 24);
    *(_QWORD *)(result + 16) = v12;
    if ( v12 )
    {
      *(_QWORD *)(result + 8) = v6;
      ++v7;
      v6 += v12;
      v5 += 2;
      result += 56;
    }
    else
    {
      ++v7;
      v5 += 2;
      result += 56;
      *(_DWORD *)(result - 16) = v8 | 0x20;
      *(_QWORD *)(result - 48) = 0;
    }
    v4 = *((_DWORD *)v5 + 2);
  }
}

