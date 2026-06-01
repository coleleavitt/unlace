__int64 __fastcall sub_1EEF0F0(__int64 a1, unsigned int a2, int a3)
{
  unsigned int *v5; // rax
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rbp
  unsigned int v9; // ebx
  _DWORD *v10; // rdx
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  bool v13; // al
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  _DWORD *v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rax

  if ( !a3 )
    return 256;
  v5 = sub_1EAEBA0(a1 + 5032, a2);
  v6 = sub_1EE4770(
         a1,
         *((_QWORD *)v5 + 1),
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 2544LL) + 20LL * (a2 - *(_DWORD *)(*((_QWORD *)v5 + 1) + 2504LL))));
  if ( !v6 )
    return 256;
  v7 = *(_QWORD *)(a1 + 80);
  if ( v6 < 0 )
    v6 = sub_1021D50(*(_QWORD *)(a1 + 80), v6);
  v8 = (unsigned int)(a3 + 1);
  v9 = v6 & 0x7FFFFFFF;
  if ( (unsigned int)v8 <= 1 )
  {
    v10 = *(_DWORD **)(v7 + 184);
    v11 = v10;
  }
  else
  {
    if ( a3 < 0 )
    {
      v14 = (unsigned int)(-2 - a3);
      v15 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)(-2 - a3) >> 6));
      if ( _bittest64(&v15, v14) )
        v16 = (_DWORD *)sub_101F8A0(v7 + 264, (int)v14);
      else
        v16 = (_DWORD *)sub_101F930(v7, v14, nullptr);
      if ( v9 < (*v16 & 0x7FFFFFFFu) )
        return 256;
      if ( a3 == -2 )
        return 257;
      if ( *(_DWORD *)(v7 + 192) != (_DWORD)v8 )
        goto LABEL_23;
      goto LABEL_25;
    }
    v10 = *(_DWORD **)(v7 + 184);
    v11 = &v10[6 * a3];
  }
  if ( v9 < (*v11 & 0x7FFFFFFFu) )
    return 256;
  if ( (_DWORD)v8 != *(_DWORD *)(v7 + 192) )
  {
    if ( (int)v8 >= 0 )
    {
      v12 = &v10[6 * v8];
LABEL_13:
      v13 = v9 < (*v12 & 0x7FFFFFFFu);
      goto LABEL_14;
    }
LABEL_23:
    v17 = (unsigned int)(-2 - v8);
    v18 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)(-2 - v8) >> 6));
    if ( _bittest64(&v18, v17) )
      v12 = (_DWORD *)sub_101F8A0(v7 + 264, v17);
    else
      v12 = (_DWORD *)sub_101F930(v7, v17, nullptr);
    goto LABEL_13;
  }
LABEL_25:
  v13 = v9 < *(_DWORD *)(v7 + 312);
LABEL_14:
  if ( v13 )
    return 257;
  return 256;
}
