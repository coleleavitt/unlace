unsigned __int64 __fastcall sub_4DFA70(char *a1)
{
  __int64 v2; // rax
  const char *v3; // rsi
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  v2 = *(_QWORD *)a1;
  *((_DWORD *)a1 + 420) |= 8u;
  (*(void (__fastcall **)(char *, __int64 *))(v2 + 56))(a1, &v7);
  *((_DWORD *)a1 + 420) &= ~2u;
  sub_4DC6F0((__int64)(a1 + 1128), (const char *)&v7);
  v3 = a1 + 1128;
  (*(void (__fastcall **)(char *, _DWORD *))(*(_QWORD *)a1 + 104LL))(a1, (_DWORD *)a1 + 282);
  v4 = v7;
  v5 = *((_DWORD *)a1 + 420) | 2;
  *((_DWORD *)a1 + 420) = v5;
  if ( v4 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v4, v3);
    v5 = *((_DWORD *)a1 + 420);
  }
  *((_DWORD *)a1 + 420) = v5 & 0xFFFFFFF7;
  return v9 - __readfsqword(0x28u);
}
