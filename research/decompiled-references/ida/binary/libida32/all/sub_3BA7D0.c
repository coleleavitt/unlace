__int64 __fastcall sub_3BA7D0(__int64 a1, _BYTE *a2, __int64 a3)
{
  _QWORD *v4; // rdi
  unsigned int v5; // edx
  char v7; // al
  __int64 v8; // rax

  v4 = *(_QWORD **)(a1 + 1480);
  if ( (*(_BYTE *)(v4[4] + 328LL) & 4) == 0 )
    return sub_3BA550(v4, a2, a3);
  if ( *(int *)(a3 + 12) <= 0
    && ((v5 = *(_DWORD *)(a3 + 8), v5 == -1) || (v7 = sub_3BA160(v4, (__int64 *)a3, v5), ++*(_DWORD *)(a3 + 8), !v7)) )
  {
    *(_DWORD *)(a3 + 12) = 0;
    *a2 = -1;
    return 0;
  }
  else
  {
    v8 = *(_QWORD *)a3;
    *(_DWORD *)(a3 + 12) = 0;
    *a2 = v8;
    return 1;
  }
}

