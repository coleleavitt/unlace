unsigned __int64 __fastcall sub_55F6E0(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // r11d
  unsigned int v7; // edi
  char *v8; // r10
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  __int64 v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r14
  unsigned int v15; // r13d
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  char *v18; // r13
  __int64 v19; // rax

  v3 = a2[1];
  v4 = *a2;
  v5 = *(unsigned int *)(a1 + 48);
  v6 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 20 * v4 + 12);
  v7 = *(_DWORD *)(a1 + 112) - v6;
  if ( (_DWORD)v5 )
  {
    v8 = *(char **)(a1 + 40);
    LODWORD(v9) = v5;
    result = (unsigned __int64)&v8[16 * (unsigned int)(v5 - 1)];
    while ( 1 )
    {
      v11 = *(unsigned __int16 *)(result + 8);
      v12 = v9;
      v9 = (unsigned int)(v9 - 1);
      if ( (unsigned int)v11 < v7 )
        break;
      if ( (_DWORD)v11 == v7 )
      {
        v11 = *(unsigned __int16 *)(result + 12);
        if ( (_WORD)v11 == (_WORD)v3 )
        {
          if ( (_WORD)v4 == *(_WORD *)(result + 10) )
            return result;
          break;
        }
        if ( (unsigned __int16)v3 >= (unsigned __int16)v11 )
          break;
      }
      result -= 16LL;
      if ( !(_DWORD)v9 )
        goto LABEL_19;
    }
    v13 = v3 << 32;
    v14 = v12 + 1;
    v15 = v5 + 1;
    v16 = (unsigned __int8)((_WORD)v6 == 1) << 15;
    BYTE1(v16) |= 0x10u;
    result = v16 << 48;
    v17 = result | v13 | (unsigned int)(unsigned __int16)v7 | ((_DWORD)v4 << 16);
    if ( (unsigned int)v5 < v12 )
      sub_55D2B0((unsigned __int16)v7, v11, v5, v9, v13);
  }
  else
  {
    v8 = *(char **)(a1 + 40);
LABEL_19:
    v15 = v5 + 1;
    v14 = 1;
    v12 = 0;
    v19 = (unsigned __int8)((_WORD)v6 == 1) << 15;
    BYTE1(v19) |= 0x10u;
    result = v19 << 48;
    v17 = result | (v3 << 32) | (unsigned int)(unsigned __int16)v7 | ((_DWORD)v4 << 16);
  }
  if ( *(_DWORD *)(a1 + 52) < v15 )
  {
    if ( v8 )
      result = (unsigned __int64)off_8C52A8(v8, 16LL * v15);
    else
      result = (unsigned __int64)off_8C52B8(16LL * v15);
    v8 = (char *)result;
    *(_QWORD *)(a1 + 40) = result;
    LODWORD(v5) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 52) = v15;
  }
  v18 = &v8[16 * v12];
  if ( v12 < (unsigned int)v5 )
    result = (unsigned __int64)memmove(&v8[16 * v14], &v8[16 * v12], 16LL * ((unsigned int)v5 - v12));
  *(_QWORD *)v18 = 0xFFFFFFFFFFFFLL;
  *((_QWORD *)v18 + 1) = v17;
  ++*(_DWORD *)(a1 + 48);
  return result;
}
