unsigned __int64 __fastcall sub_1F6620(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  size_t v7; // r15
  __int64 v9; // r14
  size_t v10; // r8
  __int64 v11; // rsi
  size_t v12; // [rsp+0h] [rbp-60h]
  __int64 v13; // [rsp+8h] [rbp-58h] BYREF
  __int128 v14; // [rsp+10h] [rbp-50h]
  unsigned __int64 v15; // [rsp+20h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v13 = 0;
  sub_2D17F0(a1, &v13, 1);
  v3 = v14;
  v4 = v13;
  if ( !(_QWORD)v14 )
  {
    v5 = 2;
    if ( *((_QWORD *)&v14 + 1) >= 2u )
      goto LABEL_7;
    goto LABEL_5;
  }
  if ( (_QWORD)v14 == 1 || *(_BYTE *)(v13 + v14 - 2) != 10 )
  {
    v5 = v14 + 1;
    v3 = v14 - 1;
    if ( *((_QWORD *)&v14 + 1) >= (unsigned __int64)(v14 + 1) )
    {
LABEL_7:
      *(_QWORD *)&v14 = v5;
      *(_BYTE *)(v4 + v3) = 10;
      *(_BYTE *)(v13 + v3 + 1) = 0;
      goto LABEL_8;
    }
LABEL_5:
    v13 = qvector_reserve(&v13, v13, v5, 1);
    v4 = v13;
    goto LABEL_7;
  }
LABEL_8:
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v6 != 1 )
    {
      v9 = v14;
      v10 = v6 - 1;
      if ( (_QWORD)v14 )
      {
        v9 = v14 - 1;
        v10 = v7 + v14 - 1;
        v6 += v14 - 1;
      }
      v11 = v13;
      if ( *((_QWORD *)&v14 + 1) < v6 )
      {
        v12 = v10;
        v13 = qvector_reserve(&v13, v13, v6, 1);
        v10 = v12;
        v11 = v13;
      }
      *(_QWORD *)&v14 = v6;
      *(_BYTE *)(v11 + v10) = 0;
      memcpy((void *)(v9 + v13), *(const void **)a2, v7);
    }
  }
  sub_2D4060(a1, &v13);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, (const char *)&v13);
  }
  return v15 - __readfsqword(0x28u);
}
