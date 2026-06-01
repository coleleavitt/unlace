void __fastcall sub_1358440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6, int a7)
{
  __int64 i; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  size_t v10; // rdx
  __int64 v11; // rbp
  _BYTE *v12; // r12
  __int64 v13; // r8
  __int64 (__fastcall *v14)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8); // r10
  size_t v15; // rbx

  if ( a6 )
  {
    for ( i = a6[1]; i; i = *(_QWORD *)(v8 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v8 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v8 )
        break;
      a6 = (_QWORD *)v8;
    }
    v9 = sub_228B1B0(a6 + 4, *a6, 0);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = (_BYTE *)v9;
    v13 = (a7 != 0) & (unsigned __int8)(a7 != 3);
    v14 = *(__int64 (__fastcall **)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8))(*(_QWORD *)v11 + 56LL);
    if ( v14 == sub_1358050 )
    {
      v15 = v10;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 32LL))(
             v11,
             v9,
             v10,
             0,
             v13,
             0,
             0) )
      {
        sub_1357C20(v11, v12, v15);
      }
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64, size_t, _QWORD, __int64, _QWORD))v14)(v11, v9, v10, 0, v13, 0);
    }
  }
}
