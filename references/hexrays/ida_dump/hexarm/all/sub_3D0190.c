void __fastcall sub_3D0190(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  int v5; // eax

  *a1 = &off_4E3518;
  v2 = (volatile signed __int32 *)a1[12];
  if ( v2 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) != 1 )
        goto LABEL_4;
    }
    else
    {
      v5 = *((_DWORD *)v2 + 3);
      *((_DWORD *)v2 + 3) = v5 - 1;
      if ( v5 != 1 )
        goto LABEL_4;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 24LL))(v2);
  }
LABEL_4:
  v3 = a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    qfree(v3);
  }
  v4 = a1[2];
  *a1 = &off_4E34D8;
  if ( v4 )
  {
    a1[3] = 0;
    qfree(v4);
  }
  operator delete(a1, 0x68u);
}
