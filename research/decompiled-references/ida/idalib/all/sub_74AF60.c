__int64 __fastcall sub_74AF60(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  int v3; // r11d
  __int64 v4; // r10
  __int64 result; // rax
  unsigned int v6; // r9d
  unsigned int v7; // ecx
  int v8; // ebp
  _BYTE *v9; // r12
  __int64 v10; // rbx
  char v11; // r13
  char v12; // r11
  unsigned int v13; // edx
  signed int v14; // r14d
  unsigned __int64 v15; // rdi
  _BYTE *v16; // rdx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // [rsp+0h] [rbp-40h]
  unsigned int v22; // [rsp+4h] [rbp-3Ch]

  v2 = *(unsigned int *)(a1 + 172);
  v3 = *(_DWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 96);
  result = *(unsigned int *)(a1 + 184);
  v6 = v2 + 262 - v3;
  v7 = *(_DWORD *)(a1 + 188);
  v8 = *(_DWORD *)(a1 + 88);
  v21 = *(_DWORD *)(a1 + 208);
  v9 = (_BYTE *)(v4 + v2);
  v10 = *(_QWORD *)(a1 + 112);
  if ( (unsigned int)v2 <= v3 - 262 )
    v6 = 0;
  v11 = v9[(int)result - 1];
  v12 = v9[(int)result];
  if ( (unsigned int)result >= *(_DWORD *)(a1 + 204) )
    v7 >>= 2;
  v13 = *(_DWORD *)(a1 + 180);
  v14 = *(_DWORD *)(a1 + 208);
  v15 = v4 + v2 + 258;
  v22 = v13;
  if ( v13 < v21 )
    v14 = v13;
  while ( 1 )
  {
    v16 = (_BYTE *)(v4 + a2);
    if ( v16[(int)result] != v12 || v16[(int)result - 1] != v11 || *v16 != *v9 || v16[1] != v9[1] )
      goto LABEL_8;
    v17 = v9 + 2;
    v18 = v16 + 2;
    while ( 1 )
    {
      if ( v17[1] != v18[1] )
      {
        LODWORD(v17) = (_DWORD)v17 + 1;
        goto LABEL_23;
      }
      if ( v17[2] != v18[2] )
      {
        LODWORD(v17) = (_DWORD)v17 + 2;
        goto LABEL_23;
      }
      if ( v17[3] != v18[3] )
      {
        LODWORD(v17) = (_DWORD)v17 + 3;
        goto LABEL_23;
      }
      if ( v17[4] != v18[4] )
      {
        LODWORD(v17) = (_DWORD)v17 + 4;
        goto LABEL_23;
      }
      if ( v17[5] != v18[5] )
      {
        LODWORD(v17) = (_DWORD)v17 + 5;
        goto LABEL_23;
      }
      if ( v17[6] != v18[6] )
      {
        LODWORD(v17) = (_DWORD)v17 + 6;
        goto LABEL_23;
      }
      if ( v17[7] != v18[7] )
        break;
      v17 += 8;
      v18 += 8;
      if ( v15 <= (unsigned __int64)v17 || *v17 != *v18 )
        goto LABEL_23;
    }
    LODWORD(v17) = (_DWORD)v17 + 7;
LABEL_23:
    v19 = v15 - (_DWORD)v17;
    v20 = 258 - v19;
    if ( (int)result >= 258 - v19 )
    {
LABEL_8:
      a2 = *(unsigned __int16 *)(v10 + 2LL * (v8 & a2));
      if ( v6 >= a2 )
        goto LABEL_26;
      goto LABEL_9;
    }
    *(_DWORD *)(a1 + 176) = a2;
    if ( (int)v20 >= v14 )
      break;
    a2 = *(unsigned __int16 *)(v10 + 2LL * (v8 & a2));
    v11 = v9[257 - v19];
    v12 = v9[v20];
    result = v20;
    if ( v6 >= a2 )
      goto LABEL_26;
LABEL_9:
    if ( !--v7 )
      goto LABEL_26;
  }
  result = v20;
LABEL_26:
  if ( (unsigned int)result > v22 )
    return v22;
  return result;
}
