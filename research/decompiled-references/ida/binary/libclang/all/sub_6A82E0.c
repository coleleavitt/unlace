__int64 *__fastcall sub_6A82E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  void (__fastcall *v3)(__int64, _QWORD *); // r12
  __int64 v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 *v9; // rax
  __int64 v10; // rdi
  int v12; // eax
  int v13; // r9d

  v2 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(a2 & 0xFFFFFFFFFFFFFFF8LL);
  v3 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 16LL);
  v4 = *(_QWORD *)(sub_79A2E0(v2 + 72) + 16);
  v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v4 & 4) != 0 )
    v5 = (_QWORD *)*v5;
  if ( v5 )
    v5 -= 8;
  v3(a1, v5);
  v6 = *(unsigned int *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v6 )
  {
    v8 = (v6 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
    v9 = (__int64 *)(v7 + 80LL * v8);
    v10 = *v9;
    if ( v2 == *v9 )
    {
LABEL_7:
      if ( v9 != (__int64 *)(80 * v6 + v7) )
        return v9 + 1;
    }
    else
    {
      v12 = 1;
      while ( v10 != -4096 )
      {
        v13 = v12 + 1;
        v8 = (v6 - 1) & (v12 + v8);
        v9 = (__int64 *)(v7 + 80LL * v8);
        v10 = *v9;
        if ( v2 == *v9 )
          goto LABEL_7;
        v12 = v13;
      }
    }
  }
  return nullptr;
}

