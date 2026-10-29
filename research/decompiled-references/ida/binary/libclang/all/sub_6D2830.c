__int64 __fastcall sub_6D2830(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  unsigned int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  unsigned int v13; // edx
  unsigned int v14; // edx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // ebx

  v4 = *(unsigned int *)(a1 + 1984);
  v5 = *(_QWORD *)(a1 + 1968);
  if ( (_DWORD)v4 )
  {
    v7 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (__int64 *)(v5 + 16LL * v7);
    v9 = *v8;
    if ( *v8 == a2 )
    {
LABEL_3:
      if ( v8 != (__int64 *)(16 * v4 + v5) )
      {
        v10 = 16LL * *((unsigned int *)v8 + 2);
        if ( 16LL * *(unsigned int *)(a1 + 2000) != v10 )
        {
          result = *(unsigned int *)(v10 + *(_QWORD *)(a1 + 1992) + 8);
          goto LABEL_6;
        }
      }
    }
    else
    {
      v15 = 1;
      while ( v9 != -4096 )
      {
        v17 = v15 + 1;
        v7 = (v4 - 1) & (v15 + v7);
        v8 = (__int64 *)(v5 + 16LL * v7);
        v9 = *v8;
        if ( *v8 == a2 )
          goto LABEL_3;
        v15 = v17;
      }
    }
    result = 1;
LABEL_6:
    v12 = *(_QWORD *)(a1 + 2160);
    if ( (*(_BYTE *)(v12 + 60) & 0x10) != 0 && (*(_BYTE *)(v12 + 89) & 4) == 0 )
    {
      v13 = result;
      result = (unsigned __int16)result;
      v14 = HIWORD(v13);
      if ( a3 )
        result = v14;
    }
    if ( !(_DWORD)result )
      return 1;
    return result;
  }
  v16 = *(_QWORD *)(a1 + 2160);
  result = 1;
  if ( (*(_BYTE *)(v16 + 60) & 0x10) != 0 && (*(_BYTE *)(v16 + 89) & 4) == 0 )
    result = a3 == 0;
  if ( !(_DWORD)result )
    return 1;
  return result;
}

