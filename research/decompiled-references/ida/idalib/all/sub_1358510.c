void __fastcall sub_1358510(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        size_t a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // r12
  __int64 (__fastcall *v12)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8); // r10

  if ( !a9 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v12 = *(__int64 (__fastcall **)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8))(*(_QWORD *)v9 + 56LL);
    if ( v12 == sub_1358050 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, size_t, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 32LL))(
             v9,
             a4,
             a5,
             0,
             0,
             0,
             1) )
      {
        sub_1357C20(v9, a4, a5);
      }
    }
    else
    {
      ((void (__fastcall *)(__int64, _BYTE *, size_t, _QWORD, _QWORD, _QWORD))v12)(v9, a4, a5, 0, 0, 0);
    }
  }
}
