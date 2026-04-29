__int64 __fastcall sub_2E510(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax
  __int64 **v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rax
  __int64 *v6; // rax
  __int64 **v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD *); // rax
  _QWORD *v9; // rax
  __int64 v10; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-18h] BYREF

  v1 = *(_BYTE *)(a1 + 56) == 0;
  v11[1] = __readfsqword(0x28u);
  if ( !v1 )
    goto LABEL_2;
  v4 = *(__int64 ***)(a1 + 24);
  v5 = (__int64 (__fastcall *)(__int64, __int64 *))(*v4)[27];
  if ( v5 == sub_2D160 )
  {
    v6 = (__int64 *)sub_2CEC0(v4[2], 0x40000000, 0x40000000u, 0x40000000);
    if ( !v6 )
      goto LABEL_14;
    v10 = *v6;
  }
  else if ( (unsigned int)v5((__int64)v4, &v10) )
  {
    goto LABEL_14;
  }
  v7 = *(__int64 ***)(a1 + 24);
  v8 = (__int64 (__fastcall *)(__int64, _QWORD *))(*v7)[14];
  if ( v8 == sub_2D0F0 )
  {
    v9 = (_QWORD *)sub_2CEC0(v7[2], 0x8000000, 0x8000000u, 0x8000000);
    if ( !v9 )
      goto LABEL_14;
    v11[0] = *v9;
  }
  else if ( (unsigned int)v8((__int64)v7, v11) )
  {
    goto LABEL_14;
  }
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 104LL) + 40LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL),
          a1 + 32,
          v10) )
  {
    *(_BYTE *)(a1 + 56) = 1;
    goto LABEL_2;
  }
LABEL_14:
  if ( !*(_BYTE *)(a1 + 56) )
    return 0;
LABEL_2:
  result = 0xFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 40) )
    return *(unsigned int *)(*(_QWORD *)(a1 + 32) + 12LL);
  return result;
}
