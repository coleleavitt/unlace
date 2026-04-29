__int64 __fastcall sub_97AE0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // rax
  int v6; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *a1;
  v7[1] = __readfsqword(0x28u);
  v6 = 0;
  v7[0] = 0;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))(a1[32] + 112))(
          *(_QWORD *)(v1 + 24),
          11,
          &v6,
          v7)
    && v6 )
  {
    v2 = sub_97A10((__int64)a1);
    v3 = 8 * v2;
    if ( v2 != -1 )
      return v3;
    return -1;
  }
  v5 = *a1;
  v7[0] = 0;
  v6 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))(a1[32] + 112))(
         *(_QWORD *)(v5 + 24),
         13,
         &v6,
         v7)
    || !v6 )
  {
    return -1;
  }
  return sub_97960((__int64)a1);
}
