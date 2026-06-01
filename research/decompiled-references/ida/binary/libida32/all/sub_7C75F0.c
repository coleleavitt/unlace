_QWORD *__fastcall sub_7C75F0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  bool v4; // zf
  void (__fastcall *v6)(_QWORD *); // rax
  __int64 v8; // [rsp+18h] [rbp-200h] BYREF
  __int64 v9; // [rsp+20h] [rbp-1F8h] BYREF
  __int128 v10; // [rsp+28h] [rbp-1F0h]
  __int64 v11; // [rsp+40h] [rbp-1D8h] BYREF
  __int128 v12; // [rsp+48h] [rbp-1D0h]
  __int64 v13; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v14; // [rsp+68h] [rbp-1B0h]
  __int64 v15; // [rsp+80h] [rbp-198h] BYREF
  __int128 v16; // [rsp+88h] [rbp-190h]
  __int64 v17; // [rsp+A0h] [rbp-178h] BYREF
  __int128 v18; // [rsp+A8h] [rbp-170h]
  __int64 v19; // [rsp+C0h] [rbp-158h] BYREF
  __int128 v20; // [rsp+C8h] [rbp-150h]
  __int64 v21; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v22; // [rsp+E8h] [rbp-130h]
  __int64 v23; // [rsp+100h] [rbp-118h] BYREF
  __int128 v24; // [rsp+108h] [rbp-110h]
  __int64 v25; // [rsp+120h] [rbp-F8h] BYREF
  __int128 v26; // [rsp+128h] [rbp-F0h]
  __int64 v27; // [rsp+140h] [rbp-D8h] BYREF
  __int128 v28; // [rsp+148h] [rbp-D0h]
  __int64 v29; // [rsp+160h] [rbp-B8h] BYREF
  __int128 v30; // [rsp+168h] [rbp-B0h]
  __int64 v31; // [rsp+180h] [rbp-98h] BYREF
  __int128 v32; // [rsp+188h] [rbp-90h]
  __int64 v33; // [rsp+1A0h] [rbp-78h] BYREF
  __int128 v34; // [rsp+1A8h] [rbp-70h]
  __int64 v35; // [rsp+1C0h] [rbp-58h] BYREF
  __int128 v36; // [rsp+1C8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+1D8h] [rbp-40h]

  v8 = a1;
  v37 = __readfsqword(0x28u);
  v35 = 0;
  v3 = (_QWORD *)operator new(0x1C8u);
  *((_BYTE *)v3 + 8) = 27;
  v33 = 0;
  v31 = 0;
  v29 = 0;
  v27 = 0;
  v25 = 0;
  v23 = 0;
  v21 = 0;
  v19 = 0;
  v17 = 0;
  v15 = 0;
  v13 = 0;
  v11 = 0;
  v9 = 0;
  *v3 = &off_2B119B0;
  v3[2] = 0;
  v36 = 0;
  v34 = 0;
  v32 = 0;
  v30 = 0;
  v28 = 0;
  v26 = 0;
  v24 = 0;
  v22 = 0;
  v20 = 0;
  v18 = 0;
  v16 = 0;
  v14 = 0;
  v12 = 0;
  v10 = 0;
  *(_OWORD *)(v3 + 3) = 0;
  v3[5] = 0;
  v3[8] = 0;
  *((_OWORD *)v3 + 3) = 0;
  *(_OWORD *)(v3 + 9) = 0;
  sub_7B9B10(v3 + 8, (__int64)&v9);
  v3[11] = 0;
  *((_OWORD *)v3 + 6) = 0;
  sub_7B9B10(v3 + 11, (__int64)&v11);
  v3[14] = 0;
  v3[17] = 0;
  *(_OWORD *)(v3 + 15) = 0;
  *((_OWORD *)v3 + 9) = 0;
  sub_7B9B10(v3 + 17, (__int64)&v13);
  v3[20] = 0;
  *(_OWORD *)(v3 + 21) = 0;
  sub_7BC640(v3 + 20, &v15);
  v3[23] = 0;
  *((_OWORD *)v3 + 12) = 0;
  sub_7B9B10(v3 + 23, (__int64)&v17);
  v3[26] = 0;
  *(_OWORD *)(v3 + 27) = 0;
  sub_7BC640(v3 + 26, &v19);
  v3[29] = 0;
  v3[32] = 0;
  *((_OWORD *)v3 + 15) = 0;
  *(_OWORD *)(v3 + 33) = 0;
  sub_7B9B10(v3 + 32, (__int64)&v21);
  v3[35] = 0;
  *((_OWORD *)v3 + 18) = 0;
  sub_7BC640(v3 + 35, &v23);
  v3[38] = 0;
  *(_OWORD *)(v3 + 39) = 0;
  sub_7B9B10(v3 + 38, (__int64)&v25);
  v3[41] = 0;
  *((_OWORD *)v3 + 21) = 0;
  sub_7BC640(v3 + 41, &v27);
  v3[44] = 0;
  *(_OWORD *)(v3 + 45) = 0;
  sub_7B9B10(v3 + 44, (__int64)&v29);
  v3[47] = 0;
  *((_OWORD *)v3 + 24) = 0;
  sub_7BC640(v3 + 47, &v31);
  v3[50] = 0;
  *(_OWORD *)(v3 + 51) = 0;
  sub_7B9B10(v3 + 50, (__int64)&v33);
  v3[53] = 0;
  *((_OWORD *)v3 + 27) = 0;
  sub_7BC640(v3 + 53, &v35);
  v4 = v8 == 0;
  *((_BYTE *)v3 + 448) = 0;
  if ( !v4 && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64, _QWORD))(*v3 + 24LL))(v3, &v8, a2, a3) )
  {
    if ( v3 )
    {
      v6 = *(void (__fastcall **)(_QWORD *))(*v3 + 8LL);
      if ( v6 != sub_7BCEC0 )
      {
        v6(v3);
        return nullptr;
      }
      sub_7BCA50(v3);
      operator delete(v3, 0x1C8u);
    }
    return nullptr;
  }
  return v3;
}

