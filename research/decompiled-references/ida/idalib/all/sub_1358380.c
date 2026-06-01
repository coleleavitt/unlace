void __fastcall sub_1358380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 i; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  size_t v9; // rdx
  __int64 v10; // rbp
  _BYTE *v11; // r12
  __int64 (__fastcall *v12)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8); // r10
  size_t v13; // rbx

  if ( a6 )
  {
    for ( i = a6[1]; i; i = *(_QWORD *)(v7 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v7 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v7 )
        break;
      a6 = (_QWORD *)v7;
    }
    v8 = sub_228B1B0(a6 + 4, *a6, 0);
    v10 = *(_QWORD *)(a1 + 8);
    v11 = (_BYTE *)v8;
    v12 = *(__int64 (__fastcall **)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8))(*(_QWORD *)v10 + 56LL);
    if ( v12 == sub_1358050 )
    {
      v13 = v9;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, size_t, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v10 + 32LL))(
             v10,
             v8,
             v9,
             0,
             0,
             0,
             0) )
      {
        sub_1357C20(v10, v11, v13);
      }
    }
    else
    {
      v12(*(_QWORD *)(a1 + 8), (_BYTE *)v8, v9, 0, 0, 0, 0);
    }
  }
}
