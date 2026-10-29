unsigned __int64 __fastcall sub_ECC220(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  bool v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rsi
  unsigned __int64 v14; // r15
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r13
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  int v25; // [rsp+4h] [rbp-44h]

  v10 = a2 != 0;
  v11 = a1[294];
  v25 = a6;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v13 = 8LL * ((a2 != 0) + 2) + 16;
  a1[304] += v13;
  if ( a1[295] >= v13 + v12 && v11 )
  {
    a1[294] = v13 + v12;
    v14 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v14 = sub_962430((__int64)(a1 + 294), v13, v13, 3, v12, a6);
  }
  sub_EC5910((_WORD *)v14, 1);
  v15 = *(_BYTE *)(v14 + 1);
  *(_QWORD *)(v14 + 8) = 0;
  *(_BYTE *)(v14 + 1) = (2 * v10) | v15 & 0xFD;
  *(_QWORD *)(v14 + 8LL * ((*(_WORD *)v14 & 0x200) != 0) + 16) = a3;
  *(_QWORD *)(v14 + 8LL * ((unsigned int)((*(_WORD *)v14 & 0x200) != 0) + 1) + 16) = a4;
  if ( a2 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    v19 = a1[294];
    a1[304] += 24LL;
    v20 = v16;
    v21 = ((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 24;
    if ( a1[295] >= v21 && v19 )
    {
      a1[294] = v21;
      v22 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v22 = sub_962430((__int64)(a1 + 294), 24, 24, 3, v17, v18);
    }
    sub_EC5910((_WORD *)v22, 245);
    *(_QWORD *)(v22 + 8) = a2;
    *(_QWORD *)(v22 + 16) = v20;
    *(_QWORD *)(v14 + 16) = v22;
  }
  *(_DWORD *)(v14 + 4) = a5;
  *(_DWORD *)(v14 + 8) = v25;
  *(_DWORD *)(v14 + 12) = a7;
  return v14;
}

