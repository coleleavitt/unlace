__int64 __fastcall sub_10000(_QWORD *a1, unsigned __int16 a2, char a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v8; // rbp
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v23; // rdx
  void *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-70h]
  _BYTE v32[40]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v5 = a1[4];
  v6 = *a1;
  v33 = __readfsqword(0x28u);
  v8 = (v5 == 0) + v5 - 1;
  (*(void (__fastcall **)(_QWORD *, __int64))(v6 + 64))(a1, 18);
  if ( a3 )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v9 == sub_8770 )
    {
      v10 = a1[4];
      if ( v10 )
      {
        v11 = v10 + 1;
        v12 = a1[4];
        v13 = a1[3];
        --v10;
        if ( a1[5] >= v11 )
        {
LABEL_5:
          a1[4] = v11;
          *(_BYTE *)(v13 + v10) = a3;
          *(_BYTE *)(a1[3] + v12) = 0;
          goto LABEL_6;
        }
      }
      else
      {
        v13 = a1[3];
        v12 = 1;
        v11 = 2;
        if ( a1[5] >= 2u )
          goto LABEL_5;
      }
      v31 = v12;
      v28 = qvector_reserve(a1 + 3, v13, v11, 1);
      v12 = v31;
      a1[3] = v28;
      v13 = v28;
      goto LABEL_5;
    }
    v9(a1, a3);
  }
LABEL_6:
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 104LL))(a1, a2, 10);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
  v17 = a1[4];
  if ( v17 )
  {
    v23 = v17 - v8;
    if ( v23 > 0x20 )
      v23 = 32;
    v24 = (void *)(v8 + a1[3]);
    qstrncpy(v32, v24, v23, v14, v15, v16);
    if ( v8 )
      goto LABEL_11;
    v27 = a1[3];
    if ( !v27 )
      goto LABEL_15;
LABEL_20:
    a1[4] = 0;
    qfree(v27, v24, v25, v26);
    a1[3] = 0;
    a1[5] = 0;
    goto LABEL_15;
  }
  if ( !v8 )
  {
    v24 = &unk_2D4F8;
    qstrncpy(v32, &unk_2D4F8, 1, v14, v15, v16);
    v27 = a1[3];
    if ( !v27 )
      goto LABEL_15;
    goto LABEL_20;
  }
  v18 = 1 - v8;
  if ( (unsigned __int64)(1 - v8) > 0x20 )
    v18 = 32;
  qstrncpy(v32, v8 + a1[3], v18, v14, v15, v16);
LABEL_11:
  v19 = a1[4];
  v20 = v8 + 1;
  if ( v19 < v8 + 1 )
  {
    v29 = a1[3];
    if ( a1[5] < v20 )
    {
      v30 = qvector_reserve(a1 + 3, v29, v8 + 1, 1);
      v19 = a1[4];
      a1[3] = v30;
      v29 = v30;
    }
    memset((void *)(v29 + v19), 0, v20 - v19);
    a1[4] = v20;
  }
  else if ( v20 != v19 )
  {
    a1[4] = v20;
  }
  *(_BYTE *)(a1[3] + v8) = 0;
LABEL_15:
  v21 = tag_strlen(v32);
  return sub_FDF0(a1, (__int64)v32, v21);
}
