__int64 __fastcall CustomCodeViewer__::vfunc_6(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  unsigned __int8 v10; // [rsp+1h] [rbp-9h]
  unsigned __int8 v11; // [rsp+1h] [rbp-9h]
  unsigned __int8 v12; // [rsp+1h] [rbp-9h]

  result = 0;
  if ( *(_WORD *)(a3 + 8) != 6 )
    return result;
  if ( *(_DWORD *)(a3 + 64) != 0x1000000 )
    return result;
  result = *(_BYTE *)(*(_QWORD *)(a2 + 8) + 48LL) & 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 48LL) & 1) == 0 )
    return result;
  if ( !*(_BYTE *)(a1 + 104) )
  {
    if ( a2 != *(_QWORD *)(a1 + 96) )
    {
      v5 = 0;
      if ( *(_BYTE *)(a1 + 144) )
        goto LABEL_9;
      goto LABEL_8;
    }
    goto LABEL_23;
  }
  if ( !a2 )
  {
LABEL_23:
    if ( (*(_BYTE *)(a1 + 168) & 2) != 0 )
    {
      if ( !*(_BYTE *)(a1 + 64) )
      {
        v9 = *(_QWORD *)(a1 + 56);
        if ( v9 )
        {
          v12 = *(_BYTE *)(*(_QWORD *)(a2 + 8) + 48LL) & 1;
          QT::QWidget::setFocus(v9, 7);
          result = v12;
        }
      }
      v7 = a1 + 80;
      goto LABEL_20;
    }
    return 0;
  }
  if ( *(_BYTE *)(a1 + 144) )
    return 0;
LABEL_8:
  v5 = *(_QWORD *)(a1 + 136);
LABEL_9:
  if ( a2 != v5 || (*(_BYTE *)(a1 + 168) & 8) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 64) )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( v6 )
    {
      v10 = *(_BYTE *)(*(_QWORD *)(a2 + 8) + 48LL) & 1;
      QT::QWidget::setFocus(v6, 7);
      result = v10;
    }
  }
  v7 = a1 + 120;
LABEL_20:
  if ( !*(_BYTE *)(v7 + 24) )
  {
    v8 = *(_QWORD *)(v7 + 16);
    if ( v8 )
    {
      v11 = result;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      return v11;
    }
  }
  return result;
}
