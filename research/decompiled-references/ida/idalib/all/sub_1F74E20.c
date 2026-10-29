__int64 __fastcall sub_1F74E20(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  int v3; // r12d
  char v5; // dl
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // r13
  _DWORD *v9; // rax
  _DWORD *v10; // rdx
  _BYTE v11[41]; // [rsp+Fh] [rbp-29h] BYREF

  v11[0] = 0;
  if ( (unsigned int)(a2 + 1) <= 1 )
    return 0;
  if ( a2 < 0 )
  {
    v6 = (unsigned int)(-2 - a2);
    v7 = *(_QWORD *)(a1[40] + 8LL * ((unsigned int)(-2 - a2) >> 6));
    if ( _bittest64(&v7, v6) )
    {
      v8 = (_QWORD *)(a1[34] + 8 * ((unsigned __int64)(int)v6 >> 5));
      if ( *v8 )
      {
        v2 = *v8 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
        goto LABEL_4;
      }
      v9 = (_DWORD *)sub_1F74DE0((__int64 *)(a1[36] & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      *v8 = v9;
      v10 = v9 + 192;
      do
      {
        *v9 = 0;
        v9 += 6;
        *((_OWORD *)v9 - 1) = 0;
        *((_QWORD *)v9 - 1) = 0;
      }
      while ( v9 != v10 );
      v5 = v11[0];
      v2 = *v8 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
    }
    else
    {
      v2 = sub_101F930((__int64)a1, v6, v11);
      v5 = v11[0];
    }
    if ( v5 )
      return 0;
    goto LABEL_4;
  }
  v2 = a1[23] + 24LL * (unsigned int)a2;
LABEL_4:
  if ( v2 && *(char *)(v2 + 3) >= 0 )
  {
    v3 = *(_DWORD *)v2 & 0x7FFFFFFF;
    return v3 + (unsigned int)sub_101FBC0((__int64)a1, a2);
  }
  return 0;
}
