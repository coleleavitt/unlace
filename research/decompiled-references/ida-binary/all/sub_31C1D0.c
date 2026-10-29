__int64 __fastcall sub_31C1D0(__int64 a1)
{
  int outfile_encoding_idx; // edi
  char v3; // al
  char v4; // al
  __int64 v5; // rbp
  int encoding_bpu; // edx
  int v8; // r12d
  _BYTE v9[3]; // [rsp+5h] [rbp-23h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( batch )
  {
    outfile_encoding_idx = get_outfile_encoding_idx();
    v3 = 119;
    if ( outfile_encoding_idx )
      goto LABEL_3;
LABEL_12:
    outfile_encoding_idx = get_default_encoding_idx(1);
    goto LABEL_13;
  }
  if ( !qfilesize(a1) )
  {
    outfile_encoding_idx = get_outfile_encoding_idx();
    if ( outfile_encoding_idx )
      goto LABEL_13;
    goto LABEL_12;
  }
  v5 = 0;
  v8 = sub_31A120((__int64)"~A~ppend", (__int64)"~O~verwrite", (__int64)"~C~ancel", 0xFFFFFFFF, 0x3F3u, a1);
  if ( v8 == -1 )
    return v5;
  outfile_encoding_idx = get_outfile_encoding_idx();
  if ( !outfile_encoding_idx )
    outfile_encoding_idx = get_default_encoding_idx(1);
  if ( v8 != 1 )
  {
LABEL_13:
    v9[0] = 119;
    if ( outfile_encoding_idx <= 0 )
      goto LABEL_4;
    goto LABEL_8;
  }
  v3 = 97;
LABEL_3:
  v9[0] = v3;
  if ( outfile_encoding_idx <= 0 )
  {
LABEL_4:
    v4 = 116;
    goto LABEL_5;
  }
LABEL_8:
  encoding_bpu = get_encoding_bpu();
  v4 = 98;
  if ( encoding_bpu <= 1 )
    goto LABEL_4;
LABEL_5:
  v9[1] = v4;
  v9[2] = 0;
  v5 = qfopen(a1, v9);
  if ( !v5 )
    sub_17CE30(1002, a1);
  return v5;
}
