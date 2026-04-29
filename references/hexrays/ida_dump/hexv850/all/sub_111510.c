__int64 __fastcall sub_111510(unsigned __int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  char v12; // cl
  int v13; // r10d
  __int128 v14; // rax
  unsigned __int128 v15; // rax
  unsigned __int128 v16; // kr00_16
  int v17; // edx
  int v18; // eax
  __int128 v21; // kr10_16
  __int128 v22; // rax
  unsigned __int128 v23; // rax
  bool v24; // si
  int v25; // esi
  int v26; // r11d
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r13
  char v29; // cl
  unsigned __int128 v30; // rax
  unsigned __int128 v31; // rax
  __int128 v32; // [rsp+0h] [rbp-C8h]
  __int128 v33; // [rsp+10h] [rbp-B8h]
  unsigned __int128 v35; // [rsp+30h] [rbp-98h]
  __int64 v36; // [rsp+40h] [rbp-88h]
  bool v37; // [rsp+40h] [rbp-88h]
  char v38; // [rsp+50h] [rbp-78h]
  unsigned __int128 v39; // [rsp+50h] [rbp-78h]
  unsigned __int64 v40; // [rsp+60h] [rbp-68h]
  __int64 v41; // [rsp+60h] [rbp-68h]
  __int64 v42; // [rsp+68h] [rbp-60h]
  __int64 v43; // [rsp+70h] [rbp-58h]
  __int64 v44; // [rsp+78h] [rbp-50h]

  *(_QWORD *)&v32 = a4;
  *((_QWORD *)&v32 + 1) = a5;
  v8 = ((__int64 (*)(void))log2ceil)();
  v9 = a4;
  v10 = 0;
  v11 = v8;
  v12 = v8 + a3;
  v13 = v8 + a3 - a2;
  if ( (unsigned __int64)(v8 + a3) > 0x7F )
  {
    v33 = 0u;
    v16 = 0u;
    v21 = 0u;
    if ( (unsigned __int64)v13 > 0x7F )
      goto LABEL_5;
  }
  else
  {
    v40 = v13;
    *((_QWORD *)&v14 + 1) = 1uLL >> (64 - v12);
    *(_QWORD *)&v14 = 1LL << v12;
    if ( (v12 & 0x40) != 0 )
    {
      *((_QWORD *)&v14 + 1) = 1LL << v12;
      *(_QWORD *)&v14 = 0;
    }
    v38 = v13;
    v33 = v14;
    *(_QWORD *)&v15 = __udivti3(v14, *((_QWORD *)&v14 + 1), a1, 0);
    v9 = a4;
    v10 = 0;
    LOBYTE(v13) = v38;
    v16 = v15;
    if ( v40 > 0x7F )
      goto LABEL_5;
    v21 = v15 >> 1;
  }
  v36 = v9;
  *((_QWORD *)&v22 + 1) = (unsigned __int64)((v13 & 0x40) != 0) << v13;
  *(_QWORD *)&v22 = (unsigned __int64)((v13 & 0x40) == 0) << v13;
  *(_QWORD *)&v23 = __udivti3(v33 + v22, (unsigned __int128)(v33 + v22) >> 64, a1, 0);
  v9 = v36;
  v10 = 0;
  v24 = v21 < v23 >> 1;
  v16 = v23 >> 1;
  if ( v24 && v11 > 0 )
  {
    v37 = v24 && v11 > 0;
    v25 = v11;
    v26 = a3;
    while ( 1 )
    {
      if ( a6 == v25 )
      {
        if ( !(v10 ^ *((_QWORD *)&v23 + 1) | v9 ^ (unsigned __int64)v23) )
          return v37;
        if ( v26 == 64 && v23 == (unsigned __int64)(v32 + 1) )
        {
          v29 = a6 + 64;
          v35 = a1 * v32;
          if ( (unsigned __int64)(a6 + 64) > 0x7F )
          {
            v41 = v9;
            v42 = v10;
            log2ceil(a1);
            v9 = v41;
            v10 = v42;
            v26 = 64;
            v31 = 1u;
          }
          else
          {
            v43 = v9;
            *((_QWORD *)&v30 + 1) = 1uLL >> -(char)a6;
            *(_QWORD *)&v30 = 1LL << v29;
            if ( (v29 & 0x40) != 0 )
            {
              *((_QWORD *)&v30 + 1) = 1LL << v29;
              *(_QWORD *)&v30 = 0;
            }
            v44 = v10;
            v39 = v30;
            log2ceil(a1);
            v9 = v43;
            v10 = v44;
            v26 = 64;
            if ( v35 < v39 )
              goto LABEL_13;
            v31 = v39 + 1;
          }
          if ( v31 >= v35 && a1 > 1 )
            return v37;
        }
      }
LABEL_13:
      v27 = v21 >> 1;
      --v25;
      v28 = *((_QWORD *)&v21 + 1) >> 1;
      v23 = v16;
      v21 = (unsigned __int128)v21 >> 1;
      if ( __PAIR128__(v28, v27) >= v16 >> 1 || !v25 )
      {
        v11 = v25;
        goto LABEL_5;
      }
      v16 >>= 1;
    }
  }
  v16 = v23;
LABEL_5:
  v17 = v10 ^ DWORD2(v16);
  v18 = v10 ^ DWORD2(v16) | v9 ^ v16;
  LOBYTE(v17) = (v10 ^ *((_QWORD *)&v16 + 1) | v9 ^ (unsigned __int64)v16) == 0;
  LOBYTE(v18) = a6 == v11;
  return (unsigned int)(v18 & v17);
}
