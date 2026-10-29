void __fastcall sub_3D8820(_QWORD *a1)
{
  _QWORD *v1; // rbx
  void (__fastcall *v2)(_QWORD *); // rax
  volatile signed __int32 *v3; // rdi
  signed __int32 v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rdi

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v2 = *(void (__fastcall **)(_QWORD *))(*v1 + 8LL);
    if ( v2 == sub_3CFC50 )
    {
      v3 = (volatile signed __int32 *)v1[12];
      *v1 = &off_4E8E58;
      if ( v3 )
      {
        if ( &_pthread_key_create )
        {
          v4 = _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
        }
        else
        {
          v4 = *((_DWORD *)v3 + 3);
          *((_DWORD *)v3 + 3) = v4 - 1;
        }
        if ( v4 == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
      }
      v5 = v1[8];
      if ( v5 )
      {
        v1[9] = 0;
        qfree(v5);
      }
      v6 = v1[2];
      *v1 = &off_4E8E18;
      if ( v6 )
      {
        v1[3] = 0;
        qfree(v6);
      }
      operator delete(v1, 0x68u);
    }
    else
    {
      v2((_QWORD *)*a1);
    }
  }
}
