__int64 __fastcall sub_36FC80(__int64 a1, __int64 a2)
{
  bool v2; // zf
  unsigned int v3; // ebp
  __int64 *v4; // rcx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v2 = *(_BYTE *)(a1 + 32) == 2;
  v7 = __readfsqword(0x28u);
  v6 = 0;
  if ( v2 && !*(_QWORD *)(a1 + 40) )
  {
    v4 = nullptr;
    goto LABEL_3;
  }
  v3 = sub_36FA50((__int64)&v6, (char *)(a1 + 32), 0);
  v4 = &v6;
  if ( !v3 )
LABEL_3:
    v3 = dbg_appcall(a2, *(_QWORD *)(a1 + 8), 0, v4, a1 + 64, *(_QWORD *)(a2 + 8) - 2LL, v6, v7);
  clear_tinfo_t(&v6);
  return v3;
}
