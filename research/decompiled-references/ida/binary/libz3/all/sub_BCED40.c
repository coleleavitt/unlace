__int64 __fastcall sub_BCED40(__int64 a1, __int64 a2)
{
  bool v2; // zf
  _DWORD *v3; // rax
  unsigned int v4; // ebx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+8h] [rbp-60h]
  _BYTE v8[88]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_WORD *)(a2 + 4) == 0;
  ptr = v8;
  v7 = 0x1000000000LL;
  if ( v2 && (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *(_DWORD *)(a1 + 16) == *v3 && v3[1] == 1 )
  {
    return 1;
  }
  else
  {
    v4 = sub_163BAA0(a1, a2, &ptr);
    if ( (_BYTE)v4 )
      LOBYTE(v4) = (_DWORD)v7 == 0;
    if ( ptr && ptr != v8 )
      sub_186B220(ptr);
  }
  return v4;
}

