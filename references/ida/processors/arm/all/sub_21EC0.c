__int64 __fastcall sub_21EC0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 module_data; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // esi

  v3 = a3;
  module_data = get_module_data();
  v5 = 0;
  v6 = *(_QWORD *)(module_data + 16);
  v7 = *(unsigned __int16 *)(a2 + 24);
  v8 = *(_DWORD *)(v6 + 104);
  if ( v7 >= v8 && v7 < *(_DWORD *)(v6 + 108) && (unsigned int)v3 <= 7 )
    LOBYTE(v5) = (dword_8B1C0[v3] & *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * (v7 - v8) + 8)) != 0;
  return v5;
}
