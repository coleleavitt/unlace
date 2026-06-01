unsigned __int64 __fastcall sub_56B3A0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v6; // ecx
  unsigned int v7; // r13d
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // esi
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // ecx
  _QWORD *v17; // r8
  unsigned int v18; // edx
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rsi
  _QWORD *v22; // rcx

  *(_DWORD *)(a2 + 8) = 0;
  result = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)result )
  {
    v3 = 0;
    while ( 1 )
    {
      v10 = (unsigned int)(result - 1);
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v10);
      result = (v11 & 8) != 0;
      if ( (v11 & 1) == 0 )
        result = (*(_BYTE *)(v11 + 44) & 4) != 0;
      if ( !(_BYTE)result )
        break;
      v12 = *(_DWORD *)(a2 + 12);
      v13 = v3 + 1;
      v14 = *(_QWORD **)a2;
      *(_DWORD *)(a1 + 8) = v10;
      if ( v12 >= v3 + 1 )
        goto LABEL_15;
      v6 = 2 * v12;
      if ( 2 * v12 < 8 )
        v6 = 8;
      if ( v6 < v13 )
        v6 = v3 + 1;
      v7 = v6;
      if ( v12 >= v6 )
      {
LABEL_15:
        v15 = v3++;
        *(_DWORD *)(a2 + 8) = v13;
        result = *(unsigned int *)(a1 + 8);
        v14[v15] = v11;
        if ( !(_DWORD)result )
          break;
      }
      else
      {
        if ( v14 )
          v8 = off_8C52A8(v14, 8LL * v6);
        else
          v8 = off_8C52B8(8LL * v6);
        v9 = *(unsigned int *)(a2 + 8);
        *(_QWORD *)a2 = v8;
        *(_DWORD *)(a2 + 12) = v7;
        v3 = v9 + 1;
        *(_DWORD *)(a2 + 8) = v9 + 1;
        result = *(unsigned int *)(a1 + 8);
        v8[v9] = v11;
        if ( !(_DWORD)result )
          break;
      }
    }
    v16 = v3 >> 1;
    if ( v3 >> 1 )
    {
      v17 = *(_QWORD **)a2;
      v18 = v3 - 1;
      result = *(_QWORD *)a2;
      v19 = v18 - v16;
      do
      {
        v20 = v18;
        v21 = *(_QWORD *)result;
        --v18;
        result += 8LL;
        v22 = &v17[v20];
        *(_QWORD *)(result - 8) = *v22;
        *v22 = v21;
      }
      while ( v18 != v19 );
    }
  }
  return result;
}
