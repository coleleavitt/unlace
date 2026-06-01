__int64 __fastcall sub_1E4CAF0(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned int v10; // r15d
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // rax
  _DWORD *v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int16 v19; // cx

  result = a3;
  if ( a3 )
  {
    v5 = a4;
    v6 = (__int64)&a2[2 * a3];
    v7 = a2;
    v8 = *a2;
    v9 = *a2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *a2 )
      goto LABEL_3;
LABEL_13:
    v16 = *(_BYTE *)(v9 + 28) & 0x7F;
    v17 = (unsigned int)v16 - 40;
    if ( (unsigned int)v17 > 6 )
    {
      if ( v16 == 67 )
      {
        v10 = sub_BBE5B0(v9);
        v11 = sub_BBE590(v9);
      }
      else
      {
        if ( v16 == 47 )
        {
          v19 = *(_WORD *)(v9 + 70) >> 4;
          v11 = *(_DWORD *)(v9 + 68) & 0xFFFFF;
        }
        else
        {
          v19 = *(_WORD *)(v9 + 66) >> 4;
          v11 = *(_DWORD *)(v9 + 64) & 0xFFFFF;
        }
        v10 = v19;
      }
      while ( 1 )
      {
        v12 = *(_DWORD *)(v5 + 112);
        v13 = v12 + *(_DWORD *)(v5 + 8);
        if ( v12 > v11 )
          break;
        if ( v13 <= v11 )
          break;
        a4 = v10;
        v14 = *(_QWORD *)v5 + 24LL * (v13 - 1 - v11);
        if ( (unsigned __int64)v10 >= *(_QWORD *)(v14 + 16) )
          break;
        v15 = (_DWORD *)(*(_QWORD *)(v14 + 8) + 24LL * v10);
        if ( (*v15 & 0x7FFFFFFF) == 0 )
          break;
        result = (unsigned int)(v15[1] + 1);
LABEL_11:
        v7 += 2;
        if ( (__int64 *)v6 == v7 )
          return result;
        v8 = *v7;
        v9 = *v7 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !*v7 )
          goto LABEL_13;
LABEL_3:
        if ( (v8 & 4) != 0 || !v9 )
          goto LABEL_13;
        v10 = *(unsigned __int16 *)(v9 + 22);
        v11 = *(_WORD *)(v9 + 20) & 0x7FFF;
      }
    }
    else
    {
      v18 = *(_QWORD *)sub_1DBE240(*(_QWORD *)(a1 + 11280), v9, v17, a4);
      if ( (v18 & 4) != 0 )
      {
        result = (unsigned int)(*(_DWORD *)((v18 & 0xFFFFFFFFFFFFFFF8LL) + 8) + 1);
        goto LABEL_11;
      }
    }
    return 0;
  }
  return result;
}
