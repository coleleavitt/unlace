__int64 __fastcall sub_6A9880(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  result = sub_186B270(0x40u);
  v2 = a1[1];
  v3 = *a1;
  *(_QWORD *)result = &off_1C52FD8;
  *(_QWORD *)(result + 16) = v2;
  LOBYTE(v2) = *(_BYTE *)(v2 + 715);
  *(_QWORD *)(result + 8) = v3;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = v3;
  *(_BYTE *)(result + 40) = v2;
  *(_QWORD *)(result + 48) = 0;
  *(_BYTE *)(result + 56) = 1;
  a1[8] = result;
  return result;
}

