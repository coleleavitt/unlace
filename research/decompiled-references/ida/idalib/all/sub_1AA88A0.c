__int64 __fastcall sub_1AA88A0(__int64 *a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v4; // rax
  char *v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rax
  char *v8; // r9
  char *v9; // rax
  char *v10; // r9
  unsigned int v11; // r10d
  char *v12; // r11
  unsigned int v13; // ebx
  char *v15; // rax
  __int64 v16; // r9
  char *v17; // r10
  __int64 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // rax
  unsigned int v23; // ebx
  char *v24; // rsi
  char *v25; // rcx
  __int64 v26; // rcx
  char *v27; // rax
  char *v28; // r11
  char *v29; // rax
  char *v30; // r11
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v46[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v48[11]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int8 v49; // [rsp+88h] [rbp-30h]
  unsigned int v50; // [rsp+90h] [rbp-28h]
  unsigned __int8 v51; // [rsp+94h] [rbp-24h]

  v4 = 8 * a4;
  v5 = &a3[8 * a4];
  v6 = (8 * a4) >> 5;
  v7 = v4 >> 3;
  if ( v6 <= 0 )
  {
    v8 = a3;
    goto LABEL_64;
  }
  v8 = a3;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)a3 + 8LL) - 25) > 1u )
  {
    v8 = a3 + 8;
    if ( (unsigned __int8)(*(_BYTE *)(*((_QWORD *)a3 + 1) + 8LL) - 25) > 1u )
    {
      v8 = a3 + 16;
      if ( (unsigned __int8)(*(_BYTE *)(*((_QWORD *)a3 + 2) + 8LL) - 25) > 1u )
      {
        v24 = a3;
        v25 = &a3[32 * v6];
        while ( 1 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*((_QWORD *)v24 + 3) + 8LL) - 25) <= 1u )
          {
            v8 = v24 + 24;
            goto LABEL_3;
          }
          v8 = v24 + 32;
          if ( v25 == v24 + 32 )
            break;
          if ( (unsigned __int8)(*(_BYTE *)(*((_QWORD *)v24 + 4) + 8LL) - 25) <= 1u )
            goto LABEL_3;
          if ( (unsigned __int8)(*(_BYTE *)(*((_QWORD *)v24 + 5) + 8LL) - 25) <= 1u )
          {
            v8 = v24 + 40;
            goto LABEL_3;
          }
          if ( (unsigned __int8)(*(_BYTE *)(*((_QWORD *)v24 + 6) + 8LL) - 25) <= 1u )
          {
            v8 = v24 + 48;
            goto LABEL_3;
          }
          v24 += 32;
        }
        v7 = (v5 - v8) >> 3;
LABEL_64:
        if ( v7 != 2 )
        {
          if ( v7 != 3 )
          {
            if ( v7 != 1 )
            {
              v8 = v5;
              goto LABEL_3;
            }
            goto LABEL_32;
          }
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v8 + 8LL) - 25) <= 1u )
            goto LABEL_3;
          v8 += 8;
        }
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v8 + 8LL) - 25) <= 1u )
          goto LABEL_3;
        v8 += 8;
LABEL_32:
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v8 + 8LL) - 25) <= 1u )
          goto LABEL_3;
        v27 = sub_1AA0B40(a3, v5);
        if ( v28 != v27 )
          return 0;
LABEL_34:
        sub_168B9F0((__int64)v46, a1, v11, 0xB46u, 0);
        if ( v49 )
        {
          sub_1AA2FB0(v48, 19);
        }
        else
        {
          v13 = v51;
          if ( !v51 )
          {
LABEL_36:
            sub_15F7200(v46);
            return v13;
          }
          v33 = sub_168B9E0(v46);
          v36 = v47;
          if ( v47 )
            v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
          v45 = v36;
          v37 = sub_1587BC0(v33, &v45, v31, v32, v34, v35);
          sub_1AA2FB0((unsigned __int8 **)(*v37 + 32LL * v50 + 8), 19);
        }
        if ( v49 )
        {
          sub_AE9DF0(v48, (__int64)"'gang', 'seq', 'vector', or 'worker'", 1u);
          v13 = v49;
        }
        else
        {
          v13 = v51;
          if ( v51 )
          {
            v40 = sub_168B9E0(v46);
            v43 = v47;
            if ( v47 )
              v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
            v45 = v43;
            v44 = sub_1587BC0(v40, &v45, v38, v39, v41, v42);
            sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v50 + 8), (__int64)"'gang', 'seq', 'vector', or 'worker'", 1u);
            v13 = v49;
          }
        }
        goto LABEL_36;
      }
    }
  }
LABEL_3:
  v9 = sub_1AA0B40(a3, v8);
  if ( v9 != v10 )
    return 0;
  if ( v12 == v10 )
    goto LABEL_34;
  while ( 1 )
  {
    v18 = (__int64)(v10 + 8);
    v19 = v12 - (v10 + 8);
    v20 = v19 >> 5;
    v21 = v19 >> 3;
    if ( v20 <= 0 )
      break;
    if ( (unsigned __int8)(*(_BYTE *)(*((_QWORD *)v10 + 1) + 8LL) - 25) <= 1u )
      goto LABEL_8;
    if ( (unsigned __int8)(*(_BYTE *)(*((_QWORD *)v10 + 2) + 8LL) - 25) > 1u )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*((_QWORD *)v10 + 3) + 8LL) - 25) > 1u )
      {
        v26 = (__int64)&v10[32 * v20 + 8];
        while ( 1 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v18 + 24) + 8LL) - 25) <= 1u )
          {
            v18 += 24;
            goto LABEL_8;
          }
          if ( v26 == v18 + 32 )
          {
            v18 = (__int64)&v10[32 * v20 + 8];
            v21 = (__int64)&v12[-v26] >> 3;
            goto LABEL_38;
          }
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v18 + 32) + 8LL) - 25) <= 1u )
          {
            v18 += 32;
            goto LABEL_8;
          }
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v18 + 40) + 8LL) - 25) <= 1u )
          {
            v18 += 40;
            goto LABEL_8;
          }
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v18 + 48) + 8LL) - 25) <= 1u )
            break;
          v18 += 32;
        }
        v18 += 48;
      }
      else
      {
        v18 = (__int64)(v10 + 24);
      }
LABEL_8:
      v15 = sub_1AA0B40(v10, (char *)v18);
      if ( v15 == v17 )
        goto LABEL_14;
      goto LABEL_9;
    }
    v22 = sub_1AA0B40(v10, v10 + 16);
    if ( v22 == v17 )
      goto LABEL_14;
LABEL_9:
    v10 = v17;
    if ( v12 == v17 )
      return 0;
  }
LABEL_38:
  if ( v21 != 2 )
  {
    if ( v21 != 3 )
    {
      if ( v21 != 1 )
      {
        v18 = (__int64)v12;
        goto LABEL_8;
      }
      goto LABEL_52;
    }
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v18 + 8LL) - 25) <= 1u )
      goto LABEL_8;
    v18 += 8;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v18 + 8LL) - 25) <= 1u )
    goto LABEL_8;
  v18 += 8;
LABEL_52:
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v18 + 8LL) - 25) <= 1u )
    goto LABEL_8;
  v29 = sub_1AA0B40(v10, v12);
  if ( v30 == v29 )
  {
LABEL_14:
    sub_168B9F0((__int64)v46, a1, *(_DWORD *)(*(_QWORD *)v16 + 12LL), 0xB42u, 0);
    v23 = v49;
    sub_15F7200(v46);
    return v23;
  }
  return 0;
}
