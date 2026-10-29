__int64 __fastcall sub_13FC270(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v3; // eax
  __int64 v4; // rax
  char v6; // dl
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // r12
  _DWORD *v10; // rax
  _DWORD *v11; // rdx
  _BYTE v12[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *a1;
  v3 = sub_13FA250((__int64)a1, a2);
  v12[0] = 0;
  if ( (unsigned int)(v3 + 1) <= 1 )
    return 0;
  if ( v3 < 0 )
  {
    v7 = (unsigned int)(-2 - v3);
    v8 = *(_QWORD *)(v2[40] + 8LL * ((unsigned int)(-2 - v3) >> 6));
    if ( _bittest64(&v8, v7) )
    {
      v9 = (_QWORD *)(v2[34] + 8 * ((unsigned __int64)(int)v7 >> 5));
      if ( *v9 )
      {
        v4 = *v9 + 24 * (v7 & 0x1F);
        goto LABEL_4;
      }
      v10 = (_DWORD *)sub_13FC0F0((__int64 *)(v2[36] & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      *v9 = v10;
      v11 = v10 + 192;
      do
      {
        *v10 = 0;
        v10 += 6;
        *((_OWORD *)v10 - 1) = 0;
        *((_QWORD *)v10 - 1) = 0;
      }
      while ( v10 != v11 );
      v6 = v12[0];
      v4 = *v9 + 24 * (v7 & 0x1F);
    }
    else
    {
      v4 = sub_101F930((__int64)v2, v7, v12);
      v6 = v12[0];
    }
    if ( v6 )
      return 0;
    goto LABEL_4;
  }
  v4 = v2[23] + 24LL * (unsigned int)v3;
LABEL_4:
  if ( v4 && *(char *)(v4 + 3) >= 0 )
    return *(_QWORD *)((*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  return 0;
}
