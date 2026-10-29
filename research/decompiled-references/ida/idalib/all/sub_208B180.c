void __fastcall sub_208B180(char *a1)
{
  char *v1; // r12
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  bool v5; // zf

  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 64LL) = 0;
    *(_QWORD *)a1 = 0;
  }
  v1 = a1 + 8;
  while ( *((char **)a1 + 1) != v1 )
  {
    while ( 1 )
    {
      v2 = *((_QWORD **)a1 + 2);
      v3 = (_QWORD *)v2[1];
      v4 = *v2;
      v5 = *((_BYTE *)v2 + 32) == 0;
      *v3 = *v2;
      *(_QWORD *)(v4 + 8) = v3;
      *(_OWORD *)v2 = 0;
      if ( !v5 )
        break;
      if ( v2[11] )
        sub_20A0850(v2 + 11);
      if ( v2[10] )
        sub_20A0850(v2 + 10);
      if ( v2[9] )
        sub_20A0850(v2 + 9);
      sub_20A09F0(v2 + 5);
      if ( v2[3] )
        sub_20A0850(v2 + 3);
      operator delete(v2, 0x60u);
      if ( *((char **)a1 + 1) == v1 )
        goto LABEL_15;
    }
    if ( v2[5] )
      sub_20A0850(v2 + 5);
    if ( v2[3] )
      sub_20A0850(v2 + 3);
    operator delete(v2, 0x30u);
  }
LABEL_15:
  operator delete(a1, 0x18u);
}
