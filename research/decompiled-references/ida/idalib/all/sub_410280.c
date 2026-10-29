__int64 __fastcall sub_410280(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // rdi
  char v11; // r15
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // r15
  void **v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbp
  int v22; // eax
  unsigned __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // [rsp+0h] [rbp-1D8h]
  __int64 v28; // [rsp+8h] [rbp-1D0h]
  int v29; // [rsp+10h] [rbp-1C8h]
  int v30; // [rsp+10h] [rbp-1C8h]
  __int128 *v31; // [rsp+18h] [rbp-1C0h]
  int v32; // [rsp+20h] [rbp-1B8h]
  unsigned __int64 v33; // [rsp+28h] [rbp-1B0h] BYREF
  __int128 v34; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-198h]
  __int64 v36; // [rsp+48h] [rbp-190h]
  __int64 v37; // [rsp+50h] [rbp-188h]
  void *v38; // [rsp+58h] [rbp-180h] BYREF
  __int64 v39; // [rsp+60h] [rbp-178h]
  int v40; // [rsp+68h] [rbp-170h]
  int v41; // [rsp+70h] [rbp-168h]
  int v42; // [rsp+78h] [rbp-160h]
  int v43; // [rsp+80h] [rbp-158h]
  int v44; // [rsp+88h] [rbp-150h]
  __int64 v45; // [rsp+90h] [rbp-148h]
  unsigned __int64 v46; // [rsp+198h] [rbp-40h] BYREF

  v8 = *a1;
  v46 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_631C90(v8, 2, 4) )
    return 0;
  v11 = 0;
  v33 = a3;
  v12 = sub_3792E0(0x43u, a2, a3, a5, &v33);
  if ( v12 < 0 )
    return 0;
  v13 = a1 + 203;
  if ( v12 )
  {
    v20 = sub_505D70(v13, v33);
    v21 = v20;
    if ( v20 )
    {
      if ( a5 )
      {
        if ( *(_BYTE *)(v20 + 184) == 2 && (~(_WORD)a4 & 0x600) != 0 && (sub_631AD0(*a1, 10) & 0x40) != 0 )
        {
          v22 = sub_3A1820((__int64)a1);
          v23 = sub_3A1F40((__int64)a1, v33, 5 * (unsigned int)(v22 == 25) + 20);
          if ( v33 == v23 )
          {
            v24 = sub_3BE900(a1, v33, 4);
            sub_40FBC0(a1, v33, v24, v21, a2, nullptr, 1);
          }
        }
      }
    }
    return 1;
  }
  v28 = sub_505D70(v13, a3);
  if ( !v28 )
    return 0;
  v14 = getseg(a2);
  if ( v14 && (*(_WORD *)(v14 + 44) & 0x18) == 8 )
  {
    v15 = getseg(a3);
    v11 = 1;
    if ( !v15 )
      return 0;
  }
  else
  {
    v15 = getseg(a3);
    if ( !v15 )
      goto LABEL_10;
  }
  if ( ((*(_WORD *)(v15 + 44) & 0x18) == 8) != v11 )
    return 0;
LABEL_10:
  v16 = *(_BYTE *)(v28 + 184) == 2;
  if ( a2 == -1 )
  {
    if ( !a5 )
      goto LABEL_12;
    if ( (unsigned int)sub_59BF40(a3, a4, *(_QWORD *)(v28 + 8), *(_BYTE *)(v28 + 184) == 2) )
      return 1;
  }
  else if ( !a5 )
  {
    goto LABEL_12;
  }
  if ( (unsigned int)((unsigned __int8)sub_631AD0(*a1, 52) >> 2) - 1 <= 2
    && (unsigned __int8)sub_40E480(
                          *a1,
                          a3,
                          a4,
                          v28,
                          v25,
                          v26,
                          v27,
                          v28,
                          v29,
                          (int)v31,
                          v32,
                          v33,
                          v34,
                          *((void **)&v34 + 1),
                          v35,
                          v36,
                          v37,
                          v38,
                          v39,
                          v40,
                          v41,
                          v42,
                          v43,
                          v44,
                          v45) )
  {
    return 1;
  }
LABEL_12:
  if ( (debug & 1) != 0 )
    sub_3879F0();
  v30 = a4;
  if ( v33 != a3 )
    v30 = sub_3BE900(a1, v33, 4);
  v35 = -1;
  v17 = &v38;
  v36 = 0;
  v37 = 0;
  v34 = -1;
  do
  {
    *(_WORD *)v17 = 0;
    v17 += 5;
    *((_WORD *)v17 - 19) = 0;
    *((_WORD *)v17 - 18) = 0;
    *((_DWORD *)v17 - 2) = 0;
    *((_WORD *)v17 - 17) = 0;
    *((_OWORD *)v17 - 2) = 0;
    *(v17 - 2) = nullptr;
  }
  while ( &v46 != (unsigned __int64 *)v17 );
  if ( a5 )
  {
    if ( v16 )
    {
      v31 = &v34;
      if ( (unsigned __int8)sub_40EA30(a1, (__int64)&v34, v33, v30) )
      {
        if ( (sub_631AD0(*a1, 10) & 0x40) != 0 )
          sub_40FBC0(a1, v33, v30, v28, a2, &v34, 0);
        return 1;
      }
    }
  }
  if ( (debug & 1) != 0 )
    sub_3879F0();
  if ( (sub_631AD0(*a1, 10) & 0x40) != 0 && v16 && (unsigned __int8)sub_40FBC0(a1, v33, v30, v28, a2, &v34, 1) )
    return 1;
  if ( (debug & 1) != 0 )
    sub_3879F0();
  if ( !a5 )
    return 0;
  if ( (unsigned __int8)sub_631C90(*a1, 10, 0x100000)
    && (unsigned __int8)sub_40ED50(a1, a3, a4, v28, (*(_BYTE *)(a1[2] + 12) & 8) != 0) )
  {
    return 1;
  }
  if ( (unsigned int)((unsigned __int8)sub_631AD0(*a1, 52) >> 2) - 1 <= 2 )
    return 0;
  return sub_40E480(
           *a1,
           a3,
           a4,
           v28,
           v18,
           v19,
           v27,
           v28,
           v30,
           (int)v31,
           v32,
           v33,
           v34,
           *((void **)&v34 + 1),
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45);
}
