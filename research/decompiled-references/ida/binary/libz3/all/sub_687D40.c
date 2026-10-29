__int64 __fastcall sub_687D40(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdi

  v4 = *(_QWORD **)(a1 + 136);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = *(_QWORD *)(a1 + 128);
          if ( (*(_DWORD *)(v6 + 8))-- == 1 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_8;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_8:
    v4 = *(_QWORD **)(a1 + 136);
    if ( v4 )
LABEL_9:
      *((_DWORD *)v4 - 1) = 0;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 200LL))(*(_QWORD *)(a1 + 144), a2);
  return sub_1474360(a1 + 168, a2);
}

