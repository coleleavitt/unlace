unsigned __int64 __fastcall sub_3A72A0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // rax
  unsigned int v14; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int *v15; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v14 = a2;
  v16 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 68) & 0x18) == 0 && a2 != -1 )
  {
    v3 = *(_QWORD *)(qword_2CA1698 + 1384);
    v4 = (_QWORD *)(v3 + 120);
    v5 = (_QWORD *)(v3 + 168);
    if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
      v5 = v4;
    v6 = v5[2];
    v7 = (__int64)(v5 + 1);
    if ( !v6 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v6 + 16);
        v9 = *(_QWORD *)(v6 + 24);
        if ( *(_DWORD *)(v6 + 32) < a2 )
          break;
        v7 = v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v8 )
          goto LABEL_10;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v9 );
LABEL_10:
    if ( (_QWORD *)v7 == v5 + 1 || a2 < *(_DWORD *)(v7 + 32) )
    {
LABEL_16:
      v15 = &v14;
      v7 = sub_3A56C0(v5, v7, &v15);
    }
    v10 = *(_QWORD *)(v7 + 48);
    v11 = *(_QWORD *)(v7 + 40);
    if ( *(_QWORD *)(v7 + 56) < (unsigned __int64)(v10 + 1) )
    {
      v13 = qvector_reserve(v7 + 40, v11, v10 + 1, 8);
      *(_QWORD *)(v7 + 40) = v13;
      v11 = v13;
      v10 = *(_QWORD *)(v7 + 48);
    }
    *(_QWORD *)(v11 + 8 * v10) = a1;
    ++*(_QWORD *)(v7 + 48);
  }
  return v16 - __readfsqword(0x28u);
}

