/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CEF50
// Address: 0x00000000000CEF50

//----- (00000000000CEF50) ----------------------------------------------------
__int64 __fastcall sub_CEF50(__int64 a1, __int128 *a2)
{
  __int64 (__fastcall *v2)(_QWORD, __int64, __int64); // x8
  __int64 v4; // x20
  __int64 result; // x0
  __int64 v7; // x0
  _QWORD *v8; // x21
  void *v9; // x23
  __int128 v10; // q0
  __int128 v11; // q1
  __int128 v12; // q1
  __int128 v13; // q2
  __int128 v14; // q3
  unsigned __int64 v15; // x11
  __int64 v16; // x8
  _QWORD *v17; // x9

  if ( !a2 )
    return 4294967294LL;
  v2 = *((__int64 (__fastcall **)(_QWORD, __int64, __int64))a2 + 8);
  if ( !v2 )
    return 4294967294LL;
  if ( !*((_QWORD *)a2 + 9) )
    return 4294967294LL;
  v4 = *((_QWORD *)a2 + 7);
  if ( !v4 || *(__int128 **)v4 != a2 )
    return 4294967294LL;
  result = 4294967294LL;
  if ( a1 && (unsigned int)(*(_DWORD *)(v4 + 8) - 16180) <= 0x1F )
  {
    v7 = v2(*((_QWORD *)a2 + 10), 1, 7160);
    if ( !v7 )
      return 4294967292LL;
    v8 = (_QWORD *)v7;
    if ( *(_QWORD *)(v4 + 72) )
    {
      v9 = (void *)(*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64))a2 + 8))(
                     *((_QWORD *)a2 + 10),
                     (unsigned int)(1 << *(_DWORD *)(v4 + 56)),
                     1);
      if ( !v9 )
      {
        (*((void (__fastcall **)(_QWORD, _QWORD *))a2 + 9))(*((_QWORD *)a2 + 10), v8);
        return 4294967292LL;
      }
    }
    else
    {
      v9 = nullptr;
    }
    v10 = a2[2];
    v11 = *a2;
    *(_OWORD *)(a1 + 16) = a2[1];
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)a1 = v11;
    v12 = a2[6];
    v13 = a2[3];
    v14 = a2[4];
    *(_OWORD *)(a1 + 80) = a2[5];
    *(_OWORD *)(a1 + 96) = v12;
    *(_OWORD *)(a1 + 48) = v13;
    *(_OWORD *)(a1 + 64) = v14;
    memcpy(v8, (const void *)v4, 0x1BF8u);
    *v8 = a1;
    v15 = *(_QWORD *)(v4 + 104);
    v16 = v4 + 1368;
    v17 = v8 + 171;
    if ( v15 >= v4 + 1368 && v15 <= v4 + 7140 )
    {
      v8[13] = (char *)v8 + v15 - v4;
      v8[14] = (char *)v17 + *(_QWORD *)(v4 + 112) - v16;
    }
    v8[18] = (char *)v17 + *(_QWORD *)(v4 + 144) - v16;
    if ( v9 )
      memcpy(v9, *(const void **)(v4 + 72), (unsigned int)(1 << *(_DWORD *)(v4 + 56)));
    v8[9] = v9;
    *(_QWORD *)(a1 + 56) = v8;
    return 0;
  }
  return result;
}
