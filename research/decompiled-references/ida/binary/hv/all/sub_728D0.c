unsigned __int64 __fastcall sub_728D0(__int64 a1)
{
  void *v1; // r12
  const char *v2; // rbp
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  void *v7; // [rsp+0h] [rbp-68h] BYREF
  __int128 v8; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  sub_72620(a1, (__int64)&v7);
  v1 = v7;
  v2 = haystack;
  v10 = 0;
  ptr = nullptr;
  if ( (_QWORD)v8 )
    v2 = (const char *)v7;
  v3 = sub_9ED80("UseProxy", 0, 0, v2);
  v4 = *(_DWORD *)(a1 + 168);
  v5 = v4;
  BYTE1(v4) &= ~4u;
  BYTE1(v5) |= 4u;
  if ( v3 )
    v4 = v5;
  *(_DWORD *)(a1 + 168) = v4;
  if ( (unsigned __int8)sub_9EE50(&ptr, "Proxy", v2) )
    sub_714E0(a1 + 88, &ptr, 0);
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    j__free(ptr);
  }
  if ( v1 )
    j__free(v1);
  return v11 - __readfsqword(0x28u);
}

