__int64 __fastcall sub_1896B90(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r12
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int v20; // r13d
  int v22; // eax
  size_t v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // r15
  _QWORD *v34; // rcx
  __int64 (__fastcall *v35)(__int64); // rax
  __int64 v36; // rsi
  __int64 (__fastcall *v37)(__int64); // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 (__fastcall *v45)(__int64); // rax
  __int64 v46; // rcx
  __int64 (__fastcall *v47)(__int64); // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+8h] [rbp-E0h]
  _QWORD *v51; // [rsp+10h] [rbp-D8h]
  _QWORD *v52; // [rsp+10h] [rbp-D8h]
  __int64 v53; // [rsp+10h] [rbp-D8h]
  _BYTE v54[200]; // [rsp+20h] [rbp-C8h] BYREF

  LODWORD(v4) = 1;
  v6 = a2;
  v50 = sub_168B6C0((__int64)a1);
  if ( *(char *)(a2 + 28) >= 0 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) != 34 )
      v10 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF0LL), a2, v7, v8);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 35 > 1 )
      v11 = sub_F63050(v11, a2, v7, v8);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v12 + 16) == 13 )
    {
      v12 = *(unsigned __int16 *)(v12 + 18);
      LOWORD(v12) = ((unsigned __int16)v12 >> 3) & 0x1FF;
      if ( (_WORD)v12 == 489 )
        goto LABEL_38;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1EA )
    {
LABEL_21:
      v20 = *(_DWORD *)(v6 + 24);
      if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_22;
    }
    else
    {
      v4 = (_QWORD *)sub_9C7D40(v11, a2, v12, v8, v9);
      v18 = v4[15];
      if ( !v18 )
      {
        a2 = v4[12];
        sub_A794E0((__int64 *)(a2 + 88), a2, v14, v15, v16, v17);
        v18 = v4[15];
      }
      if ( (v18 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v29 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v6 + 16) & 4) != 0 )
          v29 = *(_QWORD *)v29;
        if ( (*(_BYTE *)(v29 + 8) & 0x7F) == 0x13 )
        {
          if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_38;
          v40 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v40 + 16) != 34 )
            v40 = sub_F63050(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, v29, v15);
          v41 = *(_QWORD *)(v40 + 32) & 0xFFFFFFFFFFFFFFF0LL;
          v42 = *(_QWORD *)v41;
          v43 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v41 + 16LL) - 35;
          if ( (unsigned int)v43 > 1 )
            v42 = sub_F63050(v42, a2, v43, v15);
          v33 = (_QWORD *)sub_9C7D40(v42, a2, v43, v15, v16);
          if ( !v33 )
            goto LABEL_38;
        }
        else
        {
          v33 = (_QWORD *)sub_BA85D0(v6);
        }
        if ( v4 != v33 )
        {
          v34 = v4;
          while ( 1 )
          {
            v35 = *(__int64 (__fastcall **)(__int64))(*v33 + 32LL);
            if ( v35 == sub_A55E60 )
            {
              v36 = v33[12];
            }
            else
            {
              v52 = v34;
              v44 = v35((__int64)v33);
              v34 = v52;
              v36 = v44;
            }
            v37 = *(__int64 (__fastcall **)(__int64))(*v34 + 32LL);
            if ( v37 == sub_A55E60 )
            {
              v38 = v34[12];
            }
            else
            {
              v51 = v34;
              v38 = v37((__int64)v34);
              v34 = v51;
            }
            if ( v36 == v38 )
              break;
            v39 = sub_BAB630((__int64)v34, v36, v30, (__int64)v34, v31, v32);
            v34 = (_QWORD *)v39;
            if ( !v39 )
            {
              if ( v33 != v4 )
              {
                do
                {
                  v45 = *(__int64 (__fastcall **)(__int64))(*v4 + 32LL);
                  if ( v45 == sub_A55E60 )
                    v46 = v4[12];
                  else
                    v46 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v45)(v4, v36, v30, v34);
                  v47 = *(__int64 (__fastcall **)(__int64))(*v33 + 32LL);
                  if ( v47 == sub_A55E60 )
                  {
                    v48 = v33[12];
                  }
                  else
                  {
                    v53 = v46;
                    v48 = v47((__int64)v33);
                    v46 = v53;
                  }
                  if ( v46 == v48 )
                    break;
                  v49 = sub_BAB630((__int64)v33, v36, v30, v46, v31, v32);
                  v33 = (_QWORD *)v49;
                  if ( !v49 )
                    goto LABEL_21;
                }
                while ( v4 != (_QWORD *)v49 );
              }
              goto LABEL_38;
            }
            if ( (_QWORD *)v39 == v33 )
              goto LABEL_38;
          }
        }
        goto LABEL_38;
      }
      if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v19 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v6 + 16) & 4) != 0 )
          v19 = *(_QWORD *)v19;
        if ( (*(_BYTE *)(v19 + 8) & 0x7F) == 0x15 )
        {
          v20 = *(_DWORD *)(v6 + 24);
LABEL_22:
          if ( v20 )
          {
            v22 = sub_1021680(*(_QWORD *)(*a1 + 272), v20);
            LOBYTE(v4) = v22 != 3 && v22 != 0;
            if ( (_BYTE)v4 )
            {
              v23 = j__strlen(&byte_22F0C30);
              v24 = sub_B35CE0(v50, &byte_22F0C30, v23, 4, v20 | ((unsigned __int64)v20 << 32), 0);
              sub_B8CC60(v6, v24, v25, v26, v27, v28);
              return (unsigned int)v4;
            }
          }
          goto LABEL_19;
        }
LABEL_38:
        LODWORD(v4) = 0;
        return (unsigned int)v4;
      }
      v20 = *(_DWORD *)(v6 + 24);
    }
LABEL_19:
    sub_168B9F0((__int64)v54, a1, v20, 0xBD4u, 0);
    LODWORD(v4) = 1;
    sub_15F7200(v54);
    sub_B88650(v6, 1);
  }
  return (unsigned int)v4;
}
