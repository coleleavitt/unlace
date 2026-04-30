bool __fastcall sub_3C4FE0(unsigned int *a1, unsigned int *a2)
{
  __int64 v2; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rax
  _DWORD *v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rcx
  _DWORD *v9; // rax
  int v10; // r14d
  unsigned int v11; // eax
  _DWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned int *v16[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = qword_8D0A50;
  v16[1] = (unsigned int *)__readfsqword(0x28u);
  if ( qword_8D0A50 )
  {
    v4 = *a1;
    v5 = qword_8D0A50;
    v6 = &unk_8D0A48;
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v5 + 16);
        v8 = *(_QWORD *)(v5 + 24);
        if ( *(_DWORD *)(v5 + 32) < v4 )
          break;
        v6 = (_DWORD *)v5;
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v7 )
          goto LABEL_6;
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
    while ( v8 );
LABEL_6:
    if ( v6 != (_DWORD *)&unk_8D0A48 && v4 >= v6[8] )
    {
      v10 = v6[10];
      goto LABEL_9;
    }
  }
  else
  {
    v6 = &unk_8D0A48;
  }
  v16[0] = a1;
  v9 = sub_3C4F20(&qword_8D0A40, (__int64)v6, v16);
  v2 = qword_8D0A50;
  v10 = v9[10];
  if ( !qword_8D0A50 )
  {
    v12 = &unk_8D0A48;
LABEL_15:
    v16[0] = a2;
    v12 = sub_3C4F20(&qword_8D0A40, (__int64)v12, v16);
    return v12[10] > v10;
  }
LABEL_9:
  v11 = *a2;
  v12 = &unk_8D0A48;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v2 + 16);
      v14 = *(_QWORD *)(v2 + 24);
      if ( *(_DWORD *)(v2 + 32) < v11 )
        break;
      v12 = (_DWORD *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v13 )
        goto LABEL_13;
    }
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v14 );
LABEL_13:
  if ( v12 == (_DWORD *)&unk_8D0A48 || v11 < v12[8] )
    goto LABEL_15;
  return v12[10] > v10;
}
