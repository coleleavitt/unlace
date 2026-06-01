__int64 __fastcall sub_9A0D10(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _WORD *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r12
  bool v25; // zf
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v34; // rax
  char v35; // al
  _BYTE *v36; // [rsp+8h] [rbp-40h]

  v7 = *(_QWORD **)&a2[4 * ((*a2 & 0x200) != 0) + 16];
  if ( !v7 )
  {
    v24 = *(_QWORD *)(a1 + 16);
    v13 = 0;
    v12 = 0;
    v7 = a2;
    if ( v24 )
      goto LABEL_13;
LABEL_27:
    v34 = sub_999AE0(a1, (__int64)a2, a3, a4, a5, a6);
    v25 = *(_BYTE *)(a1 + 320) == 0;
    v24 = v34;
    *(_QWORD *)(v34 + 24) = v7;
    if ( v25 )
      goto LABEL_14;
    return 0;
  }
  if ( (*(_WORD *)v7 & 0x1FF) == 0x85 )
  {
    v8 = sub_9996F0(*(__m128i **)(a1 + 8), (__int64)a2, a3, a4, a5, a6);
    v11 = a2;
    v12 = v8;
    *(_QWORD *)(v8 + 24) = a2;
    v13 = v8;
    v36 = (_BYTE *)(a1 + 336);
    while ( 1 )
    {
      v23 = *(_QWORD *)(a1 + 344);
      if ( v23 )
      {
        if ( *(_BYTE *)(a1 + 336) )
        {
          v14 = 2;
          v15 = 0;
        }
        else
        {
          v14 = 0;
          v15 = v13;
          if ( *(_DWORD *)(v23 + 16) == 2 )
          {
            v15 = v13;
            if ( !(unsigned __int8)sub_9946B0(v36, *(_QWORD *)(a1 + 344), v11, *(_QWORD *)a1) )
            {
              v14 = 2;
              v15 = 0;
            }
          }
        }
      }
      else
      {
        v15 = v13;
        v14 = 0;
      }
      sub_999860(*(_QWORD *)(a1 + 104), v15, v14, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v9, v10);
      v18 = (_WORD *)v7[(unsigned int)((*(_WORD *)v7 & 0x200) != 0) + 4];
      if ( (*v18 & 0x1FF) != 0x85 )
        break;
      v19 = sub_9996F0(*(__m128i **)(a1 + 8), v15, v16, v17, a5, a6);
      v20 = v13;
      *(_QWORD *)(v19 + 24) = v7;
      v13 = v19;
      sub_9999E0(v20, v19, 0, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v21, v22);
      v11 = v7;
      v7 = v18;
    }
  }
  else
  {
    v18 = *(_WORD **)&a2[4 * ((*a2 & 0x200) != 0) + 16];
    v13 = 0;
    v7 = a2;
    v12 = 0;
  }
  a2 = v18;
  sub_99D480(a1, (__int64)v18, 1, 0, a5, a6);
  v24 = *(_QWORD *)(a1 + 16);
  if ( !v24 )
    goto LABEL_27;
LABEL_13:
  v25 = *(_BYTE *)(a1 + 320) == 0;
  *(_QWORD *)(v24 + 24) = v7;
  if ( !v25 )
    return 0;
LABEL_14:
  v26 = *(_QWORD *)(a1 + 344);
  if ( !v26 )
    goto LABEL_21;
  if ( *(_BYTE *)(a1 + 336) )
  {
    v27 = *(_QWORD *)(a1 + 104);
    v28 = 0;
    v29 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v30 = v24 & 0xFFFFFFFFFFFFFFF9LL | 2;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v26 + 16) != 2 )
  {
LABEL_21:
    v27 = *(_QWORD *)(a1 + 104);
    v29 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
LABEL_22:
    v28 = v24;
    v30 = 0;
    goto LABEL_17;
  }
  v35 = sub_9946B0((_BYTE *)(a1 + 336), v26, v7, *(_QWORD *)a1);
  v27 = *(_QWORD *)(a1 + 104);
  v29 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( v35 )
    goto LABEL_22;
  v28 = 0;
  v30 = v24 & 0xFFFFFFFFFFFFFFF9LL | 2;
LABEL_17:
  sub_999860(v27, v28, v30, v29, a5, a6);
  *(_QWORD *)(a1 + 16) = 0;
  if ( v12 )
  {
    sub_9999E0(v13, v24, 0, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v31, v32);
    *(_QWORD *)(a1 + 24) = v12;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v24;
    return v24;
  }
  return v12;
}
