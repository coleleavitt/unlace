__int64 __fastcall sub_249720(__int64 a1)
{
  void (__fastcall ***v1)(void *); // rbx
  bool v2; // zf
  void (__fastcall ***v3)(void *); // rbx
  _QWORD *v4; // rbx
  __int64 result; // rax
  _QWORD *v6; // r13
  _DWORD *v7; // rbp

  v1 = *(void (__fastcall ****)(void *))(a1 + 176);
  *(_QWORD *)a1 = &off_1C4C940;
  if ( v1 )
  {
    v2 = (*((_DWORD *)v1 + 2))-- == 1;
    if ( v2 )
    {
      (**v1)(v1);
      sub_186B220(v1);
    }
  }
  v3 = *(void (__fastcall ****)(void *))(a1 + 168);
  if ( v3 )
  {
    v2 = (*((_DWORD *)v3 + 2))-- == 1;
    if ( v2 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v4 = *(_QWORD **)(a1 + 24);
  result = *(unsigned int *)(a1 + 32);
  v6 = &v4[result];
  if ( v4 < v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = (_DWORD *)*v4;
        if ( *v4 )
        {
          v2 = v7[8]-- == 1;
          if ( v2 )
            break;
        }
        if ( ++v4 >= v6 )
          goto LABEL_13;
      }
      ++v4;
      sub_ED44E0(v7);
      result = sub_186B220(v7);
    }
    while ( v4 < v6 );
LABEL_13:
    v4 = *(_QWORD **)(a1 + 24);
  }
  if ( v4 != (_QWORD *)(a1 + 40) )
  {
    if ( v4 )
      return sub_186B220(v4);
  }
  return result;
}

