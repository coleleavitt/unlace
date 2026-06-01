unsigned __int64 __fastcall sub_1CB4410(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  int v12; // edx
  int v13; // eax

  if ( *(_QWORD *)(a2 + 8) )
  {
    v8 = a3;
    v9 = sub_15AB9E0(a2, *(_QWORD **)(a1 + 248), a3, (__int64)a4, a5, a6);
    return sub_C98B50(*(_QWORD **)(a1 + 248), v9, v10, v8, a4, a5);
  }
  else
  {
    if ( a5 )
    {
      v12 = *(_DWORD *)(a5 + 276);
    }
    else
    {
      v13 = sub_B85A10((__int64)a4);
      if ( v13 )
        v12 = v13;
      else
        v12 = a4->m128i_i32[2];
    }
    return sub_18C4330(a1, *(_DWORD *)a2, v12, nullptr, 0, 0);
  }
}
