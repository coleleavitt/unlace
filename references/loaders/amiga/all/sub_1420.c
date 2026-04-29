__int64 __fastcall sub_1420(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  void *v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  qlseek(a3, 0, 0);
  v5 = qlread(a3, &v11, 4);
  result = 0;
  if ( v5 == 4 && v11 == -217907200 )
  {
    v7 = (void *)*a1;
    if ( (unsigned __int64)a1[2] <= 0xF )
    {
      v9 = qvector_reserve(a1, v7, 16, 1);
      *a1 = v9;
      v7 = (void *)v9;
    }
    a1[1] = 16;
    qmemcpy(v7, "Amiga hunk file", 15);
    *(_BYTE *)(*a1 + 15) = 0;
    v8 = *a2;
    if ( (unsigned __int64)a2[2] <= 5 )
    {
      v10 = qvector_reserve(a2, v8, 6, 1);
      *a2 = v10;
      v8 = v10;
    }
    a2[1] = 6;
    *(_DWORD *)v8 = 875575350;
    *(_BYTE *)(v8 + 4) = 48;
    *(_BYTE *)(*a2 + 5) = 0;
    return 1;
  }
  return result;
}
