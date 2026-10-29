bool __fastcall sub_7E30F0(_DWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a2;
  v5[1] = __readfsqword(0x28u);
  v5[0] = v2;
  *a1 = unpack_dd(v5);
  v3 = v5[0];
  *a2 = v5[0];
  return v2 < v3;
}
