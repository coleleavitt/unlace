_QWORD *__fastcall sub_15B7A90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  int v8; // eax
  char v9; // dl
  __int64 v10; // r12
  __int64 *v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rsi
  __int64 *v14; // rax
  __int64 *v15; // rsi
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rbx
  unsigned __int64 v20; // r13
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // rdi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  _QWORD *v32; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  void *v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 *v46; // rax
  void *v47[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v6 || !*v6 )
    return nullptr;
  v7 = *(_QWORD *)(*(_QWORD *)(*v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(unsigned __int8 *)(v7 + 16);
  if ( (_BYTE)v8 != 20 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) != 20 )
      goto LABEL_30;
    v34 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), v6, v31, a4);
    if ( !v34 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 47 <= 1 )
        goto LABEL_31;
      goto LABEL_41;
    }
    v7 = v34;
  }
  v9 = *(_BYTE *)(a1 + 28);
  v10 = *(_QWORD *)a1;
  if ( !v9 )
    goto LABEL_55;
  v11 = *(__int64 **)(a1 + 8);
  v12 = *(unsigned int *)(a1 + 20);
  v13 = &v11[v12];
  if ( v11 != v13 )
  {
    v14 = *(__int64 **)(a1 + 8);
    if ( *v11 == v7 )
    {
LABEL_60:
      v9 = 0;
      goto LABEL_12;
    }
    while ( v13 != ++v14 )
    {
      if ( *v14 == v7 )
        goto LABEL_60;
    }
  }
  if ( (unsigned int)v12 < *(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 20) = v12 + 1;
    *v13 = v7;
    v11 = *(__int64 **)(a1 + 8);
    v14 = &v11[v12];
  }
  else
  {
LABEL_55:
    v14 = (__int64 *)sub_2236760(a1 + 8, v7);
    v11 = *(__int64 **)(a1 + 8);
    if ( !*(_BYTE *)(a1 + 28) )
    {
      v15 = &v11[*(unsigned int *)(a1 + 16)];
      goto LABEL_13;
    }
  }
LABEL_12:
  v15 = &v11[*(unsigned int *)(a1 + 20)];
LABEL_13:
  if ( v14 != v15 && (unsigned __int64)*v14 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v16 = v14 + 1;
    do
    {
      v17 = v16;
      if ( v15 == v16 )
        break;
      ++v16;
    }
    while ( (unsigned __int64)*v17 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( !v9 )
    return nullptr;
  v18 = *(_QWORD *)(v7 + 40);
  v19 = *(_QWORD *)(v7 + 32);
  v20 = 0;
  if ( v19 )
  {
    v21 = sub_E90000(v19);
    if ( v21 )
    {
      if ( v21 == 3 && ((*(__int64 *)(v19 + 8) >> 1) & 3) == 2 )
        v20 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v20 = sub_15B7950((__int64 *)a1, v19);
    }
  }
  sub_15B7680((__int64)v47, a1, v20, v18);
  v25 = v47[0];
  if ( (char *)((char *)v47[1] - (char *)v47[0]) != byte_8 )
    goto LABEL_34;
  v6 = *(_QWORD **)v47[0];
  v26 = *(_BYTE *)(*(_QWORD *)v47[0] + 28LL) & 0x7F;
  v27 = (unsigned int)(v26 - 58);
  if ( (unsigned int)v27 <= 9 )
  {
    v28 = v6[6];
    if ( v28 )
      goto LABEL_25;
    v45 = sub_A7AA70(v10, (__int64)v6, v27, v22, v23, v24);
    v25 = v47[0];
    v46 = (__int64 *)(v45 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v46 )
    {
      v30 = *v46;
      if ( !v47[0] )
        goto LABEL_28;
      goto LABEL_27;
    }
LABEL_34:
    if ( !v25 )
      return nullptr;
LABEL_35:
    operator delete(v25);
    return nullptr;
  }
  if ( (unsigned int)(v26 - 26) > 0x1A )
    goto LABEL_35;
  v28 = v6[6];
LABEL_25:
  v29 = (__int64 *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v29 )
    goto LABEL_35;
  v30 = *v29;
LABEL_27:
  operator delete(v25);
LABEL_28:
  if ( !v30 )
    return nullptr;
  v7 = *(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(unsigned __int8 *)(v7 + 16);
LABEL_30:
  if ( (unsigned int)(v8 - 47) > 1 )
  {
LABEL_41:
    v35 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v36 = *(unsigned __int8 *)(v35 + 16);
    if ( (unsigned int)(v36 - 47) <= 1 )
    {
      v37 = sub_F63050(v7, v6, v35, v36);
      if ( v37 )
      {
        v7 = v37;
        goto LABEL_31;
      }
      v38 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v35 = *(_QWORD *)v38;
      LOBYTE(v36) = *(_BYTE *)(*(_QWORD *)v38 + 16LL);
    }
    if ( (_BYTE)v36 != 29
      || (v39 = (__int64 *)(*(_QWORD *)(v35 + 32) & 0xFFFFFFFFFFFFFFF0LL)) != nullptr && (v7 = *v39) != 0 )
    {
      v40 = sub_F6A860(v7);
      if ( v40 )
      {
        v43 = *(void **)(v40 + 32);
      }
      else if ( *(_BYTE *)(v7 + 16) == 17
             || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 17
             && (v7 = sub_F63050(v7, v6, v41, v42)) != 0 )
      {
        v43 = *(void **)(v7 + 40);
      }
      else
      {
        v43 = nullptr;
      }
      v47[0] = v43;
      if ( !sub_F22B30(v47) )
      {
        v44 = sub_F22BD0((__int64 *)v47, 0);
        if ( v44 )
        {
          if ( (*(_BYTE *)(v44 + 28) & 0x7F) == 0x48 )
            return *(_QWORD **)(v44 + 48);
        }
      }
    }
    return nullptr;
  }
LABEL_31:
  v32 = sub_F60F10(v7, (__int64)v6, v31, a4, a5, a6);
  if ( (*((_BYTE *)v32 + 28) & 0x7Fu) - 60 <= 1 && !(unsigned int)sub_B97260((__int64)v32) )
    return *(_QWORD **)(sub_BBF290((__int64)v32) + 48);
  return v32;
}
