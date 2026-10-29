void __fastcall sub_1703D40(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v5; // rax
  __int64 *v6; // r8
  unsigned __int16 v7; // cx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // [rsp+0h] [rbp-2Ch]
  int v12; // [rsp+0h] [rbp-2Ch]
  _QWORD v13[4]; // [rsp+Ch] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    if ( *(_DWORD *)(a1 + 12) != a5 )
    {
      v13[0] = 0;
      switch ( a4 )
      {
        case '!':
        case '"':
        case '$':
        case '&':
        case '(':
          goto LABEL_11;
        case ')':
          goto LABEL_6;
        default:
          goto LABEL_4;
      }
    }
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v7 = a4 - 28;
      v13[0] = *(_QWORD *)(a1 + 16);
      switch ( v7 )
      {
        case 0u:
          v5 &= 0xFFFFFFFFFFFFFFF0LL;
          if ( v6 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(*v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            v5 = 0;
            if ( *(_BYTE *)(v10 + 16) == 42 )
            {
              v12 = a3;
              v5 = sub_F68450(*v6, a2, a3, v10, (__int64)v6);
              LODWORD(a3) = v12;
            }
          }
          break;
        case 3u:
          v5 &= 0xFFFFFFFFFFFFFFF0LL;
          if ( v6 )
          {
            v8 = *(_QWORD *)(a2 + 248);
            v11 = a3;
            v9 = sub_C1BEF0((__int64)v13, a2, a3, v7);
            v5 = sub_A70010(v8, v9);
            LODWORD(a3) = v11;
          }
          break;
        case 5u:
        case 6u:
        case 8u:
        case 0xAu:
        case 0xCu:
          if ( !v6 )
            goto LABEL_11;
          break;
        case 0xDu:
          goto LABEL_6;
        default:
          goto LABEL_4;
      }
    }
    else
    {
      v13[0] = 0;
      switch ( a4 )
      {
        case '!':
        case '"':
        case '$':
        case '&':
        case '(':
LABEL_11:
          v5 = *(_QWORD *)(*(_QWORD *)(a2 + 248) + 18720LL);
          break;
        case ')':
LABEL_6:
          v5 = *(_QWORD *)(*(_QWORD *)(a2 + 248) + 18640LL);
          break;
        default:
LABEL_4:
          v5 = 0;
          break;
      }
    }
    *(_QWORD *)(a1 + 16) = v5;
    *(_DWORD *)(a1 + 12) = a3;
  }
}
