/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4187E0
// Address: 0x004187E0

//----- (004187E0) --------------------------------------------------------
char __userpurge sub_4187E0@<al>(__m128i a1@<xmm0>, int a2, int a3, DWORD flOldProtect)
{
  char v4; // bl
  int v5; // ebp
  const char *v6; // eax
  DWORD v7; // eax
  DWORD v8; // eax
  double v10; // [esp-Ch] [ebp-1Ch]
  int v11; // [esp+0h] [ebp-10h]

  v4 = flOldProtect;
  v5 = (unsigned __int8)flOldProtect;
  if ( (*(_DWORD *)(a3 + 40) != 0) == (unsigned __int8)flOldProtect )
    return 0;
  v6 = "true";
  if ( !(_BYTE)flOldProtect )
    v6 = "false";
  LODWORD(v10) = *(_DWORD *)(a3 + 24);
  HIDWORD(v10) = *(_DWORD *)(a3 + 40);
  sub_43C900(
    a2,
    (int)"dbg_enable_page_bpt(%s): page_ea=%a, old_prot=0x%x, new_prot=0x%x\n",
    v6,
    v10,
    *(_DWORD *)(a3 + 44),
    v11);
  if ( VirtualProtectEx(
         *(HANDLE *)(a2 + 452),
         *(LPVOID *)(a3 + 24),
         *(_DWORD *)(a3 + 36),
         *(_DWORD *)(a3 + 4 * v5 + 40),
         &flOldProtect) )
  {
    v7 = flOldProtect;
    goto LABEL_8;
  }
  sub_43C950(a1, a2, (int)"VirtualProtectEx");
  if ( v4 )
    return 0;
  v7 = 0;
  flOldProtect = 0;
LABEL_8:
  sub_43C900(a2, (int)"    success! old=0x%x\n", v7);
  v8 = 0;
  if ( v4 )
    v8 = flOldProtect;
  *(_DWORD *)(a3 + 40) = v8;
  return 1;
}
// 418822: variable 'v11' is possibly undefined
