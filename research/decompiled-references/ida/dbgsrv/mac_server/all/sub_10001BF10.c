/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BF10
// Address: 0x000000010001BF10

//----- (000000010001BF10) ----------------------------------------------------
__int64 __fastcall sub_10001BF10(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rax
  const void *v6; // r13
  size_t v7; // r12
  char *v8; // rdi
  char *v9; // rbx
  const char *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  void *__p; // [rsp+18h] [rbp-278h]
  char *__s1[2]; // [rsp+20h] [rbp-270h] BYREF
  __int64 v19; // [rsp+30h] [rbp-260h]
  _QWORD v20[3]; // [rsp+38h] [rbp-258h] BYREF
  __int128 v21; // [rsp+50h] [rbp-240h]
  int v22; // [rsp+60h] [rbp-230h]
  char v23; // [rsp+64h] [rbp-22Ch]
  _QWORD *v24; // [rsp+68h] [rbp-228h]
  char v25; // [rsp+70h] [rbp-220h]
  __int128 v26; // [rsp+80h] [rbp-210h]
  __int64 v27; // [rsp+90h] [rbp-200h]
  __int64 v28; // [rsp+98h] [rbp-1F8h]
  __int64 v29; // [rsp+A0h] [rbp-1F0h]
  char v30; // [rsp+A8h] [rbp-1E8h]
  __int64 v31; // [rsp+B0h] [rbp-1E0h]
  __int128 v32; // [rsp+B8h] [rbp-1D8h]
  __int128 v33; // [rsp+C8h] [rbp-1C8h]
  __int16 v34; // [rsp+D8h] [rbp-1B8h]
  __int128 v35; // [rsp+100h] [rbp-190h]
  __int128 v36; // [rsp+110h] [rbp-180h]
  __int128 v37; // [rsp+120h] [rbp-170h]
  __int128 v38; // [rsp+130h] [rbp-160h]
  __int128 v39; // [rsp+140h] [rbp-150h]
  __int128 v40; // [rsp+150h] [rbp-140h]
  __int128 v41; // [rsp+160h] [rbp-130h]
  __int128 v42; // [rsp+170h] [rbp-120h]
  __int128 v43; // [rsp+180h] [rbp-110h]
  __int128 v44; // [rsp+190h] [rbp-100h]
  __int128 v45; // [rsp+1A0h] [rbp-F0h]
  __int128 v46; // [rsp+1B0h] [rbp-E0h]
  __int128 v47; // [rsp+1C0h] [rbp-D0h]
  __int128 v48; // [rsp+1D0h] [rbp-C0h]
  _BYTE v49[19]; // [rsp+1E0h] [rbp-B0h] BYREF
  int v50; // [rsp+1F4h] [rbp-9Ch]
  __int128 v51; // [rsp+1F8h] [rbp-98h]
  __int128 v52; // [rsp+208h] [rbp-88h]
  int v53; // [rsp+218h] [rbp-78h]
  __int128 v54; // [rsp+220h] [rbp-70h]
  __int128 v55; // [rsp+230h] [rbp-60h]
  _QWORD v56[3]; // [rsp+240h] [rbp-50h] BYREF
  __int16 v57; // [rsp+258h] [rbp-38h]

  v4 = 0;
  if ( *(_BYTE *)(a1 + 25) == 1 )
  {
    v5 = *(unsigned int *)(a2 + 24);
    v6 = (const void *)(a3 + v5);
    if ( a3 + v5 < a4 && (unsigned int)v5 >= 0x20 && (unsigned __int64)v6 >= a3 )
    {
      v7 = a4 - (_QWORD)v6;
      *(_OWORD *)__s1 = 0;
      v19 = 0;
      v4 = 0;
      if ( a4 - (_QWORD)v6 == -1 )
      {
        v8 = nullptr;
      }
      else
      {
        v8 = (char *)qvector_reserve((__int64)__s1, nullptr, v7 + 1, 1u);
        __s1[0] = v8;
      }
      __s1[1] = (char *)(v7 + 1);
      memmove(v8, v6, v7);
      __s1[0][v7] = 0;
      v9 = __s1[0];
      v10 = _s1;
      if ( __s1[1] )
        v10 = __s1[0];
      if ( strcmp(v10, "com.apple.kernel") )
      {
        if ( !v9 )
          return v4;
        goto LABEL_21;
      }
      v11 = sub_100017000(*(_QWORD **)(a1 + 8), *(_QWORD *)(a2 + 16));
      __p = v11;
      if ( v11 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
        v13 = *(_QWORD *)(a2 + 16);
        v20[0] = &off_1000A7F20;
        v20[1] = v12;
        v20[2] = 0xFFFFFFFFLL;
        v21 = -1;
        v22 = 8;
        v23 = 1;
        v24 = v11;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = v13;
        v29 = -1;
        v30 = 0;
        v31 = -1;
        v50 = 0;
        v32 = 0;
        v33 = 0;
        v34 = 0;
        memset(v49, 0, sizeof(v49));
        v48 = 0;
        v47 = 0;
        v46 = 0;
        v45 = 0;
        v44 = 0;
        v43 = 0;
        v42 = 0;
        v41 = 0;
        v40 = 0;
        v39 = 0;
        v38 = 0;
        v37 = 0;
        v36 = 0;
        v35 = 0;
        v51 = -1;
        v52 = 0;
        v53 = 0;
        v55 = 0;
        v54 = 0;
        if ( (unsigned __int8)sub_10000FA10((__int64)v20) && (unsigned __int8)sub_100010140((__int64)v20, 0, 0, 0) )
        {
          v14 = *(_QWORD *)(a1 + 16);
          v56[0] = off_1000A7B38;
          v56[1] = v20;
          v56[2] = v14;
          v57 = 0;
          sub_100010C80((__int64)v20, (__int64)v56);
          *(_BYTE *)(a1 + 24) |= v57;
        }
        else
        {
          sub_100000AE0((int)"ERROR: com.apple.kernel fileset entry invalid\n");
        }
        sub_10001CA40((__int64)v20);
        close_linput(__p);
      }
      else
      {
        sub_100000AE0((int)"ERROR: failed to create macho input for com.apple.kernel fileset entry\n");
      }
      v4 = 1;
      v9 = __s1[0];
      if ( __s1[0] )
      {
LABEL_21:
        __s1[1] = nullptr;
        qfree(v9);
      }
    }
  }
  return v4;
}
// 1000A7B38: using guessed type __int64 (__fastcall *off_1000A7B38[38])();
// 1000A7F20: using guessed type __int64 (__fastcall *off_1000A7F20)();
