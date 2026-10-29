__int64 __fastcall sub_B566E0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // r13
  void (__fastcall ***v7)(_QWORD); // rbp
  __int64 v8; // rdi
  __int64 v10; // rax

  v2 = a1 + 20;
  *(v2 - 20) = &off_1C57FF8;
  sub_14B63F0(v2);
  sub_13606C0(a1 + 19);
  v3 = a1[18];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (void *)a1[15];
  if ( v4 )
    sub_186B220(v4);
  v5 = (_QWORD *)a1[13];
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 == v6 )
    {
      v10 = a1[12];
      if ( v10 )
        *(_DWORD *)(v10 - 4) = 0;
    }
    else
    {
      do
      {
        v7 = (void (__fastcall ***)(_QWORD))*v5;
        if ( *v5 )
        {
          (**v7)(*v5);
          sub_186B220(v7);
        }
        ++v5;
      }
      while ( v6 != v5 );
      v8 = a1[12];
      v5 = (_QWORD *)a1[13];
      if ( v8 )
        *(_DWORD *)(v8 - 4) = 0;
      if ( !v5 )
        goto LABEL_14;
    }
    *((_DWORD *)v5 - 1) = 0;
    sub_186B220(v5 - 1);
    v8 = a1[12];
  }
  else
  {
    v8 = a1[12];
    if ( !v8 )
      return sub_135E640(a1);
    *(_DWORD *)(v8 - 4) = 0;
  }
LABEL_14:
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  return sub_135E640(a1);
}

