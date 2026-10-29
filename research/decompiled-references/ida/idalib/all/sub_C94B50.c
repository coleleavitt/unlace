__int64 __fastcall sub_C94B50(__int64 a1, __int64 a2, double a3)
{
  int v3; // edx
  __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rbp
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  v3 = *(_DWORD *)(a1 + 16);
  result = 1;
  if ( v3 )
  {
    result = 4;
    if ( v3 != 2 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(**(_QWORD **)(sub_BFBC70(*(_QWORD *)(a1 + 32)) + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
      result = 0;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
      {
        v6 = (unsigned int)sub_F57FF0(*v5, a3);
        result = 5;
        if ( !(_BYTE)v6 )
        {
          v9 = *v5;
          v10 = *(_QWORD *)(*(_QWORD *)(*v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v11 = *(_BYTE *)(v10 + 16);
          switch ( v11 )
          {
            case 13:
              if ( (((*(_WORD *)(v10 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
              {
LABEL_7:
                sub_F58060(v9);
                return 3;
              }
              break;
            case 47:
              v12 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(*v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v7, v8);
              if ( (*(_BYTE *)(v12 + 74) & 1) == 0 && (*(_QWORD *)(v12 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
                || *(char *)(sub_F60F10(v10, a2, v13, v14, v15) + 76) < 0 )
              {
                v9 = *v5;
                goto LABEL_7;
              }
              break;
            case 10:
              break;
            default:
              goto LABEL_7;
          }
          return 2;
        }
      }
    }
  }
  return result;
}
