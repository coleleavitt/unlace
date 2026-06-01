void __fastcall sub_1FBB5C(unsigned int *a1)
{
  int v1; // r8d
  unsigned int *v2; // rsi
  _DWORD *v3; // rax
  __int16 v4; // cx

  if ( a1 )
  {
    v1 = *(a1 - 1);
    v2 = a1;
    while ( v1 )
    {
      v3 = (_DWORD *)(**((_QWORD **)v2 + 1) + 16LL * *v2);
      v4 = *v3 & 0x3FF;
      if ( v4 != 1023 )
        *(_WORD *)v3 = (v4 + 1023) & 0x3FF | *v3 & 0xFC00;
      v2 += 4;
      --v1;
    }
    sub_186B220(a1 - 2);
  }
}

