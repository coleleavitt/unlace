__int64 __fastcall sub_89A7C0(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v5; // edx
  int v6; // edi
  unsigned int v7; // edx
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // rdi
  __int64 v15; // rax

  if ( a3 || a2 > 0x1A || (v7 = 4, ((1LL << a2) & 0x6B7FB7F) == 0) && (v7 = 8, ((1LL << a2) & 0x1480480) == 0) )
  {
    if ( a1 )
    {
      if ( *(_DWORD *)(a1 + 88) == 1346589253 )
      {
        v5 = *(_DWORD *)(a1 + 104);
        v6 = v5 & 1;
        if ( (*(_DWORD *)(a1 + 104) & 1) != 0 )
        {
          switch ( a2 )
          {
            case 0u:
              *a3 = *(_DWORD *)(a1 + 96);
              return 0;
            case 1u:
              *a3 = *(_DWORD *)(a1 + 92);
              return 0;
            case 2u:
              *a3 = *(unsigned __int16 *)(a1 + 138);
              return 0;
            case 3u:
              *a3 = *(unsigned __int16 *)(a1 + 128);
              return 0;
            case 4u:
              *a3 = *(unsigned __int16 *)(a1 + 136);
              return 0;
            case 5u:
              v10 = v5 & 0x10;
              if ( !v10 )
                goto LABEL_14;
              *a3 = *(_DWORD *)(a1 + 120);
              return 0;
            case 6u:
              if ( (v5 & 0x10) == 0 )
                v6 = (v5 >> 8) & 2;
              *a3 = v6;
              return 0;
            case 7u:
              v15 = a1 + 40;
              if ( (v5 & 0x40) == 0 )
                v15 = 0;
              *(_QWORD *)a3 = v15;
              return 0;
            case 8u:
              *a3 = (v5 >> 11) & 1;
              return 0;
            case 9u:
              *a3 = (v5 >> 10) & 1;
              return 0;
            case 0xAu:
              v14 = *(_QWORD **)(a1 + 32);
              v11 = 0;
              if ( v14 )
                v11 = sub_892E20(v14);
              goto LABEL_17;
            case 0xBu:
              v10 = v5 & 0x80;
              if ( !v10 )
                goto LABEL_14;
              *a3 = *(_DWORD *)(a1 + 124);
              return 0;
            case 0xCu:
              *a3 = (v5 >> 7) & 1;
              return 0;
            case 0xDu:
              *a3 = (v5 >> 13) & 1;
              return 0;
            case 0xEu:
              v13 = *(_DWORD *)(a1 + 112);
              *a3 = v13;
              if ( v13 != -1 )
                return 0;
              return (unsigned int)-55;
            case 0xFu:
              *a3 = *(unsigned __int16 *)(a1 + 132);
              return 0;
            case 0x10u:
              *a3 = *(unsigned __int16 *)(a1 + 134);
              return 0;
            case 0x11u:
              *a3 = *(unsigned __int16 *)(a1 + 142);
              return 0;
            case 0x12u:
              *a3 = *(unsigned __int16 *)(a1 + 140);
              return 0;
            case 0x13u:
              *(_QWORD *)a3 = a1 + 152;
              return 0;
            case 0x14u:
              *a3 = *(unsigned __int16 *)(a1 + 130);
              return 0;
            case 0x15u:
              v12 = *(_DWORD *)(a1 + 116);
              *a3 = v12;
              if ( v12 == -1 )
                return (unsigned int)-55;
              return 0;
            case 0x16u:
              v11 = *(_QWORD *)(a1 + 72);
LABEL_17:
              *(_QWORD *)a3 = v11;
              return 0;
            case 0x17u:
              v10 = (v5 >> 22) & 1;
LABEL_14:
              *a3 = v10;
              return 0;
            case 0x18u:
              *(_QWORD *)a3 = 8LL * (2 * *(unsigned __int16 *)(a1 + 136) + 17);
              return 0;
            case 0x19u:
              v9 = *(_DWORD *)(a1 + 108);
              *a3 = v9;
              if ( v9 != -1 )
                return 0;
              return (unsigned int)-55;
            case 0x1Au:
              *a3 = *(_DWORD *)(a1 + 100);
              return 0;
            default:
              return (unsigned int)-34;
          }
        }
        return (unsigned int)-32;
      }
      else
      {
        return (unsigned int)-31;
      }
    }
    else
    {
      return (unsigned int)-51;
    }
  }
  return v7;
}
