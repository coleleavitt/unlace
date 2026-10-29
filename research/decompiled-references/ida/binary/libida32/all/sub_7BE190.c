unsigned __int64 __fastcall sub_7BE190(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  size_t v5; // rax
  _BYTE v7[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v8[4]; // [rsp+18h] [rbp-20h] BYREF

  v8[0] = __readfsqword(0x28u);
  v5 = pack_dq(v7, v8, a2, a4, a5) - (_QWORD)v7;
  if ( v5 )
    sub_7BB300(a1, v7, v5);
  return v8[0] - __readfsqword(0x28u);
}

