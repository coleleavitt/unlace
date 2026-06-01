__int64 __fastcall sub_4EA7A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r12d
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 (__fastcall ***v16)(_QWORD, __int64); // rdi
  void *ptr; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+8h] [rbp-A0h]
  char v19[8]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  char v22[8]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v23; // [rsp+48h] [rbp-60h]
  __int64 v24; // [rsp+58h] [rbp-50h]
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = a2;
  if ( (debug & 0x20) != 0 )
    sub_3879F0();
  v6 = *(_DWORD *)(a2 + 4);
  if ( (v6 & 0x8000) != 0 )
  {
    v19[0] = 2;
    v18 = 0;
    ptr = nullptr;
    v21 = 0;
    v20 = 0;
    free_idcv(v19);
    v19[0] = 9;
    *(_QWORD *)&v20 = a3;
    v22[0] = 2;
    v24 = 0;
    v23 = 0;
    free_idcv(v22);
    v15 = *(_QWORD *)(a2 + 88);
    v22[0] = 2;
    a2 += 96;
    *(_QWORD *)&v23 = 1;
    v10 = (*(__int64 (__fastcall **)(char *, __int64, const char *, char *, __int64, void **))(v15 + 104))(
            v22,
            v4 + 96,
            "run",
            v19,
            1,
            &ptr);
    if ( !(_BYTE)v10 )
      sub_378D50();
    LOBYTE(v10) = (_QWORD)v23 != 0;
    free_idcv(v22);
    free_idcv(v19);
    if ( ptr )
    {
      *(_QWORD *)&v18 = 0;
      qfree(ptr);
    }
  }
  else if ( (v6 & 0x100) != 0 )
  {
    v16 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 72);
    if ( !v16 )
    {
      if ( !under_debugger )
        interr(1824);
      BUG();
    }
    a2 = a3;
    v10 = (**v16)(v16, a3);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(a2 + 24))(a3);
  }
  v11 = *(unsigned int *)(v4 + 4);
  if ( (*(_DWORD *)(v4 + 4) & 0x28) == 8 )
  {
LABEL_18:
    if ( a1 )
      sub_4EA0E0(a1, v4, v11, v7, v8, v9);
    else
      sub_4E9F80(v4, a2, v11, v7, v8, v9);
    return v10;
  }
  v12 = (_QWORD *)a1[1];
  if ( !v12 )
  {
LABEL_17:
    v11 &= 8u;
    if ( !(_DWORD)v11 )
      return v10;
    goto LABEL_18;
  }
  while ( v4 != v12[6] )
  {
    v12 = (_QWORD *)*v12;
    if ( !v12 )
      goto LABEL_17;
  }
  v13 = v12[17];
  if ( v13 )
  {
    LODWORD(v11) = *(_DWORD *)(v13 + 4);
    goto LABEL_17;
  }
  return v10;
}
