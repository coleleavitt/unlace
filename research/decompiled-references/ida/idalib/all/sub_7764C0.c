__int64 __fastcall sub_7764C0(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // rbx
  int v7; // eax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 v14; // rdx
  __int64 v15; // r11
  __int64 v16; // r10
  _BYTE *v17; // rbp
  __int64 v18; // rdi
  void (*v19)(); // rax
  __int64 v20; // r10
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+1Fh] [rbp-49h] BYREF
  char v28; // [rsp+27h] [rbp-41h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v5 = a1[6] + 176 * a2;
  v29 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(v5 + 168) & 4;
  if ( !a4 )
  {
    v14 = *(_QWORD *)(v5 + 32);
    v15 = *(_QWORD *)(v5 + 24);
    v27 = a3;
    v28 = 0;
    v16 = v15 + 9 * v14;
    if ( v7 )
    {
      v24 = sub_773990(v15, v16, (__int64)&v27);
      v17 = (_BYTE *)v24;
      if ( v25 != v24 && a3 == *(_QWORD *)v24 && !*(_BYTE *)(v24 + 8) )
      {
LABEL_16:
        (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int64, unsigned __int64, _QWORD))(*a1 + 112LL))(
          a1,
          a2,
          0x8E38E38E38E38E39LL * (_QWORD)&v17[-v15],
          a3,
          0);
        memmove(v17, v17 + 9, *(_QWORD *)(v5 + 24) + 9LL * *(_QWORD *)(v5 + 32) - (_QWORD)v17 - 9);
        --*(_QWORD *)(v5 + 32);
        v18 = a1[5];
        v19 = *(void (**)())(*(_QWORD *)v18 + 48LL);
        if ( v19 != nullsub_70 )
          ((void (__fastcall *)(__int64, unsigned __int64))v19)(v18, a3);
        goto LABEL_8;
      }
    }
    else if ( v15 != v16 )
    {
      v17 = (_BYTE *)v15;
      while ( a3 != *(_QWORD *)v17 || v17[8] )
      {
        v17 += 9;
        if ( (_BYTE *)v16 == v17 )
          return 2;
      }
      if ( v17 != (_BYTE *)v16 )
        goto LABEL_16;
    }
    return 2;
  }
  if ( v7 )
  {
    v20 = *(_QWORD *)(v5 + 32);
    v21 = *(_QWORD *)(v5 + 24);
    v27 = a3;
    v28 = 0;
    v22 = sub_773990(v21, v21 + 9 * v20, (__int64)&v27);
    if ( v23 == v22 || a3 != *(_QWORD *)v22 || *(_BYTE *)(v22 + 8) )
    {
      v9 = 0x8E38E38E38E38E39LL * (v22 - v21);
      if ( v9 != -1 )
        goto LABEL_5;
    }
  }
  else if ( !sub_773E60((_QWORD *)(v5 + 48), a3) )
  {
    v8 = *(_QWORD *)(v5 + 32);
    v9 = v8;
    if ( v8 != -1 )
    {
LABEL_5:
      v10 = *(_QWORD *)(v5 + 24);
      v11 = 9 * v9;
      if ( *(_QWORD *)(v5 + 40) < v8 + 1 )
      {
        v26 = qvector_reserve(v5 + 24, v10, v8 + 1, 9);
        v8 = *(_QWORD *)(v5 + 32);
        v11 = 9 * v9;
        *(_QWORD *)(v5 + 24) = v26;
        v10 = v26;
      }
      v12 = v10 + v11;
      memmove((void *)(v10 + v11 + 9), (const void *)(v10 + v11), 9 * v8 - v11);
      *(_QWORD *)v12 = a3;
      *(_BYTE *)(v12 + 8) = 0;
      ++*(_QWORD *)(v5 + 32);
      (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int64, unsigned __int64, __int64))(*a1 + 112LL))(
        a1,
        a2,
        v9,
        a3,
        1);
LABEL_8:
      *(_DWORD *)(v5 + 168) |= 1u;
      return 0;
    }
  }
  return 1;
}
