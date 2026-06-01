char __fastcall sub_8E87A0(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  __int64 v5; // rcx
  char v6; // al
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax

  result = 0;
  if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (unsigned int)a2) + 4LL) != 2 )
  {
    if ( a3 )
    {
      return a3 == 1;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 8872) + 16LL * (unsigned int)a2;
      v6 = *(_BYTE *)(v5 + 11);
      if ( (v6 & 0x20) != 0 )
        return 1;
      v7 = 2 * a2;
      switch ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 512LL) )
      {
        case 0:
          goto LABEL_22;
        case 1:
          return 1;
        case 2:
        case 3:
        case 4:
          if ( *(_BYTE *)(a1 + 8968) )
            goto LABEL_6;
          return *(_BYTE *)(a1 + 8976);
        case 5:
          v12 = 214013 * *(_DWORD *)(a1 + 7504) + 2531011;
          *(_DWORD *)(a1 + 7504) = v12;
          return (v12 & 0x10000) == 0;
        case 6:
          return *(_DWORD *)(*(_QWORD *)(a1 + 8864) + 4LL * (v7 | 1)) < *(_DWORD *)(*(_QWORD *)(a1 + 8864) + 4LL * v7);
        case 7:
          if ( *(_BYTE *)(a1 + 8968) )
          {
LABEL_6:
            if ( (v6 & 4) == 0 )
              return *(_BYTE *)(a1 + 8976);
            result = (v6 & 8) != 0;
          }
          else
          {
            v8 = *(unsigned __int8 *)(v5 + 15);
            if ( !(_BYTE)v8 )
              return *(_BYTE *)(a1 + 8976);
            v9 = *(_QWORD *)(a1 + 8672);
            if ( v9 )
            {
              if ( (unsigned int)(unsigned __int8)v8 >= *(_DWORD *)(v9 - 4) )
                v9 = 0;
              else
                v9 = *(_QWORD *)(v9 + 8 * v8);
            }
            v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 56LL))(
                    v9,
                    a2,
                    (unsigned __int8)v8);
            if ( v10 )
            {
              result = v10 == 1;
            }
            else
            {
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 512LL) != 6 )
                return *(_BYTE *)(a1 + 8976);
              v11 = *(_QWORD *)(a1 + 8864);
              if ( *(_DWORD *)(v11 + 4LL * v7) )
              {
                if ( !*(_DWORD *)(v11 + 4LL * (v7 | 1)) )
                  return 1;
                return *(_BYTE *)(a1 + 8976);
              }
LABEL_22:
              result = 0;
            }
          }
          break;
        default:
          sub_1872CE0("");
          sub_1873130(114, 1839);
      }
    }
  }
  return result;
}

