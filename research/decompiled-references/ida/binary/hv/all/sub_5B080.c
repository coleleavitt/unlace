__int64 __fastcall sub_5B080(__int64 *a1, __int64 a2, __int64 *a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int (__fastcall *v8)(__int64, __int64); // rax
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v4 = *a1;
  v11[1] = __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, _QWORD))(v4 + 32))(a1, &v10, a2, (4 * a4) | 0xAu);
  if ( !v6 )
  {
    v7 = *a3;
    v11[0] = a3[1];
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v10 + 24LL))(v10, v11, v7);
    v8 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL);
    if ( v6 )
      v8(v10, 0);
    else
      return v8(v10, 1);
  }
  return v6;
}

