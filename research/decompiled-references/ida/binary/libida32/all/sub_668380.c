void __fastcall __noreturn sub_668380(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        double a7,
        __m128i a8,
        double a9,
        int a10)
{
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  unsigned int v13; // ebx
  char v15; // al
  __int64 v16; // rbx
  char v17; // dl
  unsigned int v18; // [rsp+Ch] [rbp-ACh]
  __int128 v19; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-98h]
  __int64 v21; // [rsp+28h] [rbp-90h]
  __int128 v22; // [rsp+30h] [rbp-88h]
  __int128 v23; // [rsp+40h] [rbp-78h]
  __int128 v24; // [rsp+50h] [rbp-68h]
  __int128 v25; // [rsp+60h] [rbp-58h]
  unsigned __int64 v26; // [rsp+70h] [rbp-48h]
  unsigned __int64 v27; // [rsp+78h] [rbp-40h]

  v11 = a4;
  v12 = a2;
  v13 = a3;
  v27 = __readfsqword(0x28u);
  if ( (_DWORD)a3 != -1 && (unsigned int)a4 < (unsigned int)a3 )
    sub_384000(1285, (unsigned int)(2 * *(_DWORD *)(a1[3] + 8)), a3, (unsigned int)(2 * *(_DWORD *)(a1[3] + 8)));
  v20 = 0;
  v19 = 0;
  v21 = 0;
  v26 = 0xFFFFFFFF00000000LL;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  if ( a2 > 0xFFFF && !*(_DWORD *)(a1[2] + 4) )
  {
    v18 = sub_4F8420((__int64)a1);
    sub_4F8530((__int64)a1, v18, a2);
    v12 = v18;
  }
  HIDWORD(v21) = v12;
  v15 = 2;
  *(_QWORD *)&v19 = __PAIR64__(v11, v13);
  BYTE4(v20) = 1;
  if ( a6 )
    v15 = strcmp(a6, "STACK") == 0 ? 5 : 2;
  v16 = *a1;
  BYTE5(v20) = v15;
  if ( !sub_615160(v16, 3, 4, a4, a5, (__int64)a6) || (v17 = 2, (*(_DWORD *)(v16 + 768) & 0x10000000) == 0) )
    v17 = (*(_DWORD *)(v16 + 768) & 4) != 0;
  HIBYTE(v20) = v17;
  sub_667930(a1, (unsigned int *)&v19, a5, (__int64)a6, a10 | 1, NAN, a8, a9);
}

