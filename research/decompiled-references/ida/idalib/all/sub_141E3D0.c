unsigned __int64 __fastcall sub_141E3D0(__int64 a1, int a2, char a3)
{
  unsigned int v4; // ebp
  _DWORD *v6; // r13
  unsigned int v7; // esi
  int v8; // eax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // r14
  _DWORD *v19; // rax
  _DWORD *v20; // rdx
  _BYTE v21[41]; // [rsp+Fh] [rbp-29h] BYREF

  v4 = a2;
  if ( sub_1021600(*(_QWORD *)(a1 + 88), a2) )
    goto LABEL_18;
  v6 = *(_DWORD **)(a1 + 88);
  if ( a2 < 0 )
    a2 = sub_10212A0(*(_QWORD *)(a1 + 88), a2);
  v7 = a2 & 0x7FFFFFFF;
  if ( v7 >= v6[119] && v7 < v6[120] )
    v8 = v6[118];
  else
    v8 = sub_101D590((__int64)v6, v7);
  v9 = *(_QWORD **)(a1 + 88);
  v21[0] = 0;
  if ( (unsigned int)(v8 + 1) <= 1 )
    goto LABEL_18;
  if ( v8 < 0 )
  {
    v13 = (unsigned int)(-2 - v8);
    v14 = *(_QWORD *)(v9[40] + 8LL * ((unsigned int)(-2 - v8) >> 6));
    if ( _bittest64(&v14, v13) )
    {
      v18 = (_QWORD *)(v9[34] + 8 * ((unsigned __int64)(int)v13 >> 5));
      if ( *v18 )
      {
        v10 = *v18 + 24 * (v13 & 0x1F);
        goto LABEL_10;
      }
      v19 = (_DWORD *)sub_9C3B30((__int64 *)(v9[36] & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      *v18 = v19;
      v20 = v19 + 192;
      do
      {
        *v19 = 0;
        v19 += 6;
        *((_OWORD *)v19 - 1) = 0;
        *((_QWORD *)v19 - 1) = 0;
      }
      while ( v19 != v20 );
      v15 = v21[0];
      v10 = *v18 + 24 * (v13 & 0x1F);
    }
    else
    {
      v10 = sub_101F930((__int64)v9, v13, v21);
      v15 = v21[0];
    }
    if ( v15 )
      goto LABEL_18;
    goto LABEL_10;
  }
  v10 = v9[23] + 24LL * (unsigned int)v8;
LABEL_10:
  if ( v10 )
  {
    if ( *(char *)(v10 + 3) >= 0 )
    {
      v11 = *(_QWORD **)((*(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( v11 )
        return sub_1403C80(*(_QWORD *)(a1 + 104) + 632LL, v11, a3, 0) & 0xFFFFFFFFFFFFFFF8LL;
    }
  }
LABEL_18:
  v16 = *(_QWORD *)(a1 + 56);
  result = 0;
  v17 = *(_QWORD *)(v16 + 496);
  if ( v17 )
    return sub_13C9950(*(__int64 **)(a1 + 104), *(_QWORD *)(v16 + 488), v17, v4, 1, 0);
  return result;
}
