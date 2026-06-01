__int64 __fastcall sub_8A52B0(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // r9d
  __int64 v5; // rdi
  int v6; // eax
  void *ptr; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v9; // [rsp+8h] [rbp-1050h]
  _BYTE v10[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v11; // [rsp+1028h] [rbp-30h]

  v3 = a1;
  v11 = __readfsqword(0x28u);
  ptr = nullptr;
  v9 = 0;
  sub_712B20((__int64 *)&ptr, a3);
  qmakepath((int)v10, 4096, a2, (int)".vault_cache", 0, v4, (char)ptr);
  v5 = *(_QWORD *)(a1 + 8);
  if ( (_QWORD)v9 )
    v6 = sub_8D0E00(v5, v10, &ptr, 0);
  else
    v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, v10, 0);
  LOBYTE(v3) = v6 == 0;
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  return v3;
}

