/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E5940
// Address: 0x00000000000E5940

//----- (00000000000E5940) ----------------------------------------------------
__int64 __fastcall sub_E5940(_QWORD *a1, __int64 a2)
{
  _BYTE *v3; // rdx
  _BYTE *v4; // rdi
  int v5; // ebx
  _BYTE *v6; // rcx
  _BYTE *v7; // rbx
  unsigned __int64 i; // rdx
  _BYTE *v9; // r13
  __int64 v10; // rsi
  _BYTE *v11; // rbx
  _BYTE *v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // r12
  char *v16; // rax
  _QWORD *v17; // rbp
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int16 v21; // ax
  char v22; // dl
  __int64 v23; // rax
  __int64 v24; // r15
  _QWORD *v25; // rbp
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r15
  _BYTE *v31; // rbx
  _QWORD *v32; // r13
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx

  v3 = (_BYTE *)*a1;
  v4 = (_BYTE *)a1[1];
  v5 = 0;
  if ( v3 == v4 )
  {
LABEL_33:
    if ( v3 != v4 )
    {
      if ( *v3 == 86 )
      {
        *a1 = ++v3;
        v5 |= 2u;
      }
      if ( v3 != v4 && *v3 == 75 )
      {
        *a1 = v3 + 1;
        v5 |= 1u;
      }
    }
    v16 = sub_D4260((__int64)a1);
    if ( !v16 )
      return 0;
    v15 = (__int64)v16;
    if ( v5 )
    {
      v17 = (_QWORD *)a1[604];
      v18 = v17[1];
      if ( (unsigned __int64)(v18 + 32) < 0xFF0 )
      {
        v20 = v17 + 1;
      }
      else
      {
        v19 = (_QWORD *)operator new[](0x1000u);
        *v19 = v17;
        v19[1] = 0;
        a1[604] = v19;
        v18 = 0;
        v20 = v19 + 1;
        v17 = v19;
      }
      *v20 = v18 + 32;
      v21 = *(_WORD *)(v15 + 9);
      v22 = *(_BYTE *)(v15 + 11);
      *((_BYTE *)v17 + v18 + 24) = 3;
      *(_WORD *)((char *)v17 + v18 + 25) = v21;
      *((_BYTE *)v17 + v18 + 27) = v22;
      *(_QWORD *)((char *)v17 + v18 + 16) = off_153258;
      *(_DWORD *)((char *)v17 + v18 + 28) = v5;
      *(_QWORD *)((char *)v17 + v18 + 32) = v15;
      return (__int64)v17 + v18 + 16;
    }
    return v15;
  }
  if ( *v3 != 85 )
  {
    if ( *v3 == 114 )
    {
      *a1 = ++v3;
      v5 = 4;
    }
    goto LABEL_33;
  }
  v6 = v3 + 1;
  *a1 = v3 + 1;
  if ( v4 == v3 + 1 || (unsigned __int8)(*v6 - 48) > 9u )
    return 0;
  v7 = v3 + 2;
  *a1 = v3 + 2;
  for ( i = (char)v3[1] - 48LL; v4 != v7; ++v6 )
  {
    if ( (unsigned __int8)(*v7 - 48) >= 0xAu )
      break;
    *a1 = v6 + 2;
    a2 = (char)*v7++;
    i = a2 + 10 * i - 48;
  }
  if ( v4 - v7 < i )
    return 0;
  v9 = &v7[i];
  *a1 = &v7[i];
  if ( !i )
    return 0;
  if ( i >= 9
    && *v7 == 111
    && v6[2] == 98
    && v6[3] == 106
    && v6[4] == 99
    && v6[5] == 112
    && v6[6] == 114
    && v6[7] == 111
    && v6[8] == 116
    && v6[9] == 111 )
  {
    v10 = 9;
    if ( i <= 9 )
      v10 = i - 1;
    v11 = &v7[v10];
    *a1 = v11;
    a1[1] = v9;
    if ( i == v10 || (unsigned __int8)(*v11 - 48) > 9u )
      goto LABEL_30;
    v12 = v11 + 1;
    *a1 = v11 + 1;
    v13 = (char)*v11 - 48LL;
    if ( v9 == v12 )
    {
LABEL_28:
      v12 = v9;
    }
    else
    {
      v14 = i - 1 - v10;
      while ( (unsigned __int8)(*v12 - 48) < 0xAu )
      {
        *a1 = v12 + 1;
        v10 = (char)*v12;
        v13 = v10 + 10 * v13 - 48;
        ++v12;
        if ( !--v14 )
          goto LABEL_28;
      }
    }
    if ( v9 - v12 < v13 )
    {
LABEL_30:
      a1[1] = v4;
      *a1 = v9;
      return 0;
    }
    a1[1] = v4;
    *a1 = v9;
    if ( v13 )
    {
      v29 = sub_E5940((__int64)a1, v10);
      if ( v29 )
      {
        v30 = v29;
        v31 = &v12[v13];
        v32 = (_QWORD *)a1[604];
        v33 = v32[1];
        if ( (unsigned __int64)(v33 + 48) < 0xFF0 )
        {
          v35 = v32 + 1;
        }
        else
        {
          v34 = (_QWORD *)operator new[](0x1000u);
          *v34 = v32;
          v34[1] = 0;
          a1[604] = v34;
          v33 = 0;
          v35 = v34 + 1;
          v32 = v34;
        }
        *v35 = v33 + 48;
        v15 = (__int64)v32 + v33 + 16;
        *(_DWORD *)((char *)v32 + v33 + 24) = 16843018;
        *(_QWORD *)v15 = off_153178;
        *(_QWORD *)((char *)v32 + v33 + 32) = v30;
        *(_QWORD *)((char *)v32 + v33 + 40) = v12;
        *(_QWORD *)((char *)v32 + v33 + 48) = v31;
        return v15;
      }
    }
    return 0;
  }
  v23 = sub_E5940((__int64)a1, a2);
  if ( !v23 )
    return 0;
  v24 = v23;
  v25 = (_QWORD *)a1[604];
  v26 = v25[1];
  if ( (unsigned __int64)(v26 + 48) < 0xFF0 )
  {
    v28 = v25 + 1;
  }
  else
  {
    v27 = (_QWORD *)operator new[](0x1000u);
    *v27 = v25;
    v27[1] = 0;
    a1[604] = v27;
    v26 = 0;
    v28 = v27 + 1;
    v25 = v27;
  }
  *v28 = v26 + 48;
  v15 = (__int64)v25 + v26 + 16;
  *(_DWORD *)((char *)v25 + v26 + 24) = 16843010;
  *(_QWORD *)v15 = off_1531E8;
  *(_QWORD *)((char *)v25 + v26 + 32) = v24;
  *(_QWORD *)((char *)v25 + v26 + 40) = v7;
  *(_QWORD *)((char *)v25 + v26 + 48) = v9;
  return v15;
}
// 153178: using guessed type __int64 (__fastcall *off_153178[7])();
// 1531E8: using guessed type __int64 (__fastcall *off_1531E8[7])();
// 153258: using guessed type __int64 (__fastcall *off_153258[7])();
