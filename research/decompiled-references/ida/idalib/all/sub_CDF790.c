__int64 __fastcall sub_CDF790(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 v6; // rdx
  char v7; // r14
  char v8; // r13
  unsigned int v9; // eax
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned int v18; // eax
  __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = 0;
  if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return v5;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 13
    || (v6 = *(unsigned __int16 *)(v6 + 18), LOWORD(v6) = ((unsigned __int16)v6 >> 3) & 0x1FF, (_WORD)v6 != 435) )
  {
    if ( (*(_BYTE *)(a2 + 1) & 6) != 0
      || (v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(v6 + 16) == 14)
      || (v5 = (unsigned __int64)sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(a2 + 8)) >> 32, (_BYTE)v5) )
    {
      v7 = *(_BYTE *)(a1 + 1360);
      *(_BYTE *)(a1 + 1360) = 0;
      v8 = *(_BYTE *)(a1 + 1362);
      *(_BYTE *)(a1 + 1362) = 0;
      v9 = sub_CD69A0(a1, a2, v6, a4, a5);
      *(_BYTE *)(a1 + 1360) = v7;
      *(_BYTE *)(a1 + 1362) = v8;
      return v9;
    }
    else
    {
      v19[0] = a2 | 2;
      v11 = sub_CBCD40(a1, v19, 0, 0, 1, 0);
      v12 = v11;
      if ( BYTE4(v11) )
      {
        v19[0] = a2 | 4;
        if ( (unsigned __int8)sub_CFF720(a1, (unsigned int)v11, v19) )
        {
          v14 = *(unsigned int *)(a1 + 1384);
          v15 = *(unsigned int *)(a1 + 1388);
          v16 = v14 + 1;
          if ( v14 + 1 > v15 )
          {
            sub_2237220(a1 + 1376, a1 + 1392, v16, 16);
            v14 = *(unsigned int *)(a1 + 1384);
          }
          v17 = (_QWORD *)(*(_QWORD *)(a1 + 1376) + 16 * v14);
          *v17 = 2;
          v17[1] = v12;
          ++*(_DWORD *)(a1 + 1384);
          v18 = sub_CD6B90(a1, a2, v16, v15, v13);
          --*(_DWORD *)(a1 + 1384);
          return v18;
        }
      }
    }
    return v5;
  }
  return (unsigned int)sub_CDA710(a1, a2, v6, a4, a5);
}
