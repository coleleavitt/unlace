__int64 __fastcall sub_3D9200(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64 *); // rdx

  if ( *(_BYTE *)a2 != 8 )
  {
    if ( *(_BYTE *)a2 != 4 )
      goto LABEL_3;
    goto LABEL_9;
  }
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = v5 + 80LL * *(_QWORD *)(v4 + 32);
  if ( v6 != v5 )
  {
    do
    {
      if ( *(_QWORD *)(v5 + 16) != -1 )
        sub_3D8D80((__int64)a1, v5, 2);
      v5 += 80LL;
    }
    while ( v5 != v6 );
    if ( *(_BYTE *)a2 == 4 )
    {
LABEL_9:
      v7 = *(_QWORD *)(a2 + 8);
      v8 = *a1;
      a1[4] = v7;
      v9 = *(__int64 (__fastcall **)(__int64 *))(v8 + 16);
      if ( v9 == sub_3C9570 )
      {
        if ( !*(_BYTE *)(v7 + 64) && *(_DWORD *)(v7 + 68) != -1 )
          (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v8 + 24))(a1, v7 + 64, 0, 1);
      }
      else
      {
        v9(a1);
      }
    }
  }
LABEL_3:
  sub_3D8D80((__int64)a1, a2, 1);
  return 0;
}
