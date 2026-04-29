__int64 __fastcall sub_B7FC0(_QWORD *a1, unsigned int *a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *a2;
  v13[1] = __readfsqword(0x28u);
  if ( (_DWORD)v4 != 62 )
  {
    if ( !a4 && (_DWORD)v4 != *(_DWORD *)a3 )
      return 0;
    v8 = 0;
    if ( (unsigned int)v4 <= 0x21 )
    {
      v9 = 0x306385000LL;
      v8 = _bittest64(&v9, v4);
    }
    if ( !(unsigned __int8)sub_B8620(a1, a2, a3, v8)
      && (*a2 - 32 > 1
       || *(_BYTE *)(a3 + 32) != 4
       || **(_DWORD **)(a3 + 40) != 13
       || !(unsigned __int8)sub_11BB80(a3 + 48, v13, 0)
       || v13[0]
       || !(unsigned __int8)sub_B8620(a1, a2, *(_QWORD *)(a3 + 40), 1))
      || !(unsigned __int8)sub_B8150(a1, a2 + 16, a3 + 64) && (!a4 || *((_BYTE *)a2 + 64) == 8) )
    {
      return 0;
    }
  }
  if ( (unsigned __int8)sub_11C4E0(a3) )
  {
    v10 = a1[38];
    v11 = a1[37];
    if ( a1[39] < (unsigned __int64)(v10 + 1) )
    {
      v12 = qvector_reserve(a1 + 37, v11, v10 + 1, 8);
      a1[37] = v12;
      v11 = v12;
      v10 = a1[38];
    }
    *(_QWORD *)(v11 + 8 * v10) = a3;
    ++a1[38];
  }
  return 1;
}
