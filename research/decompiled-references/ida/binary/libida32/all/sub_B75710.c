void __fastcall sub_B75710(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  void (*v5)(); // r8
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  __int64 v7; // [rsp+8h] [rbp-10h]

  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 112);
    if ( !*(_QWORD *)(v3 + 168) )
    {
      v6 = a3;
      v7 = a2;
      *(__m128 *)(v3 + 168) = _mm_loadh_ps((const double *)&v6);
      v4 = sub_B68850(a1);
      if ( v4 )
      {
        v5 = *(void (**)())(*(_QWORD *)v4 + 80LL);
        if ( v5 != nullsub_416 )
          ((void (__fastcall *)(__int64, __int64, __int64, __int64))v5)(v4, v3, v7, v6);
      }
    }
  }
}

