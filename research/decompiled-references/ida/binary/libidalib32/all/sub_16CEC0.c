void __fastcall sub_16CEC0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _Unwind_Exception *v6; // rbx
  __int128 v7; // [rsp+0h] [rbp-98h] BYREF
  __int64 v8; // [rsp+10h] [rbp-88h]
  __int64 v9; // [rsp+18h] [rbp-80h]
  __int64 v10; // [rsp+20h] [rbp-78h]
  __int64 v11; // [rsp+28h] [rbp-70h]
  __m128i v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h]
  __int64 v14; // [rsp+48h] [rbp-50h]
  __int64 v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h]
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 480) )
  {
    v6 = (struct _Unwind_Exception *)sub_1582F0(a1);
    if ( v11 )
      qfree();
    _Unwind_Resume(v6);
  }
  v2 = *a2;
  v8 = 0;
  v9 = -1;
  v10 = 0;
  v11 = 0;
  v7 = 0;
  (*(void (__fastcall **)(__int64 *, __int128 *, __int64))(v2 + 80))(a2, &v7, a1 + 440);
  if ( !sub_1612C0(a1) )
  {
    v13 = 0;
    v14 = -1;
    v15 = 0;
    v16 = 0;
    v12 = 0;
    if ( (unsigned __int8)sub_910A0((__int64)a2, (__int64)&v12) )
      sub_16CBF0((const __m128i *)(a1 + 440), &v12, 3, v3, v4, v5);
    if ( v16 )
      qfree();
  }
  if ( v11 )
    qfree();
  sub_152F30(a1);
  *(_BYTE *)(a1 + 840) = 0;
  *(_BYTE *)(a1 + 953) = 1;
  sub_15E940(a1, 1u);
  nullsub_79();
  nullsub_78();
}

