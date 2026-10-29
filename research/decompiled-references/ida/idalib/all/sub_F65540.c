char __fastcall sub_F65540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  v8 = (unsigned int)(v7 - 57);
  if ( (unsigned int)v8 <= 1 || (unsigned int)(v7 - 31) <= 1 )
    return sub_F65460(*(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v8, a5, a6);
  v10 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 13
    && (v8 = *(unsigned __int16 *)(v10 + 18),
        LOWORD(v8) = (((unsigned __int16)v8 >> 3) + 464) & 0x1FF,
        (unsigned __int16)v8 <= 0x36u)
    && (v11 = 1LL << v8, v8 = 0x70000000001FFFLL, (v11 & 0x70000000001FFFLL) != 0) )
  {
    return (((*(_WORD *)(v6 + 18) >> 3) + 460) & 0x1FFu) <= 3;
  }
  else
  {
    return sub_F65460(a1, a2, v6, v8, a5, a6);
  }
}
