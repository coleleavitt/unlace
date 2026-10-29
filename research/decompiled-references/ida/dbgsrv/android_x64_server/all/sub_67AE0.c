/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67AE0
// Address: 0x0000000000067AE0

//----- (0000000000067AE0) ----------------------------------------------------
__int64 __fastcall sub_67AE0(__int64 a1, __int64 a2, __int64 a3, char a4, double a5, __m128 a6)
{
  unsigned int v8; // eax
  unsigned int v9; // ebp
  _QWORD *v10; // rbx
  void *v11; // rdi
  __int128 v13; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 (**v14)[50]; // [rsp+10h] [rbp-1E8h]
  __int64 (__fastcall **v15)(); // [rsp+18h] [rbp-1E0h]
  char v16; // [rsp+20h] [rbp-1D8h]
  _WORD v17[16]; // [rsp+28h] [rbp-1D0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-1B0h]
  char v19; // [rsp+50h] [rbp-1A8h]
  __int128 v20; // [rsp+58h] [rbp-1A0h]
  __int64 v21; // [rsp+68h] [rbp-190h]
  __int128 v22; // [rsp+70h] [rbp-188h]
  __int128 v23; // [rsp+80h] [rbp-178h]
  __int128 v24; // [rsp+90h] [rbp-168h]
  __int128 v25; // [rsp+A0h] [rbp-158h]
  __int128 v26; // [rsp+B0h] [rbp-148h]
  __int128 v27; // [rsp+C0h] [rbp-138h]
  int v28; // [rsp+D0h] [rbp-128h]
  char v29; // [rsp+D4h] [rbp-124h]
  int v30; // [rsp+D8h] [rbp-120h]
  char v31; // [rsp+DCh] [rbp-11Ch]
  __int128 v32; // [rsp+E0h] [rbp-118h]
  __int128 v33; // [rsp+F0h] [rbp-108h]
  __int128 v34; // [rsp+100h] [rbp-F8h]
  __int128 v35; // [rsp+110h] [rbp-E8h]
  __int128 v36; // [rsp+120h] [rbp-D8h]
  __int128 v37; // [rsp+130h] [rbp-C8h]
  __int128 v38; // [rsp+140h] [rbp-B8h]
  __int128 v39; // [rsp+150h] [rbp-A8h]
  __int128 v40; // [rsp+160h] [rbp-98h]
  __int128 v41; // [rsp+170h] [rbp-88h]
  __int128 v42; // [rsp+180h] [rbp-78h]
  __int128 v43; // [rsp+190h] [rbp-68h]
  __int64 v44; // [rsp+1A0h] [rbp-58h]
  __int128 v45; // [rsp+1A8h] [rbp-50h]
  __int64 v46; // [rsp+1B8h] [rbp-40h]
  int v47; // [rsp+1C0h] [rbp-38h]
  char v48; // [rsp+1C4h] [rbp-34h]
  unsigned __int64 v49; // [rsp+1D0h] [rbp-28h]

  v49 = __readfsqword(0x28u);
  v13 = (unsigned __int64)sub_67AC0;
  v14 = &off_14D5C0;
  v15 = &off_14D720;
  v16 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  memset(v17, 0, 26);
  v21 = a1;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v28 = 0;
  v29 = -90;
  v30 = 0;
  v31 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v34 = 0;
  v33 = 0;
  v32 = 0;
  v44 = a2;
  v45 = 0;
  v46 = 0;
  v47 = -1;
  v48 = a4;
  sub_8B690(*(_QWORD *)(a1 + 32), (__int64)&v13);
  set_qerrno(0);
  LOBYTE(v8) = basic_parser_parse_0((__int64)&v13, 0);
  v9 = v8;
  if ( !(_BYTE)v8 )
  {
    sub_67D10(*(_QWORD *)(a1 + 32), (__int64)v17, a3, 0.0, a6);
    v10 = *((_QWORD **)&v27 + 1);
    if ( *((_QWORD *)&v27 + 1) )
    {
      v11 = **((void ***)&v27 + 1);
      if ( **((_QWORD **)&v27 + 1) )
      {
        *(_QWORD *)(*((_QWORD *)&v27 + 1) + 8LL) = 0;
        qfree(v11);
        *v10 = 0;
        v10[2] = 0;
      }
    }
    sub_614E0((__int64)&v13);
  }
  sub_8B690(*(_QWORD *)(a1 + 32), 0);
  sub_67FD0((__int64)&v13, 0.0, a6);
  return v9;
}
// 67C6C: variable 'v8' is possibly undefined
// 14D5C0: using guessed type __int64 (*off_14D5C0)[50];
// 14D720: using guessed type __int64 (__fastcall *off_14D720)();
