__int64 __fastcall sub_1EC0450(__int64 a1, void **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64, __int64, __int64, void *, __int64, _QWORD, _QWORD); // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  signed __int64 v19; // rdx
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _BYTE *v23; // rsi
  __int64 v25; // [rsp+10h] [rbp-458h]
  _QWORD *v26; // [rsp+28h] [rbp-440h] BYREF
  _QWORD *v27; // [rsp+30h] [rbp-438h] BYREF
  char v28; // [rsp+38h] [rbp-430h]
  _BYTE *v29; // [rsp+40h] [rbp-428h] BYREF
  __int64 v30; // [rsp+48h] [rbp-420h]
  __int64 v31[2]; // [rsp+50h] [rbp-418h] BYREF
  char v32; // [rsp+60h] [rbp-408h]
  _QWORD *v33; // [rsp+70h] [rbp-3F8h] BYREF
  char v34; // [rsp+78h] [rbp-3F0h]
  void *v35; // [rsp+C0h] [rbp-3A8h] BYREF
  signed __int64 v36; // [rsp+C8h] [rbp-3A0h]
  _QWORD v37[3]; // [rsp+D0h] [rbp-398h] BYREF
  __int128 v38; // [rsp+E8h] [rbp-380h] BYREF
  __int64 v39; // [rsp+F8h] [rbp-370h]
  _QWORD v40[2]; // [rsp+100h] [rbp-368h] BYREF
  _QWORD v41[34]; // [rsp+110h] [rbp-358h] BYREF
  void *ptr; // [rsp+220h] [rbp-248h] BYREF
  __int64 v43; // [rsp+228h] [rbp-240h]
  _QWORD v44[71]; // [rsp+230h] [rbp-238h] BYREF

  sub_FD7D70((__int64)v31, a3, *a2, (size_t)a2[1], -1, 0, 0, 0);
  v25 = a1 + 16;
  if ( (v32 & 1) != 0 )
  {
    sub_FC70B0((__int64)&ptr, a5, 0, 924);
    sub_AEC220((unsigned __int8 **)&ptr, *a2, (signed __int64)a2[1]);
    if ( (v32 & 1) != 0 )
    {
      v10 = LODWORD(v31[0]);
      v11 = v31[1];
    }
    else
    {
      v9 = std::_V2::system_category((std::_V2 *)&ptr);
      v10 = 0;
      v11 = v9;
    }
    (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)v11 + 32LL))(&v35, v11, v10);
    sub_AEC220((unsigned __int8 **)&ptr, v35, v36);
    if ( v35 != v37 )
      operator delete(v35);
    sub_AEA040((__int64)&ptr);
    *(_BYTE *)(a1 + 16) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0;
  }
  else
  {
    v13 = v31[0];
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, void *, __int64, _QWORD, _QWORD))(*(_QWORD *)a4 + 24LL);
    sub_2231100(&ptr, v31[0]);
    v35 = (void *)v14(a4, v13, v15, v16, v17, v18, ptr, v43, v44[0], v44[1]);
    v37[2] = 0x200000000LL;
    v40[0] = v41;
    v36 = v19;
    v37[0] = 0;
    v37[1] = 0;
    v38 = 0;
    v39 = 0;
    v40[1] = 0x800000000LL;
    v41[32] = 0;
    sub_1EB0230((std::_V2 *)&v33, (__int64)&v35);
    if ( v33 )
    {
      sub_FC70B0((__int64)&ptr, a5, 0, 921);
      sub_AEC220((unsigned __int8 **)&ptr, *a2, (signed __int64)a2[1]);
      sub_FC6B40((unsigned __int8 **)&ptr, (__int64 *)&v33);
      sub_AEA040((__int64)&ptr);
      v20 = v33;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = a1 + 16;
      *(_BYTE *)(a1 + 16) = 0;
      if ( v20 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 8LL))(v20);
    }
    else if ( (unsigned __int8)sub_1EBF490((__int64)&v35, 0xFu) )
    {
      sub_FC70B0((__int64)&ptr, a5, 0, 923);
      sub_AEC220((unsigned __int8 **)&ptr, *a2, (signed __int64)a2[1]);
      sub_AEA040((__int64)&ptr);
      *(_BYTE *)(a1 + 16) = 0;
      *(_QWORD *)a1 = a1 + 16;
      *(_QWORD *)(a1 + 8) = 0;
    }
    else
    {
      ptr = v44;
      v43 = 0x4000000000LL;
      while ( 1 )
      {
        sub_1EB0460((__int64)&v27, (__int64)&v35, 0);
        if ( (v28 & 1) != 0 )
        {
          v21 = v27;
          v27 = nullptr;
          v33 = v21;
          sub_A0E8E0(&v33);
          if ( v33 )
            (*(void (__fastcall **)(_QWORD *))(*v33 + 8LL))(v33);
          goto LABEL_23;
        }
        if ( (_DWORD)v27 == 1 )
          goto LABEL_23;
        if ( (_DWORD)v27 != 3 )
        {
          sub_FC70B0((__int64)&v33, a5, 0, 923);
          sub_AEC220((unsigned __int8 **)&v33, *a2, (signed __int64)a2[1]);
          sub_AEA040((__int64)&v33);
LABEL_23:
          *(_QWORD *)(a1 + 8) = 0;
          *(_BYTE *)(a1 + 16) = 0;
          *(_QWORD *)a1 = v25;
          goto LABEL_24;
        }
        LODWORD(v43) = 0;
        v29 = nullptr;
        v30 = 0;
        sub_2027F10(&v33, &v35, HIDWORD(v27), &ptr, &v29);
        if ( (v34 & 1) != 0 )
          break;
        if ( (_DWORD)v33 == 3 )
        {
          v23 = v29;
          *(_QWORD *)a1 = v25;
          if ( v23 )
          {
            sub_1EA9D80((_QWORD *)a1, v23, (__int64)&v23[v30]);
          }
          else
          {
            *(_QWORD *)(a1 + 8) = 0;
            *(_BYTE *)(a1 + 16) = 0;
          }
          goto LABEL_31;
        }
        sub_A0AE90((__int64 *)&v33);
        sub_A0B030((__int64 *)&v27);
      }
      v22 = v33;
      v33 = nullptr;
      v26 = v22;
      sub_A0E8E0(&v26);
      if ( v26 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 8LL))(v26);
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 16) = 0;
      *(_QWORD *)a1 = v25;
LABEL_31:
      sub_A0AE90((__int64 *)&v33);
LABEL_24:
      sub_A0B030((__int64 *)&v27);
      if ( ptr != v44 )
        free(ptr);
    }
    sub_A0AEB0((__int64)v40);
    sub_A0AD20((__int64)&v38);
  }
  sub_FC2AF0(v31);
  return a1;
}
