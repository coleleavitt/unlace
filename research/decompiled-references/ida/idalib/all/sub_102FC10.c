void __fastcall sub_102FC10(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  size_t v4; // r14
  void *v5; // r12
  bool v6; // bp
  size_t v7; // rdx
  _BYTE *v8; // r12
  signed __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // r10
  __int64 *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r11d
  __int64 *v21; // r10
  __int64 v22; // rcx
  unsigned int v23; // eax
  _QWORD *v24; // [rsp+18h] [rbp-90h]
  unsigned int v25; // [rsp+20h] [rbp-88h]
  __int64 *v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int64 *v28; // [rsp+48h] [rbp-60h] BYREF
  void *s1; // [rsp+50h] [rbp-58h] BYREF
  size_t n; // [rsp+58h] [rbp-50h]
  _QWORD v31[9]; // [rsp+60h] [rbp-48h] BYREF

  v1 = a1[26];
  v2 = *(_QWORD **)(v1 + 328);
  v24 = *(_QWORD **)(v1 + 336);
  if ( v2 != v24 )
  {
    while ( ((*(_BYTE *)*v2 - 43) & 0xFD) == 0 )
    {
      if ( !v2[1] )
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::substr",
          1u,
          0);
      s1 = v31;
      v3 = v2[1];
      if ( !v3 )
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::basic_string",
          1u,
          0);
      sub_102BE20(&s1, (_BYTE *)(*v2 + 1LL), *v2 + v3);
      v4 = n;
      v5 = s1;
      v6 = *(_BYTE *)*v2 == 43;
      if ( !n )
      {
LABEL_23:
        v11 = a1[26];
        v12 = sub_2244B30(v5, v4);
        v13 = sub_2244CB0(v11 + 304, v5, v4, v12);
        v17 = (__int64 *)(*(_QWORD *)(v11 + 304) + 8LL * v13);
        if ( *v17 )
        {
          if ( *v17 != -8 )
          {
            sub_10298F0(&v28, v17, 0);
            v18 = v28;
LABEL_26:
            *(_BYTE *)(*v18 + 8) = v6;
            goto LABEL_13;
          }
          --*(_DWORD *)(v11 + 320);
        }
        v26 = v17;
        v25 = v13;
        v19 = sub_22300B0(v4 + 17, 8, v13, v14, v15, v16);
        v20 = v25;
        v21 = v26;
        v22 = v19;
        if ( v4 )
        {
          v27 = v19;
          memcpy((void *)(v19 + 16), v5, v4);
          v22 = v27;
          v21 = v26;
          v20 = v25;
        }
        *(_BYTE *)(v22 + v4 + 16) = 0;
        *(_QWORD *)v22 = v4;
        *(_BYTE *)(v22 + 8) = 0;
        *v21 = v22;
        ++*(_DWORD *)(v11 + 316);
        v23 = sub_22450D0(v11 + 304, v20);
        sub_10298F0(&v28, (__int64 *)(*(_QWORD *)(v11 + 304) + 8LL * v23), 0);
        v18 = v28;
        goto LABEL_26;
      }
LABEL_6:
      v7 = 3;
      if ( v4 <= 3 )
        v7 = v4;
      if ( memcmp(v5, "all", v7)
        || (__int64)(v4 - 3) > 0x7FFFFFFF
        || (__int64)(v4 - 3) < (__int64)0xFFFFFFFF80000000LL
        || (_DWORD)v4 != 3 )
      {
        goto LABEL_23;
      }
      (*(void (__fastcall **)(_QWORD *, bool))(*a1 + 848LL))(a1, v6);
LABEL_13:
      if ( s1 != v31 )
        operator delete(s1);
      v2 += 4;
      if ( v24 == v2 )
        return;
    }
    s1 = v31;
    v8 = (_BYTE *)*v2;
    v9 = v2[1];
    if ( v9 + *v2 && !v8 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v9 > 0xF )
    {
      if ( v9 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v10 = (_QWORD *)operator new(v9 + 1);
      v31[0] = v9;
      s1 = v10;
    }
    else
    {
      if ( v9 == 1 )
      {
        LOBYTE(v31[0]) = *v8;
        v10 = v31;
        goto LABEL_22;
      }
      v10 = v31;
      if ( !v9 )
      {
LABEL_22:
        n = v9;
        *((_BYTE *)v10 + v9) = 0;
        v4 = n;
        v6 = 1;
        v5 = s1;
        if ( !n )
          goto LABEL_23;
        goto LABEL_6;
      }
    }
    memcpy(v10, v8, v9);
    v10 = s1;
    goto LABEL_22;
  }
}
