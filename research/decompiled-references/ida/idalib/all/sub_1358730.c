void __fastcall sub_1358730(__int64 a1, int a2, int a3, int a4)
{
  __int64 v5; // r12
  __int64 (__fastcall *v6)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8); // rbx
  _BOOL4 v7; // ebp
  size_t v8; // rdx
  _BYTE *v9; // r13
  size_t v10; // rbx
  _QWORD v11[2]; // [rsp+0h] [rbp-48h] BYREF
  char v12; // [rsp+10h] [rbp-38h]

  if ( !a3 )
  {
    sub_1020380((__int64)v11, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL), a2);
    if ( v12 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = *(__int64 (__fastcall **)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8))(*(_QWORD *)v5 + 56LL);
      v7 = a4 != 0 && a4 != 3;
      v9 = (_BYTE *)sub_228B1B0(v11[0], v11[1], 0);
      if ( v6 == sub_1358050 )
      {
        v10 = v8;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, size_t, _QWORD, _BOOL4, _QWORD, _QWORD))(*(_QWORD *)v5 + 32LL))(
               v5,
               v9,
               v8,
               0,
               v7,
               0,
               0) )
        {
          sub_1357C20(v5, v9, v10);
        }
      }
      else
      {
        v6(v5, v9, v8, 0, v7, 0, 0);
      }
    }
  }
}
