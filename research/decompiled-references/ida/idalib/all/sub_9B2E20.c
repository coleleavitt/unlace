void __fastcall sub_9B2E20(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r13d

  v2 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( v2 )
  {
    v3 = v2;
    if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 34 <= 5 )
    {
      if ( ((*(_BYTE *)(a2 + 3) >> 1) & 0x3F) == 0xF )
      {
        v7 = sub_9B02A0((__int64)a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40));
        if ( !(unsigned __int8)sub_9B1E40(
                                 a1,
                                 a2,
                                 *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                                 v3) )
          sub_9ACE70((__int64)a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), v7);
      }
      else
      {
        if ( (*(_WORD *)a2 & 0x1FF) == 0x5C )
        {
          v4 = sub_C94680(a2);
          sub_9B1E40(a1, a2, v4, v3);
        }
        else
        {
          sub_9B1E40(a1, a2, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), v2);
        }
        sub_9ACB40((__int64)a1, a2, v3, v5, v6);
      }
    }
  }
}
