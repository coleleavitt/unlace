__int64 __fastcall sub_4D90A0(__int64 a1, const char *a2)
{
  __int64 v4; // rdi
  __int16 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int16 v12; // bp
  __int64 v13; // rax

  v4 = *(_QWORD *)a1;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v4, a2);
  }
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v5 = *(_WORD *)a2;
  v6 = qvector_reserve(a1, 0, 1, 2);
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v6;
  *(_WORD *)(v6 + 2 * v7) = v5;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)a1;
  result = v8 + 1;
  v11 = v8 + 2;
  *(_QWORD *)(a1 + 8) = result;
  v12 = *((_WORD *)a2 + 1);
  if ( *(_QWORD *)(a1 + 16) < v11 )
  {
    v13 = qvector_reserve(a1, v9, v11, 2);
    *(_QWORD *)a1 = v13;
    v9 = v13;
    result = *(_QWORD *)(a1 + 8);
  }
  *(_WORD *)(v9 + 2 * result) = v12;
  ++*(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 44) |= 0x10u;
  return result;
}
