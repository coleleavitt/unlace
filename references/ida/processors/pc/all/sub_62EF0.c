__int64 __fastcall sub_62EF0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdi
  __int64 (*v7)(); // rax
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 (*v11)(); // rax
  __int128 v12; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-58h] BYREF
  __int128 v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 5640);
  if ( !v4 )
    return 0;
  if ( (*(_BYTE *)(a1 + 4453) & 0x20) != 0 )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
    return 0;
  v6 = *(_QWORD *)(a1 + 5640);
  v12 = 0;
  v7 = *(__int64 (**)())(*(_QWORD *)v6 + 24LL);
  if ( v7 == sub_62C10 )
    return 0;
  v9 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD))v7)(v6, &v12, *a3);
  if ( v9 == -1 )
    return 0;
  v10 = *(_QWORD *)(a1 + 5640);
  v15 = 0;
  v13[0] = &off_16CA50;
  v13[1] = a2;
  v14 = 0;
  v11 = *(__int64 (**)())(*(_QWORD *)v10 + 32LL);
  if ( v11 == sub_62C20
    || (result = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, _QWORD *, _QWORD))v11)(v10, v9, &v12, v13, 0),
        !(_BYTE)result) )
  {
    if ( (debug & 8) != 0 )
      sub_224B0((__int64)"%a: invalid x64 unwind-information\n", 0.0);
    return 0;
  }
  return result;
}
