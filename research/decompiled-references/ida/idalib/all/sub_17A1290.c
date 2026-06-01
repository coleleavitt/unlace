void __fastcall sub_17A1290(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rdx
  _QWORD *v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h]

  if ( (*(_WORD *)a2 & 0x1FF) == 0x35 )
  {
    v7 = *(unsigned int *)(a1 + 40);
    v8 = *(unsigned int *)(a1 + 44);
    *(_BYTE *)(a1 + 28) = 1;
    if ( v7 + 1 > v8 )
    {
      sub_2237220(a1 + 32, a1 + 48, v7 + 1, 4);
      v7 = *(unsigned int *)(a1 + 40);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v7) = 0;
    ++*(_DWORD *)(a1 + 40);
    v9 = *(_QWORD **)(a2 + 16);
    v10 = *(_QWORD **)(a2 + 24);
    if ( v10 == v9 )
    {
      v10 = nullptr;
      v9 = nullptr;
    }
    v12 = v9;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v10 == v9 )
      {
LABEL_12:
        if ( !v11 )
        {
          --*(_DWORD *)(a1 + 40);
          return;
        }
      }
      while ( 1 )
      {
        if ( (v11 & 3) != 0 )
          v9 = (_QWORD *)sub_EF2B30((__int64)&v12);
        sub_17A1290(a1, *v9);
        ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL * *(unsigned int *)(a1 + 40) - 4);
        v11 = v13;
        if ( (v13 & 3) != 0 )
          break;
        v9 = v12 + 1;
        v12 = v9;
        if ( v10 == v9 )
          goto LABEL_12;
      }
      if ( (v13 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_EF2960((__int64)&v12);
      else
        sub_EF2750((unsigned __int64 *)&v12, 1);
      v9 = v12;
      v11 = v13;
    }
  }
  sub_17A0E80(a1, a2, a7, a3, a4, a5, a6);
}
