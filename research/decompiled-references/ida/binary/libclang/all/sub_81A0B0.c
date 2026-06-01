void *__fastcall sub_81A0B0(__int64 a1, _QWORD *a2, const void *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  char *v9; // rdi

  v6 = 8LL * (unsigned int)a4;
  *(_DWORD *)(a1 + 32) = a4;
  v8 = a2[274];
  a2[284] += v6;
  v9 = (char *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)&v9[v6] && v8 )
    a2[274] = &v9[v6];
  else
    v9 = (char *)sub_804090((__int64)(a2 + 274), v6, 3);
  *(_QWORD *)(a1 + 24) = v9;
  return memcpy(v9, a3, 8 * a4);
}

