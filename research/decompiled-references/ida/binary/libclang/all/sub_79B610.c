bool __fastcall sub_79B610(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 *v6; // rdx

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v1 - 24) > 0x1A )
  {
    if ( (unsigned int)(v1 - 62) > 2 )
      return 0;
    v6 = (__int64 *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
      v2 = v6[1];
    else
      v2 = *v6;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 48);
  }
  v3 = *(_QWORD *)&byte_8[v2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v3;
  return (*(_BYTE *)(*(_QWORD *)v3 + 16LL) == 41
       || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 && (v4 = sub_B0D320(v4)) != 0)
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1;
}

