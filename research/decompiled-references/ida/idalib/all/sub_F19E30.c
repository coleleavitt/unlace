__int16 __fastcall sub_F19E30(_QWORD *a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // ebp

  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    v2 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
    if ( v2 != 41 )
      __asm { jmp     rax }
    LOWORD(v3) = sub_F133C0((__int64)a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32));
  }
  else
  {
    sub_F15AA0(a1, (_WORD *)a2);
    v4 = a1[1];
    v3 = *(unsigned int *)(v4 + 8);
    v5 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
    if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
    {
      sub_2237220(v4, v4 + 16, v3 + 1, 4);
      v3 = *(unsigned int *)(v4 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v4 + 4 * v3) = v5;
    ++*(_DWORD *)(v4 + 8);
  }
  return v3;
}
