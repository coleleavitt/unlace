__int64 __fastcall sub_D35CB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 result; // rax

  v2 = sub_E216C0(a1, 24);
  v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 8) = v3;
  if ( v3 > 0x40 )
    sub_2205510(v2);
  else
    *(_QWORD *)v2 = *(_QWORD *)a2;
  *(_BYTE *)(v2 + 12) = *(_BYTE *)(a2 + 12);
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(v2 + 16) = result;
  return result;
}
