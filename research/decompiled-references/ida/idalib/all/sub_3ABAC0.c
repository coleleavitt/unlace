unsigned __int64 __fastcall sub_3ABAC0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 *v15; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v14 = a2;
  v16 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 76) & 0x18) == 0 && a2 != -1 )
  {
    v3 = *(_QWORD *)(qword_2CCB598 + 1576);
    v4 = (_QWORD *)(v3 + 120);
    v5 = (_QWORD *)(v3 + 168);
    if ( (*(_BYTE *)(a1 + 72) & 8) != 0 )
      v5 = v4;
    v6 = (_QWORD *)v5[2];
    v7 = v5 + 1;
    if ( !v6 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v8 = v6[2];
        v9 = v6[3];
        if ( v6[4] < a2 )
          break;
        v7 = v6;
        v6 = (_QWORD *)v6[2];
        if ( !v8 )
          goto LABEL_10;
      }
      v6 = (_QWORD *)v6[3];
    }
    while ( v9 );
LABEL_10:
    if ( v7 == v5 + 1 || a2 < v7[4] )
    {
LABEL_16:
      v15 = &v14;
      v7 = sub_3A9D80(v5, v7, &v15);
    }
    v10 = v7[6];
    v11 = v7[5];
    if ( v7[7] < (unsigned __int64)(v10 + 1) )
    {
      v13 = qvector_reserve(v7 + 5, v11, v10 + 1, 8);
      v7[5] = v13;
      v11 = v13;
      v10 = v7[6];
    }
    *(_QWORD *)(v11 + 8 * v10) = a1;
    ++v7[6];
  }
  return v16 - __readfsqword(0x28u);
}
