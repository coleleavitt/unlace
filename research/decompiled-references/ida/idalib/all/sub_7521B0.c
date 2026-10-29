unsigned __int16 __fastcall sub_7521B0(__int64 a1, __int64 a2, size_t a3, unsigned __int16 a4)
{
  int v5; // eax
  int v6; // edx
  __int16 v7; // cx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  const void *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int16 result; // ax

  v5 = a4;
  v6 = *(_DWORD *)(a1 + 5940);
  v7 = *(_WORD *)(a1 + 5936) | (a4 << v6);
  *(_WORD *)(a1 + 5936) = v7;
  if ( v6 <= 13 )
  {
    *(_DWORD *)(a1 + 5940) = v6 + 3;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 40);
    v9 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v8 + 1;
    *(_BYTE *)(v9 + v8) = v7;
    v10 = *(_QWORD *)(a1 + 40);
    LOBYTE(v9) = *(_BYTE *)(a1 + 5937);
    v11 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v10 + 1;
    *(_BYTE *)(v11 + v10) = v9;
    LODWORD(v10) = *(_DWORD *)(a1 + 5940);
    *(_DWORD *)(a1 + 5940) = v10 - 13;
    *(_WORD *)(a1 + 5936) = v5 >> (16 - v10);
  }
  sub_750D80(a1);
  v13 = *(_QWORD *)(a1 + 40);
  v14 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 40) = v13 + 1;
  *(_BYTE *)(v14 + v13) = a3;
  v15 = *(_QWORD *)(a1 + 40);
  v16 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 40) = v15 + 1;
  *(_BYTE *)(v16 + v15) = BYTE1(a3);
  v17 = *(_QWORD *)(a1 + 40);
  v18 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 40) = v17 + 1;
  *(_BYTE *)(v18 + v17) = ~(_BYTE)a3;
  v19 = *(_QWORD *)(a1 + 40);
  v20 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 40) = v19 + 1;
  result = (unsigned __int16)~(_WORD)a3 >> 8;
  *(_BYTE *)(v20 + v19) = result;
  if ( a3 )
  {
    result = (unsigned __int16)memcpy((void *)(*(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 40)), v12, a3);
    *(_QWORD *)(a1 + 40) += a3;
  }
  else
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40);
  }
  return result;
}
