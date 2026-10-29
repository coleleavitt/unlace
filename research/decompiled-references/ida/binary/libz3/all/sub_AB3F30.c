__int64 __fastcall sub_AB3F30(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // rbp

  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v7 + 8656);
  if ( v8 )
  {
    v9 = *a2;
    if ( (unsigned int)v9 < *(_DWORD *)(v8 - 4) )
    {
      if ( *(_QWORD *)(v8 + 8 * v9) )
        return *(_QWORD *)(v8 + 8 * v9);
    }
  }
  v11 = sub_B68280(
          v7,
          a2,
          *(_BYTE *)(*(_QWORD *)(v7 + 112) + 429LL) ^ 1u,
          0,
          *(unsigned __int8 *)(*(_QWORD *)(v7 + 112) + 431LL),
          a6);
  (**(void (__fastcall ***)(__int64, __int64))a1)(a1, v11);
  return v11;
}

