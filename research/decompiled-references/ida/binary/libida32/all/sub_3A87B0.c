__int64 __fastcall sub_3A87B0(__int64 *a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  int v6; // eax
  __int64 v7; // rdx
  char v8; // r15
  size_t v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  size_t v14; // rax
  size_t v15; // rax
  unsigned int v16; // r14d
  size_t v17; // rax
  size_t v18; // rax
  __int64 v20; // rax
  int v21; // r15d
  __int64 v22; // rsi
  size_t v23; // rax
  size_t v24; // rax
  _BYTE *v25; // rsi
  size_t v26; // rax
  size_t v27; // rcx
  const char *v28; // r15
  const char *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // r8d
  int v33; // r9d
  size_t v34; // rcx
  size_t v35; // rax
  size_t v36; // rax
  size_t v37; // rax
  __int64 v38; // rax
  size_t v39; // rax
  __int64 v40; // rax
  size_t v42; // [rsp+0h] [rbp-58h]
  char v43; // [rsp+Ch] [rbp-4Ch]
  _BYTE v44[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v45[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = *(_DWORD *)(a3 + 40);
  v7 = *(unsigned int *)(a3 + 80);
  v8 = v6;
  v45[0] = __readfsqword(0x28u);
  v43 = v6;
  v10 = pack_dd(v44, v45, v7) - (_QWORD)v44;
  if ( v10 )
    sub_3A5FB0(a1, v44, v10);
  if ( *(_DWORD *)(a3 + 56) == 4 && *(_DWORD *)(a3 + 64) == 9 && !*(_DWORD *)(a3 + 60) && *(_QWORD *)(a3 + 16) <= 1u )
    v8 = v43 | 0x80;
  v11 = a1[1];
  v12 = *a1;
  if ( a1[2] < (unsigned __int64)(v11 + 1) )
  {
    v38 = qvector_reserve(a1, v12, v11 + 1, 1);
    *a1 = v38;
    v12 = v38;
    v11 = a1[1];
  }
  *(_BYTE *)(v12 + v11) = v8;
  ++a1[1];
  if ( *(_DWORD *)(a3 + 40) )
  {
    v13 = *(int *)(a3 + 36);
    if ( a4 )
    {
      if ( (v13 & 0x80000000) != 0LL || v13 >= a4[1] )
      {
        if ( !under_debugger )
          interr(40457);
        BUG();
      }
      v13 = *(unsigned int *)(*a4 + 4 * v13);
    }
    v14 = pack_dd(v44, v45, v13) - (_QWORD)v44;
    if ( v14 )
      sub_3A5FB0(a1, v44, v14);
    v15 = pack_dd(v44, v45, *(unsigned int *)(a3 + 32)) - (_QWORD)v44;
    if ( v15 )
      sub_3A5FB0(a1, v44, v15);
    v16 = a2;
  }
  else
  {
    v37 = pack_dd(v44, v45, *(_DWORD *)(a3 + 32) - a2) - (_QWORD)v44;
    if ( v37 )
      sub_3A5FB0(a1, v44, v37);
    v16 = *(_DWORD *)(a3 + 32);
  }
  if ( v8 >= 0 )
  {
    v20 = a1[1];
    v21 = *(_DWORD *)(a3 + 56);
    v22 = *a1;
    if ( a1[2] < (unsigned __int64)(v20 + 1) )
    {
      v40 = qvector_reserve(a1, v22, v20 + 1, 1);
      *a1 = v40;
      v22 = v40;
      v20 = a1[1];
    }
    *(_BYTE *)(v22 + v20) = v21;
    ++a1[1];
    if ( *(_DWORD *)(a3 + 56) != 4 )
    {
      v23 = pack_dd(v44, v45, *(unsigned int *)(a3 + 72)) - (_QWORD)v44;
      if ( v23 )
        sub_3A5FB0(a1, v44, v23);
    }
    v24 = pack_dd(v44, v45, *(unsigned int *)(a3 + 64)) - (_QWORD)v44;
    if ( v24 )
      sub_3A5FB0(a1, v44, v24);
    v25 = v45;
    v26 = pack_dd(v44, v45, *(unsigned int *)(a3 + 60)) - (_QWORD)v44;
    if ( v26 )
    {
      v25 = v44;
      sub_3A5FB0(a1, v44, v26);
    }
    v27 = *(_QWORD *)(a3 + 16);
    if ( v27 )
    {
      v28 = *(const char **)(a3 + 8);
      if ( v28 )
      {
        v29 = *(const char **)(a3 + 8);
        v27 = strlen(v29);
        if ( HIDWORD(v27) )
          sub_3A55B0(v29, v25, v30, v27);
        goto LABEL_34;
      }
    }
    else
    {
      v28 = haystack;
      if ( haystack )
      {
LABEL_34:
        v42 = v27;
        v31 = pack_dd(v44, v45, (unsigned int)v27);
        v34 = v42;
        v35 = v31 - (_QWORD)v44;
        if ( v35 )
        {
          sub_3A5FB0(a1, v44, v35);
          v34 = v42;
        }
        if ( v34 )
          sub_3A5FB0(a1, v28, v34);
LABEL_38:
        if ( *(_QWORD *)(a3 + 16) > 1u )
        {
          if ( *(_DWORD *)(a3 + 64) >> 28 )
            callui(1166, a3, (int)&callui, v34, v32, v33);
          v36 = pack_dd(v44, v45, 0) - (_QWORD)v44;
          if ( v36 )
            sub_3A5FB0(a1, v44, v36);
        }
        goto LABEL_17;
      }
    }
    v39 = pack_dd(v44, v45, 0) - (_QWORD)v44;
    if ( v39 )
      sub_3A5FB0(a1, v44, v39);
    goto LABEL_38;
  }
LABEL_17:
  v17 = pack_dd(v44, v45, (unsigned int)(*(_DWORD *)(a3 + 44) + 1)) - (_QWORD)v44;
  if ( v17 )
    sub_3A5FB0(a1, v44, v17);
  v18 = pack_dd(v44, v45, (unsigned int)(*(_DWORD *)(a3 + 48) + 1)) - (_QWORD)v44;
  if ( v18 )
    sub_3A5FB0(a1, v44, v18);
  return v16;
}

