__int64 __fastcall sub_A39B80(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  unsigned int v3; // r14d
  __int64 v4; // r15
  unsigned int *v5; // r12
  int v6; // r15d
  unsigned int v8; // eax
  void *v9[2]; // [rsp+0h] [rbp-68h] BYREF
  int v10; // [rsp+10h] [rbp-58h] BYREF
  void *v11[2]; // [rsp+18h] [rbp-50h] BYREF

  sub_180C1C0(a1 + 784);
  v1 = *(_QWORD *)(a1 + 760);
  if ( v1 )
  {
    v2 = 0;
    v3 = 0;
    while ( 1 )
    {
      if ( v2 >= *(_DWORD *)(v1 - 4) )
        return v3;
      v4 = *(_QWORD *)(a1 + 16);
      v5 = **(unsigned int ***)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(v1 + 4LL * v2));
      if ( !(unsigned int)sub_8E7030(v4)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v4 + 7488) + 56LL))(
             *(_QWORD *)(v4 + 7488),
             v5) )
      {
        sub_9E9D10((__int64)&v10, a1, (__int64)v5);
        v6 = v10;
        *(__m128i *)v9 = _mm_loadu_si128((const __m128i *)v11);
        if ( (unsigned int)v10 <= 1 )
        {
          v8 = sub_B39350(
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v5),
                 *(unsigned int *)(a1 + 8));
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v8) && !*(_QWORD *)(*(_QWORD *)(a1 + 688) + 8LL * v8) )
          {
            if ( (v6 & 1) != 0 || !(unsigned __int8)sub_A39650(a1, (__int64)v5) )
              goto LABEL_7;
LABEL_15:
            v3 = 1;
            ++*(_DWORD *)(a1 + 372);
            goto LABEL_7;
          }
          if ( v6 )
          {
            if ( !(unsigned __int8)sub_A39800(a1, v5, (unsigned int **)v9) )
              goto LABEL_7;
            goto LABEL_15;
          }
          v3 |= sub_A39A60(a1, v5);
        }
      }
LABEL_7:
      v1 = *(_QWORD *)(a1 + 760);
      ++v2;
      if ( !v1 )
        return v3;
    }
  }
  return 0;
}

