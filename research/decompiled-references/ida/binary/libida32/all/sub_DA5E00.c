__int64 __fastcall sub_DA5E00(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  unsigned int v8; // r14d
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  unsigned __int8 **v14; // rax
  unsigned __int8 **v16; // rax
  unsigned __int8 **v17; // rbx
  __int64 v18; // rax
  char v19; // di
  unsigned __int8 v20; // si
  __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned __int8 **v27; // rax
  unsigned __int8 **v28; // rbx
  unsigned __int64 v29; // rdi
  unsigned __int8 v30; // cl
  __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+10h] [rbp-48h] BYREF
  char v33; // [rsp+18h] [rbp-40h]

  v8 = sub_DFFEE0(a3);
  if ( (_BYTE)v8 )
    return v8;
  v9 = *(_DWORD *)(a3 + 24);
  if ( v9 == 1 )
  {
    v10 = **(_QWORD **)(a3 + 32);
    if ( (v10 & 2) != 0 )
      goto LABEL_16;
  }
  else
  {
    if ( (unsigned int)(v9 - 2) <= 1 )
      BUG();
    v10 = **(_QWORD **)(*(_QWORD *)(a3 + 32) + 32LL);
    if ( (v10 & 2) != 0 )
      goto LABEL_16;
  }
  v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
  v12 = v11;
  if ( v11 )
  {
    v13 = *(_BYTE *)(v11 + 28) & 0x7F;
    if ( (unsigned int)v13 - 40 <= 6 )
    {
      if ( v13 != 43 && *(char *)(v11 + 97) < 0 )
        goto LABEL_9;
      v19 = *(_BYTE *)(v11 + 96);
      v20 = v19 & 7;
      if ( (v19 & 7) == 0 )
      {
        v21 = *(_QWORD *)&byte_8[*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v21 & 8) != 0
          && (*(_DWORD *)((char *)&qword_18 + (v21 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v21 & 7)) >> 9 == 3 )
        {
          goto LABEL_9;
        }
        if ( ((v13 + 85) & 0x7D) != 0 )
        {
          v22 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
            v22 = *(_QWORD *)(v22 + 8);
          v23 = *(_BYTE *)(sub_B6AD60(v22) + 8) & 0x7F;
          if ( v23 == 24 || !v23 )
            goto LABEL_9;
          if ( (*(_BYTE *)(v12 + 28) & 0x7F) != 0x2B )
          {
            v24 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
              v24 = *(_QWORD *)v24;
            if ( ((*(_BYTE *)(v24 + 8) + 70) & 0x7Fu) <= 3 )
              goto LABEL_9;
          }
          v19 = *(_BYTE *)(v12 + 96);
        }
        if ( (v19 & 0x18) != 0 )
        {
LABEL_9:
          if ( *(_QWORD *)(a1 + 416) != v12
            || (*(_BYTE *)(sub_E0E500(a1) + 2) & 1) != 0
            && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 43 <= 1 )
          {
            if ( sub_B593E0(v12, &v32) )
            {
              v32 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
              v14 = (unsigned __int8 **)sub_E0FE60(a1, &v32, 2501, 1);
              if ( v14 )
                sub_AC60B0(v14, v12, 0xAu);
              sub_E10070(a1, *(unsigned int *)(v12 + 24), 103);
            }
            else
            {
              sub_D9E4F0(a1, (__int64)a2, (unsigned int *)v12);
            }
          }
          else if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x20) != 0
                 || (v25 = *(_QWORD *)(v12 + 48),
                     v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24)),
                     (unsigned __int8)sub_F32DA0(v25, v26)) )
          {
            v32 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
            v27 = (unsigned __int8 **)sub_E0FE60(a1, &v32, 2372, 0);
            v28 = v27;
            if ( v27 )
            {
              sub_AC60B0(v27, a4, 2u);
              sub_AC60B0(v28, 0, 2u);
            }
          }
          else
          {
            v8 = 0;
            sub_D9E580(a1, a2, v12);
          }
          return v8;
        }
        goto LABEL_16;
      }
      if ( v20 != 5 )
      {
LABEL_35:
        if ( v20 <= 3u )
          goto LABEL_9;
        goto LABEL_16;
      }
      if ( v13 != 40 && v13 != 46 )
        goto LABEL_56;
      v29 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
        v29 = *(_QWORD *)(v29 + 8);
      if ( !v29 )
      {
LABEL_56:
        if ( v13 != 43 )
          goto LABEL_9;
        goto LABEL_16;
      }
      v30 = *(_BYTE *)(sub_B6AD60(v29) + 8) & 0x7F;
      if ( v30 > 0x12u )
      {
        if ( ((v30 + 94) & 0x7Fu) > 5 )
        {
LABEL_54:
          if ( (*(_BYTE *)(v12 + 28) & 0x7F) != 0x2B )
            goto LABEL_9;
        }
      }
      else if ( ((1LL << v30) & 0x40182) == 0 )
      {
        goto LABEL_54;
      }
      v20 = *(_BYTE *)(v12 + 96) & 7;
      goto LABEL_35;
    }
  }
LABEL_16:
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24)) )
  {
    v31 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v16 = (unsigned __int8 **)sub_E0FE60(a1, &v31, 2372, 0);
    v17 = v16;
    if ( v16 )
    {
      sub_AC60B0(v16, a4, 2u);
      sub_AC60B0(v17, 1, 2u);
      v18 = sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
      v33 = 1;
      v32 = v18;
      sub_AC88D0((__int64 *)v17, &v32);
    }
    else
    {
      sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
    }
    return 0;
  }
  return v8;
}

