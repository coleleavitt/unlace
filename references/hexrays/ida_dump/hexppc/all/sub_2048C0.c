__int64 __fastcall sub_2048C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  char v8; // r15
  unsigned int v11; // eax
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rax
  _DWORD *v15; // rsi
  unsigned int *v16; // rax
  unsigned int v17; // r12d
  _QWORD **v18; // rdi
  __int64 *v19; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  int v25; // edx
  _QWORD v26[9]; // [rsp+0h] [rbp-48h] BYREF

  v26[1] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v6 + 2) & 4) != 0 )
    goto LABEL_23;
  v8 = a3;
  LOBYTE(v11) = sub_A59C0(v6, *(_DWORD **)(a1 + 32), a2, a4, a5 + 80);
  v12 = v11;
  if ( !(_BYTE)v11 || *(_DWORD *)(a2 + 4) != a4 && !*(_DWORD *)(a5 + 92) )
    return 0;
  v13 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(v13 + 64) == 8
    && (unsigned __int8)sub_EFA00(
                          *(_QWORD *)(v13 + 72),
                          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL),
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          a2) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x80u;
    **(_DWORD **)(a1 + 8) &= ~0x10000u;
    return v12;
  }
  v14 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v14 + 320) )
  {
    v15 = *(_DWORD **)(a1 + 32);
    if ( *v15 == 4 || *v15 == 67 && v15[9] == v15[17] )
    {
      v18 = *(_QWORD ***)(v14 + 800);
      if ( v18 )
      {
        if ( v8 )
        {
          v19 = sub_1F8090(v18, (unsigned __int64)(v15 + 8));
          if ( !v19 || v19[1] >= a4 )
          {
            v14 = *(_QWORD *)(a1 + 8);
            goto LABEL_18;
          }
        }
        else
        {
          v19 = sub_1F8090(v18, (unsigned __int64)(v15 + 16));
          if ( !v19 || v19[1] >= a4 )
            goto LABEL_10;
        }
        v23 = *v19;
        v24 = *((int *)v19 + 4);
        if ( *(_QWORD *)(v23 + 440) < v24 )
        {
          if ( !under_debugger )
            sub_37EEE0(51258);
          BUG();
        }
        v25 = *(_DWORD *)(*(_QWORD *)(v23 + 432) + 104 * v24 + 24);
        if ( (v25 & 0x40) != 0 )
          return 0;
        v14 = *(_QWORD *)(a1 + 8);
        if ( *(_BYTE *)(v14 + 320) )
        {
          if ( (v25 & 0x100) != 0 )
            return 0;
        }
      }
    }
  }
  if ( v8 )
  {
LABEL_18:
    v17 = 4;
    goto LABEL_19;
  }
LABEL_10:
  v16 = *(unsigned int **)(a1 + 32);
  if ( (*((_BYTE *)v16 + 5) & 0x40) != 0
    && *(int *)(a2 + 4) <= 4
    && (unsigned __int8)sub_32A9C0(*v16)
    && (unsigned __int8)sub_11C340((char *)(*(_QWORD *)(a1 + 32) + 48LL), v26, 0)
    && !v26[0]
    && !sub_119210((unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 32LL), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL))
    && sub_12DCF0(
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
         *(const __m128i **)(a1 + 16),
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 32) + 32LL,
         2 * *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL),
         1u,
         1u) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL);
    v21 = *(_QWORD *)(a1 + 16);
    v22 = *(_DWORD *)(v21 + 24);
    BYTE1(v22) &= ~2u;
    LOBYTE(v22) = v22 | 0x80;
    *(_DWORD *)(v21 + 24) = v22;
    return v12;
  }
  v14 = *(_QWORD *)(a1 + 8);
  v17 = 0;
LABEL_19:
  if ( !sub_119210((unsigned __int8 *)a2, *(_QWORD *)(v14 + 1496)) )
    v17 |= 3u;
  if ( !(unsigned __int8)sub_A7C90(*(_QWORD *)(a1 + 16), *(unsigned int **)(a1 + 24), a2, v17) )
  {
    v6 = *(_QWORD *)(a1 + 8);
LABEL_23:
    sub_1762C0((_QWORD *)(v6 + 952), (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 24LL), a3, a4, a5);
    return 0;
  }
  return v12;
}
