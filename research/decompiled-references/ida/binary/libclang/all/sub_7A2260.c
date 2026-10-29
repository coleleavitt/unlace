unsigned __int64 __fastcall sub_7A2260(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rsi
  __int64 v13; // rdi

  v4 = *(_QWORD *)(a3 + 48);
  if ( v4 )
    v5 = v4 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v5 = sub_6E8D60((__int64)a1, a3);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
  {
    if ( *(_BYTE *)(a2 + 16) == 26
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && sub_B0D320(a2) )
    {
      LODWORD(v8) = (*(_BYTE *)(a2 + 20) >> 2) & 7;
    }
    else
    {
      LODWORD(v8) = 0;
    }
    return v5 & 0xFFFFFFFFFFFFFFF8LL | v5 & 7 | (unsigned int)v8;
  }
  v6 = 0;
  v7 = (a2 + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) + 48 + 4LL * ((*(_BYTE *)(a2 + 23) & 0x10) != 0) + 7)
     & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(a2 + 23) & 8) != 0 )
    v6 = ((*(_BYTE *)(v7 + 1) & 4) != 0) + 1LL;
  if ( ((*(_WORD *)(a2 + 22) >> 6) & 0xF) != 2 )
    __asm { jmp     rdx }
  v13 = v7 + 8 * v6 + 8LL * (*(_WORD *)v7 & 0x3FF);
  v10 = 0;
  if ( (*(_BYTE *)(a2 + 23) & 4) != 0 )
    v10 = (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6);
  v8 = *(_QWORD *)((v13 + v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v8 <= 7 )
    return v5 & 0xFFFFFFFFFFFFFFF8LL | v5 & 7 | (unsigned int)v8;
  v11 = v8 | v5 & 7;
  v12 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v5 & 8) != 0 )
  {
    v11 |= *(__int64 *)((char *)&qword_18 + (v5 & 0xFFFFFFFFFFFFFFF0LL));
    v12 = (_QWORD *)*v12;
  }
  return sub_6C3980(a1, (unsigned __int64)v12, v11);
}

