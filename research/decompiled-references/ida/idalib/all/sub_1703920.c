void __fastcall sub_1703920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  __int64 v7; // rcx
  unsigned __int8 v8; // al
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !*(_BYTE *)(a1 + 8) )
    return;
  v6 = a3;
  v7 = *(_QWORD *)(a2 + 544);
  v8 = *(_BYTE *)(v7 + 8) & 0x7F;
  if ( v8 != 8 )
  {
    v9 = (unsigned int)v8 - 34;
    if ( (unsigned int)v9 > 5 )
    {
      if ( v8 != 18 || v7 == 48 )
        return;
    }
    else
    {
      if ( v7 != 72 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        v10 = *(_QWORD *)(*(_QWORD *)(v7 - 24) & 0xFFFFFFFFFFFFFFF0LL);
        v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 25;
        if ( (unsigned int)v11 > 1 )
          v10 = sub_F63050(v10, v9, v11, v7);
        v12 = *(_QWORD *)(v10 + 24);
        *(_DWORD *)(a1 + 12) = v6;
        *(_QWORD *)(a1 + 16) = v12;
        return;
      }
      if ( v8 != 18 )
        return;
    }
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    v13 = *(_QWORD *)(v7 + 32);
    *(_DWORD *)(a1 + 12) = a3;
    *(_QWORD *)(a1 + 16) = v13;
    return;
  }
  v14 = sub_15F24E0(a2, a2, a3, v7, a5, a6);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    v15 = *(_QWORD *)(v14 + 1472);
    *(_DWORD *)(a1 + 12) = v6;
    *(_QWORD *)(a1 + 16) = v15;
  }
}
