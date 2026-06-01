unsigned __int64 __fastcall sub_17A64C0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 result; // rax
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v6[0] = a3;
  sub_1CB44B0(a1, v6);
  v3 = (_BYTE *)v6[0];
  sub_B88650(v6[0], 1);
  if ( (v3[74] & 2) != 0 && (v3[28] & 0x7Fu) - 58 <= 3 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 104LL))(v3);
  v4 = *(_QWORD *)(sub_B8C1B0(*(_QWORD *)(a1 + 544)) + 16);
  if ( (v4 & 4) != 0 )
    result = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    result = v4 & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 544) = result;
  return result;
}
