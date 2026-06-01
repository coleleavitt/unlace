__int64 __fastcall sub_18EC860(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax

  v8 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD *)v8;
  if ( *(_BYTE *)(*(_QWORD *)v8 + 16LL) == 7 )
    goto LABEL_2;
  v10 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v10 == 7 )
  {
    v9 = sub_F63050(v9, a2, a3, a4);
    if ( v9 )
    {
LABEL_2:
      v9 = *(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v10 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      goto LABEL_3;
    }
    v9 = *(_QWORD *)v8;
    v10 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  }
LABEL_3:
  v11 = v10 & 0xFFFFFFF7;
  result = 1;
  if ( (_BYTE)v11 != 34 )
    return result;
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_F68450(v9, a2, a3, v11, a5) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                  & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v13 + 16);
  if ( (_BYTE)v16 != 13 )
  {
    if ( (unsigned int)(v16 - 25) > 1 )
      return (unsigned int)sub_18BCD60(a1, (unsigned int)a2, a3, v14, v15, a6) ^ 1;
    sub_18EC000(a1, a2, a3, a6);
    return ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) >> 3) ^ 1) & 1;
  }
  if ( ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    sub_18E6930(a1, a2, a3, a6);
    return ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) >> 3) ^ 1) & 1;
  }
  return (unsigned int)sub_18BCD60(a1, (unsigned int)a2, a3, v14, v15, a6) ^ 1;
}
