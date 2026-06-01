__int64 __fastcall sub_1EA6140(char **a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // r13
  char *v7; // r12
  char *v8; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  char *v12; // rax
  char *v13; // rsi
  char *v14; // rdx
  size_t v15; // rdx
  char *v16; // rsi
  unsigned int v17; // eax
  unsigned int v18; // eax
  size_t v19; // rdx
  void *v20; // [rsp+0h] [rbp-48h] BYREF
  int v21; // [rsp+Ch] [rbp-3Ch]

  v6 = (unsigned __int64)a1[2];
  if ( v6 < a3 )
  {
    v10 = (unsigned __int64)a1[1];
    v11 = v10 + a3 - v6;
    do
      v10 *= 2LL;
    while ( v11 > v10 );
    v21 = a4;
    v12 = (char *)operator new[](v10);
    v13 = a1[2];
    v14 = a1[1];
    v7 = v12;
    LODWORD(v12) = (_DWORD)v13 - (_DWORD)v14;
    v15 = v14 - v13;
    v16 = &v13[(_QWORD)*a1];
    v20 = *a1;
    v6 = (unsigned int)((_DWORD)v12 + v10);
    memcpy(&v7[v6], v16, v15);
    a4 = v21;
    if ( v20 && v20 != a1 + 3 )
    {
      operator delete[](v20);
      a4 = v21;
    }
    v20 = (void *)v6;
    *a1 = v7;
    *(__m128 *)(a1 + 1) = _mm_loadh_ps((const double *)&v20);
    if ( a4 != 4 )
    {
LABEL_3:
      if ( a4 != 8 )
      {
        v8 = (char *)(v6 - a3);
        goto LABEL_5;
      }
      if ( !*((_BYTE *)a1 + 60) )
      {
        v8 = (char *)(v6 - a3);
        if ( (((_BYTE)v6 - (_BYTE)a3) & 7) == 0 )
        {
LABEL_19:
          *((_DWORD *)a1 + 14) = 0;
          *((_BYTE *)a1 + 60) = 1;
          goto LABEL_5;
        }
        v19 = *((unsigned int *)a1 + 14);
LABEL_28:
        memmove(&v7[v6 - 4], &v7[v6], v19);
        v8 = &a1[2][-a3 - 4];
        goto LABEL_19;
      }
      v18 = *((_DWORD *)a1 + 14);
      if ( (v18 & 7) != 0 )
      {
        if ( (a3 & 7) != 0 )
        {
          memmove(&v7[v6 + 4], &v7[v6], v18);
          v8 = &a1[2][-a3 + 4];
          goto LABEL_19;
        }
      }
      else if ( (a3 & 7) != 0 )
      {
        v19 = v18;
        goto LABEL_28;
      }
      v8 = (char *)(v6 - a3);
      goto LABEL_19;
    }
  }
  else
  {
    v7 = *a1;
    if ( a4 != 4 )
      goto LABEL_3;
  }
  v17 = *((_DWORD *)a1 + 14);
  if ( *((_BYTE *)a1 + 60) )
  {
    if ( (v17 & 7) != 0 )
    {
      if ( (a3 & 7) != 0 )
      {
        memmove(&v7[v6 + 4], &v7[v6], v17);
        v6 = (unsigned __int64)(a1[2] + 4);
        v17 = *((_DWORD *)a1 + 14);
      }
    }
    else if ( (a3 & 7) != 0 )
    {
      memmove(&v7[v6 - 4], &v7[v6], v17);
      v6 = (unsigned __int64)(a1[2] - 4);
      v17 = *((_DWORD *)a1 + 14);
    }
  }
  *((_DWORD *)a1 + 14) = a3 + v17;
  v8 = (char *)(v6 - a3);
LABEL_5:
  a1[2] = v8;
  return a2;
}
