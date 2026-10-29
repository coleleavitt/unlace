__int64 __fastcall sub_FC320(__int64 a1, _BYTE *a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // r13d
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r15
  __int64 *v13; // rdi
  __int64 v14; // r8
  _QWORD *v15; // r8
  unsigned __int64 v16; // r9
  size_t v17; // r10
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rdi
  const void *v24; // r11
  void *v25; // rax
  _QWORD *v27; // [rsp+10h] [rbp-128h]
  unsigned __int64 v28; // [rsp+10h] [rbp-128h]
  unsigned __int64 v29; // [rsp+18h] [rbp-120h]
  _QWORD *v30; // [rsp+18h] [rbp-120h]
  size_t v31; // [rsp+20h] [rbp-118h]
  const void *v32; // [rsp+28h] [rbp-110h]
  _OWORD v33[2]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-E8h]
  __int64 v35; // [rsp+58h] [rbp-E0h]
  __int64 v36; // [rsp+60h] [rbp-D8h]
  __int128 v37; // [rsp+68h] [rbp-D0h]
  __int64 v38; // [rsp+78h] [rbp-C0h]
  __int128 v39; // [rsp+80h] [rbp-B8h]
  __int64 v40; // [rsp+90h] [rbp-A8h]
  __int128 v41; // [rsp+98h] [rbp-A0h]
  __int64 v42; // [rsp+A8h] [rbp-90h]
  __int128 v43; // [rsp+B0h] [rbp-88h]
  __int64 v44; // [rsp+C0h] [rbp-78h]
  __int128 v45; // [rsp+C8h] [rbp-70h]
  __int64 v46; // [rsp+D8h] [rbp-60h]
  __int128 v47; // [rsp+E0h] [rbp-58h]
  __int64 v48; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v49; // [rsp+F8h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  nullsub_40();
  if ( !*(_BYTE *)(a1 + 329) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v8 = 0;
  if ( a4 > 0 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_FB110(a3, a5) )
        goto LABEL_24;
      v35 = 0;
      v34 = 0xFFFFFFFF00000001LL;
      v36 = 0;
      v38 = 0;
      v40 = 0;
      v42 = 0;
      v44 = 0;
      v46 = 0;
      v48 = 0xFFFFFFFFLL;
      memset(v33, 0, sizeof(v33));
      v37 = 0;
      v39 = 0;
      v41 = 0;
      v43 = 0;
      v45 = 0;
      v47 = 0;
      if ( a5 == 2 )
        break;
      v12 = linearray_t_up();
      v19 = *(_QWORD *)(a3 + 24);
      HIDWORD(v34) = *(_DWORD *)(a3 + 44);
      LOBYTE(v34) = *(_BYTE *)(a3 + 40);
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v21 = *(_DWORD *)(v20 + 8) == *(_DWORD *)(a3 + 72);
      *(_QWORD *)&v33[0] = v20;
      LOBYTE(v35) = v21;
      if ( !v12 )
      {
LABEL_23:
        sub_90AD0(v33);
        goto LABEL_24;
      }
      v22 = *(_QWORD *)(a1 + 256);
      if ( v22 == *(_QWORD *)(a1 + 264) )
      {
        sub_FC1E0((_QWORD *)(a1 + 240), (__int64 *)v33);
        v15 = *(_QWORD **)(a1 + 256);
        goto LABEL_10;
      }
      sub_909A0((__int64 *)(v22 - 200), (__int64 *)v33);
      v15 = (_QWORD *)(*(_QWORD *)(a1 + 256) - 200LL);
      *(_QWORD *)(a1 + 256) = v15;
      if ( (_QWORD *)v12 != v15 + 1 )
      {
LABEL_11:
        v16 = *(_QWORD *)(v12 + 8);
        if ( v16 && (v17 = v16 - 1, v16 != 1) )
        {
          v24 = *(const void **)v12;
          v25 = (void *)v15[1];
          if ( v15[3] < v16 )
          {
            v32 = *(const void **)v12;
            v31 = v16 - 1;
            v30 = v15;
            v28 = *(_QWORD *)(v12 + 8);
            v25 = (void *)qvector_reserve();
            v15 = v30;
            v24 = v32;
            v17 = v31;
            v16 = v28;
            v30[1] = v25;
          }
          v15[2] = v16;
          v29 = v16;
          v27 = v15;
          memmove(v25, v24, v17);
          *(_BYTE *)(v27[1] + v29 - 1) = 0;
        }
        else
        {
          v15[2] = 0;
        }
      }
LABEL_14:
      v18 = tag_strlen();
      if ( v18 > *(_DWORD *)(a1 + 72) )
        *(_DWORD *)(a1 + 72) = v18;
      ++v8;
      sub_90AD0(v33);
      if ( a4 == v8 )
        goto LABEL_24;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 24) + 16LL))(*(_QWORD *)(a3 + 24));
    v10 = *(_DWORD *)(a3 + 44);
    v11 = *(_DWORD *)(a3 + 72);
    *(_QWORD *)&v33[0] = v9;
    HIDWORD(v34) = v10;
    LOBYTE(v34) = *(_BYTE *)(a3 + 40);
    LOBYTE(v35) = *(_DWORD *)(v9 + 8) == v11;
    v12 = linearray_t_down();
    if ( !v12 )
      goto LABEL_23;
    v13 = *(__int64 **)(a1 + 288);
    if ( v13 == (__int64 *)(*(_QWORD *)(a1 + 304) - 200LL) )
    {
      sub_FC0D0(a1 + 240, (__int64 *)v33);
      v14 = *(_QWORD *)(a1 + 288);
    }
    else
    {
      sub_909A0(v13, (__int64 *)v33);
      v14 = *(_QWORD *)(a1 + 288) + 200LL;
      *(_QWORD *)(a1 + 288) = v14;
    }
    if ( v14 == *(_QWORD *)(a1 + 296) )
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 312) - 8LL) + 400LL;
    v15 = (_QWORD *)(v14 - 200);
LABEL_10:
    if ( (_QWORD *)v12 != v15 + 1 )
      goto LABEL_11;
    goto LABEL_14;
  }
LABEL_24:
  if ( a2 )
    *a2 = sub_FB110(a3, a5);
  return v8;
}

