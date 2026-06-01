/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_832CC
// Address: 0x00000000000832CC

//----- (00000000000832CC) ----------------------------------------------------
__int64 __fastcall sub_832CC(__int64 a1, __int64 a2)
{
  __int64 v4; // x2
  char v5; // w8
  __int64 v6; // x9
  __int64 (__fastcall *v7)(__int64, _QWORD); // x8
  __int64 result; // x0
  char **v9; // x20
  int qerrno; // w0
  __int64 v11; // x8
  __int64 (__fastcall *v12)(__int64, __int64); // x8
  __int64 v13; // [xsp+0h] [xbp-30h]
  __int64 v14; // [xsp+8h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 600);
  switch ( *(_WORD *)(v4 + 24) )
  {
    case 2:
      v7 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 136);
      if ( v7 )
        goto LABEL_6;
      if ( *(_QWORD *)(a1 + 144) )
        goto LABEL_19;
      *(_BYTE *)a2 = 1;
      *(_QWORD *)(a2 + 8) = 0;
      goto LABEL_11;
    case 3:
    case 5:
      v5 = *(_BYTE *)(v4 + 40);
      v6 = *(_QWORD *)(v4 + 32);
      goto LABEL_10;
    case 8:
      v5 = *(_BYTE *)(v4 + 40);
      v6 = *(_QWORD *)(v4 + 48);
LABEL_10:
      *(_BYTE *)a2 = v5;
      *(_QWORD *)(a2 + 8) = v6;
      goto LABEL_11;
    case 0x28:
      return sub_82EB4(a1, a2);
    default:
      v7 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 136);
      if ( !v7 )
      {
LABEL_19:
        v12 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 144);
        if ( v12 )
        {
          *(_BYTE *)(a1 + 612) = 0;
          *(_DWORD *)(a1 + 616) = 0;
          result = v12(a1, a1 + 612);
          if ( !(_DWORD)result )
            goto LABEL_21;
        }
        goto LABEL_24;
      }
LABEL_6:
      result = v7(a1, *(_QWORD *)(a1 + 192));
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == 34 )
        {
LABEL_21:
          *(_BYTE *)(a1 + 608) = 1;
          *(_BYTE *)a2 = 1;
          *(_QWORD *)(a2 + 8) = 0;
          return result;
        }
LABEL_24:
        sub_82EA4(a1);
      }
      v11 = v13;
      *(_BYTE *)a2 = 0;
      *(_QWORD *)(a2 + 8) = v11;
LABEL_11:
      v9 = *(char ***)(a1 + 600);
      result = sub_810F0((__int64 *)a1, (__int64)v9, 0, nullptr);
      if ( !(_DWORD)result && *(_QWORD *)(a1 + 64) )
        result = sub_81F70((__int128 *)a1, v9);
      if ( (_DWORD)result )
      {
        qerrno = get_qerrno();
        longjmp((struct __jmp_buf_tag *)(a1 + 344), qerrno);
      }
      return result;
  }
}
