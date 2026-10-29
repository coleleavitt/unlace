unsigned __int64 __fastcall sub_159450(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  void *v3; // r12
  void *v4; // rdi
  __int64 v6; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  sub_153C60((__int64)&src, a1);
  v2 = v8;
  if ( v8 <= 1 )
  {
    if ( under_debugger )
      BUG();
    interr();
  }
  v3 = src;
  v4 = *(void **)a2;
  if ( *(_QWORD *)(a2 + 16) < v2 )
  {
    v6 = qvector_reserve();
    *(_QWORD *)a2 = v6;
    v4 = (void *)v6;
  }
  *(_QWORD *)(a2 + 8) = v2;
  memmove(v4, v3, v2 - 1);
  *(_BYTE *)(*(_QWORD *)a2 + v2 - 1) = 0;
  if ( src )
  {
    v8 = 0;
    qfree();
  }
  return v9 - __readfsqword(0x28u);
}

