unsigned __int64 __fastcall sub_C7A20(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v4 = sub_C79C0(a1, a3);
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  if ( v4 != -1 )
  {
    v6 = a2[1];
    v7 = *a2;
    if ( a2[2] < (unsigned __int64)(v6 + 1) )
    {
      v8 = qvector_reserve();
      *a2 = v8;
      v7 = v8;
      v6 = a2[1];
    }
    *(_QWORD *)(v7 + 8 * v6) = v4;
    ++a2[1];
  }
  return v9 - __readfsqword(0x28u);
}

