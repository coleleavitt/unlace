__int64 __fastcall sub_808E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax

  if ( a4 != -1 )
    a3 = a4;
  if ( a5 < 0 )
    goto LABEL_6;
  v5 = a3;
  if ( (_WORD)a5 == 160 )
  {
    *(_BYTE *)(a1 + 24) = 11;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v7 = qvector_reserve(a1, 0, 1, 24);
    v8 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v7;
    v9 = v7 + 24 * v8;
    *(_QWORD *)v9 = 0;
    *(_QWORD *)(v9 + 8) = v5;
    *(_DWORD *)(v9 + 16) = 0;
    ++*(_QWORD *)(a1 + 8);
    return a1;
  }
  else
  {
    if ( (unsigned __int16)a5 != 15 )
    {
LABEL_6:
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 24) = 0;
      *(_OWORD *)(a1 + 8) = 0;
      return a1;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 212LL) && (unsigned __int64)(get_sreg(a3, 20) - 1) > 0xFFFFFFFFFFFFFFFDLL )
      v10 = 8;
    else
      v10 = 4;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 11;
    *(_OWORD *)(a1 + 8) = 0;
    v11 = qvector_reserve(a1, 0, 1, 24);
    v12 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v11;
    v13 = v11 + 24 * v12;
    *(_QWORD *)v13 = v5 + v10;
    *(_QWORD *)(v13 + 8) = v5;
    *(_DWORD *)(v13 + 16) = 0x100000;
    ++*(_QWORD *)(a1 + 8);
    return a1;
  }
}
