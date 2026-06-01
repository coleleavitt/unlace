/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B624
// Address: 0x000000000005B624

//----- (000000000005B624) ----------------------------------------------------
unsigned __int64 __fastcall sub_5B624(unsigned __int64 result, _QWORD *a2)
{
  unsigned __int64 v2; // x19
  unsigned int v4; // w8
  __int64 v5; // x9
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  void *v8[2]; // [xsp+28h] [xbp-98h] BYREF
  void *ptr[2]; // [xsp+38h] [xbp-88h]
  __int128 v10; // [xsp+48h] [xbp-78h]
  __int128 v11; // [xsp+58h] [xbp-68h]
  __int128 v12; // [xsp+68h] [xbp-58h]
  _BYTE v13[15]; // [xsp+78h] [xbp-48h] BYREF
  __int64 v14; // [xsp+88h] [xbp-38h]

  v2 = result;
  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_DWORD *)(result + 72);
  LODWORD(result) = *(_DWORD *)(result + 76);
  if ( v4 < (unsigned int)result )
  {
LABEL_13:
    if ( v4 < (unsigned int)result )
    {
      *a2 = *(_QWORD *)(v2 + 40) + 96LL * v4;
      ++*(_DWORD *)(v2 + 72);
      return 1;
    }
    return 0;
  }
  v5 = *(_QWORD *)(v2 + 24);
  v6 = *(_QWORD *)(v2 + 64);
  v7 = v5 - v6;
  if ( v5 == v6 )
    return 0;
  if ( *(_QWORD *)(v2 + 48) != v7 )
  {
    memset(v13, 0, sizeof(v13));
    v12 = 0u;
    v11 = 0u;
    v10 = 0u;
    *(_OWORD *)ptr = 0u;
    *(_OWORD *)v8 = 0u;
    sub_5B978(v2 + 40, v7, (unsigned __int64)v8);
    if ( ptr[1] )
    {
      *(_QWORD *)&v10 = 0;
      qfree(ptr[1]);
      ptr[1] = nullptr;
      *((_QWORD *)&v10 + 1) = 0;
    }
    if ( v8[0] )
    {
      v8[1] = nullptr;
      qfree(v8[0]);
      v8[0] = nullptr;
      ptr[0] = nullptr;
    }
    v6 = *(_QWORD *)(v2 + 64);
  }
  *(_DWORD *)(v2 + 72) = 0;
  if ( !v6 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v2 + 8) + 600LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 600LL));
  result = sub_5B858((_QWORD *)v2, v7);
  *(_DWORD *)(v2 + 76) = result;
  if ( (_DWORD)result )
  {
    v4 = *(_DWORD *)(v2 + 72);
    *(_QWORD *)(v2 + 64) += (unsigned int)result;
    goto LABEL_13;
  }
  return result;
}
