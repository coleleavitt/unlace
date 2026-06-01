/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83124
// Address: 0x0000000000083124

//----- (0000000000083124) ----------------------------------------------------
__int64 __fastcall sub_83124(__int64 a1, __int64 a2, char a3)
{
  char **v5; // x21
  int v6; // w0
  int qerrno; // w0
  unsigned int v8; // w8
  __int64 result; // x0
  __int64 v10; // x8
  char v11[8]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v12; // [xsp+10h] [xbp-40h]
  __int64 v13; // [xsp+18h] [xbp-38h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a3 & 1) != 0 )
  {
    v5 = *(char ***)(a1 + 600);
    v6 = sub_810F0((__int64 *)a1, (__int64)v5, 0, nullptr);
    if ( !v6 && *(_QWORD *)(a1 + 64) )
      v6 = sub_81F70((__int128 *)a1, v5);
    if ( v6 )
    {
      qerrno = get_qerrno();
      longjmp((struct __jmp_buf_tag *)(a1 + 344), qerrno);
    }
  }
  v11[0] = 1;
  v12 = 0;
  v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
  if ( v8 > 0x2C )
  {
    if ( v8 == 126 )
    {
      result = sub_83124(a1, v11, 1);
      v10 = ~v12;
      goto LABEL_17;
    }
    if ( v8 == 45 )
    {
      result = sub_83124(a1, v11, 1);
      v10 = -v12;
      goto LABEL_17;
    }
    return sub_832CC(a1, a2);
  }
  if ( v8 == 33 )
  {
    result = sub_83124(a1, v11, 1);
    v10 = v12 == 0;
    goto LABEL_17;
  }
  if ( v8 != 43 )
    return sub_832CC(a1, a2);
  result = sub_83124(a1, v11, 1);
  v10 = v12;
LABEL_17:
  *(_QWORD *)(a2 + 8) = v10;
  *(_BYTE *)a2 = v11[0];
  return result;
}
