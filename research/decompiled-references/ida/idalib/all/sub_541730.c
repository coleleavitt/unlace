void __fastcall sub_541730(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  v4 = *(_QWORD *)(a2 + 1824);
  if ( a3 + 1 == *(_QWORD *)(v4 + 152) )
  {
    if ( a3 != -1 )
      *(_QWORD *)(v4 + 152) = a3;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v4 + 144) + 8 * a3) = 0;
    if ( !*(_DWORD *)(v4 + 128) )
    {
      v5 = *(_QWORD *)(v4 + 176);
      v6 = *(_QWORD *)(v4 + 168);
      if ( *(_QWORD *)(v4 + 184) < (unsigned __int64)(v5 + 1) )
      {
        v7 = qvector_reserve(v4 + 168, v6, v5 + 1, 8);
        *(_QWORD *)(v4 + 168) = v7;
        v6 = v7;
        v5 = *(_QWORD *)(v4 + 176);
      }
      *(_QWORD *)(v6 + 8 * v5) = a3;
      ++*(_QWORD *)(v4 + 176);
    }
  }
  if ( a1 )
  {
    sub_5415B0((__int64)a1);
    operator delete(a1, 0x50u);
  }
  ++*(_DWORD *)(v4 + 140);
}
