unsigned __int64 __fastcall sub_3E3410(__int64 a1, char a2, double a3)
{
  bool v4; // zf
  char v5; // r12
  const char *v7; // rsi
  const char *v8; // rdi
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  unsigned int v17; // r15d
  __int64 v18; // rcx
  void (__fastcall *v19)(unsigned int *, __int64, _QWORD, __int64, _BYTE *); // r14
  __int64 (*v20)(); // rax
  _DWORD v21[8]; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v22[32]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v23[32]; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+64h] [rbp-74h]
  void *ptr[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v27; // [rsp+90h] [rbp-48h]
  unsigned __int64 v28; // [rsp+98h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8) == 0;
  v5 = *(_BYTE *)(a1 + 49);
  v28 = __readfsqword(0x28u);
  v7 = &s1;
  if ( !v4 )
    v7 = *(const char **)a1;
  v8 = &s1;
  if ( *(_QWORD *)(a1 + 32) )
    v8 = *(const char **)(a1 + 24);
  v9 = strcmp(v8, v7);
  if ( *(_BYTE *)(a1 + 50) )
  {
    v10 = *(_QWORD *)(a1 + 80);
    if ( !v10 || (v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 32LL), v10 == v11) )
    {
      v12 = 0;
    }
    else
    {
      do
      {
        v12 = v10;
        v10 = *(_QWORD *)(v10 + 40);
      }
      while ( v11 != v10 );
      if ( v12 && (unsigned int)(*(_DWORD *)(v12 + 56) - 1) >= 2 )
        v12 = 0;
    }
    if ( !*(_BYTE *)(v12 + 372) )
    {
      *(_BYTE *)(a1 + 48) = a2;
      *(_BYTE *)(a1 + 49) = v9 != 0;
      sub_3E2820(a1);
      if ( v9 )
        goto LABEL_14;
LABEL_24:
      if ( *(_BYTE *)(a1 + 49) == v5 )
        return v28 - __readfsqword(0x28u);
      v13 = *(_QWORD *)(a1 + 80);
      v14 = *(unsigned int *)(a1 + 88);
      v15 = *(_QWORD *)(v13 + 8);
      if ( (_DWORD)v14 != -1 )
        goto LABEL_15;
      goto LABEL_26;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 50) = 1;
  }
  *(_BYTE *)(a1 + 48) = a2;
  sub_3E2820(a1);
  if ( !v9 )
    goto LABEL_24;
LABEL_14:
  v13 = *(_QWORD *)(a1 + 80);
  v14 = *(unsigned int *)(a1 + 88);
  v15 = *(_QWORD *)(v13 + 8);
  if ( (_DWORD)v14 != -1 )
  {
LABEL_15:
    sub_3DF8D0((__int64)&v24, v15, v13, v14, a3);
    ++dword_8D1258;
    if ( (debug & 0x40000) != 0 )
      sub_3E25E0(
        (__int64)"%s: calling dataChanged({row=%d,col=%d}, {row=%d,col=%d})\n",
        *(_QWORD *)(a1 + 56),
        v24,
        v25,
        v24,
        v25);
    *(_OWORD *)ptr = 0;
    v27 = 0;
    QT::QAbstractItemModel::dataChanged(v15, &v24, &v24, ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    --dword_8D1258;
    return v28 - __readfsqword(0x28u);
  }
LABEL_26:
  sub_3DF8D0((__int64)v21, v15, v13, 0, a3);
  v17 = v21[0];
  (*(void (__fastcall **)(_BYTE *, __int64, _DWORD *))(*(_QWORD *)v15 + 104LL))(v22, v15, v21);
  v27 = 0;
  *(_OWORD *)ptr = 0;
  v18 = 4;
  v19 = *(void (__fastcall **)(unsigned int *, __int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v15 + 96LL);
  v20 = *(__int64 (**)())(*(_QWORD *)v15 + 128LL);
  if ( v20 != sub_3DA7D0 )
    v18 = ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64 (*)(), __int64))v20)(v15, v22, sub_3DA7D0, 4);
  v19(&v24, v15, v17, v18, v22);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v15 + 96LL))(v23, v15, v17, 0, v22);
  QT::QAbstractItemModel::dataChanged(v15, v23, &v24, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v28 - __readfsqword(0x28u);
}
