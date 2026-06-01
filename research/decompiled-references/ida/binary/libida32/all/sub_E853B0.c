void __fastcall sub_E853B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // r12d

  v3 = a1 + 176;
  v4 = *(unsigned int *)(a1 + 184);
  v5 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_22134E0(v3, a1 + 192, v4 + 1, 4);
    v4 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v4) = v5;
  ++*(_DWORD *)(a1 + 184);
  __asm { jmp     rax }
}

