__int64 __fastcall sub_19BD30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // edx
  bool v9; // si
  __int64 v10; // rdx
  char v11; // dl
  int v12; // eax

  result = *(_BYTE *)(a1 + 52) & 1;
  if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v8 = *(_DWORD *)(v7 + 72);
  if ( v8 != 128 )
  {
    v9 = (v8 & 0xFFFFFFF0) == 208 || (v8 & 0xFFFFFFF0) == 64;
    if ( (v9 || !*(_BYTE *)(v7 + 320) && (*(_BYTE *)(v7 + 4) & 0x20) == 0) && *(int *)(v7 + 64) > 2 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL);
      if ( *(_DWORD *)(v10 + 76) != 6 )
      {
        sub_326A60(*(_QWORD *)(a1 + 8), v9, v10, v7, a5, a6);
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
        v12 = *(_DWORD *)(a1 + 52);
        if ( v11 )
        {
          v12 |= 1u;
          *(_DWORD *)(a1 + 52) = v12;
        }
        return v12 & 1;
      }
    }
  }
  return result;
}
