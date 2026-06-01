__int64 __fastcall sub_776A40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rax
  _BYTE *v15; // rdx
  void (*v16)(); // rax
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // r11
  _QWORD *v23; // rax
  __int64 v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+10h] [rbp-68h]
  __int64 v28; // [rsp+10h] [rbp-68h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  __int64 v30; // [rsp+18h] [rbp-60h]
  unsigned __int64 v31; // [rsp+2Fh] [rbp-49h] BYREF
  char v32; // [rsp+37h] [rbp-41h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( a2 == a3 )
  {
    if ( !under_debugger )
      interr(3428);
    BUG();
  }
  v7 = a1[6];
  v9 = a5;
  v10 = v7 + 176 * a3;
  v11 = *(_QWORD *)(v7 + 176 * a2 + 24) + 9 * a4;
  if ( a5 != -1 )
    goto LABEL_8;
  if ( !*(_BYTE *)(v11 + 8) )
  {
    if ( (*(_BYTE *)(v10 + 168) & 4) != 0 )
    {
      v18 = *(_QWORD *)(v10 + 32);
      v19 = *(_QWORD *)(v10 + 24);
      v30 = a4;
      v28 = *(_QWORD *)(v7 + 176 * a2 + 24) + 9 * a4;
      v31 = *(_QWORD *)v11;
      v32 = 0;
      v25 = v19 + 9 * v18;
      v20 = sub_773990(v19, v25, (__int64)&v31);
      v11 = v28;
      a4 = v30;
      if ( v25 != v20 && v22 == *(_QWORD *)v20 && !*(_BYTE *)(v20 + 8) )
        return 1;
      v9 = 0x8E38E38E38E38E39LL * (v20 - v21);
    }
    else
    {
      v29 = a4;
      v26 = *(_QWORD *)(v7 + 176 * a2 + 24) + 9 * a4;
      v23 = sub_773E60((_QWORD *)(v10 + 48), *(_QWORD *)v11);
      v11 = v26;
      a4 = v29;
      if ( v23 )
        return 1;
      v9 = *(_QWORD *)(v10 + 32);
    }
    if ( v9 != -1 )
      goto LABEL_8;
    return 1;
  }
  v12 = *(_QWORD *)(v10 + 24);
  v13 = v12 + 9LL * *(_QWORD *)(v10 + 32);
  if ( v12 == v13 )
  {
    v27 = 0;
    v9 = 0;
    goto LABEL_9;
  }
  v14 = (_BYTE *)(v12 + 8);
  v15 = (_BYTE *)(v13 + 8);
  v9 = 0;
  do
  {
    if ( !*v14 )
      break;
    v14 += 9;
    ++v9;
  }
  while ( v14 != v15 );
LABEL_8:
  v27 = 9 * v9;
LABEL_9:
  v24 = a4;
  sub_776760((__int64)a1, a2, a3, a4, v9, v11, a6);
  v16 = *(void (**)())(*a1 + 144LL);
  if ( v16 != nullsub_239 )
    ((void (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64, __int64))v16)(
      a1,
      a2,
      a3,
      v24,
      v9,
      *(_QWORD *)(v10 + 24) + v27,
      a6);
  return 0;
}
