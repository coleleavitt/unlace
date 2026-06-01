/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000534E0
// Address: 0x00000001000534E0

//----- (00000001000534E0) ----------------------------------------------------
__int64 __fastcall sub_1000534E0(__int64 a1)
{
  const char *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rax
  int v5; // ecx
  void *__p; // [rsp+10h] [rbp-280h]
  __int64 (__fastcall **v8)(); // [rsp+18h] [rbp-278h] BYREF
  __int128 v9; // [rsp+20h] [rbp-270h] BYREF
  __int128 v10; // [rsp+30h] [rbp-260h]
  int v11; // [rsp+40h] [rbp-250h]
  char v12; // [rsp+44h] [rbp-24Ch]
  _QWORD *v13; // [rsp+48h] [rbp-248h]
  char v14; // [rsp+50h] [rbp-240h]
  __int128 v15; // [rsp+60h] [rbp-230h]
  __int128 v16; // [rsp+70h] [rbp-220h]
  __int64 v17; // [rsp+80h] [rbp-210h]
  char v18; // [rsp+88h] [rbp-208h]
  __int64 v19; // [rsp+90h] [rbp-200h]
  __int128 v20; // [rsp+98h] [rbp-1F8h]
  __int128 v21; // [rsp+A8h] [rbp-1E8h]
  __int16 v22; // [rsp+B8h] [rbp-1D8h]
  __int128 v23; // [rsp+E0h] [rbp-1B0h]
  __int128 v24; // [rsp+F0h] [rbp-1A0h]
  __int128 v25; // [rsp+100h] [rbp-190h]
  __int128 v26; // [rsp+110h] [rbp-180h]
  __int128 v27; // [rsp+120h] [rbp-170h]
  __int128 v28; // [rsp+130h] [rbp-160h]
  __int128 v29; // [rsp+140h] [rbp-150h]
  __int128 v30; // [rsp+150h] [rbp-140h]
  __int128 v31; // [rsp+160h] [rbp-130h]
  __int128 v32; // [rsp+170h] [rbp-120h]
  __int128 v33; // [rsp+180h] [rbp-110h]
  __int128 v34; // [rsp+190h] [rbp-100h]
  __int128 v35; // [rsp+1A0h] [rbp-F0h]
  __int128 v36; // [rsp+1B0h] [rbp-E0h]
  _BYTE v37[19]; // [rsp+1C0h] [rbp-D0h] BYREF
  int v38; // [rsp+1D4h] [rbp-BCh]
  __int128 v39; // [rsp+1D8h] [rbp-B8h]
  __int128 v40; // [rsp+1E8h] [rbp-A8h]
  int v41; // [rsp+1F8h] [rbp-98h]
  __int128 v42; // [rsp+200h] [rbp-90h]
  __int128 v43; // [rsp+210h] [rbp-80h]
  __int64 v44; // [rsp+260h] [rbp-30h]

  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  else
    v2 = _s1;
  v3 = 0;
  v4 = open_linput(v2, 0);
  __p = v4;
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( v5 == 25 )
    {
      v8 = &off_1000A7F20;
      *(_QWORD *)&v9 = (char *)&v9 + 8;
      *((_QWORD *)&v9 + 1) = 0xFFFFFFFFLL;
      v10 = -1;
      v11 = 8;
      v12 = 1;
      v13 = v4;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = -1;
      v18 = 0;
      v19 = -1;
      v38 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      memset(v37, 0, sizeof(v37));
      v39 = -1;
      v40 = 0;
      v41 = 0;
      v43 = 0;
      v42 = 0;
      if ( (unsigned __int8)sub_10000FA10((__int64)&v8) && (unsigned __int8)sub_100010140((__int64)&v8, 0, 0, 0) )
      {
        sub_1000127B0((__int64)&v8);
        if ( !v37[16] )
          sub_100012510((__int64)&v8);
        v3 = 0;
        if ( (_QWORD)v39 != -1 )
          v3 = v39;
      }
      else
      {
        v3 = 0;
      }
      sub_10001CA40((__int64)&v8);
    }
    else if ( v5 == 11 )
    {
      v8 = off_1000A9718;
      v9 = 0;
      *(_QWORD *)&v10 = 0;
      if ( (unsigned __int8)sub_100052E40((__int64)&v8, (__int64)v4, 1u, 1) )
        v3 = v44;
      else
        v3 = 0;
      v8 = off_1000A9718;
      if ( (_QWORD)v9 )
      {
        *((_QWORD *)&v9 + 1) = 0;
        qfree((void *)v9);
      }
    }
    else
    {
      v3 = 0;
    }
    close_linput(__p);
  }
  return v3;
}
// 1000A7F20: using guessed type __int64 (__fastcall *off_1000A7F20)();
// 1000A9718: using guessed type __int64 (__fastcall *off_1000A9718[2])();
