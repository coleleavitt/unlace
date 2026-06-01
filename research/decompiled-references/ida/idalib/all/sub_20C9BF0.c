void __fastcall sub_20C9BF0(__int64 a1)
{
  char v1; // al
  __int64 v2; // rsi
  _QWORD *v3; // rbp

  v1 = *(_BYTE *)(a1 + 7);
  v2 = 32LL * (*(_DWORD *)(a1 + 4) & 0x7FFFFFF);
  if ( (v1 & 0x40) != 0 )
  {
    sub_20C9A60(*(_QWORD **)(a1 - 8), (_QWORD *)(*(_QWORD *)(a1 - 8) + v2), 1);
    operator delete((void *)(a1 - 8));
  }
  else
  {
    v3 = (_QWORD *)(a1 - v2);
    if ( v1 < 0 )
    {
      sub_20C9A60(v3, (_QWORD *)a1, 0);
      operator delete((char *)v3 - *(v3 - 1) - 8);
    }
    else
    {
      sub_20C9A60(v3, (_QWORD *)a1, 0);
      operator delete(v3);
    }
  }
}
