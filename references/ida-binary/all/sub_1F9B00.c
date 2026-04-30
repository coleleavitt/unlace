__int64 __fastcall sub_1F9B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v5; // rbx
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  bool v10; // zf
  __int64 (__fastcall *v11)(__int64 *, _BYTE *, __int128 *, __int64 *, _QWORD); // rax
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int64 v15; // rdx
  struct _Unwind_Exception *v16; // rbx
  _BYTE v17[8]; // [rsp+8h] [rbp-70h] BYREF
  __int128 v18; // [rsp+10h] [rbp-68h] BYREF
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  unsigned __int64 v23; // [rsp+48h] [rbp-30h]

  v5 = (__int64 *)a1;
  v23 = __readfsqword(0x28u);
  v6 = a2;
  if ( (*(_BYTE *)(a1 + 568) & 2) != 0 && (_DWORD)a2 == -1 )
  {
    a1 = *(_QWORD *)(a1 + 424);
    if ( !a1 )
      sub_1E69C0(a5, 0, a2, a3, a4);
    v6 = -1;
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    LODWORD(v18) = -1;
    v8 = v7;
    if ( v7 )
    {
      a2 = 1;
      sub_1E86E0((__int64)(v5 + 78), 1, v7, (__int64)v5, &v18);
      a1 = v8;
      v6 = v18;
      qfree(v8, (_BYTE *)&dword_0 + 1);
    }
  }
  v9 = *v5;
  v10 = v5[53] == 0;
  v19 = 0;
  v20 = -1;
  v21 = 0;
  v22 = 0;
  v18 = 0;
  v11 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, __int128 *, __int64 *, _QWORD))(v9 + 680);
  if ( v10 )
  {
    sub_1E69C0(0.0, a1, a2, a3, a4);
    goto LABEL_15;
  }
  a2 = (__int64)v17;
  a1 = (__int64)v5;
  v13 = v11(v5, v17, &v18, v5 + 48, 0);
  if ( !(_BYTE)v13 )
    goto LABEL_8;
  v15 = v5[91];
  if ( !v5[53] )
  {
LABEL_15:
    v16 = (struct _Unwind_Exception *)sub_1E69C0(0.0, a1, a2, v15, v12);
    if ( v22 )
      qfree(v22, (const char *)a2);
    _Unwind_Resume(v16);
  }
  a2 = v6;
  v13 = bookmarks_t_erase(v5 + 48, v6, v15);
LABEL_8:
  if ( v22 )
    qfree(v22, (const char *)a2);
  return v13;
}
