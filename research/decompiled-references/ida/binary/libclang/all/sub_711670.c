__int64 __fastcall sub_711670(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int16 v8; // ax
  __int16 v9; // ax
  __int64 v10; // r12
  __int16 v12; // ax
  __int64 v13; // [rsp+0h] [rbp-98h] BYREF
  __int64 v14; // [rsp+8h] [rbp-90h] BYREF
  void *v15[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  void *v17[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h] BYREF
  void *v19[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h] BYREF

  v4 = 0;
  v6 = sub_6CBF40(a2, a3, a4);
  v7 = v6;
  if ( v6 && !*(_QWORD *)(v6 + 56) )
  {
    v7 = 0;
    v4 = 1;
  }
  *(_QWORD *)a1 = a1 + 16;
  *(_WORD *)(a1 + 16) = 84;
  *(_QWORD *)(a1 + 8) = 1;
  sub_710580(a2, *(_QWORD *)(a3 + 56), (_QWORD *)a1, 15, 0, nullptr);
  if ( (*(_BYTE *)(a3 + 76) & 3) == 2 )
  {
    if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
      goto LABEL_50;
    std::string::_M_append();
  }
  v8 = *(_WORD *)(a3 + 72);
  if ( (v8 & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
      goto LABEL_50;
    std::string::_M_append();
    v12 = *(_WORD *)(a3 + 72);
    if ( (v12 & 0x20) != 0 )
    {
      if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
        goto LABEL_50;
      std::string::_M_append();
      v12 = *(_WORD *)(a3 + 72);
    }
    if ( (v12 & 0x10) != 0 )
    {
      sub_6A7840(a1, ",&");
      v12 = *(_WORD *)(a3 + 72);
    }
    if ( (v12 & 0x200) != 0 )
      sub_6A7840(a1, ",W");
    goto LABEL_10;
  }
  if ( (v8 & 0x400) != 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 11 )
      goto LABEL_8;
    goto LABEL_46;
  }
  if ( (v8 & 0x10) != 0 )
  {
LABEL_8:
    if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
      goto LABEL_50;
LABEL_9:
    std::string::_M_append();
    goto LABEL_10;
  }
  if ( (v8 & 0x20) != 0 )
  {
LABEL_46:
    if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
      goto LABEL_50;
    goto LABEL_9;
  }
  if ( (v8 & 0x200) == 0 )
  {
LABEL_10:
    if ( !v4 )
      goto LABEL_11;
    goto LABEL_25;
  }
  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
    goto LABEL_50;
  std::string::_M_append();
  if ( !v4 )
  {
LABEL_11:
    v9 = *(_WORD *)(a3 + 72);
    if ( (v9 & 0x40) == 0 )
      goto LABEL_12;
    goto LABEL_27;
  }
LABEL_25:
  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
    goto LABEL_50;
  std::string::_M_append();
  v9 = *(_WORD *)(a3 + 72);
  if ( (v9 & 0x40) == 0 )
  {
LABEL_12:
    if ( (v9 & 2) == 0 )
      goto LABEL_13;
    goto LABEL_29;
  }
LABEL_27:
  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
    goto LABEL_50;
  std::string::_M_append();
  v9 = *(_WORD *)(a3 + 72);
  if ( (v9 & 2) == 0 )
  {
LABEL_13:
    if ( (v9 & 0x80u) == 0 )
      goto LABEL_14;
    goto LABEL_34;
  }
LABEL_29:
  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
    goto LABEL_50;
  std::string::_M_append();
  v13 = *(_QWORD *)(a3 + 80);
  sub_C87500(v15, &v13);
  if ( (void *)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8)) < v15[1] )
    goto LABEL_50;
  std::string::_M_append();
  if ( v15[0] != &v16 )
    operator delete(v15[0], v16 + 1);
  if ( (*(_WORD *)(a3 + 72) & 0x80u) == 0 )
    goto LABEL_14;
LABEL_34:
  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL || *(_QWORD *)(a1 + 8) == 4611686018427387902LL )
    goto LABEL_50;
  std::string::_M_append();
  v14 = *(_QWORD *)(a3 + 88);
  sub_C87500(v17, &v14);
  if ( (void *)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8)) < v17[1] )
    goto LABEL_50;
  std::string::_M_append();
  if ( v17[0] != &v18 )
    operator delete(v17[0], v18 + 1);
LABEL_14:
  if ( !v7 )
    return a1;
  v10 = *(_QWORD *)(v7 + 56);
  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFFLL
    || *(_QWORD *)(a1 + 8) == 4611686018427387902LL
    || (std::string::_M_append(),
        sub_791DD0(v19, v10 + 40),
        (void *)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8)) < v19[1]) )
  {
LABEL_50:
    std::__throw_length_error("basic_string::append");
  }
  std::string::_M_append();
  if ( v19[0] != &v20 )
    operator delete(v19[0], v20 + 1);
  return a1;
}

