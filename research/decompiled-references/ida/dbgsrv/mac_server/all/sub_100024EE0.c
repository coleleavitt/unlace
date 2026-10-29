/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024EE0
// Address: 0x0000000100024EE0

//----- (0000000100024EE0) ----------------------------------------------------
__int64 __fastcall sub_100024EE0(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  unsigned int v4; // ebx
  const char *v5; // rsi
  __int128 v7; // [rsp+0h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-20h]

  v7 = 0;
  v8 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = _s1;
  if ( (unsigned __int8)eval_idc_snippet(nullptr, v3, (void **)&v7, 0) )
  {
    *(_QWORD *)(a2 + 8) = 1;
    v4 = 0;
  }
  else
  {
    if ( *((_QWORD *)&v7 + 1) )
      v5 = (const char *)v7;
    else
      v5 = _s1;
    v4 = throw_idc_exception((unsigned __int8 *)a2, v5);
  }
  if ( (_QWORD)v7 )
  {
    *((_QWORD *)&v7 + 1) = 0;
    qfree((void *)v7);
  }
  return v4;
}
