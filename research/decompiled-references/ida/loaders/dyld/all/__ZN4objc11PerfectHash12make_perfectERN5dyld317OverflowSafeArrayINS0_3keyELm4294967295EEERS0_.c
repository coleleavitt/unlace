void __fastcall objc::PerfectHash::make_perfect(__int64 a1, _DWORD *a2)
{
  int v4; // w8
  __int64 v5; // x21
  __int64 v6; // x0
  char v7; // w8
  int v8; // w8
  unsigned int v9; // w11
  unsigned __int64 v10; // x21
  int v11; // w9
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x8
  __int64 v15; // [xsp+0h] [xbp-460h] BYREF
  unsigned int v16; // [xsp+Ch] [xbp-454h] BYREF
  __int128 v17; // [xsp+10h] [xbp-450h] BYREF
  __int128 v18; // [xsp+20h] [xbp-440h]
  vm_size_t size; // [xsp+30h] [xbp-430h]
  _BYTE __src[1024]; // [xsp+38h] [xbp-428h] BYREF

  v4 = 0;
  size = 0;
  v17 = 0u;
  v18 = 0u;
  v16 = 0;
  v15 = 0;
  do
    v5 = (unsigned int)(1 << v4++);
  while ( (unsigned int)v5 < *(_DWORD *)(a1 + 16) );
  v6 = objc::findhash(&v17, &v16, &v15, __src, v5, a1);
  if ( (v6 & 1) != 0 )
    goto LABEL_7;
  v7 = -1;
  do
    ++v7;
  while ( (unsigned int)(1 << v7) < *(_DWORD *)(a1 + 16) );
  LODWORD(v5) = 2 << v7;
  v6 = objc::findhash(&v17, &v16, &v15, __src, (unsigned int)(2 << v7), a1);
  if ( (v6 & 1) != 0 )
  {
LABEL_7:
    v8 = 0;
    *a2 = v5;
    a2[1] = *(_QWORD *)(a1 + 16);
    do
      v9 = 1 << v8++;
    while ( v9 < v16 );
    v10 = v18;
    v11 = v18 - 1;
    a2[2] = 65 - v8;
    a2[3] = v11;
    *((_QWORD *)a2 + 2) = v15;
    v12 = *((_QWORD *)a2 + 133);
    v13 = v10;
    if ( v12 != v10 )
    {
      v13 = v10;
      if ( v12 <= v10 )
      {
        v6 = (__int64)dyld3::OverflowSafeArray<unsigned char,4294967295ul>::reserve((_QWORD *)a2 + 131, v10);
        v13 = v18;
      }
      *((_QWORD *)a2 + 133) = v10;
    }
    if ( v13 )
    {
      if ( !v10 )
LABEL_18:
        objc::PerfectHash::make_perfect(v6);
      v14 = 0;
      while ( 1 )
      {
        *(_BYTE *)(*((_QWORD *)a2 + 131) + v14) = *(_BYTE *)(v17 + 24 * v14);
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned __int64)v18 <= v14 )
          break;
        if ( *((_QWORD *)a2 + 133) <= v14 )
          goto LABEL_18;
      }
    }
    _platform_memmove(a2 + 6, __src, 0x400u);
  }
  else
  {
    __bzero(a2, 0x440u);
  }
  *(_QWORD *)&v18 = 0;
  if ( *((_QWORD *)&v18 + 1) )
    vm_deallocate(mach_task_self_, *((vm_address_t *)&v18 + 1), size);
}
