__int64 __fastcall sub_19A11A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v10; // rbp
  __int64 v11; // rdi
  int v12; // eax
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  __int16 v16; // ax
  unsigned __int8 v17; // al
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 32);
  v7 = a2;
  v8 = v6 + 8LL * *(unsigned int *)(a1 + 40);
  if ( v6 == v8 )
    goto LABEL_11;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v8 - 8);
    if ( (*(_BYTE *)(v10 + 8) & 7) == 2 )
    {
      v11 = *(_QWORD *)(v10 + 1584);
      if ( v11 )
      {
        a2 = *(_QWORD *)(a1 + 544);
        if ( !(unsigned __int8)sub_B91990(v11 + 64, a2, a3, a4, a5, a6) )
        {
          if ( *(_BYTE *)(v10 + 1600) )
            goto LABEL_11;
        }
      }
      v12 = *(_DWORD *)(v10 + 1312);
      if ( v12 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 1320) + 32LL * (unsigned int)(v12 - 1) + 24) & 3) == 0 )
          break;
      }
    }
    v8 -= 8;
    if ( v6 == v8 )
      goto LABEL_11;
  }
  if ( (v13 = *(_QWORD **)(v10 + 1592), (v14 = v13[6] & 0xFFFFFFFFFFFFFFF0LL) != 0)
    && ((v15 = *(_QWORD *)v14, *(_BYTE *)(*(_QWORD *)v14 + 16LL) == 26)
     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
     && (v15 = sub_F63050(v15, a2, a3, a4)) != 0)
    && (unsigned __int8)sub_B981D0(v13, a2) )
  {
    v16 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) >> 2) & 1;
  }
  else
  {
LABEL_11:
    LOBYTE(v16) = 0;
  }
  *(_BYTE *)(v7 + 2) = (16 * v16) | *(_BYTE *)(v7 + 2) & 0xEF;
  v17 = sub_B63530((_QWORD *)v7);
  *(_BYTE *)(v7 + 1) = (v17 << 6) | *(_BYTE *)(v7 + 1) & 0x3F;
  result = *(_BYTE *)(v7 + 2) & 0xF8 | (v17 >> 2) & 7u;
  *(_BYTE *)(v7 + 2) = result;
  return result;
}
