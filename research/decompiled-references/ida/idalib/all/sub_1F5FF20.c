__int64 __fastcall sub_1F5FF20(_DWORD *a1, __int64 a2)
{
  int v2; // ecx
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax

  sub_1F5FBE0((__int64)a1, a2);
  v2 = a1[5];
  a1[5] = v2 + 1;
  *(_BYTE *)(a2 + 2) = (16 * (((1 << v2) & a1[4]) != 0)) | *(_BYTE *)(a2 + 2) & 0xEF;
  v3 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
  v4 = sub_1EE13A0(
         (__int64)v3,
         *(_QWORD *)(*(_QWORD *)a1 + 16LL),
         (__int64 *)(*(_QWORD *)a1 + 32LL),
         (_DWORD *)(*(_QWORD *)a1 + 24LL));
  result = sub_1EDB980(v3, v4, v5, v6, v7, v8);
  *(_QWORD *)(a2 + 56) = result;
  return result;
}
