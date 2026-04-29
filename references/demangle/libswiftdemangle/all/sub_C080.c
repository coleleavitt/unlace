__int64 __fastcall sub_C080(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // edx
  _QWORD *v7; // rcx
  char *v8; // rsi
  size_t v9; // r8
  unsigned __int64 v10; // rax
  unsigned int v11; // r13d
  char *v12; // rcx
  unsigned __int64 v13; // r15
  char *v14; // rax
  unsigned __int64 v15; // r14
  size_t v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r13
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // [rsp+8h] [rbp-40h]

  if ( !a2 )
    sub_BC10((int)"Demangler.cpp", 386, a1, (int)"Child");
  result = *(unsigned __int8 *)(a1 + 18);
  if ( (_BYTE)result == 4 )
  {
    v21 = *(_QWORD *)a1;
    v22 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    v23 = a3[1];
    if ( v23 )
    {
      v24 = (_QWORD *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      a3[1] = v24;
      if ( v24 )
      {
        v25 = v24 + 4;
        if ( (unsigned __int64)(v24 + 4) <= a3[2] )
        {
LABEL_29:
          a3[1] = v25;
          *(_DWORD *)(a1 + 12) += 4;
          *(_QWORD *)a1 = v24;
LABEL_30:
          *v24 = v21;
          *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v22;
          result = *(_QWORD *)a1;
          *(_QWORD *)(*(_QWORD *)a1 + 16LL) = a2;
          *(_DWORD *)(a1 + 8) = 3;
          *(_BYTE *)(a1 + 18) = 5;
          return result;
        }
      }
    }
    else if ( a3[2] > 0x17u )
    {
      a3[1] = 24;
      v24 = *(_QWORD **)a1;
      *(_DWORD *)(a1 + 12) += 3;
      goto LABEL_30;
    }
    v26 = 2LL * a3[4];
    if ( v26 < 0x28 )
      v26 = 40;
    a3[4] = v26;
    v27 = v26 + 8;
    v28 = malloc(v26 + 8);
    v29 = a3[3];
    a3[3] = v28;
    *v28 = v29;
    v24 = (_QWORD *)(((unsigned __int64)v28 + 15) & 0xFFFFFFFFFFFFFFF8LL);
    a3[2] = (char *)v28 + v27;
    v25 = v24 + 4;
    goto LABEL_29;
  }
  if ( (unsigned __int8)result > 4u )
  {
    if ( (_BYTE)result == 5 )
    {
      result = *(unsigned int *)(a1 + 8);
      v6 = *(_DWORD *)(a1 + 12);
      v7 = *(_QWORD **)a1;
      if ( (unsigned int)result >= v6 )
      {
        v8 = (char *)a3[1];
        v9 = 8LL * v6;
        if ( v8 == (char *)v7 + v9 && (unsigned __int64)(v8 + 8) <= a3[2] )
        {
          a3[1] = v8 + 8;
          result = *(unsigned int *)(a1 + 8);
          ++*(_DWORD *)(a1 + 12);
          v7 = *(_QWORD **)a1;
        }
        else
        {
          v10 = 2 * v6;
          v11 = 2 * v6;
          if ( v10 < 4 )
            v10 = 4;
          v12 = (char *)((unsigned __int64)(v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          a3[1] = v12;
          v13 = 8 * (v6 + v10);
          if ( !v12 || (v14 = &v12[v13], (unsigned __int64)&v12[v13] > a3[2]) )
          {
            v30 = 8LL * v6;
            v15 = 2LL * a3[4];
            if ( v15 < v13 + 8 )
              v15 = v13 + 8;
            a3[4] = v15;
            v16 = v15 + 8;
            v17 = malloc(v16);
            v18 = a3[3];
            v9 = v30;
            a3[3] = v17;
            *v17 = v18;
            v12 = (char *)(((unsigned __int64)v17 + 15) & 0xFFFFFFFFFFFFFFF8LL);
            a3[2] = (char *)v17 + v16;
            v14 = &v12[v13];
          }
          a3[1] = v14;
          v19 = memcpy(v12, *(const void **)a1, v9);
          *(_QWORD *)a1 = v19;
          v7 = v19;
          v20 = 4;
          if ( v11 >= 4 )
            v20 = v11;
          *(_DWORD *)(a1 + 12) += v20;
          result = *(unsigned int *)(a1 + 8);
        }
      }
      *(_DWORD *)(a1 + 8) = result + 1;
      v7[result] = a2;
    }
  }
  else if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 3 )
    {
      *(_QWORD *)(a1 + 8) = a2;
      *(_BYTE *)(a1 + 18) = 4;
    }
  }
  else
  {
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 18) = 3;
  }
  return result;
}
