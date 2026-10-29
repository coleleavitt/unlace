__int64 __fastcall sub_E5E370(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int v3; // r12d
  unsigned int v4; // ebx
  __int64 v6; // r15
  int v8; // r12d
  int v9; // eax
  char *v10; // r10
  __int64 v11; // r11
  unsigned int v12; // r14d
  __int64 v13; // rbx
  void *v14; // r8
  size_t v15; // r9
  int v16; // eax
  bool v17; // al
  char v18; // al
  __int64 v19; // r11
  char v20; // al
  int v21; // [rsp+Ch] [rbp-9Ch]
  __int64 v22; // [rsp+10h] [rbp-98h]
  size_t v23; // [rsp+10h] [rbp-98h]
  char *v24; // [rsp+18h] [rbp-90h]
  char *v25; // [rsp+18h] [rbp-90h]
  void *v26; // [rsp+20h] [rbp-88h]
  __int64 v27; // [rsp+20h] [rbp-88h]
  size_t v28; // [rsp+28h] [rbp-80h]
  char *v29; // [rsp+28h] [rbp-80h]
  void *v30[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v31[11]; // [rsp+50h] [rbp-58h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v6 = *a1;
  v8 = v3 - 1;
  sub_E59960((void ***)v30, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  sub_E59960((void ***)v31, (void **)0xFFFFFFFFFFFFFFFELL, nullptr);
  v9 = sub_2248890(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v21 = 1;
  v10 = *(char **)(a2 + 8);
  v11 = 0;
  v12 = v8 & v9;
  while ( 1 )
  {
    v13 = v6 + ((unsigned __int64)v12 << 6);
    v14 = *(void **)(v13 + 8);
    v15 = *(_QWORD *)(v13 + 16);
    if ( v14 == (void *)-1LL )
    {
      v17 = v10 + 1 == nullptr;
    }
    else if ( v14 == (void *)-2LL )
    {
      v17 = v10 + 2 == nullptr;
    }
    else
    {
      if ( v15 != *(_QWORD *)(a2 + 16) )
        goto LABEL_18;
      v22 = v11;
      if ( !v15 )
        goto LABEL_11;
      v28 = *(_QWORD *)(v13 + 16);
      v26 = *(void **)(v13 + 8);
      v24 = v10;
      v16 = memcmp(v10, v14, v15);
      v11 = v22;
      v15 = v28;
      v14 = v26;
      v10 = v24;
      v17 = v16 == 0;
    }
    if ( v17 )
    {
LABEL_11:
      *a3 = v13;
      v4 = 1;
      goto LABEL_12;
    }
LABEL_18:
    v29 = v10;
    v27 = v11;
    v25 = (char *)v14;
    v23 = v15;
    v18 = sub_E39ED0((char *)v14, v15, v30[1], (__int64)v30[2]);
    v19 = v27;
    if ( v18 )
      break;
    v20 = sub_E39ED0(v25, v23, v31[1], (__int64)v31[2]);
    v11 = v27;
    v10 = v29;
    if ( !v27 && v20 )
      v11 = v6 + ((unsigned __int64)v12 << 6);
    v12 = v8 & (v21 + v12);
    ++v21;
  }
  if ( !v27 )
    v19 = v6 + ((unsigned __int64)v12 << 6);
  v4 = 0;
  *a3 = v19;
LABEL_12:
  if ( v31[0] )
    sub_E58590((void **)v31[0]);
  if ( v30[0] )
    sub_E58590((void **)v30[0]);
  return v4;
}
