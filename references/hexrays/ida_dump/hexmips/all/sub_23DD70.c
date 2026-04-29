__int64 __fastcall sub_23DD70(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  _QWORD v8[135]; // [rsp+0h] [rbp-438h] BYREF

  v8[129] = __readfsqword(0x28u);
  ((void (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64))qvsnprintf)(v8, 1024, a3, a4, a5, a6);
  v6 = j__qalloc_or_throw(64);
  *(_QWORD *)v6 = -1;
  *(_QWORD *)(v6 + 8) = -4294967228LL;
  *(_QWORD *)(v6 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  *(_OWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 24) = qstrdup(v8);
  copy_tinfo_t(v6 + 48, a2);
  if ( a1 )
    *(_DWORD *)(v6 + 56) |= 8u;
  return v6;
}
