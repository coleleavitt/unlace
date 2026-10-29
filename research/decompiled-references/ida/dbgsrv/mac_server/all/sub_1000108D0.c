/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000108D0
// Address: 0x00000001000108D0

//----- (00000001000108D0) ----------------------------------------------------
__int64 __fastcall sub_1000108D0(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  void *v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rsi
  unsigned int v10; // r15d
  unsigned __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned __int32 v13; // eax
  void *v14; // rax
  __int64 v15; // rcx
  const char *v16; // rdi
  unsigned __int8 v18; // [rsp+14h] [rbp-2Ch]

  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 161);
  v5 = *(_QWORD *)(a1 + 136);
  v6 = *(void **)(a1 + 200);
  v7 = v5 + 4 * v4 + 28;
  v8 = *(_QWORD *)(v3 + 144) + v5;
  if ( v6 )
  {
    *(_QWORD *)(v3 + 208) = 0;
    qfree(v6);
    *(_QWORD *)(v3 + 200) = 0;
    *(_QWORD *)(v3 + 216) = 0;
  }
  v9 = *(unsigned int *)(v3 + 180);
  v18 = a2;
  if ( v7 >= v8 )
  {
    if ( (_DWORD)v9 )
    {
      if ( a2 )
      {
LABEL_21:
        LODWORD(v3) = 0;
      }
      else
      {
        LODWORD(v3) = 0;
        sub_100010070((int)"Inconsistent mh.ncmds %u", v9);
      }
      return (unsigned int)v3;
    }
LABEL_22:
    if ( !(v18 | (v8 == v7)) )
      sub_100010070((int)"Inconsistent mh.sizeofcmds");
    *(_BYTE *)(v3 + 440) = 0;
    LOBYTE(v3) = *(_QWORD *)(v3 + 208) != 0;
    return (unsigned int)v3;
  }
  if ( !(_DWORD)v9 )
    goto LABEL_22;
  v10 = 0;
  v11 = v7;
  while ( 1 )
  {
    v12 = 0;
    if ( v8 - v11 >= 8 )
      v12 = *(_DWORD *)(v11 + 4);
    v13 = _byteswap_ulong(v12);
    if ( !*(_BYTE *)(v3 + 160) )
      v13 = v12;
    if ( (v13 & 3) != 0 )
    {
      if ( v18 )
        goto LABEL_21;
      v16 = "load command %u size not a multiple of 4\n";
      goto LABEL_34;
    }
    v7 = v11 + v13;
    if ( v7 > v8 )
    {
      if ( v18 )
        goto LABEL_21;
      v16 = "load command %u extends past end of load commands\n";
      goto LABEL_34;
    }
    if ( v11 > v7 )
    {
      if ( v18 )
        goto LABEL_21;
      v16 = "load command %u: cmdsize overflow";
      goto LABEL_34;
    }
    if ( !v13 )
      break;
    v14 = *(void **)(v3 + 200);
    v15 = *(_QWORD *)(v3 + 208);
    if ( *(_QWORD *)(v3 + 216) < (unsigned __int64)(v15 + 1) )
    {
      v14 = qvector_reserve(v3 + 200, v14, v15 + 1, 8u);
      *(_QWORD *)(v3 + 200) = v14;
      v15 = *(_QWORD *)(v3 + 208);
    }
    *((_QWORD *)v14 + v15) = v11;
    ++*(_QWORD *)(v3 + 208);
    if ( ++v10 < *(_DWORD *)(v3 + 180) )
    {
      v11 = v7;
      if ( v7 < v8 )
        continue;
    }
    goto LABEL_22;
  }
  if ( v18 )
    goto LABEL_21;
  v16 = "load command %u size zero (can't advance to next load commands)";
LABEL_34:
  LODWORD(v3) = 0;
  sub_100010070((int)v16, v10);
  return (unsigned int)v3;
}
