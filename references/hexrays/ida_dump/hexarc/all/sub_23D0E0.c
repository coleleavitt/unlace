_QWORD *__fastcall sub_23D0E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // edi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rbp

  if ( !a2 )
  {
    if ( !under_debugger )
      sub_37B760(50378);
    BUG();
  }
  v6 = *(_DWORD *)(a2 + 8);
  if ( v6 != 1 )
  {
    switch ( v6 )
    {
      case 17:
        *(_DWORD *)(a2 + 8) = 18;
        goto LABEL_10;
      case 18:
        *(_DWORD *)(a2 + 8) = 17;
LABEL_10:
        *(_QWORD *)(a2 + 24) = sub_23D0E0(a1, *(_QWORD *)(a2 + 24));
        break;
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
        *(_DWORD *)(a2 + 8) = sub_24D8F0();
        return (_QWORD *)a2;
      case 49:
        v7 = *(_DWORD *)(a2 + 12);
        if ( v7 == -1 )
          goto LABEL_17;
        v8 = *(_QWORD *)(a2 + 24);
        if ( *(_DWORD *)(v8 + 12) != -1 )
          goto LABEL_6;
        *(_DWORD *)(v8 + 12) = v7;
LABEL_17:
        v10 = *(_QWORD **)(a2 + 24);
        if ( *v10 == -1 )
        {
          *v10 = *(_QWORD *)a2;
          v10 = *(_QWORD **)(a2 + 24);
        }
        *(_DWORD *)(a2 + 8) = 0;
        sub_24E2B0(a2);
        clear_tinfo_t(a2 + 48);
        j__qfree(a2);
        return v10;
      case 61:
        **(_QWORD **)(a2 + 24) = sub_24E6B0(*(_QWORD *)(a2 + 24), a2 + 48, a3, a4, a5) == 0;
        return (_QWORD *)a2;
      default:
LABEL_6:
        v9 = j__qalloc_or_throw(64);
        *(_QWORD *)v9 = -1;
        v10 = (_QWORD *)v9;
        *(_DWORD *)(v9 + 8) = 49;
        *(_QWORD *)(v9 + 12) = -1;
        *(_QWORD *)(v9 + 24) = a2;
        *(_QWORD *)(v9 + 32) = 0;
        *(_QWORD *)(v9 + 40) = 0;
        *(_QWORD *)(v9 + 48) = 0;
        *(_DWORD *)(v9 + 56) = 0;
        *(_QWORD *)v9 = *(_QWORD *)a2;
        goto LABEL_7;
    }
  }
  v10 = (_QWORD *)a2;
  *(_QWORD *)(a2 + 32) = sub_23D0E0(a1, *(_QWORD *)(a2 + 32));
LABEL_7:
  sub_23CE40((__int64)v10, a1, 0);
  return v10;
}
