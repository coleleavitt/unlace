__int64 __fastcall sub_1EADE10(__int64 a1)
{
  int v1; // esi
  int v2; // ecx
  __int64 v3; // rax
  unsigned int v4; // ebp
  int v6; // eax
  void *ptr; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-A0h]
  _BYTE v9[152]; // [rsp+10h] [rbp-98h] BYREF

  v1 = *(_DWORD *)a1;
  ptr = v9;
  v8 = 0x2000000000LL;
  sub_9B7040((__int64)&ptr, v1);
  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0xBu )
  {
    v3 = 1LL << v2;
    if ( ((1LL << v2) & 0x806) != 0 )
    {
      v6 = sub_1EA7420(*(_QWORD *)(a1 + 8));
      sub_9B7040((__int64)&ptr, v6);
    }
    else if ( (v3 & 0x301) != 0 )
    {
      sub_2222BB0(&ptr, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 16LL, **(unsigned int **)(*(_QWORD *)(a1 + 8) + 16LL));
    }
    else if ( (v3 & 0x40) != 0 )
    {
      sub_9B7040((__int64)&ptr, *(_QWORD *)(a1 + 8));
    }
  }
  v4 = sub_2287CD0(ptr, 4LL * (unsigned int)v8);
  if ( ptr != v9 )
    free(ptr);
  return v4;
}
