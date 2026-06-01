__int64 *__fastcall sub_84CB0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdi

  v3 = *(__int64 **)(a1 + 672);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 672) = v3[3];
  }
  else
  {
    v5 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), 1, 32);
    if ( !v5 )
    {
      *(_QWORD *)(a1 + 64) = "out of memory";
      return v3;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), 0x4000, 1);
    if ( !v6 )
    {
      v7 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 64) = "out of memory";
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 136))(v7, v5);
      return v3;
    }
    *v5 = v6;
    v3 = v5;
    v5[2] = 0x4000;
  }
  v3[1] = 0;
  if ( a2 )
    *(_QWORD *)(a2 + 24) = v3;
  v3[3] = 0;
  return v3;
}

