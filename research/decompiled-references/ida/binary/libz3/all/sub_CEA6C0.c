__int64 __fastcall sub_CEA6C0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r12
  _DWORD *v3; // rbp
  bool v4; // zf
  __int64 result; // rax
  void (__fastcall ***v6)(void *); // rbx

  *(_QWORD *)a1 = &off_1C59A68;
  v1 = *(_QWORD **)(a1 + 24);
  v2 = &v1[*(unsigned int *)(a1 + 32)];
  if ( v1 < v2 )
  {
    do
    {
      while ( 1 )
      {
        v3 = (_DWORD *)*v1;
        if ( *v1 )
        {
          v4 = v3[8]-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v1 >= v2 )
          goto LABEL_7;
      }
      ++v1;
      sub_ED44E0(v3);
      sub_186B220(v3);
    }
    while ( v1 < v2 );
LABEL_7:
    v1 = *(_QWORD **)(a1 + 24);
  }
  result = a1 + 40;
  if ( v1 != (_QWORD *)(a1 + 40) && v1 )
    result = sub_186B220(v1);
  v6 = *(void (__fastcall ****)(void *))(a1 + 16);
  if ( v6 )
  {
    v4 = (*((_DWORD *)v6 + 2))-- == 1;
    if ( v4 )
    {
      (**v6)(v6);
      return sub_186B220(v6);
    }
  }
  return result;
}

