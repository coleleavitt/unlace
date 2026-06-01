__int64 __fastcall sub_11B710(__int64 a1)
{
  int outfile_encoding_idx; // edi
  __int64 v3; // rbp
  int v5; // r12d

  if ( batch )
  {
    outfile_encoding_idx = get_outfile_encoding_idx();
    if ( outfile_encoding_idx )
      goto LABEL_3;
LABEL_10:
    outfile_encoding_idx = get_default_encoding_idx();
    goto LABEL_11;
  }
  if ( !qfilesize() )
  {
    outfile_encoding_idx = get_outfile_encoding_idx();
    if ( outfile_encoding_idx )
      goto LABEL_11;
    goto LABEL_10;
  }
  v3 = 0;
  v5 = sub_119670((__int64)"~A~ppend", (__int64)"~O~verwrite", (__int64)"~C~ancel", 0xFFFFFFFF, 1011, a1);
  if ( v5 == -1 )
    return v3;
  outfile_encoding_idx = get_outfile_encoding_idx();
  if ( !outfile_encoding_idx )
    outfile_encoding_idx = get_default_encoding_idx();
  if ( v5 == 1 )
  {
LABEL_3:
    if ( outfile_encoding_idx <= 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
LABEL_11:
  if ( outfile_encoding_idx > 0 )
LABEL_7:
    get_encoding_bpu();
LABEL_4:
  v3 = qfopen();
  if ( !v3 )
    sub_F9540(1002, a1);
  return v3;
}

