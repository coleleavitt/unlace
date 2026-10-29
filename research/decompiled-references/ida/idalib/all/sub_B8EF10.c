unsigned __int64 __fastcall sub_B8EF10(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rax
  _OWORD *v6; // rax
  char *v7; // rax
  char *v8; // rcx

  v2 = sub_B8E180((unsigned __int64)a1);
  if ( v2 )
  {
    v3 = operator new(0x58u);
    memset((void *)v3, 0, 0x58u);
    v4 = (_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = 1;
    if ( v3 + 72 != v3 + 8 )
    {
      do
      {
        *v4 = -1;
        v4 += 2;
      }
      while ( (_QWORD *)(v3 + 72) != v4 );
    }
    *(_QWORD *)(v3 + 72) = 0;
    *(_QWORD *)(v3 + 80) = 0;
  }
  else
  {
    v6 = (_OWORD *)operator new(0x50u);
    *v6 = 0;
    v3 = (unsigned __int64)v6;
    v7 = (char *)v6 + 8;
    *(_OWORD *)(v7 + 8) = 0;
    *(_OWORD *)(v7 + 24) = 0;
    *(_OWORD *)(v7 + 40) = 0;
    *(_OWORD *)(v7 + 56) = 0;
    *((_QWORD *)v7 - 1) = 1;
    v8 = v7 + 64;
    do
    {
      *(_QWORD *)v7 = -1;
      v7 += 16;
    }
    while ( v8 != v7 );
    *(_QWORD *)(v3 + 72) = 0;
  }
  *(_QWORD *)(v3 + 72) = *(_QWORD *)(a2 + 23248);
  *(_QWORD *)(a2 + 23248) = v3 & 0xFFFFFFFFFFFFFFFBLL | (4LL * v2);
  *a1 = v3;
  return v3;
}
