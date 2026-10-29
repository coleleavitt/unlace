__int64 __fastcall sub_8FCFF0(__int64 a1, char a2, double a3)
{
  void (__fastcall ***v4)(void *); // rbp
  bool v5; // zf
  _DWORD *v6; // rbp

  if ( a2 && ((unsigned __int8)sub_8EB9C0(a1) || (unsigned int)sub_8FCB20(a1, a3)) )
    return 0;
  v4 = *(void (__fastcall ****)(void *))(a1 + 9320);
  if ( v4 )
  {
    v5 = (*((_DWORD *)v4 + 4))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  v6 = *(_DWORD **)(a1 + 9312);
  *(_QWORD *)(a1 + 9320) = 0;
  if ( v6 && (v5 = v6[4] == 1, --v6[4], v5) )
  {
    (**(void (__fastcall ***)(_DWORD *))v6)(v6);
    sub_186B220(v6);
    *(_QWORD *)(a1 + 9312) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 9312) = 0;
  }
  return 0;
}

