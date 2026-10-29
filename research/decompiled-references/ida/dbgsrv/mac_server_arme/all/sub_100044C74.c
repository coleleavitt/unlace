/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044C74
// Address: 0x0000000100044C74

//----- (0000000100044C74) ----------------------------------------------------
__int64 __fastcall sub_100044C74(__int64 a1, __int64 a2)
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
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = *(_QWORD *)(a1 + 536);
  v4 = *(unsigned __int16 *)(v3 + 24);
  if ( v4 <= 4 )
  {
    if ( v4 == 2 )
    {
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 136);
      if ( !v6 )
      {
        if ( *(_QWORD *)(a1 + 144) )
        {
LABEL_26:
          v12 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 144);
          if ( v12 )
          {
            v10 = a2;
            *(_BYTE *)(a1 + 548) = 0;
            *(_DWORD *)(a1 + 552) = 0;
            result = v12(a1, a1 + 548);
            if ( !(_DWORD)result )
              goto LABEL_28;
          }
          goto LABEL_31;
        }
        *(_BYTE *)a2 = 1;
        *(_QWORD *)(a2 + 8) = 0;
LABEL_15:
        v8 = *(int16x4_t **)(a1 + 536);
        result = sub_100042C40(a1, v8, 0, nullptr);
        if ( *(_QWORD *)(a1 + 64) && !(_DWORD)result )
          result = sub_100043A58(a1, v8);
        if ( (_DWORD)result )
        {
          qerrno = get_qerrno();
          longjmp((int *)(a1 + 344), qerrno);
        }
        return result;
      }
LABEL_21:
      v10 = a2;
      result = v6(a1, *(_QWORD *)(a1 + 192));
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == 34 )
        {
LABEL_28:
          *(_BYTE *)(a1 + 544) = 1;
          *(_BYTE *)v10 = 1;
          *(_QWORD *)(v10 + 8) = 0;
          return result;
        }
LABEL_31:
        sub_100044824(a1);
      }
      v11 = v13;
      *(_BYTE *)v10 = 0;
      *(_QWORD *)(v10 + 8) = v11;
      goto LABEL_15;
    }
    if ( v4 == 3 )
      goto LABEL_5;
LABEL_8:
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 136);
    if ( !v6 )
      goto LABEL_26;
    goto LABEL_21;
  }
  if ( v4 != 40 )
  {
    if ( v4 == 8 )
    {
      v5 = *(_QWORD *)(v3 + 48);
      goto LABEL_14;
    }
    if ( v4 == 5 )
    {
LABEL_5:
      v5 = *(_QWORD *)(v3 + 32);
LABEL_14:
      *(_BYTE *)a2 = *(_BYTE *)(v3 + 40);
      *(_QWORD *)(a2 + 8) = v5;
      goto LABEL_15;
    }
    goto LABEL_8;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_10004483C(a1, a2);
}
