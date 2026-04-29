__int64 __fastcall sub_3D92E0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 (__fastcall *v10)(_QWORD *); // rax

  v2 = a1 - 40;
  if ( *(_BYTE *)a2 != 8 )
  {
    if ( *(_BYTE *)a2 != 4 )
      goto LABEL_3;
    goto LABEL_9;
  }
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = v6 + 80LL * *(_QWORD *)(v5 + 32);
  if ( v6 != v7 )
  {
    do
    {
      if ( *(_QWORD *)(v6 + 16) != -1 )
        sub_3D8D80(v2, v6, 2);
      v6 += 80LL;
    }
    while ( v7 != v6 );
    if ( *(_BYTE *)a2 == 4 )
    {
LABEL_9:
      v8 = *(_QWORD *)(a2 + 8);
      v9 = *(_QWORD *)(a1 - 40);
      *(_QWORD *)(a1 - 8) = v8;
      v10 = *(__int64 (__fastcall **)(_QWORD *))(v9 + 16);
      if ( v10 == sub_3C9570 )
      {
        if ( !*(_BYTE *)(v8 + 64) && *(_DWORD *)(v8 + 68) != -1 )
          (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(v9 + 24))(v2, v8 + 64, 0, 1);
      }
      else
      {
        v10((_QWORD *)v2);
      }
    }
  }
LABEL_3:
  sub_3D8D80(v2, a2, 1);
  return 0;
}
