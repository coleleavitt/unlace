__int64 __fastcall sub_3BF6C0(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 *v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  char v8; // al
  __int64 v9; // rax

  v4 = *(__int64 **)(a1 + 1672);
  if ( (*(_BYTE *)(v4[4] + 328) & 4) == 0 )
    return sub_3BF3F0(v4, a2, a3);
  if ( *(int *)(a3 + 16) > 0 )
    goto LABEL_8;
  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0x100000000LL;
  if ( *(_DWORD *)(v4[3] + 24) == 8 )
    v6 = -1;
  if ( v5 < v6 && (v8 = sub_3BEFF0(v4, (__int64 *)a3, v5), ++*(_QWORD *)(a3 + 8), v8) )
  {
LABEL_8:
    v9 = *(_QWORD *)a3;
    *(_DWORD *)(a3 + 16) = 0;
    *a2 = v9;
    return 1;
  }
  else
  {
    *(_DWORD *)(a3 + 16) = 0;
    *a2 = -1;
    return 0;
  }
}
