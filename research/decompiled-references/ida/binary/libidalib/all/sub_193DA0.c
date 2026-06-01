unsigned __int64 __fastcall sub_193DA0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  bool v7; // cf
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  if ( v5 )
  {
    v6 = v5 - 1;
    v7 = a3 < v5;
    v8 = a2[1];
    v9 = *a2;
    if ( !v7 )
      a3 = v6;
    if ( a2[2] < (unsigned __int64)(v8 + 1) )
    {
      v11 = qvector_reserve();
      *a2 = v11;
      v9 = v11;
      v8 = a2[1];
    }
    *(_QWORD *)(v9 + 8 * v8) = a3;
    ++a2[1];
  }
  return v12 - __readfsqword(0x28u);
}

