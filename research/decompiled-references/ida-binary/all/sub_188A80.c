unsigned __int64 __fastcall sub_188A80(__int64 a1, double a2)
{
  unsigned int v2; // eax
  _QWORD *v3; // rdx
  __int64 v4; // rbp
  int v5; // eax
  unsigned int v7; // eax
  __int64 *v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // [rsp+0h] [rbp-78h] BYREF
  _OWORD v21[2]; // [rsp+4h] [rbp-74h] BYREF
  __int128 v22; // [rsp+24h] [rbp-54h]
  int v23; // [rsp+34h] [rbp-44h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v2 = *(_DWORD *)a1;
  v25 = __readfsqword(0x28u);
  if ( v2 > 0x2F )
  {
    v3 = *(_QWORD **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v3 + 1;
  }
  else
  {
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) + v2);
    *(_DWORD *)a1 = v2 + 8;
  }
  v4 = *v3;
  v5 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(QT::QCoreApplication::self[2] + 56LL))(
         QT::QCoreApplication::self + 2,
         *v3);
  if ( v5 == 36 || v5 == 41 )
  {
    v7 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 0x2Fu )
    {
      v8 = *(__int64 **)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v8 + 1;
    }
    else
    {
      v8 = (__int64 *)(*(_QWORD *)(a1 + 16) + v7);
      *(_DWORD *)a1 = v7 + 8;
    }
    v9 = *v8;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 2392) + 16LL))(*(_QWORD *)(v4 + 2392));
    v11 = sub_49A5E0(*(QT::QAbstractItemView **)(v4 + 2472));
    if ( *(_DWORD *)(v10 + 80) > v11 )
    {
      v13 = v11;
      v14 = *(_QWORD *)(*(_QWORD *)(v10 + 72) + 8LL * (int)v11);
      if ( *(_QWORD *)(v14 + 16) > 1u )
      {
        a2 = 0.0;
        v23 = 0;
        memset(v21, 0, sizeof(v21));
        *(_QWORD *)((char *)v21 + 12) = "~H~elp";
        v20 = 64;
        v24 = 0x1FFFFFFFFLL;
        v22 = 0;
        v19 = qalloc_or_throw(16);
        *(_DWORD *)(v19 + 8) = 1;
        *(_QWORD *)v19 = help_ah_t___vtable;
        *(_QWORD *)((char *)&v21[1] + 4) = v19;
        ((void (__fastcall *)(__int64, int *, _QWORD, _QWORD, _QWORD))sub_539470)(v9, &v20, 0, 0, 0);
      }
      if ( (unsigned int)sub_187500(v10, v13, 1, v12, a2) != -1 )
      {
        v23 = 0;
        memset(v21, 0, sizeof(v21));
        *(_QWORD *)((char *)v21 + 12) = "~Next~ conflict";
        v22 = 0;
        v20 = 64;
        v24 = 0x1FFFFFFFFLL;
        v17 = qalloc_or_throw(16);
        *(_DWORD *)(v17 + 8) = 1;
        *(_QWORD *)v17 = next_conflict_ah_t___vtable;
        *(_QWORD *)((char *)&v21[1] + 4) = v17;
        ((void (__fastcall *)(__int64, int *, _QWORD, _QWORD, _QWORD, __int64))sub_539470)(v9, &v20, 0, 0, 0, v18);
        if ( *(_DWORD *)(v14 + 124) != 3 )
          return v25 - __readfsqword(0x28u);
        goto LABEL_13;
      }
      if ( *(_DWORD *)(v14 + 124) == 3 )
      {
LABEL_13:
        v23 = 0;
        memset(v21, 0, sizeof(v21));
        *(_QWORD *)((char *)v21 + 12) = "~R~emove";
        v20 = 64;
        v24 = 0x1FFFFFFFFLL;
        v22 = 0;
        v15 = qalloc_or_throw(16);
        *(_DWORD *)(v15 + 8) = 1;
        *(_QWORD *)v15 = del_ah_t___vtable;
        *(_QWORD *)((char *)&v21[1] + 4) = v15;
        ((void (__fastcall *)(__int64, int *, _QWORD, _QWORD, _QWORD, __int64))sub_539470)(v9, &v20, 0, 0, 0, v16);
      }
    }
  }
  return v25 - __readfsqword(0x28u);
}
