_BYTE *__fastcall sub_77C4E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _BYTE *v3; // rax

  v1 = *(_QWORD *)(a1 + 88);
  v2 = 0;
  if ( v1 )
  {
    if ( (v1 & 4) != 0 )
    {
      v3 = (_BYTE *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v3 )
      {
        if ( (*v3 & 1) != 0 )
          return v3 + 16;
      }
    }
  }
  return (_BYTE *)v2;
}

