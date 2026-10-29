void __fastcall sub_7B5E90(__int64 a1, const void *a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // r13
  __int64 v7; // rax
  char *v8; // rdi

  *(_QWORD *)a1 = 0;
  if ( a3 )
  {
    v4 = 8LL * a3;
    v7 = a4[274];
    a4[284] += v4;
    v8 = (char *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a4[275] >= (unsigned __int64)&v8[v4] && v7 )
      a4[274] = &v8[v4];
    else
      v8 = (char *)sub_7B4EB0((__int64)(a4 + 274), v4, 3);
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 8) = a3;
    memcpy(v8, a2, v4);
  }
}

