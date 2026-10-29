__int64 __fastcall sub_1793C50(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rax
  char v16; // r14
  __int64 v17; // r13
  unsigned int v18; // r15d
  unsigned __int64 v19; // r8
  char v20; // al

  v4 = a2;
  v5 = sub_B73640(a2);
  v10 = v5;
  if ( a3 == 1 )
  {
    if ( !v5 )
      goto LABEL_5;
    if ( (*(_WORD *)v5 & 0x1FFu) - 113 <= 1 )
    {
      a2 = *(unsigned int *)(a2 + 24);
      if ( (unsigned __int8)sub_17937B0(a1, a2, *(_QWORD *)(v5 + 16), v7) )
        goto LABEL_5;
    }
    return 0;
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 90) & 1) == 0 )
  {
    if ( !v10
      || (*(_WORD *)v10 & 0x1FFu) - 113 <= 1
      && (a2 = *(unsigned int *)(a2 + 24), (unsigned __int8)sub_17937B0(a1, a2, *(_QWORD *)(v10 + 16), v7))
      || (v15 = sub_168B6C0((__int64)a1),
          v16 = *(_BYTE *)(v15 + 18376),
          v17 = v15,
          *(_BYTE *)(v15 + 18376) = 1,
          v18 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 48)
                                                                                     & 0xFFFFFFFFFFFFFFF0LL)
                                                                         + 8LL)
                                                             & 0xFFFFFFFFFFFFFFF0LL)
                                                 + 16LL)
              - 43 <= 1,
          a2 = sub_168B6C0((__int64)a1),
          v20 = sub_C0D200((unsigned __int16 *)v10, (__int64 *)a2, v18, nullptr, v19),
          *(_BYTE *)(v17 + 18376) = v16,
          v20) )
    {
LABEL_5:
      v11 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v7, v8, v9);
      if ( v11 )
      {
        v12 = sub_B97300((__int64)v11);
        return sub_1793110(a1, *(_DWORD *)(v4 + 24), v12, v13);
      }
      return 1;
    }
    return 0;
  }
  return 1;
}
