__int64 __fastcall sub_2EF460(_QWORD *a1)
{
  void (__fastcall ***v1)(void *); // rbp
  bool v2; // zf
  __int64 v3; // rbp
  int v4; // r8d
  int v5; // r9d
  void (__fastcall ***v6)(void *); // r12
  __int64 v7; // rbp
  _DWORD *v8; // r12

  sub_2EF340((__int64)a1);
  v1 = (void (__fastcall ***)(void *))a1[30];
  if ( v1 )
  {
    v2 = (*((_DWORD *)v1 + 12))-- == 1;
    if ( v2 )
    {
      (**v1)(v1);
      sub_186B220(v1);
    }
  }
  a1[30] = 0;
  v3 = sub_186B270(0x3E8u);
  sub_341B50(v3, a1[1], (_DWORD)a1 + 288, a1[79], v4, v5);
  v6 = (void (__fastcall ***)(void *))a1[28];
  ++*(_DWORD *)(v3 + 48);
  if ( v6 )
  {
    v2 = (*((_DWORD *)v6 + 12))-- == 1;
    if ( v2 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  a1[28] = v3;
  sub_33D8F0(v3, a1 + 95);
  v7 = a1[28];
  if ( v7 )
    ++*(_DWORD *)(v7 + 48);
  v8 = (_DWORD *)a1[29];
  if ( v8 && (v2 = v8[12] == 1, --v8[12], v2) )
  {
    (**(void (__fastcall ***)(_DWORD *))v8)(v8);
    sub_186B220(v8);
    a1[29] = v7;
    return sub_33D910(a1[28]);
  }
  else
  {
    a1[29] = v7;
    return sub_33D910(v7);
  }
}

