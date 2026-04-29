__int64 __fastcall sub_BC470(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  if ( *(_DWORD *)(a1 + 420) != -1 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 48LL) + 8LL) = *(_DWORD *)(a1 + 424);
  v3 = j__qalloc_or_throw(80);
  *(_QWORD *)(v3 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v3 + 72) = 0;
  sub_32C520(v3, -1);
  *(_DWORD *)v3 = 56;
  v4 = s1;
  *(_BYTE *)(v3 + 32) = 11;
  v5 = *(_QWORD *)(a1 + 320);
  if ( *(_QWORD *)(v5 + 416) )
    v4 = *(const char **)(v5 + 408);
  *(_QWORD *)(v3 + 40) = qstrdup(v4);
  *(_DWORD *)(v3 + 68) = *(_DWORD *)(a1 + 228);
  v6 = *(_QWORD *)(a1 + 216);
  *(_BYTE *)(v3 + 64) = 8;
  *(_QWORD *)(v3 + 72) = v6;
  LODWORD(v6) = *(_DWORD *)(a1 + 228);
  *(_QWORD *)(a1 + 216) = 0;
  if ( (int)v6 > 0 )
    sub_EEAF0(a2, v3, 0);
  return v3;
}
