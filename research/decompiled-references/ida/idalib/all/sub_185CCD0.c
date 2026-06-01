__int64 __fastcall sub_185CCD0(_BYTE *a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  _BYTE *v13; // [rsp+8h] [rbp-20h]

  v3 = a1[48] == 0;
  v4 = *(_QWORD *)a1;
  if ( !v3 )
  {
    sub_1DBAAE0(v4, a2);
    v4 = *(_QWORD *)a1;
  }
  v5 = *(_QWORD *)(v4 + 544);
  if ( (*(_BYTE *)(v5 + 8) & 0x7Fu) - 34 <= 5 )
  {
    v6 = v5 - 72;
    if ( v5 != 72 )
    {
      *(_BYTE *)(v5 + 12) &= ~0x40u;
      v7 = *(_QWORD *)a1;
      v8 = 0;
      v9 = *(unsigned int *)(*(_QWORD *)a1 + 40LL);
      if ( (_DWORD)v9 )
        v8 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v9 - 8);
      sub_185CA90(v7, v6, v8);
      v4 = *(_QWORD *)a1;
    }
  }
  sub_190D5E0(v4);
  sub_15F7280(&v12, *(_QWORD *)a1, nullptr, 0, 0, v10);
  if ( v13 )
    sub_15F2350(&v12, v13);
  result = *((_QWORD *)a1 + 2);
  if ( result )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 544LL) = result;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 512LL) = *((_QWORD *)a1 + 3);
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 9944LL) = *((_QWORD *)a1 + 4);
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 80LL) = *((_DWORD *)a1 + 10);
    result = *((_QWORD *)a1 + 1);
    *(_DWORD *)(result + 2632) = *((_DWORD *)a1 + 11);
  }
  return result;
}
