unsigned __int64 __fastcall sub_384EE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // al
  _DWORD *v5; // rsi
  __int64 v6; // rax
  _DWORD *v7; // rdi
  void (__fastcall ***v8)(_QWORD); // rdi
  bool v9; // zf
  __int64 (__fastcall *v10)(__int64, __int64); // rdx
  void (__fastcall ***v11)(_QWORD); // rdi
  _DWORD *v13; // [rsp+8h] [rbp-40h] BYREF
  _DWORD *v14; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = *(_QWORD *)(a2 + 40);
    (*(void (__fastcall **)(_DWORD **, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a3 + 40) + 56LL))(
      &v13,
      *(_QWORD *)(a3 + 40),
      *(_QWORD *)(a3 + 48),
      (unsigned int)(*(_DWORD *)(v3 + 12) + 1),
      (unsigned int)(*(__int16 *)(a2 + 28) + 1));
    if ( v13 )
    {
      v4 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
      v5 = v13;
      while ( v4 )
      {
        v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL);
        if ( v10 == sub_1992A0 )
          (*(void (__fastcall **)(_DWORD **))(*(_QWORD *)v5 + 24LL))(&v14);
        else
          ((void (__fastcall *)(_DWORD **))v10)(&v14);
        v6 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 56LL))(v14);
        if ( v6 != -1 )
        {
          v7 = v14;
          *(_QWORD *)(v3 + 16) = v6;
          if ( (*(int (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 40LL))(v7) >= 0 )
          {
            v11 = (void (__fastcall ***)(_QWORD))v14;
            if ( v14 )
            {
              v9 = v14[2]-- == 1;
              if ( v9 )
                (**v11)(v11);
            }
            v5 = v13;
            break;
          }
        }
        v8 = (void (__fastcall ***)(_QWORD))v14;
        if ( v14 )
        {
          v9 = v14[2]-- == 1;
          if ( v9 )
            (**v8)(v8);
        }
        v4 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
        v5 = v13;
      }
      if ( v5 )
      {
        v9 = v5[2]-- == 1;
        if ( v9 )
          (**(void (__fastcall ***)(_DWORD *))v5)(v5);
      }
    }
  }
  return v15 - __readfsqword(0x28u);
}
