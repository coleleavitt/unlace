__int64 __fastcall sub_16558B0(__int64 a1, __int64 (__fastcall *a2)(__int64 a1))
{
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64); // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  unsigned int v9; // r13d
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  int v16; // r12d
  _QWORD **v18; // r15
  _QWORD *v19; // rdi
  char v20; // al
  __int64 *v21; // r15
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64); // rax
  __int64 v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 *v27; // r15
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // [rsp+0h] [rbp-48h]
  __int64 *v31; // [rsp+0h] [rbp-48h]
  __int64 *v32; // [rsp+0h] [rbp-48h]
  _QWORD *v33; // [rsp+8h] [rbp-40h]
  _QWORD *v34; // [rsp+8h] [rbp-40h]

  v3 = sub_BA5B10((__int64)a2);
  if ( v3 )
  {
    v8 = v3;
    if ( *(char *)(v3 + 28) >= 0 )
    {
      v9 = 1;
      if ( (*(_BYTE *)(v3 + 64) & 1) == 0 )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v8 + 40);
          if ( !v10 )
LABEL_76:
            BUG();
          v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v10 & 4) == 0 )
            break;
          if ( !v11 )
            goto LABEL_76;
          v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v12 )
          {
            v13 = *(_QWORD *)v12;
            if ( *(_BYTE *)(*(_QWORD *)v12 + 16LL) == 48 )
            {
              a2 = (__int64 (__fastcall *)(__int64))sub_F60F10(
                                                      v13,
                                                      (__int64)a2,
                                                      (__int64)v4,
                                                      (__int64)v5,
                                                      (__int64)v6,
                                                      v7);
              v16 = sub_1655680(a1, a2);
              goto LABEL_17;
            }
          }
          else
          {
            v13 = 0x10102464C457FLL;
          }
          if ( (*(_BYTE *)(v13 + 17) & 4) != 0 )
            v9 = 2;
          if ( (*(_BYTE *)(v8 + 48) & 1) == 0 )
          {
LABEL_21:
            v8 = *(_QWORD *)(v8 + 48);
            goto LABEL_22;
          }
LABEL_12:
          v8 = sub_BA5A00(v8);
LABEL_22:
          if ( !v8 )
            return v9;
          if ( *(char *)(v8 + 28) < 0 || (*(_BYTE *)(v8 + 64) & 1) != 0 )
            return 0;
        }
        v14 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 32LL))(v11);
        v15 = *(_BYTE *)(v14 + 28) & 0x7F;
        if ( v15 != 72 )
        {
          if ( v15 == 71 )
          {
            v26 = *(unsigned int *)(a1 + 16);
            if ( (_DWORD)v26 )
            {
              v27 = *(__int64 **)(a1 + 8);
              v16 = 1;
              v32 = &v27[v26];
              while ( 1 )
              {
                v28 = (_QWORD *)sub_B77AF0(*v27);
                if ( v28 || (v28 = (_QWORD *)sub_B77A30(*v27)) != nullptr )
                {
                  v4 = sub_6EE8E0;
                  a2 = *(__int64 (__fastcall **)(__int64))(*v28 + 32LL);
                  if ( a2 == sub_6EE8E0 )
                    v29 = v28[9];
                  else
                    v29 = a2((__int64)v28);
                  if ( v14 == v29 )
                    return 0;
                  if ( *(_BYTE *)(a1 + 104) )
                  {
                    a2 = *(__int64 (__fastcall **)(__int64))(v14 + 48);
                    if ( (unsigned __int8)sub_1654AF0(*(_QWORD **)(v29 + 48), a2) )
                      v16 = 2;
                  }
                }
                if ( v32 == ++v27 )
                  goto LABEL_17;
              }
            }
          }
          else
          {
            if ( (unsigned int)v15 - 59 <= 2 )
            {
              a2 = (__int64 (__fastcall *)(__int64))v14;
              v16 = sub_1655680(a1, (_QWORD *)v14);
              goto LABEL_17;
            }
            v18 = *(_QWORD ***)(a1 + 8);
            v5 = &v18[*(unsigned int *)(a1 + 16)];
            if ( v18 != v5 )
            {
              v19 = *v18;
              if ( *v18 == (_QWORD *)v14 )
                return 0;
              v16 = 1;
              while ( 1 )
              {
                if ( *(_BYTE *)(a1 + 104) )
                {
                  a2 = (__int64 (__fastcall *)(__int64))v14;
                  v30 = v5;
                  v20 = sub_1654AF0(v19, (_QWORD *)v14);
                  v5 = v30;
                  if ( v20 )
                    v16 = 2;
                }
                if ( v5 == ++v18 )
                  break;
                v19 = *v18;
                if ( (_QWORD *)v14 == *v18 )
                  return 0;
              }
LABEL_17:
              if ( !v16 )
                return 0;
              if ( v16 == 2 )
                v9 = 2;
            }
          }
LABEL_20:
          if ( (*(_BYTE *)(v8 + 48) & 1) == 0 )
            goto LABEL_21;
          goto LABEL_12;
        }
        v21 = *(__int64 **)(a1 + 56);
        v31 = &v21[*(unsigned int *)(a1 + 64)];
        if ( v21 == v31 )
          goto LABEL_20;
        v16 = 1;
        while ( 1 )
        {
          v22 = *v21;
          if ( (*(_BYTE *)(*v21 + 28) & 0x7Fu) - 60 <= 1 )
          {
            v5 = (_QWORD *)sub_BBF290(v22);
          }
          else
          {
            v5 = (_QWORD *)sub_B97230(v22);
            if ( !v5 )
              goto LABEL_53;
          }
          v4 = sub_6EE8F0;
          v23 = *(__int64 (__fastcall **)(__int64))(*v5 + 32LL);
          if ( v23 == sub_6EE8F0 )
          {
            v24 = v5[9];
          }
          else
          {
            v34 = v5;
            v24 = v23((__int64)v5);
            v5 = v34;
          }
          if ( v14 == v24 )
            return 0;
          if ( !*(_BYTE *)(a1 + 104) || *(_QWORD *)(v14 + 40) != v5[5] )
            goto LABEL_53;
          v6 = (_QWORD *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
            v6 = (_QWORD *)*v6;
          v25 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v5[2] & 4) != 0 )
            v25 = (_QWORD *)*v25;
          v33 = v6;
          if ( v25 == v6
            || (unsigned __int8)sub_B8E180((unsigned __int64)v25)
            && (v6 = v33, (v33[1] & 0x7F) != 0)
            && (v33[1] & 0x7F) != 0x18 )
          {
            v16 = 2;
            if ( v31 == ++v21 )
              goto LABEL_17;
          }
          else
          {
LABEL_53:
            if ( v31 == ++v21 )
              goto LABEL_17;
          }
        }
      }
    }
    return 0;
  }
  else
  {
    return 1;
  }
}
