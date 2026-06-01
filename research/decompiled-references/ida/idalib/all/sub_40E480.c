__int64 __fastcall sub_40E480(
        __int64 a1,
        unsigned __int64 a2,
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
  char v28; // dl
  unsigned __int64 v29; // r13
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  char v33; // cl
  char v34; // dl
  unsigned __int64 v35; // rax
  int v36; // [rsp+0h] [rbp-38h] BYREF
  int v37; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v38; // [rsp+8h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  if ( (a3 & 0x600) == 0x400 && (a3 & 0xF0000000) == 0x50000000
    || !(unsigned __int8)getinf_flag(10, &stru_20000) && (unsigned int)get_auto_state() != 200
    || !(unsigned __int8)is_mapped(a2) )
  {
    return 0;
  }
  v27 = getinf(52);
  v28 = *(_BYTE *)(a4 + 43) == 0;
  v36 = v27;
  v29 = sub_40DAB0(a1, a2, v28, *(_BYTE *)(a4 + 184), (unsigned int *)&v36);
  if ( (unsigned int)(getinf(52) & 3) - 1 <= 1 )
  {
    v33 = *(_BYTE *)(a4 + 184);
    v34 = *(_BYTE *)(a4 + 43) == 0;
    v37 = 0;
    v35 = sub_40DAB0(a1, a2, v34, v33, (unsigned int *)&v37);
    if ( v35 + 2 < v29 )
      goto LABEL_8;
    v29 = v35;
    v36 = v37;
  }
  if ( !v29 )
    return 0;
LABEL_8:
  if ( (debug & 1) != 0 )
    sub_3879F0();
  return create_strlit(
           a2,
           v29,
           v36,
           v30,
           v31,
           v32,
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
