__int64 __fastcall sub_13060(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  char *v8; // rbp
  __int64 v9; // r13
  char *v10; // rdi
  char v11[12]; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v12 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(v3 + 144) )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a2 + 344LL))(a2, a3);
  v5 = a2[90];
  if ( (v5 & 0x600) != 0x400 || (v5 & 0xF0000000) != 0xA0000000LL )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a2 + 344LL))(a2, a3);
  if ( !a3 )
  {
    v8 = v11;
    v9 = a2[2] - (_QWORD)v11;
    do
    {
      v10 = &v8[v9];
      *v8++ = get_byte(v10);
    }
    while ( v8 != (char *)&v12 );
    if ( sub_115B0(v11) )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(
        a2,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 144LL),
        27);
      (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a2 + 48LL))(a2, a2 + 3, 8);
      sub_10E90(a2, v11);
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFFFFFFLL);
    }
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a2 + 344LL))(a2, a3);
  }
  return v12 - __readfsqword(0x28u);
}
