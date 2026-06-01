unsigned __int64 __fastcall sub_3E3920(__int64 a1, char a2, double a3)
{
  bool v3; // zf
  char v4; // bp
  int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned int v14; // r15d
  __int64 v15; // rcx
  void (__fastcall *v16)(unsigned int *, __int64, _QWORD, __int64, _BYTE *); // r14
  __int64 (*v17)(); // rax
  _DWORD v18[8]; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v19[32]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v20[32]; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-74h]
  void *ptr[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v24; // [rsp+90h] [rbp-48h]
  unsigned __int64 v25; // [rsp+98h] [rbp-40h]

  v3 = *(_BYTE *)(a1 + 10) == 0;
  v4 = *(_BYTE *)(a1 + 9);
  v25 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)a1;
  if ( v3 )
  {
    *(_BYTE *)(a1 + 10) = 1;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( !v7 || (v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 32LL), v7 == v8) )
    {
      v9 = 0;
    }
    else
    {
      do
      {
        v9 = v7;
        v7 = *(_QWORD *)(v7 + 40);
      }
      while ( v8 != v7 );
      if ( v9 && (unsigned int)(*(_DWORD *)(v9 + 56) - 1) >= 2 )
        v9 = 0;
    }
    if ( !*(_BYTE *)(v9 + 372) )
      *(_BYTE *)(a1 + 9) = v5 != v6;
  }
  *(_BYTE *)(a1 + 8) = a2;
  sub_3E28B0((unsigned int *)a1);
  if ( v5 == v6 )
  {
    if ( *(_BYTE *)(a1 + 9) == v4 )
      return v25 - __readfsqword(0x28u);
    v10 = *(_QWORD *)(a1 + 40);
    v11 = *(unsigned int *)(a1 + 48);
    v12 = *(_QWORD *)(v10 + 8);
    if ( (_DWORD)v11 != -1 )
      goto LABEL_13;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 40);
    v11 = *(unsigned int *)(a1 + 48);
    v12 = *(_QWORD *)(v10 + 8);
    if ( (_DWORD)v11 != -1 )
    {
LABEL_13:
      sub_3DF8D0((__int64)&v21, v12, v10, v11, a3);
      ++dword_8D1258;
      if ( (debug & 0x40000) != 0 )
        sub_3E25E0(
          (__int64)"%s: calling dataChanged({row=%d,col=%d}, {row=%d,col=%d})\n",
          *(_QWORD *)(a1 + 16),
          v21,
          v22,
          v21,
          v22);
      *(_OWORD *)ptr = 0;
      v24 = 0;
      QT::QAbstractItemModel::dataChanged(v12, &v21, &v21, ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      --dword_8D1258;
      return v25 - __readfsqword(0x28u);
    }
  }
  sub_3DF8D0((__int64)v18, v12, v10, 0, a3);
  v14 = v18[0];
  (*(void (__fastcall **)(_BYTE *, __int64, _DWORD *))(*(_QWORD *)v12 + 104LL))(v19, v12, v18);
  v24 = 0;
  *(_OWORD *)ptr = 0;
  v15 = 4;
  v16 = *(void (__fastcall **)(unsigned int *, __int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v12 + 96LL);
  v17 = *(__int64 (**)())(*(_QWORD *)v12 + 128LL);
  if ( v17 != sub_3DA7D0 )
    v15 = ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64 (*)(), __int64))v17)(v12, v19, sub_3DA7D0, 4);
  v16(&v21, v12, v14, v15, v19);
  (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v12 + 96LL))(v20, v12, v14, 0, v19);
  QT::QAbstractItemModel::dataChanged(v12, v20, &v21, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v25 - __readfsqword(0x28u);
}
