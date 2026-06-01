unsigned __int64 __fastcall sub_158B50(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 480);
  if ( !v2 )
    sub_158B30();
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = (unsigned int)*(__int16 *)(a1 + 470);
  v5 = v3;
  LODWORD(v3) = *(__int16 *)(a1 + 468);
  v10 = v5;
  v11 = v3;
  sub_153500(a1, (__int64)&v10, v4, v6, v7, v8);
  qfree();
  return v12 - __readfsqword(0x28u);
}

