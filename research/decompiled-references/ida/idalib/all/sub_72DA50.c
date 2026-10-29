__int64 __fastcall sub_72DA50(void *src, __int64 a2)
{
  unsigned int v2; // r12d
  void *v3; // rdi
  _DWORD *v4; // rbx
  void *v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  void *v9; // [rsp+0h] [rbp-418h] BYREF
  __int128 v10; // [rsp+8h] [rbp-410h]
  void *v11; // [rsp+18h] [rbp-400h]
  __int128 v12; // [rsp+20h] [rbp-3F8h] BYREF
  void *v13; // [rsp+30h] [rbp-3E8h]
  __int64 v14; // [rsp+38h] [rbp-3E0h]
  __int128 v15; // [rsp+40h] [rbp-3D8h] BYREF
  void (__fastcall *v16)(__int128 *, __int128 *, __int64, double, double); // [rsp+50h] [rbp-3C8h]
  __int64 v17; // [rsp+58h] [rbp-3C0h]
  _DWORD v18[84]; // [rsp+60h] [rbp-3B8h] BYREF
  __int128 v19; // [rsp+1B0h] [rbp-268h]
  char v20; // [rsp+1D0h] [rbp-248h]
  void *v21; // [rsp+250h] [rbp-1C8h]
  __int128 v22; // [rsp+258h] [rbp-1C0h]
  __m128i si128; // [rsp+268h] [rbp-1B0h]
  int v24; // [rsp+278h] [rbp-1A0h]
  void *v25[2]; // [rsp+280h] [rbp-198h]
  void *ptr[2]; // [rsp+290h] [rbp-188h]
  __int128 v27; // [rsp+2A0h] [rbp-178h]
  __int128 v28; // [rsp+2B0h] [rbp-168h]
  __int64 v29; // [rsp+2C0h] [rbp-158h]
  __int64 v30; // [rsp+2C8h] [rbp-150h]
  __int64 v31; // [rsp+2D0h] [rbp-148h]
  __int128 v32; // [rsp+2D8h] [rbp-140h]
  _BYTE v33[88]; // [rsp+2E8h] [rbp-130h] BYREF
  __int64 v34; // [rsp+340h] [rbp-D8h]
  char v35; // [rsp+348h] [rbp-D0h]
  __int16 v36; // [rsp+350h] [rbp-C8h]
  char v37; // [rsp+352h] [rbp-C6h]
  _OWORD v38[8]; // [rsp+360h] [rbp-B8h] BYREF
  unsigned __int64 v39; // [rsp+3E8h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  v10 = 0;
  v12 = 0;
  v16 = nullptr;
  v9 = nullptr;
  v11 = nullptr;
  v14 = 0;
  memset(v18, 0, sizeof(v18));
  v17 = 0;
  v18[10] = 2;
  v18[24] = 2;
  v18[38] = 2;
  v18[52] = 2;
  v18[66] = 2;
  v18[80] = 2;
  v21 = nullptr;
  v15 = 0;
  v19 = 0;
  v22 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7C00);
  v24 = 64;
  memset(v33, 0, sizeof(v33));
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 256;
  v37 = 0;
  v13 = src;
  *(_OWORD *)v25 = 0;
  *(_OWORD *)ptr = 0;
  v27 = 0;
  v28 = 0;
  v32 = 0;
  v25[0] = (void *)open_linput(src, 0);
  if ( !v25[0] )
  {
    get_errdesc(src);
    sub_35A790((char **)&v9);
    goto LABEL_3;
  }
  v37 = 1;
  v14 = qlsize(v25[0]);
  v2 = sub_72CCF0((__int64)&v9, 0);
  if ( !(_BYTE)v2 )
  {
LABEL_3:
    v2 = 0;
    goto LABEL_4;
  }
  if ( a2 )
  {
    if ( !*((_QWORD *)&v28 + 1) )
      goto LABEL_3;
    v7 = qfopen(src, "r+b");
    v8 = v7;
    if ( !v7 )
      goto LABEL_3;
    v2 = sub_8369E0(&v9, v7, *((_QWORD *)&v28 + 1));
    if ( (_BYTE)v2 )
    {
      memset(v38, 0, sizeof(v38));
      qstrncpy(v38, a2, 128);
      v2 = sub_836BE0(&v9, v8, v38, 128);
    }
    qfclose(v8);
  }
LABEL_4:
  close_linput(ptr[0]);
  v3 = v25[0];
  ptr[0] = nullptr;
  if ( v25[1] != v25[0] )
  {
    close_linput(v25[1]);
    v3 = v25[0];
  }
  v25[1] = nullptr;
  close_linput(v3);
  v25[0] = nullptr;
  v13 = nullptr;
  *(_QWORD *)&v10 = 0;
  v20 = 0;
  *(_QWORD *)&v22 = 0;
  *(_QWORD *)&v27 = 0;
  if ( ptr[1] )
    qfree(ptr[1]);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  v4 = &v18[70];
  do
  {
    v5 = *((void **)v4 + 4);
    v4 -= 14;
    close_linput(v5);
  }
  while ( (_DWORD *)((char *)&v12 + 8) != v4 );
  if ( v16 )
    v16(&v15, &v15, 3, 0.0, 0.0);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v2;
}
