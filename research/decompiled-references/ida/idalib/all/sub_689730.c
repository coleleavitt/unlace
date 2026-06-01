__int64 __fastcall sub_689730(__int64 *a1, const char *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __m128i v6; // xmm0
  char *v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rbx
  char *v10; // rax
  void *v11; // rdi
  void *ptr; // [rsp+0h] [rbp-8h] BYREF
  __int128 vars0; // [rsp+8h] [rbp+0h] BYREF
  unsigned __int64 vars10; // [rsp+18h] [rbp+10h]
  __int128 *vars20; // [rsp+28h] [rbp+20h]

  vars20 = &vars0;
  vars10 = __readfsqword(0x28u);
  ptr = nullptr;
  vars0 = 0;
  LOBYTE(v2) = sub_689210((__int64 *)&ptr, a2, "sig", 1);
  v3 = v2;
  if ( (_BYTE)v2 )
  {
    v4 = ptr;
    v5 = *a1;
    v6 = _mm_loadu_si128((const __m128i *)(a1 + 1));
    *a1 = *(_QWORD *)ptr;
    a1[1] = v4[1];
    a1[2] = v4[2];
    *v4 = v5;
    *(__m128i *)(v4 + 1) = v6;
  }
  v7 = (char *)ptr;
  if ( ptr )
  {
    v8 = vars0;
    if ( (_QWORD)vars0 )
    {
      v9 = 0;
      do
      {
        v10 = &v7[24 * v9];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = (char *)ptr;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&vars0 = 0;
    qfree(v7);
  }
  return v3;
}
