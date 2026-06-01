__int64 __fastcall sub_3DA6A0(__int64 a1, __int64 *a2, _DWORD *a3, __int64 *a4, __int64 a5, double a6)
{
  int v6; // r9d
  int v7; // r10d
  __int64 v11; // rsi
  int v13; // edi
  _QWORD *v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r14
  unsigned int v17; // edx

  v6 = *(_DWORD *)(a5 + 20);
  v7 = *(_DWORD *)(a5 + 24);
  if ( v6 < 0 )
    return 0;
  v11 = a4[8];
  v13 = *(_DWORD *)(v11 + 64);
  if ( v6 < (unsigned __int64)a4[15] )
  {
    if ( v7 < 0 )
    {
      if ( v6 >= v13 )
        return 0;
LABEL_13:
      if ( v6 < (unsigned int)v13 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v11 + 528) + 8LL * v6);
LABEL_15:
        if ( v16 )
        {
          sub_3DA220(a1, a2, a3, v16);
          return 1;
        }
        goto LABEL_16;
      }
LABEL_24:
      sub_3CF000(a6);
    }
    v14 = (_QWORD *)(a4[14] + 24LL * v6);
    if ( (unsigned __int64)v7 < v14[1] )
    {
      v15 = *(_QWORD *)(*v14 + 8LL * v7);
      if ( v6 >= v13 )
      {
        v16 = 0;
        if ( v15 )
        {
LABEL_8:
          if ( !(unsigned __int8)sub_3D6F70(a1, a2, a3, *(_QWORD *)(a5 + 64)) )
            sub_3D9AA0(a1, a2, a3, v16, v15);
          return 1;
        }
        goto LABEL_16;
      }
      if ( v6 < (unsigned int)v13 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v11 + 528) + 8LL * v6);
        if ( v15 )
          goto LABEL_8;
        goto LABEL_15;
      }
      goto LABEL_24;
    }
  }
  if ( v6 < v13 )
    goto LABEL_13;
LABEL_16:
  v17 = 0;
  if ( v7 | v6 )
    return v17;
  return sub_3D6F70(a1, a2, a3, a4[1]);
}
