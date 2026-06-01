unsigned __int64 __fastcall sub_3F7500(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v6; // r13d
  int v7; // eax
  int v8; // r12d
  __int64 v9; // rdi
  int i; // r12d
  _BYTE v12[32]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v15; // [rsp+60h] [rbp-48h]
  unsigned __int64 v16; // [rsp+68h] [rbp-40h]

  v4 = *a1;
  v16 = __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 128LL))(*a1, a2);
  if ( v6 > 0 )
  {
    v8 = v7;
    if ( v7 > 0 )
    {
      (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)*a1 + 96LL))(v12, *a1, 0, 0, a2);
      (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)*a1 + 96LL))(
        v13,
        *a1,
        (unsigned int)(v6 - 1),
        (unsigned int)(v8 - 1),
        a2);
      v9 = *a1;
      *(_OWORD *)ptr = 0;
      v15 = 0;
      QT::QAbstractItemModel::dataChanged(v9, v12, v13, ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      for ( i = 0; i < v6; ++i )
      {
        (*(void (__fastcall **)(void **, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)*a1 + 96LL))(
          ptr,
          *a1,
          (unsigned int)i,
          0,
          a2);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void **))(*(_QWORD *)*a1 + 136LL))(*a1, ptr) )
          sub_3F7500(a3, ptr, a3);
      }
    }
  }
  return v16 - __readfsqword(0x28u);
}
