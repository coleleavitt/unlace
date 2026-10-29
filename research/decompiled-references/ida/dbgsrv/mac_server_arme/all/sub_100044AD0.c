/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044AD0
// Address: 0x0000000100044AD0

//----- (0000000100044AD0) ----------------------------------------------------
__int64 __fastcall sub_100044AD0(__int64 a1, __int64 a2, int a3)
{
  int16x4_t *v5; // x21
  int v6; // w0
  bool v7; // zf
  unsigned int v8; // w8
  __int64 result; // x0
  __int64 v10; // x8
  int qerrno; // w0
  char v12[8]; // [xsp+8h] [xbp-38h] BYREF
  __int64 v13; // [xsp+10h] [xbp-30h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( a3 )
  {
    v5 = *(int16x4_t **)(a1 + 536);
    v6 = sub_100042C40(a1, v5, 0, nullptr);
    if ( *(_QWORD *)(a1 + 64) )
      v7 = v6 == 0;
    else
      v7 = 0;
    if ( v7 )
      v6 = sub_100043A58(a1, v5);
    if ( v6 )
    {
      qerrno = get_qerrno();
      longjmp((int *)(a1 + 344), qerrno);
    }
  }
  v12[0] = 1;
  v13 = 0;
  v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
  if ( v8 > 0x2C )
  {
    if ( v8 == 126 )
    {
      result = sub_100044AD0(a1, v12, 1);
      v10 = ~v13;
      goto LABEL_21;
    }
    if ( v8 == 45 )
    {
      result = sub_100044AD0(a1, v12, 1);
      v10 = -v13;
      goto LABEL_21;
    }
  }
  else
  {
    if ( v8 == 33 )
    {
      result = sub_100044AD0(a1, v12, 1);
      v10 = v13 == 0;
      goto LABEL_21;
    }
    if ( v8 == 43 )
    {
      result = sub_100044AD0(a1, v12, 1);
      v10 = v13;
LABEL_21:
      *(_QWORD *)(a2 + 8) = v10;
      *(_BYTE *)a2 = v12[0];
      return result;
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100044C74(a1, a2);
}
