_QWORD *__fastcall sub_22205D0(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbx
  _QWORD v8[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v9; // [rsp+20h] [rbp-38h]

  v8[0] = a2;
  v9 = 260;
  v6 = operator new(0x40u);
  *(_QWORD *)v6 = &off_2BEAE58;
  sub_2253560(v6 + 8, v8);
  *(_DWORD *)(v6 + 40) = a3;
  *(_QWORD *)(v6 + 48) = a4;
  *a1 = v6;
  *(_BYTE *)(v6 + 56) = 1;
  return a1;
}
