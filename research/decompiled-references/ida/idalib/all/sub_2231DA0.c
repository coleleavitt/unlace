unsigned __int64 __fastcall sub_2231DA0(unsigned int *a1, unsigned int *a2, size_t a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rbp
  unsigned int *v9; // rbx
  unsigned int *v10; // r13
  unsigned __int64 v11; // rcx
  char *v12; // r13
  char *v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  char *v19; // rdi
  char *v20; // r11
  unsigned int v21; // edi
  unsigned int v22; // edi
  unsigned int v23; // ecx
  __int64 v24; // r8

  v4 = a1[5];
  v5 = a1[4];
  v6 = (v4 + a3) & 0x1FFFFFFF;
  a1[5] = v6;
  a1[4] = (a3 >> 29) + (v6 < v4) + v5;
  result = v4 & 0x3F;
  if ( !(_DWORD)result )
  {
    v8 = a3;
    v9 = a2;
    v10 = a1 + 6;
    if ( a3 <= 0x3F )
      goto LABEL_3;
    goto LABEL_19;
  }
  v15 = 64LL - (unsigned int)result;
  v16 = (_QWORD *)((char *)a1 + (unsigned int)result + 24);
  if ( v15 > a3 )
    return (unsigned __int64)memcpy(v16, a2, a3);
  if ( (unsigned int)v15 >= 8 )
  {
    v18 = ((unsigned __int64)a1 + (unsigned int)result + 32) & 0xFFFFFFFFFFFFFFF8LL;
    *v16 = *(_QWORD *)a2;
    *(_QWORD *)((char *)v16 + (unsigned int)v15 - 8) = *(_QWORD *)((char *)a2 + (unsigned int)v15 - 8);
    v19 = (char *)v16 - v18;
    v20 = (char *)((char *)a2 - v19);
    v21 = (v15 + (_DWORD)v19) & 0xFFFFFFF8;
    if ( v21 >= 8 )
    {
      v22 = v21 & 0xFFFFFFF8;
      v23 = 0;
      do
      {
        v24 = v23;
        v23 += 8;
        *(_QWORD *)(v18 + v24) = *(_QWORD *)&v20[v24];
      }
      while ( v23 < v22 );
    }
  }
  else if ( ((64 - (_BYTE)result) & 4) != 0 )
  {
    *(_DWORD *)v16 = *a2;
    *(_DWORD *)((char *)v16 + (unsigned int)v15 - 4) = *(unsigned int *)((char *)a2 + (unsigned int)v15 - 4);
  }
  else if ( (_DWORD)v15 )
  {
    *(_BYTE *)v16 = *(_BYTE *)a2;
    if ( ((64 - (_BYTE)result) & 2) != 0 )
      *(_WORD *)((char *)v16 + (unsigned int)v15 - 2) = *(_WORD *)((char *)a2 + (unsigned int)v15 - 2);
  }
  v10 = a1 + 6;
  v9 = (unsigned int *)((char *)a2 + v15);
  v8 = (unsigned int)result + a3 - 64;
  result = (unsigned __int64)sub_22315B0(a1, a1 + 6, 64);
  if ( v8 > 0x3F )
  {
LABEL_19:
    v17 = v8;
    LODWORD(v8) = v8 & 0x3F;
    result = (unsigned __int64)sub_22315B0(a1, v9, v17 & 0xFFFFFFFFFFFFFFC0LL);
    v9 = (unsigned int *)result;
  }
LABEL_3:
  if ( (unsigned int)v8 < 8 )
  {
    if ( (v8 & 4) != 0 )
    {
      *v10 = *v9;
      result = *(unsigned int *)((char *)v9 + (unsigned int)v8 - 4);
      *(unsigned int *)((char *)v10 + (unsigned int)v8 - 4) = result;
    }
    else if ( (_DWORD)v8 )
    {
      result = *(unsigned __int8 *)v9;
      *(_BYTE *)v10 = result;
      if ( (v8 & 2) != 0 )
      {
        result = *(unsigned __int16 *)((char *)v9 + (unsigned int)v8 - 2);
        *(_WORD *)((char *)v10 + (unsigned int)v8 - 2) = result;
      }
    }
  }
  else
  {
    v11 = (unsigned __int64)(v10 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v10 = *(_QWORD *)v9;
    result = (unsigned int)v8;
    *(_QWORD *)((char *)v10 + (unsigned int)v8 - 8) = *(_QWORD *)((char *)v9 + (unsigned int)v8 - 8);
    v12 = (char *)v10 - v11;
    v13 = (char *)((char *)v9 - v12);
    if ( (((_DWORD)v8 + (_DWORD)v12) & 0xFFFFFFF8) >= 8 )
    {
      LODWORD(result) = 0;
      do
      {
        v14 = (unsigned int)result;
        result = (unsigned int)(result + 8);
        *(_QWORD *)(v11 + v14) = *(_QWORD *)&v13[v14];
      }
      while ( (unsigned int)result < (((_DWORD)v8 + (_DWORD)v12) & 0xFFFFFFF8) );
    }
  }
  return result;
}
