void __fastcall sub_E875F0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r13
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rsi
  unsigned __int64 v12; // [rsp+8h] [rbp-C0h]
  __int64 *v13; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+18h] [rbp-B0h]
  _BYTE v15[168]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = (_QWORD *)(a2 + 64);
  sub_E81B80(a1, a2);
  v13 = (__int64 *)v15;
  v14 = 0x1000000000LL;
  v3 = sub_B6AC30(a2 + 64);
  if ( v3 )
  {
    v4 = (unsigned int)v14;
    if ( !a2 )
      v2 = nullptr;
    while ( 2 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v3 + 29) & 2) == 0 )
        {
          v5 = (_QWORD *)(*(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
            v5 = (_QWORD *)*v5;
          if ( v2 == v5 )
            break;
        }
LABEL_5:
        v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v3 )
          goto LABEL_14;
      }
      switch ( (*(_BYTE *)(v3 + 28) + 119) & 0x7F )
      {
        case 0:
        case 9:
        case 0x18:
        case 0x1A:
        case 0x1B:
        case 0x1D:
        case 0x1F:
        case 0x28:
        case 0x29:
        case 0x37:
        case 0x38:
        case 0x3E:
        case 0x42:
        case 0x4D:
        case 0x50:
          if ( v4 + 1 > (unsigned __int64)HIDWORD(v14) )
          {
            v12 = v3;
            sub_22134E0(&v13, v15, v4 + 1, 8);
            v4 = (unsigned int)v14;
            v3 = v12;
          }
          v13[v4] = v3;
          v4 = (unsigned int)(v14 + 1);
          LODWORD(v14) = v14 + 1;
          v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v3 )
            continue;
          break;
        default:
          goto LABEL_5;
      }
      break;
    }
  }
  else
  {
    LODWORD(v4) = v14;
  }
LABEL_14:
  v6 = *(unsigned int *)(a1 + 184);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_22134E0(a1 + 176, a1 + 192, v6 + 1, 4);
    v6 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v6) = v4;
  v7 = *(unsigned int *)(a1 + 188);
  v8 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
  *(_DWORD *)(a1 + 184) = v8;
  if ( v8 + 1 > v7 )
  {
    sub_22134E0(a1 + 176, a1 + 192, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v8) = 0;
  v9 = v13;
  ++*(_DWORD *)(a1 + 184);
  v10 = &v9[(unsigned int)v14];
  if ( v9 != v10 )
  {
    do
    {
      v11 = *v9++;
      sub_E853B0(a1, v11);
    }
    while ( v10 != v9 );
    v10 = v13;
  }
  if ( v10 != (__int64 *)v15 )
    free(v10);
}

