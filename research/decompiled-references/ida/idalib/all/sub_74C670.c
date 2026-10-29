__int64 __fastcall sub_74C670(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int16 *v5; // rax
  int v6; // edx

  v1 = sub_74C5A0(a1);
  if ( v1 )
    return v1;
  v3 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v3 + 104) = 2LL * *(unsigned int *)(v3 + 80);
  *(_WORD *)(*(_QWORD *)(v3 + 120) + 2LL * (unsigned int)(*(_DWORD *)(v3 + 132) - 1)) = 0;
  memset(*(void **)(v3 + 120), 0, 2LL * (unsigned int)(*(_DWORD *)(v3 + 132) - 1));
  v4 = *(int *)(v3 + 196);
  *(_QWORD *)(v3 + 152) = 0;
  *(_DWORD *)(v3 + 5932) = 0;
  *(_DWORD *)(v3 + 160) = 2;
  *(_QWORD *)(v3 + 168) = 0;
  *(_DWORD *)(v3 + 128) = 0;
  v5 = (unsigned __int16 *)((char *)&unk_2B38760 + 16 * v4);
  *(_DWORD *)(v3 + 192) = v5[1];
  *(_DWORD *)(v3 + 204) = *v5;
  v6 = v5[2];
  LODWORD(v5) = v5[3];
  *(_DWORD *)(v3 + 208) = v6;
  *(_DWORD *)(v3 + 188) = (_DWORD)v5;
  *(_QWORD *)(v3 + 180) = 0x200000000LL;
  return 0;
}
