__int64 __fastcall sub_1F63990(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  __int16 v12; // dx
  int v13; // [rsp+0h] [rbp-38h] BYREF
  __int16 v14; // [rsp+4h] [rbp-34h]
  __int64 v15; // [rsp+8h] [rbp-30h]

  sub_1F58FC0((__int64 *)a1, a2);
  v2 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
  v3 = sub_1EE13A0(
         (__int64)v2,
         *(_QWORD *)(*(_QWORD *)a1 + 16LL),
         (__int64 *)(*(_QWORD *)a1 + 32LL),
         (_DWORD *)(*(_QWORD *)a1 + 24LL));
  *(_QWORD *)(a2 + 16) = sub_1EDB980(v2, v3, v4, v5, v6, v7);
  v8 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v8 + 1;
  *(_BYTE *)(a2 + 33) = ((((1 << v8) & *(_DWORD *)(a1 + 16)) != 0) << 7) | *(_BYTE *)(a2 + 33) & 0x7F;
  v9 = *(_QWORD *)a1;
  v10 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  *(_DWORD *)(v9 + 24) = v10 + 1;
  *(_WORD *)(a2 + 34) = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10);
  sub_1F0B900((__int64)&v13, *(_QWORD *)a1);
  result = v13 & 0x7FFFFFFF;
  if ( (_DWORD)result == 9 )
  {
    v12 = v14;
    *(_QWORD *)(a2 + 24) = v15;
    *(_WORD *)(a2 + 32) = v12 & 0x7FFF | *(_WORD *)(a2 + 32) & 0x8000;
    result = sub_1EE7490(*(_QWORD *)a1);
    *(_DWORD *)(a2 + 36) = result;
  }
  return result;
}
