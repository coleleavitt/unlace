void __fastcall sub_F2A6D0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r12
  const char *v5; // rax
  int v6; // eax
  char v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  _BYTE *v13; // rdx
  __int64 v14; // r13
  const char *v15; // rsi
  __int64 v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rsi

  v2 = *(_BYTE *)(a1 + 1104);
  v3 = *(_QWORD *)(a1 + 1096);
  if ( a2 )
  {
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 24LL))(*(_QWORD *)(a1 + 1096), 2, 1, 0);
      v14 = *(_QWORD *)(a1 + 1096);
      v15 = (const char *)sub_B88090(a2);
      sub_995540(v14, v15);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    }
    else
    {
      v5 = (const char *)sub_B88090(a2);
      sub_995540(v3, v5);
    }
    sub_F29AE0(a1, a2);
    v6 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)(v6 - 18) <= 0x3F )
    {
      v7 = *(_BYTE *)(a1 + 1104);
      v8 = *(_QWORD *)(a1 + 1096);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 24LL))(
          *(_QWORD *)(a1 + 1096),
          6,
          1,
          0);
      v9 = *(_QWORD *)(a2 + 40);
      if ( v9 )
      {
        v10 = sub_995540(*(_QWORD *)(a1 + 1096), " '");
        v11 = v9;
LABEL_9:
        v12 = sub_B86360(v10, v11);
        v13 = *(_BYTE **)(v12 + 32);
        if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
        {
          sub_227BA10(v12, 39);
        }
        else
        {
          *(_QWORD *)(v12 + 32) = v13 + 1;
          *v13 = 39;
        }
      }
      else
      {
        switch ( (*(_BYTE *)(a2 + 28) + 85) & 0x7F )
        {
          case 0:
            v30 = sub_995540(*(_QWORD *)(a1 + 1096), " depth ");
            if ( (*(_BYTE *)(a2 + 97) & 0x10) == 0 )
              v9 = (*(_DWORD *)(a2 + 96) >> 13) & 0x7F;
            v31 = sub_227B910(v30, v9);
            v19 = sub_995540(v31, " index ");
            v20 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
            if ( v20 == 255 )
              v20 = sub_B74880(a2);
            goto LABEL_24;
          case 3:
            v10 = sub_995540(*(_QWORD *)(a1 + 1096), " first_binding '");
            v11 = *(_QWORD *)(*(_QWORD *)(a2 + 104) + 40LL);
            goto LABEL_9;
          case 4:
            v27 = sub_995540(*(_QWORD *)(a1 + 1096), " depth ");
            v28 = sub_227B910(v27, *(_DWORD *)(a2 + 68) & 0xFFFFF);
            v29 = sub_995540(v28, " index ");
            sub_227B910(v29, *(_WORD *)(a2 + 70) >> 4);
            break;
          case 6:
            v21 = a2;
            v25 = sub_995540(*(_QWORD *)(a1 + 1096), " field_index ");
            if ( *(char *)(a2 + 29) < 0 )
              v21 = sub_B72720(a2);
            v26 = *(unsigned int *)(v21 + 68);
            if ( (v26 & 0xFFFFFFF0) == 0 )
            {
              sub_B7EAB0(v21, (__int64)" field_index ", v26, v22, v23, v24);
              LODWORD(v26) = *(_DWORD *)(v21 + 68);
            }
            sub_227B910(v25, ((unsigned int)v26 >> 4) - 1);
            break;
          case 0x18:
            v16 = sub_995540(*(_QWORD *)(a1 + 1096), " depth ");
            v17 = sub_BBE590(a2);
            v18 = sub_227B910(v16, v17);
            v19 = sub_995540(v18, " index ");
            v20 = sub_BBE5B0(a2);
LABEL_24:
            sub_227B910(v19, v20);
            break;
          default:
            v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
            sub_F2A050(a1, v32);
            break;
        }
      }
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      v6 = *(_BYTE *)(a2 + 28) & 0x7F;
    }
    if ( (unsigned int)(v6 - 26) <= 0x1A )
      sub_F2A610(a1, *(_QWORD *)(a2 + 48));
  }
  else if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(*(_QWORD *)(a1 + 1096), 4, 0, 0);
    sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  else
  {
    sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
  }
}
