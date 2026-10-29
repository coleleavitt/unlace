__int64 __fastcall sub_8C4250(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  _QWORD *v3; // rbx
  char v4; // dl
  __int64 v5; // rdi
  __int64 v6; // rbp
  char v7; // al
  __int64 v8; // rax

  v1 = *(_DWORD *)(a1 + 16);
  result = 1;
  if ( v1 )
  {
    result = 4;
    if ( v1 != 2 )
    {
      v3 = (_QWORD *)(*(_QWORD *)(**(_QWORD **)(sub_80F4C0(*(_QWORD *)(a1 + *(unsigned __int8 *)(a1 + 3))) + 120) + 48LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
      result = 0;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
      {
        v4 = sub_B07F20(*v3);
        result = 5;
        if ( !v4 )
        {
          v5 = *v3;
          v6 = *(_QWORD *)(*(_QWORD *)(*v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v7 = *(_BYTE *)(v6 + 16);
          switch ( v7 )
          {
            case 13:
              if ( (((*(_WORD *)(v6 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
              {
LABEL_7:
                sub_B07F70(v5);
                return 3;
              }
              break;
            case 46:
              v8 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
              if ( (*(_BYTE *)(v8 + 74) & 1) == 0 && *(_QWORD *)(v8 + 128) <= 7u || *(char *)(sub_B14A40(v6) + 76) < 0 )
              {
                v5 = *v3;
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

