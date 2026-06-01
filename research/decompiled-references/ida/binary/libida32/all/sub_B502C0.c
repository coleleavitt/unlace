__int64 __fastcall sub_B502C0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdx
  __int64 v3; // r12
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax

  v1 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  v2 = v1;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
  {
    v2 = (_QWORD *)v1[1];
    v1 = (_QWORD *)*v1;
  }
  if ( !v1 )
    return 1;
  v3 = sub_B6D830(v2);
  if ( v3 != sub_B6D830(v1) )
    return 1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B )
  {
    v5 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v5 = *(_QWORD *)v5;
    if ( ((*(_BYTE *)(v5 + 8) + 70) & 0x7Fu) <= 3 )
    {
      v6 = (_QWORD *)sub_B50190(a1);
      if ( v6 )
      {
        if ( (*v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFF8LL) + 24LL))(*v6 & 0xFFFFFFFFFFFFFFF8LL);
      }
    }
  }
  return 0;
}

