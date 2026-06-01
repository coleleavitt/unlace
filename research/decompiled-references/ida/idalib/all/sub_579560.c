unsigned __int64 __fastcall sub_579560(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // r13d
  void *v5; // rdi
  void *ptr; // [rsp+0h] [rbp-458h] BYREF
  __int128 v8; // [rsp+8h] [rbp-450h]
  _BYTE v9[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v10; // [rsp+428h] [rbp-30h]

  v3 = *(_DWORD *)(a1 + 144);
  v10 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 144) = v3 & 0xFFFFE76F;
  v4 = v3 & 0x1890;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, 1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  ptr = nullptr;
  v8 = 0;
  if ( get_func_cmt(&ptr, a2, 0) > 0 || get_func_cmt(&ptr, a2, 1) > 0 )
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 184LL))(a1, ptr, 2);
  if ( (unsigned __int8)sub_578B20(v9, 1024, a2, 1, *(_QWORD *)(*(_QWORD *)(a1 + 616) + 32LL)) )
    sub_3804E0(a1, (__int64)&unk_22D5D2E, v9);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  sub_4CDC80(a1, (char *)&dword_0 + 1);
  v5 = ptr;
  *(_DWORD *)(a1 + 144) |= v4;
  if ( v5 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v5);
  }
  return v10 - __readfsqword(0x28u);
}
