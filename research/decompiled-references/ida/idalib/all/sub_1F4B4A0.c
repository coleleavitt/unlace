unsigned __int64 __fastcall sub_1F4B4A0(__int64 a1, __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 result; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rdi
  __int64 v15; // rsi

  sub_1F43F90((__int64 *)a1, a2);
  v4 = sub_1F16D80(*(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 40) = v4;
  v6 = *(_QWORD *)(v5 + 32);
  v7 = *(unsigned int *)(v5 + 24);
  v8 = (unsigned int)(v7 + 1);
  v9 = *(_DWORD *)(v5 + 24);
  v10 = *(_QWORD *)(v6 + 8 * v7);
  *(_DWORD *)(v5 + 24) = v8;
  *(_DWORD *)(a1 + 64) = v10;
  if ( ((*(_BYTE *)(a2 + 28) + 94) & 0x7Fu) <= 0xC )
  {
    v13 = *(_QWORD *)(v5 + 8);
    *(_DWORD *)(v5 + 24) = v9 + 2;
    result = sub_1EFA430(v13, *(_QWORD *)(v5 + 16), *(_QWORD *)(v6 + 8 * v8));
    *(_QWORD *)(a1 + 56) = result;
  }
  else
  {
    v11 = *(unsigned int *)(v5 + 24);
    result = 0;
    if ( (unsigned int)v11 < *(_DWORD *)(v5 + 40) )
    {
      v14 = *(_QWORD **)(v5 + 8);
      v15 = *(_QWORD *)(v5 + 16);
      *(_DWORD *)(v5 + 24) = v11 + 1;
      result = sub_1F15160(v14, v15, *(_QWORD *)(v6 + 8 * v11));
    }
    *(_QWORD *)(a2 + 48) = result;
  }
  return result;
}
