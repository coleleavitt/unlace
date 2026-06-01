__int64 __fastcall sub_161A40(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  __int64 v5; // rsi
  int v8; // r14d

  v5 = *(_QWORD *)(a1 + 280);
  if ( !v5 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 184LL))(a1, v5, *(_QWORD *)(a1 + 304));
  if ( v8 == -1 )
  {
    if ( (int)sub_1619E0(a1, a1 + 280, a1 + 304) >= 0 )
      goto LABEL_4;
LABEL_9:
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 280);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 288);
    *(_QWORD *)a3 = *(_QWORD *)(a1 + 304);
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 312);
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 288) < *(_DWORD *)(a1 + 312) )
    goto LABEL_9;
LABEL_4:
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 304);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 312);
  *(_QWORD *)a3 = *(_QWORD *)(a1 + 280);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 288);
LABEL_5:
  if ( a4 )
    *a4 = v8 != -1;
  return 1;
}

