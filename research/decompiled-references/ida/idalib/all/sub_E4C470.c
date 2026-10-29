void __fastcall sub_E4C470(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r12

  v6 = a2;
  v7 = *(_QWORD *)(a2 + 48);
  if ( (v7 & 4) != 0 )
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 )
      v6 = v8;
  }
  v9 = *(_QWORD *)(v6 + 16);
  v10 = (*(_QWORD *)(v6 + 24) - v9) >> 3;
  if ( (_DWORD)v10 )
  {
    v11 = 0;
    v12 = 8LL * (unsigned int)(v10 - 1);
    while ( 1 )
    {
      sub_E486B0(a1, *(unsigned __int16 **)(v9 + v11), (unsigned __int16 *)0xFFFFFFFFLL, 0, a5, a6);
      if ( v11 == v12 )
        break;
      v9 = *(_QWORD *)(v6 + 16);
      v11 += 8;
    }
  }
}
