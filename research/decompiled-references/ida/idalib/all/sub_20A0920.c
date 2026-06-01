__int64 __fastcall sub_20A0920(__int64 a1)
{
  __int64 v1; // r11
  _QWORD *v2; // rsi
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // r8
  int v6; // edi
  unsigned int v7; // ecx
  _QWORD *v8; // rdx
  _QWORD *v9; // r9
  int v11; // edx
  int v12; // r10d
  _QWORD *v13; // r9

  v1 = a1;
  v2 = *(_QWORD **)(a1 + 24);
  v3 = ***(_QWORD ***)(a1 + 8);
  v4 = *(_DWORD *)(v3 + 536);
  v5 = *(_QWORD *)(v3 + 520);
  if ( v4 )
  {
    v6 = v4 - 1;
    v7 = (v4 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
    v8 = (_QWORD *)(v5 + 16LL * v7);
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v2 )
    {
LABEL_3:
      *v8 = -8192;
      v2 = *(_QWORD **)(v1 + 24);
      --*(_DWORD *)(v3 + 528);
      ++*(_DWORD *)(v3 + 532);
      goto LABEL_4;
    }
    v11 = 1;
    if ( v9 != (_QWORD *)-4096LL )
    {
      do
      {
        v12 = v11 + 1;
        v7 = v6 & (v11 + v7);
        v8 = (_QWORD *)(v5 + 16LL * v7);
        v13 = (_QWORD *)*v8;
        if ( (_QWORD *)*v8 == v2 )
          goto LABEL_3;
        v11 = v12;
      }
      while ( v13 != (_QWORD *)-4096LL );
    }
  }
LABEL_4:
  if ( v2 )
    sub_20A0850(v1 + 24, v2);
  return sub_20CC0C0(v1);
}
