std::_V2 *__fastcall sub_2219E40(std::_V2 *a1, unsigned __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rdx
  __int64 v7; // r14
  std::_V2 *v8; // rbp
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // r12
  __int64 v12; // [rsp+0h] [rbp-C8h]
  const char *v13; // [rsp+8h] [rbp-C0h] BYREF
  __m128 v14; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int64 v15; // [rsp+20h] [rbp-A8h]
  void *v16[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-88h] BYREF
  void **v18; // [rsp+50h] [rbp-78h] BYREF
  int v19; // [rsp+58h] [rbp-70h]
  __int128 v20; // [rsp+60h] [rbp-68h]
  __int64 v21; // [rsp+70h] [rbp-58h]
  char v22; // [rsp+78h] [rbp-50h]
  int v23; // [rsp+7Ch] [rbp-4Ch]
  void **v24; // [rsp+80h] [rbp-48h]

  if ( a3 && *a3 )
    return nullptr;
  v5 = *a2;
  v6 = *((_QWORD *)a1 + 1);
  if ( *a2 >= v6
    || (v7 = *(_QWORD *)a1,
        v8 = (std::_V2 *)(*(_QWORD *)a1 + v5),
        a1 = v8,
        (v9 = (char *)memchr(v8, 0, v6 - v5)) == nullptr)
    || (v10 = &v9[-v7], v10 == (char *)-1LL) )
  {
    if ( a3 )
    {
      v12 = std::_V2::generic_category(a1);
      v20 = 0;
      v16[0] = v17;
      v24 = v16;
      v16[1] = nullptr;
      v17[0] = 0;
      v19 = 0;
      v22 = 0;
      v23 = 1;
      v21 = 0;
      v18 = (void **)&off_2BEBE68;
      sub_227B8B0(&v18, 0, 0, 0);
      v15 = v5;
      v13 = "no null terminated string at offset 0x%lx";
      v14 = _mm_loadh_ps((const double *)&v13);
      sub_227C560(&v18, &v14);
      v18 = (void **)&off_2BEBE68;
      sub_227B7A0(&v18);
      v18 = v16;
      LOWORD(v21) = 260;
      v11 = operator new(0x40u);
      sub_2220590(v11, &v18, 84, v12);
      if ( v16[0] != v17 )
        operator delete(v16[0]);
      *a3 = v11;
    }
    return nullptr;
  }
  else
  {
    *a2 = (unsigned __int64)(v10 + 1);
    return v8;
  }
}
