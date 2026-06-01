unsigned __int64 __fastcall sub_BAC0(_QWORD *a1, __int16 a2, const void *a3, size_t a4)
{
  char *v4; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  _QWORD *v10; // rdx
  __int64 v11; // rax
  char *v13; // rax
  unsigned __int64 v14; // r12
  size_t v15; // r12
  _QWORD *v16; // rax
  __int64 v17; // rdx

  v4 = nullptr;
  if ( a4 )
  {
    v4 = (char *)a1[1];
    if ( !v4 || (v13 = &v4[a4], (unsigned __int64)&v4[a4] > a1[2]) )
    {
      v14 = 2LL * a1[4];
      if ( v14 < a4 + 1 )
        v14 = a4 + 1;
      a1[4] = v14;
      v15 = v14 + 8;
      v16 = malloc(v15);
      v17 = a1[3];
      v4 = (char *)(v16 + 1);
      a1[3] = v16;
      *v16 = v17;
      a1[2] = (char *)v16 + v15;
      v13 = (char *)v16 + a4 + 8;
    }
    a1[1] = v13;
    memmove(v4, a3, a4);
  }
  result = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = result;
  if ( !result || (v7 = result + 24, result + 24 > a1[2]) )
  {
    v8 = 2LL * a1[4];
    if ( v8 < 0x20 )
      v8 = 32;
    a1[4] = v8;
    v9 = v8 + 8;
    v10 = malloc(v8 + 8);
    v11 = a1[3];
    a1[3] = v10;
    *v10 = v11;
    result = ((unsigned __int64)v10 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v10 + v9;
    v7 = result + 24;
  }
  a1[1] = v7;
  *(_WORD *)(result + 16) = a2;
  *(_BYTE *)(result + 18) = 1;
  *(_QWORD *)result = v4;
  *(_QWORD *)(result + 8) = a4;
  return result;
}
