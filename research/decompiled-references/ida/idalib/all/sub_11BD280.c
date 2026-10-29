__int64 __fastcall sub_11BD280(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int8 *a4)
{
  __int64 *v6; // r14
  __int64 (*v7)(); // rax
  int v9; // eax
  __int64 v10; // rax
  void *v11[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int8 *v13[17]; // [rsp+20h] [rbp-88h] BYREF

  v6 = *(__int64 **)(a1 + 8);
  *a3 = sub_21B7850(a2, 1687, 1329, 0);
  *a4 = sub_21B7850(a2, 2060, 2046, 0);
  if ( !*a3 )
    goto LABEL_2;
  v9 = *(_DWORD *)(a1 + 1812);
  if ( ((v9 - 3) & 0xFFFFFFFD) == 0 || v9 == 8 )
    return 1;
  sub_FC70B0((__int64)v13, *v6, 0, 495);
  v10 = sub_10DCD30(a2, 0x697u);
  sub_21B5FF0(v11, v10, a2);
  sub_AEC220(v13, (_BYTE *)v11[0], (signed __int64)v11[1]);
  sub_AEC220(v13, *(_BYTE **)(a1 + 1760), *(_QWORD *)(a1 + 1768));
  if ( v11[0] != &v12 )
    operator delete(v11[0]);
  sub_AEA040((__int64)v13);
  if ( !*a3 )
  {
LABEL_2:
    v7 = *(__int64 (**)())(*(_QWORD *)a1 + 408LL);
    if ( v7 == sub_10D8230 || !((unsigned __int8 (__fastcall *)(__int64))v7)(a1) )
      return *a4;
    return 1;
  }
  return 1;
}
