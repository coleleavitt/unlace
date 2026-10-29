__int64 __fastcall sub_1894C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbx
  _QWORD *v16; // rbp
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // r14
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64); // rax

  if ( !a2 )
    return 1;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) == 13 && ((*(_WORD *)(v5 + 18) >> 3) & 0x1FF) == 0x1E9 )
    return 1;
  v6 = (_QWORD *)sub_9C7D40(a2, a2, a3, a4, a5);
  v7 = *(_QWORD *)(a1 + 16);
  if ( (v7 & 4) != 0 )
  {
    v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_BYTE *)(v8 + 8) & 0x7F) != 0x13 )
      goto LABEL_10;
  }
  else
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v8 + 8) & 0x7F) != 0x13 )
    {
LABEL_10:
      v10 = sub_BA85D0(a1);
      v15 = (_QWORD *)v10;
      if ( v6 != (_QWORD *)v10 )
      {
        if ( v6 )
        {
          if ( v6 != (_QWORD *)v10 )
          {
            v16 = v6;
            v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL);
            if ( v17 != sub_A55E60 )
              goto LABEL_20;
LABEL_14:
            v18 = v15[12];
            v19 = *(__int64 (__fastcall **)(__int64))(*v16 + 32LL);
            if ( v19 == sub_A55E60 )
            {
LABEL_15:
              v20 = v16[12];
              goto LABEL_16;
            }
            while ( 1 )
            {
              v20 = v19((__int64)v16);
LABEL_16:
              if ( v18 == v20 )
                break;
              v21 = sub_BAB630((__int64)v16, a2, v11, v12, v13, v14);
              v16 = (_QWORD *)v21;
              if ( !v21 )
                goto LABEL_23;
              if ( (_QWORD *)v21 == v15 )
                break;
              v17 = *(__int64 (__fastcall **)(__int64))(*v15 + 32LL);
              if ( v17 == sub_A55E60 )
                goto LABEL_14;
LABEL_20:
              v18 = v17((__int64)v15);
              v19 = *(__int64 (__fastcall **)(__int64))(*v16 + 32LL);
              if ( v19 == sub_A55E60 )
                goto LABEL_15;
            }
          }
        }
        else
        {
LABEL_23:
          if ( v15 != v6 )
          {
            while ( 1 )
            {
              v26 = *(__int64 (__fastcall **)(__int64))(*v6 + 32LL);
              v22 = v26 == sub_A55E60 ? v6[12] : v26((__int64)v6);
              v23 = *(__int64 (__fastcall **)(__int64))(*v15 + 32LL);
              v24 = v23 == sub_A55E60 ? v15[12] : v23((__int64)v15);
              if ( v22 == v24 )
                break;
              v25 = sub_BAB630((__int64)v15, a2, v11, v12, v13, v14);
              v15 = (_QWORD *)v25;
              if ( !v25 )
                return 0;
              if ( (_QWORD *)v25 == v6 )
                return 1;
            }
          }
        }
      }
      return 1;
    }
  }
  if ( v8 == 48 )
    goto LABEL_10;
  return 1;
}
