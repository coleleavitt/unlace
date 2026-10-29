__int64 __fastcall sub_2150AE0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  char v4; // bp
  unsigned int v5; // ebp
  _BYTE *v6; // r13
  _BYTE *v7; // rax
  __int64 v8; // r12
  _BOOL4 v9; // r12d
  const char *v11; // rax
  __int64 v12; // [rsp+8h] [rbp-80h] BYREF
  void *s; // [rsp+10h] [rbp-78h] BYREF
  size_t n; // [rsp+18h] [rbp-70h]
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-60h]
  const char *v17; // [rsp+30h] [rbp-58h] BYREF
  __int16 v18; // [rsp+50h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 8);
  s = nullptr;
  n = 0;
  v15 = 0;
  v16 = 0;
  if ( (unsigned __int8)sub_2153CB0(v2, &v12) )
    goto LABEL_16;
  v3 = *(_QWORD *)(a1 + 8);
  if ( **(_DWORD **)(v3 + 48) != 26 )
  {
    v17 = "expected a comma";
    v18 = 259;
    return (unsigned int)sub_21543E0(v3, &v17, 0, 0);
  }
  v4 = *(_BYTE *)(v3 + 193);
  *(_BYTE *)(v3 + 193) = 1;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 193LL) = v4;
  v5 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 8) + 160LL))(*(_QWORD *)(a1 + 8), &s);
  if ( (_BYTE)v5 )
  {
LABEL_16:
    v11 = "expected identifier";
LABEL_17:
    v17 = v11;
    v3 = *(_QWORD *)(a1 + 8);
    v18 = 259;
    return (unsigned int)sub_21543E0(v3, &v17, 0, 0);
  }
  if ( !n || (v6 = s, (v7 = memchr(s, 64, n)) == nullptr) || v7 - v6 == -1 )
  {
    v11 = "expected a '@' in the name";
    goto LABEL_17;
  }
  v8 = sub_2246AB0(&s, "@@@", 3, 0);
  if ( (unsigned __int8)sub_2154640(*(_QWORD *)(a1 + 8), 26) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 160LL))(
            *(_QWORD *)(a1 + 8),
            &v15)
      && v16 == 6
      && *(_DWORD *)v15 == 1869440370 )
    {
      v9 = 0;
      if ( *(_WORD *)(v15 + 4) == 25974 )
        goto LABEL_12;
    }
    v11 = "expected 'remove'";
    goto LABEL_17;
  }
  v9 = v8 == -1;
LABEL_12:
  sub_2154640(*(_QWORD *)(a1 + 8), 9);
  (*(void (__fastcall **)(_QWORD, __int64, void *, size_t, _BOOL4))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 456LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    v12,
    s,
    n,
    v9);
  return v5;
}
