__int64 __fastcall sub_1497A0(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, char a5)
{
  unsigned int v5; // r14d
  int v6; // ebx
  __int64 v7; // rax
  int v9; // [rsp+Ch] [rbp-2Ch]

  v5 = 0;
  if ( a4 < (int)a3 )
  {
    v6 = a3;
    if ( 8 * *(_DWORD *)(a2 + 36) > (int)a3 && (int)a3 <= 32 )
    {
      v7 = 0x100010100LL;
      LOBYTE(v5) = _bittest64(&v7, a3);
      if ( (_BYTE)v5 )
      {
        if ( a5 )
        {
          v9 = a4;
          sub_117E50((char *)(*(_QWORD *)(a2 + 40) + 32LL), (char *)(*(_QWORD *)(a2 + 40) + 48LL));
          a4 = v9;
        }
        **(_DWORD **)(a2 + 40) = 24;
        sub_11BE50(*(_QWORD *)(a2 + 40) + 48LL, a1, v6 - a4, 1, *(_QWORD *)(a2 + 24), 0);
        sub_1227F0(a2 + 32, a1, *(_QWORD *)(a2 + 24), v6 >> 3);
        *(_DWORD *)a2 = 8;
        sub_1181E0(a2 + 48);
      }
    }
  }
  return v5;
}
