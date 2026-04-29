double __usercall dyld4::PrebuiltLoader::fileID@<D0>(
        __int64 *__return_ptr a1@<X8>,
        dyld4::PrebuiltLoader *this@<X0>,
        const dyld4::FileManager *a3@<X1>)
{
  __int64 v4; // x8
  char *v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0
  double result; // d0
  __int64 v9; // x8
  char v10; // w9
  UUID v11; // [xsp+0h] [xbp-40h] BYREF

  if ( this && (v4 = *((unsigned __int16 *)this + 9), *((_WORD *)this + 9)) )
  {
    v5 = (char *)this + v4;
    v6 = *(_QWORD *)((char *)this + v4 + 8);
    *(_OWORD *)v11 = *(_OWORD *)((char *)this + v4 + 44);
    v7 = dyld4::FileManager::fsidForUUID(a3, (const UUID *)v11);
    v9 = *((_QWORD *)v5 + 2);
    v10 = v5[60];
    *a1 = v6;
    a1[1] = v7;
    a1[2] = v9;
    *((_BYTE *)a1 + 24) = v10;
  }
  else
  {
    *(_OWORD *)a1 = 0u;
    *((_OWORD *)a1 + 1) = 0u;
    return 0.0;
  }
  return result;
}
