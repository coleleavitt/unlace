__int64 __fastcall kind_and_size_ah_t__::vfunc_4(__int64 a1, double a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // rax
  int v7; // edx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // eax
  int v16; // edx

  v4 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v4 - 2) > 2 )
  {
    v6 = *(_QWORD *)(a4 + 728);
    v7 = *(_DWORD *)(a1 + 16);
    if ( v7 != *(_DWORD *)(v6 + 24) )
    {
LABEL_3:
      *(_DWORD *)(v6 + 24) = v7;
      *(_DWORD *)(v6 + 36) = v4;
      return 1;
    }
LABEL_10:
    if ( *(_DWORD *)(v6 + 36) == (_DWORD)v4 )
      return 1;
    goto LABEL_3;
  }
  v9 = sub_1F3B50(a4, 0, a4, v4, a2);
  v12 = sub_1EA6A0(a4 + 384, 0, v10, v11, a2);
  v13 = sub_2CABB0(a4, nullptr, v9, *(__int16 *)(v12 + 28), 1, 0, a2);
  v14 = getseg(v13);
  if ( v13 != -1 && v14 )
  {
    *(_DWORD *)(*(_QWORD *)(a4 + 728) + 28LL) = 1;
    v15 = 1 << (*(_BYTE *)(v14 + 43) + 4);
    LODWORD(v4) = *(_DWORD *)(a1 + 12);
    v16 = v15 + 7;
    if ( v15 >= 0 )
      v16 = v15;
    v6 = *(_QWORD *)(a4 + 728);
    v7 = v16 >> 3;
    if ( v7 != *(_DWORD *)(v6 + 24) )
      goto LABEL_3;
    goto LABEL_10;
  }
  sub_1C7D20(nullptr);
  return 0;
}
