__int64 __fastcall sub_109E0(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  __int64 result; // rax

  *(_WORD *)(a1 + 288) = register_custom_fixup(a1 + 232);
  *(_WORD *)(a1 + 290) = register_custom_fixup(a1 + 176);
  *(_DWORD *)(a1 + 292) = register_custom_refinfo(&unk_18020);
  v1 = register_custom_refinfo(&unk_17FE0);
  v2 = *(_DWORD *)(a1 + 292);
  *(_DWORD *)(a1 + 296) = v1;
  result = v1 | 0x40u;
  *(_DWORD *)(a1 + 200) = result;
  *(_DWORD *)(a1 + 256) = v2 | 0x40;
  return result;
}
