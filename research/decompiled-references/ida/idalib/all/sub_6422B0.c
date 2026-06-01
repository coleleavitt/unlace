__int64 __fastcall sub_6422B0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  char *v6; // rax
  char *v7; // r14
  size_t v8; // rax
  size_t v9; // r14
  unsigned int (__fastcall *v10)(__int64, __int64, __int64, char *); // rax
  char *v11; // rcx
  bool src; // [rsp+18h] [rbp-11C0h]
  char *srca; // [rsp+18h] [rbp-11C0h]
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // [rsp+20h] [rbp-11B8h]
  size_t v18; // [rsp+28h] [rbp-11B0h]
  char *s; // [rsp+30h] [rbp-11A8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-11A0h]
  void *v21; // [rsp+50h] [rbp-1188h] BYREF
  __int128 v22; // [rsp+58h] [rbp-1180h]
  char v23[8]; // [rsp+70h] [rbp-1168h] BYREF
  __int128 v24; // [rsp+78h] [rbp-1160h]
  __int64 v25; // [rsp+88h] [rbp-1150h]
  char v26[8]; // [rsp+90h] [rbp-1148h] BYREF
  __int64 v27; // [rsp+98h] [rbp-1140h]
  char v28; // [rsp+B0h] [rbp-1128h]
  __int64 v29; // [rsp+B8h] [rbp-1120h]
  char v30; // [rsp+D0h] [rbp-1108h]
  __int64 v31; // [rsp+D8h] [rbp-1100h]
  char v32; // [rsp+F0h] [rbp-10E8h]
  void *ptr; // [rsp+F8h] [rbp-10E0h] BYREF
  __int128 v34; // [rsp+100h] [rbp-10D8h]
  _QWORD v35[10]; // [rsp+110h] [rbp-10C8h] BYREF
  __int128 v36; // [rsp+160h] [rbp-1078h]
  void *v37; // [rsp+170h] [rbp-1068h]
  __int128 v38; // [rsp+178h] [rbp-1060h]
  _BYTE v39[4096]; // [rsp+188h] [rbp-1050h] BYREF
  char v40; // [rsp+1188h] [rbp-50h]
  unsigned __int64 v41; // [rsp+1198h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( (unsigned int)getinf(5) == 2 )
    return 1;
  v35[0] = 0;
  v40 = 1;
  v37 = nullptr;
  v39[0] = 0;
  v36 = 0;
  v38 = 0;
  sub_642030((__int64)v39, 4096);
  v4 = sub_640A20(v35, (__int64)v39);
  if ( (_BYTE)v4 )
  {
    v16 = qword_2CCB548;
    qword_2CCB548 = nullptr;
    sub_640490((__int64)&s);
    if ( *((_QWORD *)&v36 + 1) )
    {
      v6 = v26;
      do
      {
        *v6 = 2;
        v6 += 32;
        *(_OWORD *)(v6 - 24) = 0;
        *((_QWORD *)v6 - 1) = 0;
      }
      while ( v6 != (char *)v35 );
      v26[0] = 2;
      v28 = 2;
      v27 = a1;
      v29 = a2;
      v30 = 2;
      v31 = a3;
      if ( v20 && s )
      {
        srca = s;
        v8 = strlen(s);
        v32 = 7;
        ptr = nullptr;
        v9 = v8;
        v34 = 0;
        if ( v8 )
        {
          v18 = v8 + 1;
          ptr = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
          *(_QWORD *)&v34 = v18;
          memmove(ptr, srca, v9);
          *((_BYTE *)ptr + v9) = 0;
        }
      }
      else
      {
        v32 = 7;
        ptr = nullptr;
        v34 = 0;
      }
      v24 = 0;
      v23[0] = 2;
      v25 = 0;
      v21 = nullptr;
      v22 = 0;
      if ( !(unsigned __int8)sub_640D00(v35, (__int64)v23, "move_segm", (__int64)v26, 4, (__int64)&v21) )
        sub_378D50();
      src = 0;
      if ( v23[0] == 2 )
        src = (_QWORD)v24 != 0;
      if ( v21 )
      {
        *(_QWORD *)&v22 = 0;
        qfree(v21);
      }
      v7 = (char *)v35;
      free_idcv(v23);
      do
      {
        v7 -= 32;
        free_idcv(v7);
      }
      while ( v7 != v26 );
    }
    else
    {
      v10 = *(unsigned int (__fastcall **)(__int64, __int64, __int64, char *))(v36 + 32);
      if ( !v10 )
      {
        gen_fix_fixups(a1, a2, a3);
        goto LABEL_27;
      }
      v11 = (char *)haystack;
      if ( v20 )
        v11 = s;
      src = v10(a1, a2, a3, v11) != 0;
    }
    if ( !a4 || !src )
      goto LABEL_28;
    v40 = 0;
LABEL_27:
    src = v4;
LABEL_28:
    if ( s )
    {
      v20 = 0;
      qfree(s);
    }
    qword_2CCB548 = v16;
    if ( v16 )
      v16(0, -1);
    v4 = src;
  }
  if ( v40 && v35[0] )
  {
    if ( (debug & 0x10) != 0 )
      sub_3879F0();
    free_dll(v35);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  if ( *((_QWORD *)&v36 + 1) )
    --*(_DWORD *)(*((_QWORD *)&v36 + 1) + 12LL);
  return v4;
}
