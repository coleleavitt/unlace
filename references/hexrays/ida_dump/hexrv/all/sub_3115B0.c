__int64 __fastcall sub_3115B0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  size_t v4; // r13
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  _DWORD *v10; // rbp
  __int64 v11; // r12
  size_t v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_1AE060(a3, a1, 4u);
  if ( *(_QWORD *)(a1 + 8) > 1u )
    tag_remove(a1, *(_QWORD *)a1, 0);
  src = nullptr;
  v17 = 0;
  sub_310D10(a2, (__int64 *)&src);
  v3 = v17;
  if ( !(_QWORD)v17 )
  {
    if ( byte_4C0C90 != 40 )
      goto LABEL_6;
LABEL_10:
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      v9 = v6 + 6;
      v8 = v6 + 7;
      v7 = *(_QWORD *)a1;
      --v6;
      if ( *(_QWORD *)(a1 + 16) >= v8 )
        goto LABEL_12;
    }
    else
    {
      v7 = *(_QWORD *)a1;
      v8 = 8;
      v9 = 7;
      if ( *(_QWORD *)(a1 + 16) >= 8u )
      {
LABEL_12:
        *(_QWORD *)(a1 + 8) = v8;
        *(_BYTE *)(v7 + v9) = 0;
        v10 = (_DWORD *)(*(_QWORD *)a1 + v6);
        *v10 = 544434464;
        *(_DWORD *)((char *)v10 + 3) = 544106784;
        v3 = v17;
        if ( !(_QWORD)v17 )
          goto LABEL_6;
        v4 = v17 - 1;
        if ( (_QWORD)v17 == 1 )
          goto LABEL_6;
        goto LABEL_14;
      }
    }
    v14 = qvector_reserve(a1, v7, v8, 1);
    *(_QWORD *)a1 = v14;
    v7 = v14;
    goto LABEL_12;
  }
  if ( *(_BYTE *)src == 40 )
    goto LABEL_10;
  v4 = v17 - 1;
  if ( (_QWORD)v17 == 1 )
    goto LABEL_6;
LABEL_14:
  v11 = *(_QWORD *)(a1 + 8);
  v12 = v4;
  if ( v11 )
  {
    --v11;
    v12 = v4 + v11;
    v3 = v4 + v11 + 1;
  }
  v13 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < v3 )
  {
    v15 = qvector_reserve(a1, v13, v3, 1);
    *(_QWORD *)a1 = v15;
    v13 = v15;
  }
  *(_QWORD *)(a1 + 8) = v3;
  *(_BYTE *)(v13 + v12) = 0;
  memcpy((void *)(v11 + *(_QWORD *)a1), src, v4);
LABEL_6:
  if ( src )
  {
    *(_QWORD *)&v17 = 0;
    qfree(src);
  }
  return a1;
}
