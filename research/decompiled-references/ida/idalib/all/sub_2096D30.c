__int64 __fastcall sub_2096D30(__int64 a1, _QWORD *a2, const void *a3, size_t a4, int a5, double a6)
{
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // r8
  unsigned int v18; // r9d
  __int64 v19; // r8
  _QWORD v20[11]; // [rsp+0h] [rbp-58h] BYREF

  sub_2096B60(a1, (__int64)a2, 2, a5, a3, a4, a6);
  sub_2233820(v20);
  v20[2] = a2;
  v20[3] = 0;
  v20[4] = 0;
  v20[0] = &off_2BE61D0;
  v7 = sub_20C1010(a2);
  if ( v7 )
  {
    v8 = v7;
    sub_224E010(v7);
    (*(void (__fastcall **)(_QWORD *))(*a2 + 88LL))(a2);
    sub_224E0F0(v8, a2, v9, v10, v11);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*a2 + 88LL))(a2);
  }
  v20[0] = &off_2BE61D0;
  sub_22338A0(v20);
  result = *(unsigned int *)(a1 + 224);
  v13 = a2[2];
  v14 = *(_QWORD *)(a1 + 208);
  if ( (_DWORD)result )
  {
    v15 = result - 1;
    v16 = (result - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
    result = v14 + 16LL * v16;
    v17 = *(_QWORD *)result;
    if ( v13 == *(_QWORD *)result )
    {
LABEL_5:
      *(_QWORD *)result = -8192;
      --*(_DWORD *)(a1 + 216);
      ++*(_DWORD *)(a1 + 220);
      return result;
    }
    result = 1;
    if ( v17 != -4096 )
    {
      while ( 1 )
      {
        v18 = result + 1;
        v16 = v15 & (result + v16);
        result = v14 + 16LL * v16;
        v19 = *(_QWORD *)result;
        if ( v13 == *(_QWORD *)result )
          break;
        result = v18;
        if ( v19 == -4096 )
          return result;
      }
      goto LABEL_5;
    }
  }
  return result;
}
