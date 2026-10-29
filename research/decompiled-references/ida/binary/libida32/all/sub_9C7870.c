bool __fastcall sub_9C7870(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // r14
  unsigned int v11; // eax
  __int64 v12; // r12
  unsigned int v13; // r14d
  unsigned __int64 v14; // rsi
  char v15; // al
  __int64 v17; // r14
  __int64 v18; // r12
  unsigned int v19; // eax
  __int64 v20; // r12
  unsigned int v21; // r14d
  unsigned __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r12
  unsigned int v25; // eax
  __int64 v26; // r12
  unsigned int v27; // r14d
  unsigned __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // r12
  unsigned int v31; // eax
  __int64 v32; // r12
  unsigned int v33; // r14d
  unsigned __int64 v34; // rsi
  __int64 v35; // rbp
  char v36; // cl
  unsigned __int8 v37; // al
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  int v40; // eax
  unsigned __int64 v41; // rax
  char v42; // al
  __int64 v43; // [rsp+8h] [rbp-40h] BYREF
  __int64 v44; // [rsp+10h] [rbp-38h] BYREF
  _QWORD *v45[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = a1;
  v43 = a1;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v3 = a2;
    v4 = sub_B68690(a1);
    v5 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    {
      v6 = *(__int64 **)sub_B68690(a1);
      v7 = (v5 - (__int64)v6) >> 5;
      v8 = (v5 - (__int64)v6) >> 3;
    }
    else
    {
      v6 = nullptr;
      v8 = v5 >> 3;
      v7 = v5 >> 5;
    }
    v9 = &v43;
    v44 = a2;
    v45[0] = &v43;
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        v10 = *v6;
        v11 = sub_B4F350(*v9);
        if ( !(unsigned __int8)sub_1000980(v3, *(unsigned int *)(v10 + 28), v11) )
        {
          v12 = v44;
          v13 = *(_DWORD *)(v10 + 24);
          v14 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v45[0] + 16LL))(*v45[0]) >> 32;
          if ( !(unsigned __int8)sub_1000980(v12, v14, v13) )
            goto LABEL_7;
        }
        v17 = v6[1];
        v18 = v44;
        v19 = sub_B4F350(*v45[0]);
        if ( !(unsigned __int8)sub_1000980(v18, *(unsigned int *)(v17 + 28), v19) )
        {
          v20 = v44;
          v21 = *(_DWORD *)(v17 + 24);
          v22 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v45[0] + 16LL))(*v45[0]) >> 32;
          if ( !(unsigned __int8)sub_1000980(v20, v22, v21) )
          {
            ++v6;
            v2 = v43;
            goto LABEL_8;
          }
        }
        v23 = v6[2];
        v24 = v44;
        v25 = sub_B4F350(*v45[0]);
        if ( !(unsigned __int8)sub_1000980(v24, *(unsigned int *)(v23 + 28), v25) )
        {
          v26 = v44;
          v27 = *(_DWORD *)(v23 + 24);
          v28 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v45[0] + 16LL))(*v45[0]) >> 32;
          if ( !(unsigned __int8)sub_1000980(v26, v28, v27) )
          {
            v6 += 2;
            v2 = v43;
            goto LABEL_8;
          }
        }
        v29 = v6[3];
        v30 = v44;
        v31 = sub_B4F350(*v45[0]);
        if ( !(unsigned __int8)sub_1000980(v30, *(unsigned int *)(v29 + 28), v31) )
        {
          v32 = v44;
          v33 = *(_DWORD *)(v29 + 24);
          v34 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v45[0] + 16LL))(*v45[0]) >> 32;
          if ( !(unsigned __int8)sub_1000980(v32, v34, v33) )
          {
            v6 += 3;
            v2 = v43;
            goto LABEL_8;
          }
        }
        v6 += 4;
        if ( !--v7 )
        {
          v8 = (v5 - (__int64)v6) >> 3;
          break;
        }
        v3 = v44;
        v9 = v45[0];
      }
    }
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        if ( v8 != 1 )
        {
LABEL_48:
          v6 = (__int64 *)v5;
          goto LABEL_7;
        }
LABEL_47:
        if ( !(unsigned __int8)sub_9C6190(&v44, v45, *v6) )
          goto LABEL_48;
LABEL_7:
        v2 = v43;
        goto LABEL_8;
      }
      if ( (unsigned __int8)sub_9C6190(&v44, v45, *v6) )
        goto LABEL_7;
      ++v6;
    }
    if ( (unsigned __int8)sub_9C6190(&v44, v45, *v6) )
      goto LABEL_7;
    ++v6;
    goto LABEL_47;
  }
  v5 = 0;
  v6 = nullptr;
LABEL_8:
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) != 0x2B )
  {
    v15 = *(_BYTE *)(v2 + 97);
    if ( (v15 & 0x40) != 0 || v15 < 0 )
      return 1;
  }
  if ( (unsigned __int8)sub_B4FBC0(v2) )
    return 1;
  v35 = v43;
  v36 = *(_BYTE *)(v43 + 96);
  v37 = v36 & 7;
  if ( (v36 & 7) != 0 )
  {
    if ( v37 == 5 )
    {
      v42 = *(_BYTE *)(v43 + 28) & 0x7F;
      if ( v42 != 40 && v42 != 46 )
      {
        if ( v42 != 43 )
          return 1;
        return v6 != (__int64 *)v5;
      }
      if ( !sub_9C6310(v43) && (*(_BYTE *)(v35 + 28) & 0x7F) != 0x2B )
        return 1;
      v37 = *(_BYTE *)(v35 + 96) & 7;
    }
    if ( v37 <= 3u )
      return 1;
  }
  else
  {
    v38 = *(_QWORD *)&byte_8[*(_QWORD *)(v43 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v38 & 8) != 0
      && (*(_DWORD *)((char *)&qword_18 + (v38 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v38 & 7)) >> 9 == 3 )
    {
      return 1;
    }
    if ( ((*(_BYTE *)(v43 + 28) + 85) & 0x7D) != 0 )
    {
      v39 = *(_QWORD *)(v43 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v43 + 16) & 4) != 0 )
        v39 = *(_QWORD *)(v39 + 8);
      v40 = *(_BYTE *)(sub_B6AD60(v39) + 8) & 0x7F;
      if ( !v40 || v40 == 24 )
        return 1;
      if ( (*(_BYTE *)(v35 + 28) & 0x7F) != 0x2B )
      {
        v41 = *(_QWORD *)(v35 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v35 + 16) & 4) != 0 )
          v41 = *(_QWORD *)v41;
        if ( ((*(_BYTE *)(v41 + 8) + 70) & 0x7Fu) <= 3 )
          return 1;
      }
      v36 = *(_BYTE *)(v35 + 96);
    }
    if ( (v36 & 0x18) != 0 )
      return 1;
  }
  return v6 != (__int64 *)v5;
}

