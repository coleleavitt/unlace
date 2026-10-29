__int64 __fastcall sub_18DCF0(__int64 a1)
{
  int v1; // r13d
  __int64 v2; // r12
  _QWORD *v3; // rbx
  _QWORD *i; // rbp
  __int64 v5; // rax

  v1 = -1;
  v2 = 0xFFFFFFFFLL;
  v3 = *(_QWORD **)(a1 + 72);
  for ( i = &v3[*(_QWORD *)(a1 + 80)]; i != v3; v2 = (unsigned int)(HIDWORD(v5) + v2) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 112LL))(*v3);
    if ( v1 < (int)v5 )
      v1 = v5;
    ++v3;
  }
  return (v2 << 32) | (unsigned int)v1;
}
