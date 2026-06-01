void __fastcall sub_7B9120(__int64 a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  char *v7; // rcx

  if ( a4 )
  {
    *(_DWORD *)(a1 + 128) = a4;
    v5 = a2[274];
    v6 = 8LL * a4;
    a2[284] += v6;
    v7 = (char *)((v5 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a2[275] >= (unsigned __int64)&v7[v6] && v5 )
      a2[274] = &v7[v6];
    else
      v7 = (char *)sub_7B4EB0((__int64)(a2 + 274), v6, 3);
    *(_QWORD *)(a1 + 120) = memcpy(v7, a3, v6);
  }
}

