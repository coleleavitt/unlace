__int64 __fastcall sub_40A3C0(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  unsigned int v3; // r12d
  int *v6; // rax
  int *v7; // rbx
  int v8; // eax
  bool v9; // zf

  v3 = 0;
  if ( *a2 )
  {
    v6 = (int *)sub_48DF10(a2, 0xFFFFFFFF);
    ++*v6;
    v7 = v6;
    v3 = sub_40A300(a1, (__int64)v6, a3);
    v8 = *v7 - 1;
    v9 = *v7 == 1;
    *v7 = v8;
    if ( v8 < 0 || v9 )
      sub_47B120(v7);
    if ( v3 )
      sub_48B940(a1);
  }
  else
  {
    *a3 = 0;
  }
  return v3;
}

