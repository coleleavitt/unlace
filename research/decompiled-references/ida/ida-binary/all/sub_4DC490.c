unsigned __int64 __fastcall sub_4DC490(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rax
  __int64 v3; // rax
  const char *v4; // rdx
  int v5; // eax
  _DWORD *v6; // rax
  unsigned __int8 v8[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v2 = *(__int64 **)a1;
  v9 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2[46] + 296LL))(v2[46], *(unsigned int *)(a1 + 16));
  v4 = "%u";
  if ( (v3 & 0x70000) != 0x30000 )
    v4 = "%08X";
  qsnprintf(v8, 32, v4, a2);
  v6 = (_DWORD *)sub_4DC0B0((__int64 **)a1, v8, v5, 0);
  v6[2] = 2;
  *v6 = a2;
  return v9 - __readfsqword(0x28u);
}
