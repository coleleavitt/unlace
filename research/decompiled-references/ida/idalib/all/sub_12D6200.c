__int64 __fastcall sub_12D6200(unsigned int *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  char v10; // dl
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 *v17; // rdi
  __int64 v18; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rdx
  __int64 v21; // [rsp+14h] [rbp-24h] BYREF
  int v22; // [rsp+1Ch] [rbp-1Ch]

  v7 = a1[9];
  LOBYTE(v21) = 0;
  if ( (unsigned int)(v7 + 1) <= 1 )
    goto LABEL_9;
  if ( (int)v7 < 0 )
  {
    v14 = (unsigned int)(-2 - v7);
    v15 = *(_QWORD *)(a2[40] + 8LL * ((unsigned int)(-2 - v7) >> 6));
    if ( _bittest64(&v15, v14) )
    {
      v16 = (_QWORD *)(a2[34] + 8 * ((unsigned __int64)(int)v14 >> 5));
      if ( *v16 )
      {
        v8 = *v16 + 24 * (v14 & 0x1F);
        goto LABEL_4;
      }
      v17 = (__int64 *)(a2[36] & 0xFFFFFFFFFFFFFFF8LL);
      v18 = *v17;
      v17[10] += 768;
      v19 = (_DWORD *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v17[1] >= (unsigned __int64)(v19 + 192) && v18 )
        *v17 = (__int64)(v19 + 192);
      else
        v19 = (_DWORD *)sub_986170((__int64)v17, 768, 768, 3, a5, a6);
      *v16 = v19;
      v20 = v19 + 192;
      do
      {
        *v19 = 0;
        v19 += 6;
        *((_OWORD *)v19 - 1) = 0;
        *((_QWORD *)v19 - 1) = 0;
      }
      while ( v19 != v20 );
      v10 = v21;
      v8 = *v16 + 24 * (v14 & 0x1F);
    }
    else
    {
      v8 = sub_101F930((__int64)a2, v14, &v21);
      v10 = v21;
    }
    if ( v10 )
    {
LABEL_9:
      v9 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v8 = a2[23] + 24 * v7;
  }
LABEL_4:
  if ( !v8 || *(char *)(v8 + 3) < 0 )
    goto LABEL_9;
  v9 = *(_DWORD *)v8 & 0x7FFFFFFF;
LABEL_10:
  v11 = a1[11];
  v12 = a1[10] + v9;
  LOBYTE(v22) = 0;
  LODWORD(v21) = v12;
  HIDWORD(v21) = v12 + v11;
  return v21;
}
