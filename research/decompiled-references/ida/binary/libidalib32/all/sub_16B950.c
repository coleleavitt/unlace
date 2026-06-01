unsigned __int64 __fastcall sub_16B950(__int64 a1)
{
  char v1; // dl
  __int64 v2; // kr00_8
  int v3; // r9d
  struct _Unwind_Exception *v5; // rbx
  int v6; // [rsp+Ch] [rbp-9Ch] BYREF
  unsigned __int64 v7; // [rsp+10h] [rbp-98h] BYREF
  __int128 v8; // [rsp+18h] [rbp-90h]
  _DWORD v9[22]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_15D6A0((__int64 *)(a1 + 272));
  v8 = 0;
  v7 = 0;
  if ( sub_15DC00(a1, (__int64)&v7, 0) > 0 )
  {
    v1 = 1;
    if ( *(_BYTE *)(a1 + 765) )
      v1 = 3;
    if ( !*(_QWORD *)(a1 + 480) )
    {
      v5 = (struct _Unwind_Exception *)sub_1582F0(a1);
      if ( v7 )
      {
        *(_QWORD *)&v8 = 0;
        qfree();
      }
      _Unwind_Resume(v5);
    }
    v2 = sub_139940(v7, *(__int16 *)(a1 + 468), v1);
    v9[0] = v2;
    sub_16ACA0(a1, (unsigned __int64)v9, 0);
    sub_169520(a1, 1);
    sub_168960((__int64)v9, a1, 7, 0, -32768, v3);
    v6 = HIDWORD(v2);
    sub_16ACA0(a1, (unsigned __int64)&v6, 0);
    sub_1692D0((__int64)v9);
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v10 - __readfsqword(0x28u);
}

