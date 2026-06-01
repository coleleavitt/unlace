/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006B494
// Address: 0x000000014006B494

//----- (000000014006B494) ----------------------------------------------------
__int64 sub_14006B494()
{
  int v5; // ebp
  bool v7; // zf
  int v12; // edi
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  int v18; // esi
  int v19; // r10d
  unsigned int v20; // r11d
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  int v41; // [rsp+20h] [rbp+8h]

  _RAX = 0;
  __asm { cpuid }
  v5 = _RAX;
  _RAX = 1;
  v7 = ((unsigned int)_RBX ^ 0x756E6547 | (unsigned int)_RCX ^ 0x6C65746E | (unsigned int)_RDX ^ 0x49656E69) == 0;
  __asm { cpuid }
  v12 = _RCX;
  if ( v7
    && ((v13 = _RAX & 0xFFF3FF0, qword_1400CA060 = 0x8000, qword_1400CA068 = -1, v13 == 67264)
     || v13 == 132704
     || v13 == 132720
     || (v14 = (unsigned int)(v13 - 198224), (unsigned int)v14 <= 0x20) && (v15 = 0x100010001LL, _bittest64(&v15, v14))) )
  {
    v16 = dword_1400CC028 | 1;
    dword_1400CC028 |= 1u;
  }
  else
  {
    v16 = dword_1400CC028;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( v5 >= 7 )
  {
    _RAX = 7;
    __asm { cpuid }
    v18 = _RDX;
    v17 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      dword_1400CC028 = v16 | 2;
    if ( (int)_RAX >= 1 )
    {
      _RAX = 7;
      __asm { cpuid }
      v19 = _RDX;
    }
    _RAX = 36;
    if ( v5 >= 36 )
    {
      __asm { cpuid }
      v20 = _RBX;
    }
  }
  v36 = qword_1400CA050 & 0xFFFFFFFFFFFFFFFEuLL;
  dword_1400CA058 = 1;
  dword_1400CA05C = 2;
  qword_1400CA050 &= ~1uLL;
  if ( (v12 & 0x100000) != 0 )
  {
    v36 &= ~0x10uLL;
    dword_1400CA058 = 2;
    qword_1400CA050 = v36;
    dword_1400CA05C = 6;
  }
  if ( (v12 & 0x8000000) != 0 )
  {
    __asm { xgetbv }
    v41 = v36;
    if ( (v12 & 0x10000000) == 0 || (v36 & 6) != 6 )
    {
LABEL_32:
      if ( (v19 & 0x200000) != 0 && (*(_QWORD *)&v41 & 0x80000LL) != 0 )
        qword_1400CA050 &= ~0x80uLL;
      return 0;
    }
    v37 = dword_1400CA05C | 8;
    dword_1400CA058 = 3;
    dword_1400CA05C |= 8u;
    if ( (v17 & 0x20) != 0 )
    {
      dword_1400CA058 = 5;
      dword_1400CA05C = v37 | 0x20;
      v38 = qword_1400CA050 & 0xFFFFFFFFFFFFFFFDuLL;
      qword_1400CA050 &= ~2uLL;
      if ( (v17 & 0xD0030000) != 0xD0030000 )
      {
LABEL_26:
        if ( (v18 & 0x800000) != 0 )
          qword_1400CA050 = v38 & 0xFFFFFFFFFEFFFFFFuLL;
        if ( (v19 & 0x80000) != 0 && (v41 & 0xE0) == 0xE0 )
        {
          dword_1400CC024 = v20 & 0x400FF;
          v39 = qword_1400CA050 & ~(HIWORD(v20) & 6 | 0x1000029LL);
          qword_1400CA050 = v39;
          if ( (unsigned __int8)v20 > 1u )
            qword_1400CA050 = v39 & 0xFFFFFFFFFFFFFFBFuLL;
        }
        goto LABEL_32;
      }
      if ( (v41 & 0xE0) == 0xE0 )
      {
        dword_1400CA05C |= 0x40u;
        v38 = qword_1400CA050 & 0xFFFFFFFFFFFFFFDBuLL;
        dword_1400CA058 = 6;
        qword_1400CA050 &= 0xFFFFFFFFFFFFFFDBuLL;
        goto LABEL_26;
      }
    }
    v38 = qword_1400CA050;
    goto LABEL_26;
  }
  return 0;
}
// 1400CA050: using guessed type __int64 qword_1400CA050;
// 1400CA058: using guessed type int dword_1400CA058;
// 1400CA05C: using guessed type int dword_1400CA05C;
// 1400CA060: using guessed type __int64 qword_1400CA060;
// 1400CA068: using guessed type __int64 qword_1400CA068;
// 1400CC024: using guessed type int dword_1400CC024;
// 1400CC028: using guessed type int dword_1400CC028;
