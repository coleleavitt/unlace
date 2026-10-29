__int64 __fastcall sub_6CB180(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // dl
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx

  if ( !a2 )
    return 0;
  switch ( (unsigned int)sub_A7AE10(a2) )
  {
    case 0u:
      v7 = *(_QWORD *)(a2 + 8);
      v8 = 0;
      if ( (v7 & 6) == 0 )
        v8 = *(_QWORD *)(a2 + 16);
      v9 = sub_6CB180(a1, v7 & 0xFFFFFFFFFFFFFFF8LL);
      return sub_A7A780(a1, v9, v8);
    case 1u:
      v10 = sub_A7AE80(a2);
      return sub_A7A8C0(a1, 0, *(_QWORD *)(v10 + 88));
    case 2u:
      v10 = sub_A7AEB0(a2);
      do
        v10 = *(_QWORD *)(v10 + 88);
      while ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x4B );
      return sub_A7A8C0(a1, 0, *(_QWORD *)(v10 + 88));
    case 3u:
    case 4u:
      if ( ((*(__int64 *)(a2 + 8) >> 1) & 3uLL) - 2 > 1 )
        BUG();
      v4 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v5 = *(_QWORD *)v4;
      v6 = *(_BYTE *)(*(_QWORD *)v4 + 16LL);
      if ( v6 == 20 )
        goto LABEL_6;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 20 )
        goto LABEL_20;
      v11 = sub_B0D320(v5);
      if ( v11 )
      {
        v5 = v11;
LABEL_6:
        result = sub_A7A780(a1, *(_QWORD *)(v5 + 32), *(_QWORD *)(v5 + 40));
      }
      else
      {
        v6 = *(_BYTE *)(v5 + 16);
LABEL_20:
        v12 = v5;
        if ( v6 == 22
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 22
          && (v12 = sub_B0D320(v5)) != 0 )
        {
          v13 = *(_QWORD *)(v12 + 32);
          v14 = v5;
          v15 = 1;
        }
        else
        {
          v14 = v5;
          v15 = 0;
          v13 = 0;
        }
        result = sub_A7AB40(a1, v13, v15, v14);
      }
      break;
    case 5u:
    case 6u:
      return a2;
  }
  return result;
}

