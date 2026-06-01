__int64 __fastcall sub_6D4A70(char **a1, __int64 a2, __int64 a3)
{
  __m128i v4; // xmm0
  char *v5; // r15
  char *v6; // rax
  unsigned __int64 v7; // rbx
  size_t v9; // r15
  unsigned __int64 v10; // r15
  char *v11; // rdi
  char *v12; // rcx
  char *v13; // rdx
  char *v14; // rax
  void *src; // [rsp+10h] [rbp-E8h]
  __m128i v16; // [rsp+20h] [rbp-D8h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+38h] [rbp-C0h]
  _QWORD v19[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+60h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-88h]
  __int64 v22; // [rsp+78h] [rbp-80h]
  char **v23; // [rsp+80h] [rbp-78h]
  char *s[2]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v25[11]; // [rsp+A0h] [rbp-58h] BYREF

  v4 = _mm_loadu_si128((const __m128i *)(a3 + 17464));
  v25[3] = __readfsqword(0x28u);
  LODWORD(v7) = a2;
  v22 = 0x100000000LL;
  v16 = v4;
  v19[0] = &off_2BEBE68;
  v20 = 0;
  v16.m128i_i32[0] = _mm_cvtsi128_si32(v4) & 0xFDBF8FFF | 0x2001000;
  v23 = s;
  s[0] = (char *)v25;
  s[1] = nullptr;
  LOBYTE(v25[0]) = 0;
  v19[1] = 0;
  v21 = 0;
  sub_227B8B0(v19, 0, 0, 0);
  sub_B1F2A0(a2, v19, &v16);
  v5 = s[0];
  v6 = strchr(s[0], 34);
  LOBYTE(v7) = v5 == v6 || v6 == nullptr;
  if ( (_BYTE)v7 )
  {
    LODWORD(v7) = 0;
  }
  else
  {
    ptr = nullptr;
    src = v6 + 1;
    v18 = 0;
    v9 = strlen(v6 + 1);
    ptr = (void *)qvector_reserve(&ptr, 0, v9 + 1, 1);
    *(_QWORD *)&v18 = v9 + 1;
    memmove(ptr, src, v9);
    *((_BYTE *)ptr + v9) = 0;
    v10 = v18;
    v11 = (char *)ptr;
    if ( (unsigned __int64)v18 > 4 )
    {
      v7 = v18 - 4;
      if ( (__int64)v18 - 4 <= 1 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v18 = 0;
          qfree(ptr);
          v10 = v18;
          v13 = nullptr;
        }
        else
        {
          v13 = *((char **)&v18 + 1);
        }
        v12 = nullptr;
      }
      else
      {
        if ( *((_QWORD *)&v18 + 1) < v7 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v18 - 4, 1);
          v11 = (char *)ptr;
        }
        *(_QWORD *)&v18 = v10 - 4;
        v11[v10 - 5] = 0;
        v10 = v18;
        v12 = (char *)ptr;
        v13 = *((char **)&v18 + 1);
      }
      v11 = *a1;
      v14 = a1[2];
      *a1 = v12;
      a1[1] = (char *)v10;
      LOBYTE(v7) = v10 > 1;
      a1[2] = v13;
      ptr = v11;
      *((_QWORD *)&v18 + 1) = v14;
    }
    if ( v11 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v11);
    }
  }
  v19[0] = &off_2BEBE68;
  sub_227B7A0(v19);
  if ( (_QWORD *)s[0] != v25 )
    operator delete(s[0], v25[0] + 1LL);
  return (unsigned int)v7;
}
