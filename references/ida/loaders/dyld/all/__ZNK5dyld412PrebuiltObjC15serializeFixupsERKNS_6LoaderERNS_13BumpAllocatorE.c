__int64 __fastcall dyld4::PrebuiltObjC::serializeFixups(
        dyld4::PrebuiltObjC *this,
        const dyld4::Loader *a2,
        dyld4::BumpAllocator *a3)
{
  unsigned __int64 v3; // x21
  __int64 v4; // x22
  _QWORD *v5; // x1
  __int64 v7; // x8
  __int64 v8; // x20
  __int64 v9; // x23
  void *v10; // x0
  __int64 v11; // x24
  char *v12; // x1
  size_t *v13; // x24
  char *v14; // t1
  int v15; // w25
  __int64 v16; // x24
  __int64 v17; // x8
  _QWORD *v18; // x24
  __int64 v19; // t1
  int v20; // w25
  __int64 v21; // x10

  if ( !*((_BYTE *)this + 488) )
    return 0;
  if ( (*((__int16 *)a2 + 3) & 0x80000000) == 0 )
    dyld4::PrebuiltObjC::serializeFixups();
  v3 = *((_WORD *)a2 + 3) & 0x7FFF;
  if ( *((_QWORD *)this + 81) <= v3 )
    dyld4::PrebuiltObjC::serializeFixups();
  v4 = *((_QWORD *)this + 79);
  v5 = (_QWORD *)(v4 + 160 * v3);
  if ( !*v5 )
    return 0;
  v7 = *((_QWORD *)a3 + 2);
  v8 = v7 - *(_QWORD *)a3;
  v9 = (unsigned int)(v7 - *(_DWORD *)a3);
  v10 = dyld4::BumpAllocator::append(a3, v5, (char *)&stru_20.filesize);
  v11 = v4 + 160 * v3;
  v14 = *(char **)(v11 + 96);
  v13 = (size_t *)(v11 + 96);
  v12 = v14;
  if ( v14 )
  {
    if ( v12 != (char *)*(unsigned int *)(v4 + 160 * v3 + 52) )
      dyld4::PrebuiltObjC::serializeFixups(v10);
    v15 = *((_DWORD *)a3 + 4) - (v8 + *(_QWORD *)a3);
    *(_DWORD *)(*(_QWORD *)a3 + v9 + 64) = (unsigned __int16)(*((_WORD *)a3 + 8) - (v8 + *(_QWORD *)a3));
    dyld4::BumpAllocator::zeroFill(a3, v12);
    dyld4::BumpAllocator::align(a3, 8u);
    _platform_memmove(
      (void *)(*(_QWORD *)a3 + (unsigned int)v8 + (unsigned __int16)v15),
      *(const void **)(v4 + 160 * v3 + 80),
      *v13);
  }
  v16 = v4 + 160 * v3;
  v19 = *(_QWORD *)(v16 + 136);
  v18 = (_QWORD *)(v16 + 136);
  v17 = v19;
  if ( v19 )
  {
    v20 = *((_DWORD *)a3 + 4) - (v8 + *(_QWORD *)a3);
    v21 = *(_QWORD *)a3 + v9;
    *(_DWORD *)(v21 + 68) = (unsigned __int16)(*((_WORD *)a3 + 8) - (v8 + *(_QWORD *)a3));
    *(_DWORD *)(v21 + 72) = v17;
    dyld4::BumpAllocator::zeroFill(a3, (char *)(8 * v17));
    _platform_memmove(
      (void *)(*(_QWORD *)a3 + (unsigned int)v8 + (unsigned __int16)v20),
      *(const void **)(v4 + 160 * v3 + 120),
      8LL * *v18);
  }
  return v8;
}
