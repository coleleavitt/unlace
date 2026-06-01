bool __fastcall sub_F62670(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  bool result; // al
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbp
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rax

  if ( a2 )
  {
    while ( 2 )
    {
      *a2 = 0;
      v6 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v7 = *(_QWORD *)v6;
      switch ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) )
      {
        case 2:
        case 6:
          a1 = *(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          continue;
        case 5:
          return 1;
        case 0xD:
          return ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) == 435;
        case 0x1D:
          goto LABEL_16;
        case 0x21:
          goto LABEL_3;
        case 0x23:
          a1 = *(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL);
          continue;
        case 0x24:
          goto LABEL_19;
        case 0x2F:
          goto LABEL_24;
        case 0x30:
          goto LABEL_28;
        default:
          return 0;
      }
    }
  }
  while ( 2 )
  {
    v15 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v7 = *(_QWORD *)v15;
    switch ( *(_BYTE *)(*(_QWORD *)v15 + 16LL) )
    {
      case 2:
      case 6:
        a1 = *(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 5:
        return 1;
      case 0xD:
        return ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) == 435;
      case 0x1D:
LABEL_16:
        v20 = sub_F60E90(*(_QWORD **)(v7 + 24), (__int64)a2, a3, a4, a5, a6);
        if ( (*((_BYTE *)v20 + 74) & 2) == 0 )
          return 0;
        if ( !a2 )
          return 1;
        *a2 = (__int64)v20;
        return 1;
      case 0x21:
LABEL_3:
        v8 = sub_F61C10(v7);
        v9 = (__int64)v8;
        if ( !v8
          || (unsigned __int8)sub_B8E180((unsigned __int64)(v8 + 8))
          || *(_DWORD *)(*(_QWORD *)(sub_B8C330(v9) + 17448) + 340LL) != 10 )
        {
          return 0;
        }
        if ( (*(_BYTE *)(v9 + 29) & 1) == 0 )
          return 1;
        v16 = sub_B8C3D0(v9, (__int64)a2, v10, v11, v12, v13);
        v17 = *v16;
        v18 = *v16 + 8LL * *((unsigned int *)v16 + 2);
        if ( v17 >= v18 )
        {
          if ( v17 == v18 )
            return 1;
          while ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 248 )
          {
            v18 += 8LL;
            if ( v17 == v18 )
              return 1;
          }
        }
        else
        {
          v19 = v17;
          while ( 1 )
          {
            v17 = v19;
            if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 248 )
              break;
            v19 += 8LL;
            if ( v18 == v19 )
              return 1;
          }
        }
        return v17 == v18;
      case 0x23:
        a1 = *(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x24:
LABEL_19:
        v21 = sub_F62610(v7, (__int64)a2, a3, a4, a5, a6);
        v26 = v21;
        if ( a2 )
          *a2 = v21;
        v27 = *(_QWORD *)(v21 + 120);
        if ( !v27 )
        {
          sub_A794E0((__int64 *)(*(_QWORD *)(v26 + 96) + 88LL), *(_QWORD *)(v26 + 96), v22, v23, v24, v25);
          v27 = *(_QWORD *)(v26 + 120);
        }
        return (v27 & 0xFFFFFFFFFFFFFFF8LL) == 0;
      case 0x2F:
LABEL_24:
        v28 = sub_F60E90(*(_QWORD **)(v7 + 24), (__int64)a2, a3, a4, a5, a6);
        v29 = v28;
        if ( a2 )
          *a2 = (__int64)v28;
        result = 0;
        if ( (*((_BYTE *)v29 + 74) & 1) == 0 )
          return (v29[16] & 0xFFFFFFFFFFFFFFF8LL) == 0;
        return result;
      case 0x30:
LABEL_28:
        v30 = sub_F60E90(*(_QWORD **)(v7 + 24), (__int64)a2, a3, a4, a5, a6);
        if ( a2 )
          *a2 = (__int64)v30;
        return (*((_BYTE *)v30 + 74) & 1) == 0;
      default:
        return 0;
    }
  }
}
