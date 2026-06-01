__int64 __fastcall sub_188A00(_QWORD *a1)
{
  void (*v1)(void); // rax
  TView **v2; // rbx
  TView **v3; // r12
  char v4; // al
  __int64 v5; // rax

  v1 = *(void (**)(void))(*a1 + 216LL);
  if ( v1 != nullsub_56 )
    v1();
  v2 = (TView **)a1[25];
  v3 = &v2[9 * a1[26]];
  if ( v3 == v2 )
    return 1;
  while ( 1 )
  {
    if ( v2[4] )
    {
      v4 = *((_BYTE *)v2 + 52);
      if ( v4 != 107 && v4 != 66 && v4 != 75 )
      {
        v5 = sub_184DE0((__int64)v2);
        if ( !(unsigned __int8)sub_1883A0((__int64)a1, *v2, *((_BYTE *)v2 + 52), (__int64)v2[4], v5, (__int64)v2, 0) )
          break;
      }
    }
    v2 += 9;
    if ( v3 == v2 )
      return 1;
  }
  TView::select(*v2);
  return 0;
}

