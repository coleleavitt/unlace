__int64 __fastcall sub_4E9BC0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v5; // di
  __int64 v6; // r12
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v12; // edi
  signed __int32 v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // edi

  v5 = *(_BYTE *)(a4 + 1);
  if ( v5 == 1 )
  {
    v12 = *(unsigned __int16 *)(a4 + 6);
    v13 = 0x10000;
    v14 = (HIDWORD(a3) << 32) | (unsigned int)a3;
    v15 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL) + 8LL) - 1);
    if ( (unsigned int)v15 <= 7 )
    {
      v13 = dword_238A060[v15];
      v16 = v13 | v12;
      if ( v13 != 0x10000 )
        v13 = v16;
    }
    sub_4E7970(a1, a2, v14, v13, 0, 0);
  }
  else
  {
    if ( v5 != 5 )
    {
      if ( !under_debugger )
        interr(2947);
      BUG();
    }
    v6 = *(unsigned int *)(a4 + 8);
    *(_QWORD *)a1 = 0;
    v7 = a3;
    *(_BYTE *)(a1 + 24) = 11;
    if ( HIDWORD(a3) != -1 )
      v7 = HIDWORD(a3);
    *(_OWORD *)(a1 + 8) = 0;
    v8 = qvector_reserve(a1, 0, 1, 16);
    v9 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v8;
    v10 = 16 * v9 + v8;
    *(_QWORD *)v10 = v6;
    *(_DWORD *)(v10 + 8) = v7;
    *(_DWORD *)(v10 + 12) = 0;
    ++*(_QWORD *)(a1 + 8);
  }
  return a1;
}

