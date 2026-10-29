__int64 __fastcall sub_E32790(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 *v3; // rdi
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-168h] BYREF
  int v6; // [rsp+8h] [rbp-160h]
  __int128 v7; // [rsp+10h] [rbp-158h]
  __int64 v8; // [rsp+20h] [rbp-148h]
  char v9; // [rsp+28h] [rbp-140h]
  int v10; // [rsp+2Ch] [rbp-13Ch]
  _QWORD v11[2]; // [rsp+30h] [rbp-138h] BYREF
  __int16 v12; // [rsp+40h] [rbp-128h]
  char v13; // [rsp+42h] [rbp-126h]
  __int64 v14; // [rsp+48h] [rbp-120h]
  __int128 v15; // [rsp+50h] [rbp-118h]
  void **v16; // [rsp+60h] [rbp-108h] BYREF
  void *v17; // [rsp+68h] [rbp-100h] BYREF
  __int64 v18; // [rsp+70h] [rbp-F8h]
  _BYTE v19[64]; // [rsp+78h] [rbp-F0h] BYREF
  void *ptr; // [rsp+B8h] [rbp-B0h]
  __int64 v21; // [rsp+C0h] [rbp-A8h]
  _BYTE v22[64]; // [rsp+C8h] [rbp-A0h] BYREF
  void ***v23; // [rsp+108h] [rbp-60h]
  __int64 *v24; // [rsp+110h] [rbp-58h]
  __int64 v25; // [rsp+118h] [rbp-50h]
  __int64 v26; // [rsp+120h] [rbp-48h]
  int v27; // [rsp+128h] [rbp-40h]
  __int64 v28; // [rsp+130h] [rbp-38h]
  __int64 v29; // [rsp+138h] [rbp-30h]
  int v30; // [rsp+140h] [rbp-28h]

  v7 = 0;
  v11[0] = a1;
  v5 = &off_2BC1FC0;
  v12 = 256;
  v17 = v19;
  v18 = 0x400000000LL;
  v21 = 0x400000000LL;
  ptr = v22;
  v23 = &v16;
  v15 = 0;
  v16 = &v17;
  v6 = 0;
  v9 = 0;
  v10 = 1;
  v8 = 0;
  v11[1] = &v5;
  v13 = 0;
  v14 = 0;
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  sub_E2E4C0((__int64)v11, a2, 0, (__m128)0LL);
  LOBYTE(v2) = (_DWORD)v18 != 0;
  operator delete();
  operator delete();
  v3 = v24;
  if ( v24 )
  {
    sub_E16EB0(
      v24,
      (char *)(*v24 + 16LL * *((unsigned int *)v24 + 2)),
      (char *)v17,
      (char *)v17 + 16 * (unsigned int)v18);
    sub_E16EB0(
      v24 + 10,
      (char *)(v24[10] + 16LL * *((unsigned int *)v24 + 22)),
      (char *)ptr,
      (char *)ptr + 16 * (unsigned int)v21);
    v3 = v24;
  }
  *v23 = (void **)v3;
  if ( ptr != v22 )
    free(ptr);
  if ( v17 != v19 )
    free(v17);
  sub_2257740(&v5);
  return v2;
}

