__int64 __fastcall sub_E3F90(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // r12d
  void (__fastcall ***v7)(_QWORD); // rdi
  bool v8; // zf
  __int64 (__fastcall *v10)(__int64, __int64); // rdx
  void (__fastcall ***v11)(_QWORD); // rdi
  _DWORD *v12; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *a3;
  v13[1] = __readfsqword(0x28u);
  (*(void (__fastcall **)(_DWORD **))(*(_QWORD *)v4 + 8LL))(&v12);
  if ( v12 )
  {
    v6 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12) )
    {
      v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL);
      if ( v10 == sub_B71F0 )
        (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)v12 + 24LL))(v13);
      else
        ((void (__fastcall *)(_QWORD *))v10)(v13);
      sub_CAC00((__int64 *)(a1 + 8), v13);
      v11 = (void (__fastcall ***)(_QWORD))v13[0];
      if ( v13[0] )
      {
        v8 = (*(_DWORD *)(v13[0] + 8LL))-- == 1;
        if ( v8 )
          (**v11)(v11);
      }
      *(_DWORD *)(a1 + 32) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 24LL))(*a3);
      v6 = 1;
    }
    v7 = (void (__fastcall ***)(_QWORD))v12;
    if ( v12 )
    {
      v8 = v12[2]-- == 1;
      if ( v8 )
        (**v7)(v7);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}

