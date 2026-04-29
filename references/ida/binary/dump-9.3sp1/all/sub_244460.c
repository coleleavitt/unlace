_QWORD *__fastcall sub_244460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // edi
  int v7; // eax
  __int64 v8; // rax
  _QWORD *v9; // rbp

  if ( !a2 )
  {
    if ( !under_debugger )
      sub_383060(50378);
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
        *(_QWORD *)(a2 + 24) = sub_244460(a1, *(_QWORD *)(a2 + 24));
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
        *(_DWORD *)(a2 + 8) = sub_254C70();
        return (_QWORD *)a2;
      case 49:
        v7 = *(_DWORD *)(a2 + 12);
        if ( v7 == -1 )
          goto LABEL_17;
        a3 = *(_QWORD *)(a2 + 24);
        if ( *(_DWORD *)(a3 + 12) != -1 )
          goto LABEL_6;
        *(_DWORD *)(a3 + 12) = v7;
LABEL_17:
        v9 = *(_QWORD **)(a2 + 24);
        if ( *v9 == -1 )
        {
          *v9 = *(_QWORD *)a2;
          v9 = *(_QWORD **)(a2 + 24);
        }
        *(_DWORD *)(a2 + 8) = 0;
        sub_255630(a2);
        clear_tinfo_t();
        j__qfree(a2);
        return v9;
      case 61:
        **(_QWORD **)(a2 + 24) = sub_255A30(*(_QWORD *)(a2 + 24), a2 + 48, a3, a4, a5) == 0;
        return (_QWORD *)a2;
      default:
LABEL_6:
        v8 = j__qalloc_or_throw(64, a2, a3, a4);
        *(_QWORD *)v8 = -1;
        v9 = (_QWORD *)v8;
        *(_DWORD *)(v8 + 8) = 49;
        *(_QWORD *)(v8 + 12) = -1;
        *(_QWORD *)(v8 + 24) = a2;
        *(_QWORD *)(v8 + 32) = 0;
        *(_QWORD *)(v8 + 40) = 0;
        *(_QWORD *)(v8 + 48) = 0;
        *(_DWORD *)(v8 + 56) = 0;
        *(_QWORD *)v8 = *(_QWORD *)a2;
        goto LABEL_7;
    }
  }
  v9 = (_QWORD *)a2;
  *(_QWORD *)(a2 + 32) = sub_244460(a1, *(_QWORD *)(a2 + 32));
LABEL_7:
  sub_2441C0((__int64)v9, a1, 0);
  return v9;
}
