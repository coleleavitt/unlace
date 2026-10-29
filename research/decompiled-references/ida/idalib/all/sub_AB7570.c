__int64 __fastcall sub_AB7570(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  _QWORD v18[9]; // [rsp-48h] [rbp-48h] BYREF

  if ( !a2 )
    return 0;
  switch ( (unsigned int)sub_E90000(a2) )
  {
    case 0u:
      v5 = *(_QWORD *)(a2 + 8);
      v6 = 0;
      if ( (v5 & 6) == 0 )
        v6 = *(_QWORD *)(a2 + 16);
      v7 = sub_AB7570(a1, v5 & 0xFFFFFFFFFFFFFFF8LL);
      return sub_E918E0(a1, v7, v6);
    case 1u:
      v8 = sub_E90060(a2);
      return sub_E91C40(a1, 0, *(_QWORD *)(v8 + 88));
    case 2u:
      v9 = sub_E90090(a2);
      do
        v9 = *(_QWORD *)(v9 + 88);
      while ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x4D );
      return sub_E91C40(a1, 0, *(_QWORD *)(v9 + 88));
    case 3u:
      if ( ((*(__int64 *)(a2 + 8) >> 1) & 3) != 2 )
        BUG();
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v11 = *(_QWORD *)v10;
      v12 = *(unsigned __int8 *)(*(_QWORD *)v10 + 16LL);
      if ( (_BYTE)v12 == 20 )
        goto LABEL_13;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 20 )
        goto LABEL_17;
      v13 = sub_F63050(v11, a2, v12, v3);
      if ( v13 )
      {
        v11 = v13;
LABEL_13:
        result = sub_E918E0(a1, *(_QWORD *)(v11 + 32), *(_QWORD *)(v11 + 40));
      }
      else
      {
        v12 = *(unsigned __int8 *)(v11 + 16);
LABEL_17:
        if ( (_BYTE)v12 != 22 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 22 )
            return sub_E91A00(a1, 0, v11);
          v17 = sub_F63050(v11, a2, v12, v3);
          if ( !v17 )
            return sub_E91A00(a1, 0, v11);
          v11 = v17;
        }
        v14 = *(unsigned int *)(v11 + 20);
        sub_F22FF0(v18, 0, *(_QWORD *)(v11 + 40), 1);
        v15 = sub_AB72A0(a1, 6u, v18, (const void *)(v11 + 48), v14, 1);
        v16 = *(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v16 )
          v16 = sub_AB7570(a1, *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        result = sub_E91A00(a1, v16, *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL));
      }
      break;
    case 4u:
    case 5u:
      return a2;
  }
  return result;
}
