bool __fastcall sub_123050(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  _BYTE *v4; // r12
  __int128 v6; // rdi
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // r13
  bool result; // al
  __int64 v11; // rax
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  v3 = *a2;
  if ( !*a2 )
    return 0;
  v4 = (_BYTE *)a1[1];
  if ( *v4 == 4 )
    return 0;
  *(_QWORD *)&v6 = a3;
  *((_QWORD *)&v6 + 1) = v4;
  v12[0] = v3;
  v8 = (unsigned __int8 *)sub_122D80(v6, (__int64)v12, 0);
  v9 = v8;
  if ( !v8
    || (unsigned int)(*(_DWORD *)v8 - 12) > 1
    || (v11 = sub_3320F0(), !sub_11EF10(v9 + 64, v11, (__int64)v4, 0))
    || (*a1 = 0, a1[1] = 0, !(result = sub_11C680(a1, v9, 0))) )
  {
    a1[1] = (__int64)v4;
    return 0;
  }
  *a2 = v12[0];
  return result;
}
