__int64 __fastcall sub_13FC3A0(__int64 *a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rbx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // r12
  char v11; // dl
  _DWORD *v12; // rax
  _DWORD *v13; // rdx
  _BYTE v14[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  v3 = *a1;
  if ( !v2 )
    return 0;
  v5 = v2 & 0x7FFFFFFF;
  if ( v5 >= *(_DWORD *)(v3 + 476) && v5 < *(_DWORD *)(v3 + 480) )
    v6 = *(_DWORD *)(v3 + 472);
  else
    v6 = sub_101D590(*a1, v5);
  v14[0] = 0;
  if ( (unsigned int)(v6 + 1) <= 1 )
    return 0;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)(-2 - v6);
    v9 = *(_QWORD *)(*(_QWORD *)(v3 + 320) + 8LL * ((unsigned int)(-2 - v6) >> 6));
    if ( _bittest64(&v9, v8) )
    {
      v10 = (_QWORD *)(*(_QWORD *)(v3 + 272) + 8 * ((unsigned __int64)(int)v8 >> 5));
      if ( *v10 )
      {
        v7 = *v10 + 24 * (v8 & 0x1F);
        goto LABEL_9;
      }
      v12 = (_DWORD *)sub_13FC0F0((__int64 *)(*(_QWORD *)(v3 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      *v10 = v12;
      v13 = v12 + 192;
      do
      {
        *v12 = 0;
        v12 += 6;
        *((_OWORD *)v12 - 1) = 0;
        *((_QWORD *)v12 - 1) = 0;
      }
      while ( v12 != v13 );
      v11 = v14[0];
      v7 = *v10 + 24 * (v8 & 0x1F);
    }
    else
    {
      v7 = sub_101F930(v3, v8, v14);
      v11 = v14[0];
    }
    if ( v11 )
      return 0;
  }
  else
  {
    v7 = *(_QWORD *)(v3 + 184) + 24LL * (unsigned int)v6;
  }
LABEL_9:
  if ( !v7 || *(char *)(v7 + 3) < 0 )
    return 0;
  return *(_QWORD *)((*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
}
