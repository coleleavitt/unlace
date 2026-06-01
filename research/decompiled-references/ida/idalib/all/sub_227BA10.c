__int64 __fastcall sub_227BA10(__int64 a1, char a2)
{
  _BYTE *v2; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax
  _BYTE v6[12]; // [rsp+Ch] [rbp-Ch] BYREF

  v2 = *(_BYTE **)(a1 + 32);
  v6[0] = a2;
  if ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 24) )
    goto LABEL_2;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    v5 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 32) = v4;
    (*(void (__fastcall **)(__int64, __int64, _BYTE *))(v5 + 72))(a1, v4, &v2[-v4]);
    v2 = *(_BYTE **)(a1 + 32);
LABEL_2:
    *(_QWORD *)(a1 + 32) = v2 + 1;
    *v2 = v6[0];
    return a1;
  }
  if ( *(_DWORD *)(a1 + 44) )
  {
    sub_227B7D0((__int64 *)a1);
    return sub_227BA10(a1, v6[0]);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 72LL))(a1, v6, 1);
    return a1;
  }
}
