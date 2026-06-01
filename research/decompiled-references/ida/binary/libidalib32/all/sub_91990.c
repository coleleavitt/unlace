__int64 __fastcall sub_91990(unsigned __int8 *a1)
{
  unsigned int v1; // ebp
  void *v2; // r12
  void (__fastcall *v3)(void *); // rax

  v1 = a1[21];
  if ( !(_BYTE)v1 )
  {
    v2 = (void *)(*(__int64 (**)(void))(*(_QWORD *)a1 + 64LL))();
    v1 = sub_91180((__int64)a1, (__int64)v2);
    if ( v2 )
    {
      v3 = *(void (__fastcall **)(void *))(*(_QWORD *)v2 + 8LL);
      if ( v3 == sub_8E310 )
        operator delete(v2, 0x18u);
      else
        v3(v2);
    }
  }
  return v1;
}

