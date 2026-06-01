__int64 __fastcall sub_952AE0(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void (__fastcall ***v2)(_QWORD); // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (void (__fastcall ***)(_QWORD))v1[149];
    if ( v2 )
    {
      (**v2)(v1[149]);
      sub_186B220(v2);
    }
    v3 = v1[148];
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    v4 = v1[146];
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    v5 = (void *)v1[143];
    if ( v5 )
      sub_186B220(v5);
    v6 = (void *)v1[138];
    if ( v6 )
      sub_186B220(v6);
    sub_9564E0(v1 + 3);
    return sub_186B220(v1);
  }
  return result;
}

