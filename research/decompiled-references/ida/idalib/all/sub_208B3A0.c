void __fastcall sub_208B3A0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // al
  _BYTE **v4; // rax
  _BYTE *v5; // rax
  unsigned __int8 v8; // dl
  _BYTE **v9; // rax
  unsigned __int8 v10; // dl
  __int64 v11; // rdi
  const void *v12; // rax
  _BYTE *v13; // rdi
  size_t v14; // rdx
  size_t v15; // r12
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  _BYTE *v19; // rax
  __int64 v20; // rdi
  unsigned __int8 v21; // dl
  __int64 v22; // rax
  __int64 v23; // rsi
  _DWORD *v24; // rdx
  _WORD *v25; // rdx
  _QWORD v26[4]; // [rsp+0h] [rbp-20h] BYREF

  v2 = *a1;
  if ( !*a1 )
    return;
  v3 = *(_BYTE *)(v2 - 16);
  if ( (v3 & 2) != 0 )
    v4 = *(_BYTE ***)(v2 - 32);
  else
    v4 = (_BYTE **)(v2 - 8LL * ((v3 >> 2) & 0xF) - 16);
  v5 = *v4;
  if ( *v5 != 16 )
  {
    v8 = *(v5 - 16);
    v9 = (v8 & 2) != 0 ? *((_BYTE ***)v5 - 4) : (_BYTE **)&v5[-8 * ((v8 >> 2) & 0xF) - 16];
    v5 = *v9;
    if ( !v5 )
    {
LABEL_24:
      v13 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v13 < *(_QWORD *)(a2 + 24) )
        goto LABEL_14;
LABEL_25:
      v17 = sub_227BA10(a2, 58);
      goto LABEL_15;
    }
  }
  v10 = *(v5 - 16);
  if ( (v10 & 2) != 0 )
  {
    v11 = **((_QWORD **)v5 - 4);
    if ( v11 )
      goto LABEL_10;
LABEL_27:
    v16 = *(_QWORD *)(a2 + 24);
    v13 = *(_BYTE **)(a2 + 32);
    goto LABEL_13;
  }
  v11 = *(_QWORD *)&v5[-8 * ((v10 >> 2) & 0xF) - 16];
  if ( !v11 )
    goto LABEL_27;
LABEL_10:
  v12 = (const void *)sub_20A0B40(v11);
  v13 = *(_BYTE **)(a2 + 32);
  v15 = v14;
  v16 = *(_QWORD *)(a2 + 24);
  if ( v16 - (unsigned __int64)v13 < v15 )
  {
    sub_227BF10(a2, v12, v15);
    goto LABEL_24;
  }
  if ( v15 )
  {
    memcpy(v13, v12, v15);
    v16 = *(_QWORD *)(a2 + 24);
    v13 = (_BYTE *)(v15 + *(_QWORD *)(a2 + 32));
    *(_QWORD *)(a2 + 32) = v13;
  }
LABEL_13:
  if ( (unsigned __int64)v13 >= v16 )
    goto LABEL_25;
LABEL_14:
  *(_QWORD *)(a2 + 32) = v13 + 1;
  *v13 = 58;
  v17 = a2;
LABEL_15:
  sub_227B910(v17, *(unsigned int *)(*a1 + 4));
  v18 = *a1;
  if ( *(_WORD *)(*a1 + 2) )
  {
    v19 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v19 >= *(_QWORD *)(a2 + 24) )
    {
      v20 = sub_227BA10(a2, 58);
    }
    else
    {
      v20 = a2;
      *(_QWORD *)(a2 + 32) = v19 + 1;
      *v19 = 58;
    }
    sub_227B910(v20, *(unsigned __int16 *)(*a1 + 2));
    v18 = *a1;
  }
  v21 = *(_BYTE *)(v18 - 16);
  if ( (v21 & 2) != 0 )
  {
    if ( *(_DWORD *)(v18 - 24) != 2 )
      return;
    v22 = *(_QWORD *)(v18 - 32);
  }
  else
  {
    if ( ((*(_WORD *)(v18 - 16) >> 6) & 0xF) != 2 )
      return;
    v22 = v18 - 8LL * ((v21 >> 2) & 0xF) - 16;
  }
  v23 = *(_QWORD *)(v22 + 8);
  if ( v23 )
  {
    v26[0] = *(_QWORD *)(v22 + 8);
    sub_20B2EE0(v26, v23, 1);
    if ( v26[0] )
    {
      v24 = *(_DWORD **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v24 > 3u )
      {
        *v24 = 542851104;
        *(_QWORD *)(a2 + 32) += 4LL;
      }
      else
      {
        sub_227BF10(a2, " @[ ", 4);
      }
      sub_208B3A0(v26, a2);
      v25 = *(_WORD **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v25 > 1u )
      {
        *v25 = 23840;
        *(_QWORD *)(a2 + 32) += 2LL;
      }
      else
      {
        sub_227BF10(a2, " ]", 2);
      }
      if ( v26[0] )
        sub_20A0850(v26);
    }
  }
}
