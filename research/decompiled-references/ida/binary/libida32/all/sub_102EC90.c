void __fastcall sub_102EC90(char *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **v6; // rbp
  __m128 v7; // xmm0
  char *v8; // rbx
  char v9; // r14
  size_t v10; // rax
  _BYTE *v11; // rdi
  size_t v12; // r15
  unsigned __int64 v13; // rdx
  char *v14; // rdi
  size_t v15; // r15
  size_t v16; // rax
  unsigned __int64 v17; // rcx
  char v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // [rsp+18h] [rbp-130h]
  char *v22; // [rsp+20h] [rbp-128h] BYREF
  size_t v23; // [rsp+28h] [rbp-120h]
  void *v24; // [rsp+30h] [rbp-118h] BYREF
  size_t v25; // [rsp+38h] [rbp-110h]
  _QWORD v26[2]; // [rsp+40h] [rbp-108h] BYREF
  _OWORD v27[2]; // [rsp+50h] [rbp-F8h] BYREF
  char *v28; // [rsp+70h] [rbp-D8h]
  __int64 v29; // [rsp+78h] [rbp-D0h] BYREF
  _QWORD v30[2]; // [rsp+80h] [rbp-C8h] BYREF
  char *v31; // [rsp+90h] [rbp-B8h]
  __int16 v32; // [rsp+A0h] [rbp-A8h]
  _QWORD v33[4]; // [rsp+B0h] [rbp-98h] BYREF
  __int16 v34; // [rsp+D0h] [rbp-78h]
  __int64 v35; // [rsp+E0h] [rbp-68h]
  __int64 v36; // [rsp+E8h] [rbp-60h]
  __int64 v37; // [rsp+F0h] [rbp-58h]
  __int64 v38; // [rsp+F8h] [rbp-50h]
  __int64 v39; // [rsp+100h] [rbp-48h]

  if ( a1[3] < 0 )
  {
    v33[0] = "__declspec";
    v30[0] = "__declspec";
  }
  else
  {
    v33[0] = "__attribute__((a))";
    v30[0] = "__declspec(a)";
  }
  LOWORD(v39) = 257;
  v34 = 259;
  v32 = 259;
  sub_10160F0(a2, (__int64)v30, (__int64)v33, a4, a5, a6, v35, v36, v37, v38, 1u);
  if ( *a1 >= 0 )
  {
    v6 = (char **)v27;
    v22 = "stdcall";
    v27[0] = _mm_loadh_ps((const double *)&v22);
    v22 = "thiscall";
    v28 = "pascal";
    v7 = _mm_loadh_ps((const double *)&v22);
    v22 = (char *)&v29;
    v27[1] = v7;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        v24 = v26;
        sub_1014B80(&v24, "__attribute__((__", (__int64)"");
        v9 = *v8;
        v10 = strlen(v8);
        if ( 0x7FFFFFFFFFFFFFFFLL - v25 < v10 )
          goto LABEL_37;
        v11 = v24;
        v12 = v25 + v10;
        v13 = v24 == v26 ? 15LL : v26[0];
        if ( v12 > v13 )
        {
          sub_974DF0((__int64)&v24, v25, 0, v8, v10);
          v11 = v24;
        }
        else if ( v10 )
        {
          v14 = (char *)v24 + v25;
          if ( v10 == 1 )
            *v14 = v9;
          else
            memcpy(v14, v8, v10);
          v11 = v24;
        }
        v25 = v12;
        v11[v12] = 0;
        v15 = v25;
        if ( 0x7FFFFFFFFFFFFFFFLL - v25 <= 3 )
LABEL_37:
          std::__throw_length_error("basic_string::append");
        v16 = v25 + 4;
        if ( v24 == v26 )
          v17 = 15;
        else
          v17 = v26[0];
        if ( v16 > v17 )
        {
          v23 = v25 + 4;
          sub_974DF0((__int64)&v24, v25, 0, "__))", 4u);
          v16 = v23;
        }
        else
        {
          *(_DWORD *)((char *)v24 + v25) = 690577247;
        }
        v25 = v16;
        LOWORD(v39) = 257;
        *((_BYTE *)v24 + v15 + 4) = 0;
        v34 = 260;
        v33[0] = &v24;
        v30[0] = "_";
        if ( v9 )
        {
          v31 = v8;
          v18 = 3;
          v32 = 771;
        }
        else
        {
          v18 = 1;
          v32 = 259;
        }
        sub_10160F0(a2, (__int64)v30, (__int64)v33, v17, 257, 260, v35, v36, v37, v38, v39);
        v33[0] = &v24;
        LOWORD(v39) = 257;
        v34 = 260;
        if ( !v9 )
          v8 = v21;
        v30[0] = "__";
        v21 = v8;
        if ( v18 == 1 )
        {
          v32 = 259;
        }
        else
        {
          LOBYTE(v32) = 3;
          HIBYTE(v32) = v18;
          v31 = v8;
        }
        sub_10160F0(a2, (__int64)v30, (__int64)v33, 260, v19, v20, v35, v36, v37, v38, v39);
        if ( v24 == v26 )
          break;
        operator delete(v24);
        if ( ++v6 == (char **)v22 )
          return;
      }
      ++v6;
    }
    while ( v6 != (char **)v22 );
  }
}

