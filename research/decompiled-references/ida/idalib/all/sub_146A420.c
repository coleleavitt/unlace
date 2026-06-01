__int64 __fastcall sub_146A420(__int64 a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  _QWORD *v14; // r12
  char v15; // dl
  __int64 *v16; // rdi
  __int64 v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  _BYTE v20[25]; // [rsp+Fh] [rbp-19h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  if ( !(unsigned __int8)sub_224A960() )
    return a1;
  v6 = *a2;
  v20[0] = 0;
  v7 = *(_QWORD *)(v6 + 272);
  v8 = *(unsigned int *)(v7 + 520);
  if ( (unsigned int)(v8 + 1) <= 1 )
    return a1;
  if ( (int)v8 < 0 )
  {
    v12 = (unsigned int)(-2 - v8);
    v13 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)(-2 - v8) >> 6));
    if ( _bittest64(&v13, v12) )
    {
      v14 = (_QWORD *)(*(_QWORD *)(v7 + 272) + 8 * ((unsigned __int64)(int)v12 >> 5));
      if ( *v14 )
      {
        v9 = *v14 + 24 * (v12 & 0x1F);
        goto LABEL_6;
      }
      v16 = (__int64 *)(*(_QWORD *)(v7 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v17 = *v16;
      v16[10] += 768;
      v18 = (_DWORD *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v16[1] >= (unsigned __int64)(v18 + 192) && v17 )
        *v16 = (__int64)(v18 + 192);
      else
        v18 = (_DWORD *)sub_986170((__int64)v16, 768, 768, 3, v3, v4);
      *v14 = v18;
      v19 = v18 + 192;
      do
      {
        *v18 = 0;
        v18 += 6;
        *((_OWORD *)v18 - 1) = 0;
        *((_QWORD *)v18 - 1) = 0;
      }
      while ( v18 != v19 );
      v15 = v20[0];
      v9 = *v14 + 24 * (v12 & 0x1F);
    }
    else
    {
      v9 = sub_101F930(v7, v12, v20);
      v15 = v20[0];
    }
    if ( v15 )
      return a1;
    goto LABEL_6;
  }
  v9 = *(_QWORD *)(v7 + 184) + 24 * v8;
LABEL_6:
  if ( v9 && *(char *)(v9 + 3) >= 0 )
  {
    v10 = *(_QWORD *)((*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    while ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 8);
      if ( !v11 )
        break;
      v10 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v11 & 4) == 0 )
      {
        if ( !v10 )
          return a1;
        sub_99BDC0((_QWORD *)(a1 + 32), 0, *(_QWORD *)(a1 + 40), *(_BYTE **)v10, *(_QWORD *)(v10 + 8));
        return a1;
      }
    }
  }
  return a1;
}
