__int64 __fastcall sub_15BDB20(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rsi
  _QWORD *v4; // rbp
  void (__fastcall *v5)(_QWORD *, _QWORD *, __int64); // rax

  v1 = *(_QWORD **)(a1 + 32);
  *(_QWORD *)a1 = &off_2C48A68;
  v2 = *(unsigned int *)(a1 + 48);
  v3 = 40 * v2;
  if ( (_DWORD)v2 )
  {
    v4 = &v1[5 * v2];
    do
    {
      if ( *v1 != -8192 && *v1 != -4096 )
      {
        v5 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v1[3];
        if ( v5 )
          v5(v1 + 1, v1 + 1, 3);
      }
      v1 += 5;
    }
    while ( v4 != v1 );
    v1 = *(_QWORD **)(a1 + 32);
    v3 = 40LL * *(unsigned int *)(a1 + 48);
  }
  operator delete(v1, v3, 8);
  return sub_15F0060(a1);
}
