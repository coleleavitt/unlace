__int64 __fastcall sub_178F6C0(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  char v14; // al
  __int64 v15; // rsi
  int v16; // eax
  unsigned int v17; // esi
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // eax

  v12 = sub_15F1640(*a2, 1);
  if ( !v12 )
    goto LABEL_12;
  v13 = *(_QWORD *)(*a2 + 544);
  v14 = *(_BYTE *)(v13 + 8);
  v15 = v13 - 72;
  if ( (v14 & 0x7Fu) - 34 >= 6 )
    v15 = 0;
  v16 = sub_178DFB0((__int64)a2, v15, v8, v9, v10, v11);
  v17 = 1;
  if ( v16 != 2 )
  {
    v17 = 0;
    if ( v16 == 3 )
    {
      if ( (*(_BYTE *)(sub_168B6E0((__int64)a2) + 89) & 4) == 0 )
      {
        v19 = *a2;
        if ( *(_BYTE *)(*a2 + 504) )
        {
          v20 = sub_168B6D0((__int64)a2);
          v17 = 1;
          if ( (unsigned __int8)sub_FD3640(*(_QWORD *)(v20 + 32), a4) )
            goto LABEL_6;
          v19 = *a2;
        }
        sub_17A6B10(v19, v12, 0);
        v17 = (v21 != 0) + 2;
        goto LABEL_6;
      }
LABEL_12:
      v17 = 0;
    }
  }
LABEL_6:
  sub_1606AE0(a1, v17, a3, a4, v12, *a2);
  return a1;
}
