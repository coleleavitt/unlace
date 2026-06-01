void __fastcall sub_22056A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  unsigned __int64 v5; // r12
  void *v6; // rdi
  const void *v7; // rsi
  __int64 v8; // rax

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(unsigned int *)(a1 + 8);
    v5 = (unsigned __int64)(v3 + 63) >> 6;
    if ( (unsigned int)((unsigned __int64)(v4 + 63) >> 6) == (_DWORD)v5 )
    {
      *(_DWORD *)(a1 + 8) = v3;
    }
    else
    {
      if ( (unsigned int)v4 > 0x40 )
      {
        v6 = *(void **)a1;
        if ( v6 )
          operator delete[](v6);
      }
      *(_DWORD *)(a1 + 8) = v3;
      if ( (unsigned int)v3 <= 0x40 )
      {
        v7 = *(const void **)a2;
LABEL_8:
        *(_QWORD *)a1 = v7;
        return;
      }
      v8 = operator new[](8 * v5);
      LODWORD(v3) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = v8;
    }
    v7 = *(const void **)a2;
    if ( (unsigned int)v3 <= 0x40 )
      goto LABEL_8;
    memcpy(*(void **)a1, v7, 8 * (((unsigned __int64)(unsigned int)v3 + 63) >> 6));
  }
}
