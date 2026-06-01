__int64 __fastcall sub_B6F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v7; // rdi
  const char *v8; // r12
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rdi
  __int64 v16; // [rsp-8h] [rbp-80h]
  unsigned int v17; // [rsp+4h] [rbp-74h]
  unsigned __int64 v18; // [rsp+8h] [rbp-70h] BYREF
  __int16 v19; // [rsp+1Eh] [rbp-5Ah] BYREF
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v22[9]; // [rsp+30h] [rbp-48h] BYREF

  v7 = 0;
  v8 = (const char *)a3;
  v18 = a4;
  v22[1] = __readfsqword(0x28u);
  v10 = *(unsigned __int8 *)(a2 + 43);
  *(_QWORD *)(a2 + 48) = 0;
  if ( !(_BYTE)v10 )
    v7 = *(_QWORD *)a2 >> 4;
  v11 = v7 + ((unsigned __int64)a6 << 27);
  v20 = v11;
  if ( (*(_BYTE *)(a1 + 165) & 8) == 0 )
    goto LABEL_12;
  v22[0] = v10;
  v21 = 0;
  v19 = 0;
  v17 = a5;
  while ( 1 )
  {
    v13 = sub_B530(a1, (_QWORD *)a2, v8, v18);
    if ( (_BYTE)v13 )
    {
      a5 = v17;
      v11 = v20;
      goto LABEL_11;
    }
    v12 = sub_5D90(
            (__int64)"COFF File Manual Loading\n"
                     "\n"
                     "        Segment : %A\n"
                     "        Size    : %N\n"
                     "        Use32   : %D\n"
                     "\n"
                     " <Start ~a~ddress :N::18::>\n"
                     " <~S~elector      :N::18::> (0 means that selector\n"
                     "                              will be chosen by IDA)\n"
                     " <Segment ~b~ase  :N::18::> (in paragraphs)\n"
                     "\n"
                     " <STOP LOADING ~F~ILE:C>>\n"
                     "\n"
                     "  IDA does not check values specified by you!\n"
                     "  (this is a feature, not a bug :)\n"
                     "\n"
                     "\n",
            v8,
            &v18,
            v22,
            a2,
            &v21,
            &v20,
            &v19);
    v10 = v16;
    if ( !v12 || v19 )
      return v13;
    v11 = v20;
    a3 = *(_QWORD *)(a1 + 385);
    if ( *(_QWORD *)a2 >= (*(_QWORD *)(a3 + 16) & (unsigned __int64)(16 * v20)) )
      break;
    sub_5A70((__int64)"Bad segment base value");
  }
  a5 = v17;
LABEL_11:
  v14 = v21;
  *(_QWORD *)(a2 + 48) = v21;
  if ( !v14 )
  {
LABEL_12:
    v14 = (int)a5;
    *(_QWORD *)(a2 + 48) = (int)a5;
  }
  set_selector(v14, v11, a3, v10, a5);
  v13 = 1;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 + v18;
  return v13;
}

