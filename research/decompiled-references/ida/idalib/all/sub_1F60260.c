__int64 __fastcall sub_1F60260(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax

  sub_1F58FC0((__int64 *)a1, a2);
  v2 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
  v3 = sub_1EE13A0(
         (__int64)v2,
         *(_QWORD *)(*(_QWORD *)a1 + 16LL),
         (__int64 *)(*(_QWORD *)a1 + 32LL),
         (_DWORD *)(*(_QWORD *)a1 + 24LL));
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a2 + 24) & 7LL | sub_1EDB980(v2, v3, v4, v5, v6, v7);
  v8 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v8 + 1;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFBLL | (4LL * (((1 << v8) & *(_DWORD *)(a1 + 16)) != 0));
  v9 = *(_DWORD *)(a1 + 20);
  v10 = *(_DWORD *)(a1 + 16) >> v9;
  *(_DWORD *)(a1 + 20) = v9 + 12;
  *(_WORD *)(a2 + 32) = v10 & 0xFFF | *(_WORD *)(a2 + 32) & 0x8000;
  v11 = *(_QWORD *)a1;
  v12 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  *(_DWORD *)(v11 + 24) = v12 + 1;
  *(_DWORD *)(a2 + 32) = ((*(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12) & 0x7FFF) << 15)
                       | *(_DWORD *)(a2 + 32) & 0xC0007FFF;
  v13 = *(_DWORD *)(a1 + 20);
  v14 = ((1 << v13) & *(_DWORD *)(a1 + 16)) == 0;
  *(_DWORD *)(a1 + 20) = v13 + 1;
  *(_BYTE *)(a2 + 35) = (!v14 << 6) | *(_BYTE *)(a2 + 35) & 0xBF;
  *(_DWORD *)(a2 + 4) = sub_1EE7490(*(_QWORD *)a1);
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 13064) + 8LL * *(unsigned int *)(v15 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v15 + 13072) - 1);
  *(_DWORD *)(v15 + 13072) = result;
  *(_QWORD *)(a2 + 16) = v16;
  return result;
}
