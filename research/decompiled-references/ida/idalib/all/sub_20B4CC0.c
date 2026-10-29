void __fastcall sub_20B4CC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 8) = 0;
  if ( v2 )
  {
    v3 = 0;
    if ( !*(_DWORD *)(a2 + 12) )
    {
      sub_2237220(a2, a2 + 16, 1, 16);
      v3 = 16LL * *(unsigned int *)(a2 + 8);
    }
    v4 = *(_QWORD *)a2;
    *(_QWORD *)(v4 + v3) = 0;
    *(_QWORD *)(v4 + v3 + 8) = v2;
    ++*(_DWORD *)(a2 + 8);
  }
  if ( (*(_BYTE *)(a1 + 7) & 0x20) != 0 )
  {
    v5 = (_QWORD *)sub_20CB0D0(a1);
    v6 = sub_20AF680(*v5 + 2712LL, a1);
    sub_20B4AB0((unsigned int **)(v6 + 8), a2);
  }
}
