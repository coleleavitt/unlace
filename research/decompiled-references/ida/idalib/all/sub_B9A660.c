unsigned __int64 __fastcall sub_B9A660(_QWORD *a1, __int64 a2, __int64 a3, const void *a4, __int64 a5)
{
  int v5; // r13d
  size_t v6; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // ecx

  v5 = a5;
  v6 = 8 * a5;
  v8 = sub_B902D0(64, a1, a2, 8 * a5);
  v9 = v8;
  if ( a3 )
  {
    v10 = *(_QWORD *)(a3 + 40);
    v11 = *(_DWORD *)(a3 + 24);
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  sub_B725B0(v8, 0x37u, a2, v11);
  *(_QWORD *)(v9 + 40) = v10;
  *(_QWORD *)(v9 + 48) = a3;
  *(_DWORD *)(v9 + 56) = v5;
  *(_QWORD *)v9 = &off_2C03348;
  if ( v6 )
    memmove((void *)(v9 + 64), a4, v6);
  return v9;
}
