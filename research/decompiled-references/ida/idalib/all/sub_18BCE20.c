__int64 __fastcall sub_18BCE20(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int *v3; // rax
  bool v5; // al
  __int64 v6; // rdi
  bool v7; // zf
  unsigned int *v8; // rax

  if ( sub_F57F60(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v2 = *((unsigned int *)a2 + 2);
    v3 = (unsigned int *)*a2;
    if ( *((_BYTE *)a2 + 12) )
    {
      if ( (unsigned int)v2 <= 0x40 )
        return sub_2219230(*a2);
      v2 = *(_QWORD *)v3;
    }
    else
    {
      if ( (unsigned int)v2 > 0x40 )
        return sub_2219230(*v3);
      if ( (_DWORD)v2 )
        return sub_2219230((__int64)((_QWORD)v3 << (64 - (unsigned __int8)v2)) >> (64 - (unsigned __int8)v2));
    }
    return sub_2219230(v2);
  }
  else
  {
    v5 = sub_F57F90(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL));
    v6 = *((unsigned int *)a2 + 2);
    v7 = !v5;
    v8 = (unsigned int *)*a2;
    if ( v7 )
    {
      if ( *((_BYTE *)a2 + 12) )
      {
        if ( (unsigned int)v6 <= 0x40 )
          return sub_2219260(*a2);
        v6 = *(_QWORD *)v8;
      }
      else
      {
        if ( (unsigned int)v6 > 0x40 )
          return sub_2219260(*v8);
        if ( (_DWORD)v6 )
          return sub_2219260((__int64)((_QWORD)v8 << (64 - (unsigned __int8)v6)) >> (64 - (unsigned __int8)v6));
      }
      return sub_2219260(v6);
    }
    else
    {
      if ( *((_BYTE *)a2 + 12) )
      {
        if ( (unsigned int)v6 <= 0x40 )
          return sub_2219240(*a2);
        v6 = *(_QWORD *)v8;
      }
      else
      {
        if ( (unsigned int)v6 > 0x40 )
          return sub_2219240(*v8);
        if ( (_DWORD)v6 )
          return sub_2219240((__int64)((_QWORD)v8 << (64 - (unsigned __int8)v6)) >> (64 - (unsigned __int8)v6));
      }
      return sub_2219240(v6);
    }
  }
}
