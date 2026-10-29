__int64 __fastcall sub_A80750(__int64 a1, int a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  _DWORD *v4; // rax
  __int64 v5; // rax
  char v6; // dl
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // rdx
  _BYTE v13[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = a2 & 0x7FFFFFFF;
  if ( v2 >= *(_DWORD *)(a1 + 476) && v2 < *(_DWORD *)(a1 + 480) )
    v3 = *(unsigned int *)(a1 + 472);
  else
    v3 = (unsigned int)sub_101D590(a1);
  v13[0] = 0;
  if ( (unsigned int)(v3 + 1) <= 1 )
    goto LABEL_11;
  if ( (int)v3 >= 0 )
  {
    v4 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v3);
    goto LABEL_7;
  }
  v8 = (unsigned int)(-2 - v3);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)(-2 - v3) >> 6));
  if ( _bittest64(&v9, v8) )
  {
    v10 = (_QWORD *)(*(_QWORD *)(a1 + 272) + 8 * ((unsigned __int64)(int)v8 >> 5));
    if ( *v10 )
    {
      v4 = (_DWORD *)(*v10 + 24LL * ((-2 - (_BYTE)v3) & 0x1F));
      goto LABEL_7;
    }
    v11 = (_DWORD *)sub_A794A0((__int64 *)(*(_QWORD *)(a1 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
    *v10 = v11;
    v12 = v11 + 192;
    do
    {
      *v11 = 0;
      v11 += 6;
      *((_OWORD *)v11 - 1) = 0;
      *((_QWORD *)v11 - 1) = 0;
    }
    while ( v11 != v12 );
    v6 = v13[0];
    v4 = (_DWORD *)(*v10 + 24LL * ((-2 - (_BYTE)v3) & 0x1F));
  }
  else
  {
    v4 = (_DWORD *)sub_101F930(a1, (unsigned int)v8, v13);
    v6 = v13[0];
  }
  if ( v6 )
    goto LABEL_11;
LABEL_7:
  if ( !v4 )
  {
LABEL_11:
    v5 = 0;
    v3 = 0;
    return v3 | (v5 << 32);
  }
  v5 = v2 - (*v4 & 0x7FFFFFFF);
  return v3 | (v5 << 32);
}
