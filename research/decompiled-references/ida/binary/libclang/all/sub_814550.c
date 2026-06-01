__int64 __fastcall sub_814550(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rdi
  _BYTE v6[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = sub_80F4C0(*(_QWORD *)(a1 + *(unsigned __int8 *)(a1 + 3)));
  if ( v2
    && (*(_BYTE *)(v2 + 28) & 0x7Fu) - 32 <= 5
    && ((v3 = sub_77F000(v2, 0), v3 == 889) || v3 == 150)
    && (v4 = *(_QWORD *)(a1 + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a1 + 3)),
        (*(_BYTE *)(v4 + 2) & 2) == 0)
    && (unsigned __int8)sub_863ED0(v4, v6, a2, 0) )
  {
    return v6[0] ^ 1u;
  }
  else
  {
    return 0;
  }
}

