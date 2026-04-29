unsigned __int64 __fastcall sub_1640(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ebp
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  _BYTE *v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  char *v30; // r14
  char *v31; // rcx
  char v32; // [rsp+0h] [rbp-68h]
  char v33; // [rsp+0h] [rbp-68h]
  char v34; // [rsp+3h] [rbp-65h] BYREF
  _BYTE v35[9]; // [rsp+4h] [rbp-64h] BYREF
  _BYTE v36[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  qlseek(a1, 2, 0);
  qstrncpy(byte_4120, "UNKNOWN", 1024);
  dword_4110 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = 0;
        if ( qlread(a1, &v34, 1) != 1 )
          sub_1480((__int64)"unable to read the record type");
        if ( v34 != (char)0x80 )
          break;
        if ( qlread(a1, &dword_4110, 4) != 4 )
          sub_1480((__int64)"unable to read entry_point");
        setinf(15, dword_4110);
        v9 = getseg(dword_4110);
        v10 = 0;
        if ( v9 )
          v10 = *(_QWORD *)(v9 + 48);
        setinf(14, v10);
      }
      if ( v34 != -127 )
        break;
      memset(v35, 0, sizeof(v35));
      if ( qlread(a1, v35, 9) != 9 )
        sub_1480((__int64)"unable to read header (%zu bytes)", 9u);
      if ( v35[2] != 1 )
        sub_1480((__int64)"unsupported granularity (%d)", v35[2]);
      v27 = &unk_3BC0;
      v28 = 0;
      while ( v35[0] != *v27 )
      {
        ++v28;
        v27 += 16;
        if ( v28 == 25 )
          sub_1480((__int64)"processor type '0x%X' is currently unsupported", v35[0]);
      }
      v29 = 16LL * v28;
      v30 = *(char **)((char *)&unk_3BC0 + v29 + 8);
      if ( s2 && strcmp(*(const char **)((char *)&unk_3BC0 + v29 + 8), s2) )
        sub_1480((__int64)"only one processor record is allowed");
      s2 = v30;
      set_processor_type(v30, 1);
      switch ( v35[1] )
      {
        case 0:
          v31 = "UNDEFINED";
          break;
        case 1:
          v31 = "CODE";
          break;
        case 2:
          v31 = "DATA";
          break;
        case 3:
          v31 = "IDATA";
          break;
        case 4:
          v31 = "XDATA";
          break;
        case 5:
          v31 = "YDATA";
          break;
        case 6:
          v31 = "BDATA";
          break;
        case 7:
          v31 = "IO";
          break;
        case 8:
          v31 = "REG";
          break;
        case 9:
          v31 = "ROMDATA";
          break;
        default:
          sub_1480((__int64)"invalid segment '0x%X'", v35[1]);
      }
      sub_1580(a1, *(int *)&v35[3], *(__int16 *)&v35[7], (__int64)v31, *(double *)a2.m128_u64, *(double *)a3.m128_u64);
    }
    if ( !v34 )
      break;
    if ( v34 <= 0 )
      sub_1480((__int64)"invalid record type '0x%X'\n", (unsigned __int8)v34);
    if ( *(_DWORD *)(get_ph() + 4) == -1 )
      goto LABEL_48;
    *(_QWORD *)v35 = 0;
    if ( qlread(a1, v35, 8) != 8 )
      sub_1480((__int64)"unable to read header (%zu bytes)", 8u);
    sub_1580(a1, *(int *)v35, *(__int16 *)&v35[4], (__int64)"DATA", *(double *)a2.m128_u64, *(double *)a3.m128_u64);
  }
  v11 = qlsize(a1);
  v12 = v11 - qlseek(a1, 0, 1);
  if ( v12 > 0x3FF )
    sub_1480((__int64)"creator length is too large (%u >= %zu", v12, 0x400u);
  v13 = qlread(a1, byte_4120, (int)v12);
  if ( v13 != v12 )
    sub_1480((__int64)"unable to read creator string (i read %zd)", v13);
  byte_4120[v12] = 0;
  if ( *(_DWORD *)(get_ph() + 4) == -1 )
LABEL_48:
    sub_13D0((__int64)"Failed to determine the target processor, please specify it manually");
  create_filename_cmt();
  if ( dword_4110 == -1 )
    qstrncpy(v36, "NOT DETECTED", 20);
  else
    *(double *)a2.m128_u64 = qsnprintf(v36, 20, "0x%X", dword_4110);
  sub_1300(
    (__int64)"Creator program   : %s",
    (__int64)byte_4120,
    v14,
    v15,
    v16,
    v17,
    a2,
    a3,
    a4,
    a5,
    v18,
    v19,
    a8,
    a9,
    v32);
  sub_1300((__int64)"Entry point       : %s", (__int64)v36, v20, v21, v22, v23, a2, a3, a4, a5, v24, v25, a8, a9, v33);
  return v37 - __readfsqword(0x28u);
}
