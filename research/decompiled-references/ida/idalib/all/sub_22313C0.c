__int64 __fastcall sub_22313C0(__int64 a1, __int16 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  _BYTE *v6; // rax
  _WORD *v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // rdx
  __int64 v11; // rdx

  v2 = *(_QWORD *)(a1 + 32);
  v3 = a1;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v2) > 8 )
  {
    *(_BYTE *)(v2 + 8) = 40;
    *(_QWORD *)v2 = 0x7365727574706163LL;
    *(_QWORD *)(a1 + 32) += 9LL;
  }
  else
  {
    sub_227BF10(a1, "captures(", 9);
  }
  if ( !(_BYTE)a2 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = *(_QWORD *)(a1 + 24) - v4;
    if ( !HIBYTE(a2) )
    {
      if ( v5 <= 3 )
      {
        sub_227BF10(a1, "none", 4);
        v6 = *(_BYTE **)(a1 + 32);
      }
      else
      {
        *(_DWORD *)v4 = 1701736302;
        v6 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 4LL);
        *(_QWORD *)(a1 + 32) = v6;
      }
      goto LABEL_9;
    }
LABEL_5:
    if ( v5 <= 4 )
      goto LABEL_6;
LABEL_17:
    *(_DWORD *)v4 = 980706674;
    *(_BYTE *)(v4 + 4) = 32;
    *(_QWORD *)(a1 + 32) += 5LL;
    if ( HIBYTE(a2) )
      goto LABEL_7;
LABEL_18:
    v10 = *(_DWORD **)(a1 + 32);
    if ( *(_QWORD *)(a1 + 24) - (_QWORD)v10 > 3u )
    {
      *v10 = 1701736302;
      *(_QWORD *)(a1 + 32) += 4LL;
    }
    else
    {
      sub_227BF10(a1, "none", 4);
    }
    goto LABEL_8;
  }
  sub_2231160(a1, a2);
  if ( HIBYTE(a2) == (_BYTE)a2 )
    goto LABEL_8;
  v8 = *(_WORD **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v8 > 1u )
  {
    *v8 = 8236;
    v11 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 32) + 2LL;
    *(_QWORD *)(a1 + 32) = v4;
    v5 = v11 - v4;
    goto LABEL_5;
  }
  v9 = sub_227BF10(a1, ", ", 2);
  v4 = *(_QWORD *)(v9 + 32);
  a1 = v9;
  if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v4) > 4 )
    goto LABEL_17;
LABEL_6:
  a1 = sub_227BF10(a1, "ret: ", 5);
  if ( !HIBYTE(a2) )
    goto LABEL_18;
LABEL_7:
  sub_2231160(a1, SHIBYTE(a2));
LABEL_8:
  v6 = *(_BYTE **)(v3 + 32);
LABEL_9:
  if ( v6 == *(_BYTE **)(v3 + 24) )
  {
    sub_227BF10(v3, ")", 1);
  }
  else
  {
    *v6 = 41;
    ++*(_QWORD *)(v3 + 32);
  }
  return v3;
}
