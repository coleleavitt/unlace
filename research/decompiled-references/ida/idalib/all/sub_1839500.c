__int64 __fastcall sub_1839500(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 result; // rax
  _QWORD *v3; // rax
  __int64 v4; // r12
  _QWORD *v5; // rbp
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // [rsp+0h] [rbp-60h]
  __int64 v16[2]; // [rsp+8h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-48h]

  v1 = *(_QWORD **)a1;
  result = 0;
  if ( (**(_QWORD **)a1 & 0xFFFFFFFFFFFFFFFELL) != 0 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    v4 = *(_QWORD *)(a1 + 16);
    if ( !*v3 && !*(_DWORD *)(v4 + 16) )
    {
      *v3 = **(_QWORD **)a1;
LABEL_5:
      *v1 = 0;
      return 0;
    }
    v5 = *(_QWORD **)(a1 + 24);
    v6 = sub_19249E0(*v5, *((unsigned int *)v5 + 44), 9, **(_QWORD **)a1 & 0xFFFFFFFFFFFFFFFELL, 0);
    v7 = v6;
    if ( v6 == 1
      || (v8 = sub_19A26C0(*v5, *((unsigned int *)v5 + 44), 135),
          v9 = sub_1C46CA0(*v5, *((unsigned int *)v5 + 44), v8 & 0xFFFFFFFFFFFFFFFELL, 0),
          v9 == 1) )
    {
      *(_BYTE *)v4 = 1;
    }
    else
    {
      v10 = *v5;
      sub_1917B40((unsigned int)v16, *v5, 0, *((_DWORD *)v5 + 44), v7 & 0xFFFFFFFE, 0, 0);
      v11 = sub_1C3A020(
              v10,
              *((_DWORD *)v5 + 44),
              0,
              *((_DWORD *)v5 + 44),
              0,
              *((_DWORD *)v5 + 44),
              v16[0],
              v16[1],
              v17,
              v9 & 0xFFFFFFFFFFFFFFFELL,
              0,
              0);
      v12 = ((v11 == 1) | *(_BYTE *)v4) == 0;
      *(_BYTE *)v4 |= v11 == 1;
      if ( v12 )
      {
        v13 = *(unsigned int *)(v4 + 16);
        v14 = v11 & 0xFFFFFFFFFFFFFFFELL;
        if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 20) )
        {
          v15 = v14;
          sub_2237220(v4 + 8, v4 + 24, v13 + 1, 8);
          v13 = *(unsigned int *)(v4 + 16);
          v14 = v15;
        }
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8 * v13) = v14;
        v1 = *(_QWORD **)a1;
        ++*(_DWORD *)(v4 + 16);
        goto LABEL_5;
      }
    }
    return 1;
  }
  return result;
}
