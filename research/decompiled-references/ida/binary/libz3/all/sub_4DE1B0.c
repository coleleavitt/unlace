__int64 __fastcall sub_4DE1B0(_QWORD *a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  _QWORD *v4; // r12
  void *v5; // rbp
  __int64 v6; // rdi

  v2 = (_QWORD *)a1[10];
  *a1 = off_1C4F608;
  if ( v2 )
  {
    v3 = (_QWORD *)*v2;
    if ( *v2 )
    {
      v4 = &v3[*((unsigned int *)v3 - 1)];
      if ( v3 == v4 )
        goto LABEL_8;
      do
      {
        v5 = (void *)*v3;
        if ( *v3 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 24LL))(*v3);
          sub_186B220(v5);
        }
        ++v3;
      }
      while ( v4 != v3 );
      v4 = (_QWORD *)*v2;
      if ( *v2 )
      {
LABEL_8:
        *((_DWORD *)v4 - 1) = 0;
        v2[1] = 0;
        sub_186B220(v4 - 1);
      }
    }
    sub_186B220(v2);
  }
  v6 = a1[9];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  return sub_4DA630((__int64)a1);
}

