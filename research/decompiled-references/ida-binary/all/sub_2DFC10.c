__int64 __fastcall sub_2DFC10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int *a5,
        char *a6,
        double a7)
{
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 flags; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // r9d
  int v23; // eax
  unsigned __int64 v24; // r9
  char v25; // al
  __int64 bytes; // rax
  char v28; // al
  __int64 data_elsize; // [rsp+10h] [rbp-168h]
  unsigned __int64 v31; // [rsp+10h] [rbp-168h]
  __int64 dtype_size; // [rsp+10h] [rbp-168h]
  __int64 v33; // [rsp+18h] [rbp-160h]
  _BYTE v34[280]; // [rsp+20h] [rbp-158h] BYREF
  unsigned __int64 v35; // [rsp+138h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v10 = sub_330EE0(a1, 0, &unk_5E7EC0);
  v12 = a1 + 384;
  v13 = (unsigned __int8)v10 - 41;
  if ( (unsigned __int8)(v10 - 41) >= 8u )
    v13 = 0;
  v14 = sub_1EA680(v12, 0, (unsigned int)(v10 - 41), v11, a7);
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 40) + 128LL))(*(_QWORD *)(v14 + 40));
  if ( v15 == -1 )
    return 0;
  v16 = v15;
  flags = get_flags_ex(v15, 4);
  if ( (~(_WORD)flags & 0x600) != 0 )
  {
    v33 = flags;
    get_opinfo(v34, v16, v13);
    data_elsize = get_data_elsize(v16, v33, v34);
    v21 = nbits(v16);
    v22 = v21 + 14;
    v23 = v21 + 7;
    if ( v23 >= 0 )
      v22 = v23;
    v24 = data_elsize * (v22 >> 3);
    if ( v24 <= 0x20 && (v31 = v24, bytes = get_bytes(a3, v24, v16, 0, 0), v24 = v31, bytes == v31) )
    {
      v28 = getinf_flag(3, 32);
      v24 = v31;
      if ( v28 )
      {
        memrev(a3, v31);
        v24 = v31;
      }
      v25 = 1;
    }
    else
    {
      v25 = 0;
    }
    *(_QWORD *)(a2 + 16) = v16;
    goto LABEL_10;
  }
  decode_insn(a2, v16, v17, flags, v19, v20, a7);
  if ( !(unsigned __int8)sub_330C00(a2 + 40LL * (int)(v13 + 1), 0) )
    return 0;
  dtype_size = get_dtype_size(*(unsigned __int8 *)(a2 + 40LL * (int)v13 + 45));
  v25 = sub_331AD0(a3, v16, v13, a2, 0);
  v24 = dtype_size;
LABEL_10:
  if ( a4 )
    *a4 = v24;
  if ( a5 )
    *a5 = v13;
  if ( a6 )
    *a6 = v25;
  return 1;
}
