__int64 __fastcall sub_77D0F0(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 v5; // r12
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  v4 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
  {
    v4 = v3[1];
    v3 = (_QWORD *)*v3;
  }
  if ( !v3 )
    return 1;
  v5 = sub_79CC40(v4);
  if ( v5 != sub_79CC40(v3) )
    return 1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x29 )
  {
    v7 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v7 = *(_QWORD *)v7;
    if ( ((*(_BYTE *)(v7 + 8) + 72) & 0x7Fu) <= 3 )
    {
      v8 = (_QWORD *)sub_77D020(a1);
      if ( v8 )
      {
        if ( (*v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFF8LL) + 24LL))(*v8 & 0xFFFFFFFFFFFFFFF8LL);
      }
    }
  }
  return 0;
}

