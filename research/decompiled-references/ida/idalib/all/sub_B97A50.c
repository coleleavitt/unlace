__int64 __fastcall sub_B97A50(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  __int64 v19; // rdx
  _BYTE *v20; // rax
  _BYTE *v21; // rbx
  __int64 v22; // r13
  unsigned __int64 v23; // rax

  v5 = *(_QWORD *)(sub_B8C1B0(a1 + 72) + 16);
  if ( (v5 & 4) != 0 )
    v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v6 )
    BUG();
  v7 = v6 - 64;
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 - 64) + 32LL);
  if ( v8 == sub_A01140 )
    v9 = sub_B70A60(v7);
  else
    v9 = v8(v7);
  v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v10 == sub_A01140 )
  {
    if ( v9 != sub_B70A60(a2) )
    {
LABEL_8:
      if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x24 )
      {
        v23 = sub_B97300(a2);
        v17 = v23;
        if ( v23 && ((unsigned __int8)sub_B95E20(v23, a1) || a3 && (unsigned __int8)sub_B95E20(a1, v17)) )
          return v17;
        return 0;
      }
      v15 = sub_B94670(a2 + 64, *(_QWORD *)(a1 + 40), v11, v12, v13, v14);
      if ( !v15 )
        return 0;
      if ( !a3 )
      {
        while ( 1 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
          v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v15 & 4) == 0 )
            break;
          if ( !v16 )
            return 0;
          v17 = *(_QWORD *)v16;
          if ( (*(_BYTE *)(*(_QWORD *)v16 + 28LL) & 0x7Fu) - 35 <= 3 && (unsigned __int8)sub_B95E20(*(_QWORD *)v16, a1) )
            return v17;
          v15 = *(_QWORD *)(v16 + 8);
          if ( !v15 )
            return 0;
        }
        if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 35 <= 3 && (unsigned __int8)sub_B95E20(v16, a1) )
          return v17;
        return 0;
      }
      while ( 1 )
      {
        v19 = v15;
        v20 = (_BYTE *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
        v21 = v20;
        LODWORD(v19) = (v19 >> 2) & 1;
        v22 = (unsigned int)v19;
        if ( (_DWORD)v19 )
        {
          if ( !v20 )
            return 0;
          v17 = *(_QWORD *)v20;
          if ( (*(_BYTE *)(*(_QWORD *)v20 + 28LL) & 0x7Fu) - 35 > 3 )
            goto LABEL_25;
        }
        else
        {
          if ( (v20[28] & 0x7Fu) - 35 > 3 )
            return 0;
          v17 = (unsigned __int64)v20;
        }
        if ( (unsigned __int8)sub_B95E20(v17, a1) || (unsigned __int8)sub_B95E20(a1, v17) )
          return v17;
        if ( !v22 || !v21 )
          return 0;
LABEL_25:
        v15 = *((_QWORD *)v21 + 1);
        if ( !v15 )
          return 0;
      }
    }
  }
  else if ( v9 != v10(a2) )
  {
    goto LABEL_8;
  }
  return a1;
}
