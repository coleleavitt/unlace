void __fastcall __noreturn sub_6874F0(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        const char *a6,
        double a7,
        double a8,
        double a9,
        int a10)
{
  unsigned __int64 v12; // r13
  char v15; // al
  __int64 v16; // rbx
  char v17; // dl
  unsigned __int64 v18; // [rsp+8h] [rbp-110h]
  _OWORD v19[2]; // [rsp+10h] [rbp-108h] BYREF
  __int64 v20; // [rsp+30h] [rbp-E8h]
  __int64 v21; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v22; // [rsp+40h] [rbp-D8h]
  __int128 v23; // [rsp+48h] [rbp-D0h]
  __int128 v24; // [rsp+58h] [rbp-C0h]
  __int128 v25; // [rsp+68h] [rbp-B0h]
  __int128 v26; // [rsp+78h] [rbp-A0h]
  __int128 v27; // [rsp+88h] [rbp-90h]
  __int128 v28; // [rsp+98h] [rbp-80h]
  __int128 v29; // [rsp+A8h] [rbp-70h]
  __int128 v30; // [rsp+B8h] [rbp-60h]
  unsigned __int64 v31; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+D8h] [rbp-40h]

  v12 = a2;
  v32 = __readfsqword(0x28u);
  if ( a3 != -1 && a4 < a3 )
    sub_387D20(1285, (unsigned int)(2 * *(_DWORD *)(a1[3] + 24)), a3, (unsigned int)(2 * *(_DWORD *)(a1[3] + 24)));
  v20 = 0;
  memset(v19, 0, sizeof(v19));
  v21 = 0;
  v22 = 0;
  v31 = 0xFFFFFFFF00000000LL;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  if ( a2 > 0xFFFF && !*(_DWORD *)(a1[2] + 4) )
  {
    v18 = sub_50FCE0((__int64)a1);
    sub_50FE00((__int64)a1, v18, a2);
    v12 = v18;
  }
  v22 = v12;
  v15 = 2;
  *(_QWORD *)&v19[0] = a3;
  *((_QWORD *)&v19[0] + 1) = a4;
  LOBYTE(v21) = 1;
  if ( a6 )
    v15 = strcmp(a6, "STACK") == 0 ? 5 : 2;
  v16 = *a1;
  BYTE1(v21) = v15;
  if ( !sub_631C90(v16, 3, 4, a4, a5, (__int64)a6) || (v17 = 2, (*(_DWORD *)(v16 + 936) & 0x10000000) == 0) )
    v17 = (*(_DWORD *)(v16 + 936) & 4) != 0;
  BYTE3(v21) = v17;
  sub_686840(a1, (__int64)v19, a5, (__int64)a6, a10 | 1, NAN, a8, a9);
}
