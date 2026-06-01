__int64 __fastcall sub_3FB320(
        int a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        void *a14,
        __int64 a15,
        int a16,
        int a17,
        void *a18,
        __int64 a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        __int64 a25)
{
  int v27; // eax
  unsigned int v28; // ecx
  bool v29; // zf
  unsigned __int64 v30; // r13
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  unsigned int v34; // ecx
  _BOOL8 v35; // rdx
  unsigned __int64 v36; // rax
  int v37; // [rsp+0h] [rbp-38h] BYREF
  int v38; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v39; // [rsp+8h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  if ( (a3 & 0x600) == 0x400 && (a3 & 0xF0000000) == 0x50000000
    || !(unsigned __int8)getinf_flag(10, 0x20000) && (unsigned int)get_auto_state() != 200
    || !(unsigned __int8)is_mapped(a2) )
  {
    return 0;
  }
  v27 = getinf(52);
  v28 = *(char *)(a4 + 96);
  v29 = *(_BYTE *)(a4 + 23) == 0;
  v37 = v27;
  v30 = sub_3FA960(a1, a2, v29, v28, &v37);
  if ( (unsigned int)(getinf(52) & 3) - 1 <= 1 )
  {
    v34 = *(char *)(a4 + 96);
    v35 = *(_BYTE *)(a4 + 23) == 0;
    v38 = 0;
    v36 = sub_3FA960(a1, a2, v35, v34, &v38);
    if ( v36 + 2 < v30 )
      goto LABEL_8;
    v30 = v36;
    v37 = v38;
  }
  if ( !v30 )
    return 0;
LABEL_8:
  if ( (debug & 1) != 0 )
    sub_383DA0();
  return create_strlit(
           a2,
           v30,
           v37,
           v31,
           v32,
           v33,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25);
}

