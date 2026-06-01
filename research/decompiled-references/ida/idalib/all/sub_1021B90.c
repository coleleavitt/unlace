__int64 __fastcall sub_1021B90(__int64 a1, int a2)
{
  __int64 v2; // r12
  unsigned int v4; // ebx
  __int64 v5; // r15
  unsigned int v6; // eax
  _DWORD *v7; // rdx
  _DWORD *v8; // rax
  unsigned int v9; // ebx
  int v10; // esi
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  _DWORD *v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // eax
  _BYTE v19[57]; // [rsp+Fh] [rbp-39h] BYREF

  v2 = a1 + 264;
  do
  {
    while ( 1 )
    {
      v4 = a2 & 0x7FFFFFFF;
      if ( v4 >= *(_DWORD *)(a1 + 476) && v4 < *(_DWORD *)(a1 + 480) )
      {
        v5 = *(unsigned int *)(a1 + 472);
        v6 = v5 + 1;
        goto LABEL_5;
      }
      if ( !v4 )
        goto LABEL_16;
      if ( v4 < *(_DWORD *)(a1 + 312) )
      {
        v18 = sub_101D3D0(a1, v4);
        v5 = v18;
        v6 = v18 + 1;
LABEL_5:
        v19[0] = 0;
        if ( v6 <= 1 )
          goto LABEL_16;
        goto LABEL_6;
      }
      if ( v4 < *(_DWORD *)(a1 + 316) )
        goto LABEL_16;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 24LL))(*(_QWORD *)(a1 + 464), v4);
      v19[0] = 0;
      v5 = v12;
      if ( v12 + 1 <= 1 )
        goto LABEL_16;
LABEL_6:
      if ( (int)v5 >= 0 )
        break;
      v13 = (unsigned int)(-2 - v5);
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)(-2 - v5) >> 6));
      if ( _bittest64(&v14, v13) )
        v15 = (_DWORD *)sub_101F8A0(v2, (int)v13);
      else
        v15 = (_DWORD *)sub_101F930(a1, v13, v19);
      if ( v19[0] || !v15 )
      {
LABEL_16:
        v7 = *(_DWORD **)(a1 + 184);
        goto LABEL_17;
      }
      v16 = (unsigned int)(-2 - v5);
      v9 = v4 - (*v15 & 0x7FFFFFFF);
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)(-2 - v5) >> 6));
      if ( _bittest64(&v17, v16) )
        v8 = (_DWORD *)sub_101F8A0(v2, (int)v16);
      else
        v8 = (_DWORD *)sub_101F930(a1, v16, nullptr);
LABEL_9:
      v10 = v8[2];
      if ( v10 )
        goto LABEL_18;
LABEL_10:
      a2 = v8[3] + v9;
      if ( a2 >= 0 )
        return (unsigned int)a2;
    }
    v7 = *(_DWORD **)(a1 + 184);
    v8 = &v7[6 * v5];
    if ( v8 )
    {
      v9 = v4 - (*v8 & 0x7FFFFFFF);
      goto LABEL_9;
    }
LABEL_17:
    v8 = v7;
    v9 = 0;
    v10 = v7[2];
    if ( !v10 )
      goto LABEL_10;
LABEL_18:
    a2 = v10 + v9;
  }
  while ( a2 < 0 );
  return (unsigned int)a2;
}
