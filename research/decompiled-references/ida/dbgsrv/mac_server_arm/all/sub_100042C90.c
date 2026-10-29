/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100042C90
// Address: 0x0000000100042C90

//----- (0000000100042C90) ----------------------------------------------------
__int64 __fastcall sub_100042C90(__int64 a1, __int64 a2)
{
  __int64 v3; // x2
  unsigned int v4; // w8
  __int64 v5; // x8
  __int64 (__fastcall *v6)(__int64, _QWORD); // x8
  __int64 result; // x0
  int16x4_t *v8; // x20
  int qerrno; // w0
  __int64 v10; // x20
  __int64 v11; // x8
  __int64 (__fastcall *v12)(__int64, __int64); // x8
  __int64 v13; // [xsp+0h] [xbp-20h]

  v3 = *(_QWORD *)(a1 + 536);
  v4 = *(unsigned __int16 *)(v3 + 24);
  if ( v4 > 4 )
  {
    switch ( v4 )
    {
      case 0x28u:
        return sub_100042874(a1, a2);
      case 8u:
        v5 = *(_QWORD *)(v3 + 48);
        goto LABEL_12;
      case 5u:
LABEL_5:
        v5 = *(_QWORD *)(v3 + 32);
LABEL_12:
        *(_BYTE *)a2 = *(_BYTE *)(v3 + 40);
        *(_QWORD *)(a2 + 8) = v5;
        goto LABEL_13;
    }
LABEL_8:
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 136);
    if ( !v6 )
      goto LABEL_24;
    goto LABEL_19;
  }
  if ( v4 != 2 )
  {
    if ( v4 == 3 )
      goto LABEL_5;
    goto LABEL_8;
  }
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 136);
  if ( v6 )
  {
LABEL_19:
    v10 = a2;
    result = v6(a1, *(_QWORD *)(a1 + 192));
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 34 )
      {
LABEL_26:
        *(_BYTE *)(a1 + 544) = 1;
        *(_BYTE *)v10 = 1;
        *(_QWORD *)(v10 + 8) = 0;
        return result;
      }
LABEL_29:
      sub_100042860(a1);
    }
    v11 = v13;
    *(_BYTE *)v10 = 0;
    *(_QWORD *)(v10 + 8) = v11;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
LABEL_24:
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 144);
    if ( v12 )
    {
      v10 = a2;
      *(_BYTE *)(a1 + 548) = 0;
      *(_DWORD *)(a1 + 552) = 0;
      result = v12(a1, a1 + 548);
      if ( !(_DWORD)result )
        goto LABEL_26;
    }
    goto LABEL_29;
  }
  *(_BYTE *)a2 = 1;
  *(_QWORD *)(a2 + 8) = 0;
LABEL_13:
  v8 = *(int16x4_t **)(a1 + 536);
  result = sub_100040CDC(a1, v8, 0, nullptr);
  if ( *(_QWORD *)(a1 + 64) && !(_DWORD)result )
    result = sub_100041ACC(a1, v8);
  if ( (_DWORD)result )
  {
    qerrno = get_qerrno();
    longjmp((int *)(a1 + 344), qerrno);
  }
  return result;
}
