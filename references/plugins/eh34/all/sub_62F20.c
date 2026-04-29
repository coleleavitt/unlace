unsigned __int64 __fastcall sub_62F20(__int64 a1, unsigned __int64 **a2)
{
  unsigned __int64 *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( a2[1] )
  {
    sub_25080(a1 + 64, (__int64)a2);
    v4 = *a2;
    v5 = (__int64)&(*a2)[(_QWORD)a2[1]];
    if ( (unsigned __int64 *)v5 != *a2 )
    {
      do
      {
        v6 = *(_QWORD *)(a1 + 216);
        v10 = *v4;
        if ( sub_263B0(v6) )
          sub_62E00((_QWORD *)(a1 + 224), &v10, v7, v8, v9);
        ++v4;
      }
      while ( (unsigned __int64 *)v5 != v4 );
    }
  }
  return v11 - __readfsqword(0x28u);
}
