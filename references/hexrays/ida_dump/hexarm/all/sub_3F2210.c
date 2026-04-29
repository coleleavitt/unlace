void __fastcall sub_3F2210(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // r14d
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 (*v10)(void); // rax
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  if ( *(_QWORD *)(a1 + 72) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 64) + 32 * v2;
        v7 = *(_DWORD *)(v6 + 24);
        v8 = v6;
        if ( v7 == 14 )
        {
          if ( !sub_3ED400(a2[187], *(_QWORD *)v6 + 4LL) )
          {
            v14 = a2[22] + *(_QWORD *)(v8 + 8) + *(_QWORD *)(v8 + 16);
            *(_DWORD *)(a1 + 192) |= 1u;
            *(_QWORD *)(a1 + 184) = v14;
          }
          v7 = *(_DWORD *)(v8 + 24);
        }
        if ( (unsigned int)(v7 - 4) <= 7 || (unsigned int)(v7 - 147) <= 0xC )
          break;
        v2 = ++v3;
        if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 72) )
          return;
      }
      v9 = a2[188];
      v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 168LL);
      if ( (char *)v10 == (char *)sub_3EA010 )
        v11 = sub_3EA010(v9, v7);
      else
        v11 = v10();
      v12 = *(_QWORD *)(a1 + 16);
      v13 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v12 + 1) )
      {
        v15 = qvector_reserve(a1 + 8, v13, v12 + 1, 4);
        *(_QWORD *)(a1 + 8) = v15;
        v13 = v15;
        v12 = *(_QWORD *)(a1 + 16);
      }
      ++v3;
      *(_DWORD *)(v13 + 4 * v12) = v11;
      v2 = v3;
      ++*(_QWORD *)(a1 + 16);
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 72) );
  }
}
