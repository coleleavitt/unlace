unsigned __int64 __fastcall sub_16B4D0(__int64 *a1, __int64 a2, char a3)
{
  bool v4; // zf
  __int64 v6; // rdi
  __int64 v7; // rax
  struct _Unwind_Exception *v9; // rbx
  __m128i v10; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v4 = *((_BYTE *)a1 + 992) == 0;
  v15 = __readfsqword(0x28u);
  if ( v4 )
  {
    v6 = 0;
  }
  else
  {
    if ( !a1[60] )
    {
      v9 = (struct _Unwind_Exception *)sub_158B30(a1);
      if ( v14 )
        qfree();
      _Unwind_Resume(v9);
    }
    v6 = 0;
    if ( *((_DWORD *)a1 + 118) == 1 )
      v6 = a1[107];
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 200LL))(v6, a2);
  v7 = *a1;
  v11 = 0;
  v12 = -1;
  v13 = 0;
  v14 = 0;
  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __m128i *, __int64))(v7 + 352))(a1, &v10, a2) )
  {
    if ( a3 )
      sub_16B2E0((__int64)(a1 + 55), &v10, byte_251368);
    else
      sub_16B280((__int64)(a1 + 55), &v10);
  }
  if ( v14 )
    qfree();
  return v15 - __readfsqword(0x28u);
}

