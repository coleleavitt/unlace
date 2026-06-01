__int64 __fastcall sub_147E420(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r8
  _BYTE *v6; // r10
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned __int8 v9; // si
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r13

  result = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(result + 56);
  if ( (*(_BYTE *)(v5 + 1) & 0x10) != 0 )
  {
    v6 = *(_BYTE **)a2;
    result = **(_BYTE **)a2 & 7;
    if ( (_BYTE)result != 1 )
    {
      result = *(unsigned int *)(a2 + 96);
      if ( (_DWORD)result == 7 )
      {
        result = *((unsigned int *)v6 + 66);
        if ( (_DWORD)result )
          return result;
        v7 = *(_QWORD *)(a1 + 96);
        v8 = *(_QWORD *)(v7 + 544);
        v9 = *(_BYTE *)(v8 + 8) & 0x7F;
      }
      else
      {
        if ( (_DWORD)result )
          return result;
        if ( !*(_QWORD *)(a2 + 16) )
          return result;
        v7 = *(_QWORD *)(a1 + 96);
        v8 = *(_QWORD *)(v7 + 544);
        v9 = *(_BYTE *)(v8 + 8) & 0x7F;
        result = (v9 + 70) & 0x7F;
        if ( (unsigned __int8)result > 3u )
          return result;
      }
      v10 = (*(_BYTE *)(a3 + 3) >> 2) & 0x1F;
      if ( (v6[4] & 0x30) != 0 && (*(_BYTE *)(v5 + 1) & 0x20) == 0 )
        v10 = (*(_BYTE *)(a3 + 3) >> 2) & 0x1E | 1u;
      if ( (*(_BYTE *)(v5 + 52) & 1) != 0 )
      {
        v11 = *(_QWORD *)(a3 + 40);
        v12 = v11 + 8LL * *(unsigned int *)(a3 + 48);
        if ( v12 != v11 )
        {
          v13 = *(_QWORD *)(a3 + 40);
          while ( 1 )
          {
            v14 = *(_WORD *)(*(_QWORD *)v13 + 32LL) - 282;
            if ( v14 <= 8u )
            {
              v15 = dword_26170C0[v14];
              if ( v15 )
                break;
            }
            v13 += 8;
            if ( v12 == v13 )
              goto LABEL_20;
          }
          v10 |= (unsigned int)(v15 << 9);
        }
      }
LABEL_20:
      v16 = v8 - 64;
      v17 = 0;
      if ( (unsigned int)v9 - 59 < 3 )
        v17 = v16;
      if ( *(_BYTE *)(a4 + 24) )
      {
        *(_BYTE *)(a4 + 24) = 0;
        sub_19A2DA0(a4);
      }
      result = sub_19A2CD0(a4, v7, v17, v10, 1);
      *(_BYTE *)(a4 + 24) = 1;
    }
  }
  return result;
}
