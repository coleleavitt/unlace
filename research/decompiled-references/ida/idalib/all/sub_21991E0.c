unsigned __int64 __fastcall sub_21991E0(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // esi
  unsigned __int64 v5; // rax
  unsigned __int32 v6; // ecx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx

  v1 = *(_QWORD *)(a1 + 272);
  if ( v1 )
  {
    if ( v1 < sub_215DEC0(a1) || (v2 = sub_215DEC0(a1), v1 + 24 > v3 + v2) )
      sub_2195DF0();
    v4 = *(_DWORD *)(v1 + 16);
    v5 = *(unsigned int *)(a1 + 8);
    v6 = _byteswap_ulong(v4);
    if ( (unsigned int)v5 > 0x14 || (v7 = 1398784, v8 = v6, !_bittest64(&v7, v5)) )
      v8 = v4;
  }
  else
  {
    v8 = 0;
  }
  v9 = sub_215DEC0(a1);
  v11 = v8;
  if ( v10 <= v8 )
    v11 = v10;
  return v11 + v9;
}
