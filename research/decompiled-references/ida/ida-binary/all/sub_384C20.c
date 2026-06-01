__int64 __fastcall sub_384C20(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  void (__fastcall ***v4)(_QWORD); // rdi
  bool v5; // zf
  __int64 (__fastcall *v7)(__int64, __int64); // rdx
  __int64 v8; // rax
  void (__fastcall ***v9)(_QWORD); // rdi
  _DWORD *v10; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
    return -1;
  (*(void (__fastcall **)(_DWORD **, _QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 56LL))(
    &v10,
    *(_QWORD *)(a1 + 40),
    v2,
    (unsigned int)(a2 + 1),
    0);
  if ( !v10 )
    return -1;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10) )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL);
    if ( v7 == sub_1992A0 )
      (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)v10 + 24LL))(v11);
    else
      ((void (__fastcall *)(_QWORD *))v7)(v11);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 56LL))(v11[0]);
    v9 = (void (__fastcall ***)(_QWORD))v11[0];
    v3 = v8;
    if ( v11[0] )
    {
      v5 = (*(_DWORD *)(v11[0] + 8LL))-- == 1;
      if ( v5 )
        (**v9)(v9);
    }
  }
  else
  {
    v3 = -1;
  }
  v4 = (void (__fastcall ***)(_QWORD))v10;
  if ( v10 )
  {
    v5 = v10[2]-- == 1;
    if ( v5 )
      (**v4)(v4);
  }
  return v3;
}
