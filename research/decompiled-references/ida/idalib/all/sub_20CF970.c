__int64 __fastcall sub_20CF970(__int64 a1, int a2)
{
  __int64 *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 *v8; // rax

  v2 = *(__int64 **)(a1 + 4096);
  v3 = (a2 + 15) & 0xFFFFFFF0;
  v4 = v3 + v2[1];
  if ( v4 > 0xFEF )
  {
    if ( v3 > 0xFF0 )
    {
      v5 = malloc(v3 + 16);
      if ( v5 )
      {
        v6 = *v2;
        v5[1] = 0;
        *v5 = v6;
        *v2 = (__int64)v5;
        return (__int64)(v5 + 2);
      }
LABEL_8:
      std::terminate();
    }
    v8 = (__int64 *)malloc(0x1000u);
    if ( !v8 )
      goto LABEL_8;
    v8[1] = 0;
    v4 = (a2 + 15) & 0xFFFFFFF0;
    *(_QWORD *)(a1 + 4096) = v8;
    *v8 = (__int64)v2;
    v2 = v8;
  }
  v2[1] = v4;
  return *(_QWORD *)(a1 + 4096) - v3 + *(_QWORD *)(*(_QWORD *)(a1 + 4096) + 8LL) + 16;
}
