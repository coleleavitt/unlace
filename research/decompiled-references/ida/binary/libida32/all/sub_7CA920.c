unsigned __int64 __fastcall sub_7CA920(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  void *v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  _BYTE v14[24]; // [rsp+10h] [rbp-258h] BYREF
  char v15[24]; // [rsp+28h] [rbp-240h] BYREF
  char v16[32]; // [rsp+40h] [rbp-228h] BYREF
  void *v17; // [rsp+60h] [rbp-208h] BYREF
  __int128 v18; // [rsp+68h] [rbp-200h]
  void *ptr; // [rsp+78h] [rbp-1F0h] BYREF
  __int128 v20; // [rsp+80h] [rbp-1E8h]
  __int64 v21; // [rsp+90h] [rbp-1D8h] BYREF
  __int128 v22; // [rsp+98h] [rbp-1D0h]
  __int64 v23; // [rsp+A8h] [rbp-1C0h]
  __int128 v24; // [rsp+B0h] [rbp-1B8h]
  int v25; // [rsp+C0h] [rbp-1A8h]
  __int64 v26; // [rsp+C8h] [rbp-1A0h]
  int v27; // [rsp+D0h] [rbp-198h]
  _BYTE v28[120]; // [rsp+E0h] [rbp-188h] BYREF
  __int128 v29; // [rsp+158h] [rbp-110h]
  __int128 v30; // [rsp+168h] [rbp-100h]
  __int64 v31; // [rsp+178h] [rbp-F0h]
  _BYTE v32[120]; // [rsp+180h] [rbp-E8h] BYREF
  __int128 v33; // [rsp+1F8h] [rbp-70h]
  __int128 v34; // [rsp+208h] [rbp-60h]
  __int64 v35; // [rsp+218h] [rbp-50h]
  unsigned __int64 v36; // [rsp+228h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( a1[1] != a2 )
  {
    sub_7C7AD0((__int64)v14, nullptr, nullptr, nullptr);
    v17 = nullptr;
    v18 = 0;
    sub_7B9AC0(&v17, (__int64)v14);
    ptr = nullptr;
    v20 = 0;
    sub_7B9AC0(&ptr, (__int64)v15);
    v21 = 0;
    v22 = 0;
    sub_7B9AC0(&v21, (__int64)v16);
    v23 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v24 = 0;
    sub_7BF110((__int64)v28, (__int64)&v17);
    v3 = a1[1];
    v31 = 0;
    v29 = 0;
    v30 = 0;
    if ( a2 < v3 )
    {
      v8 = a2;
      do
      {
        v9 = *a1 + 160 * v8;
        v10 = *(void **)(v9 + 72);
        if ( v10 )
        {
          *(_QWORD *)(v9 + 80) = 0;
          qfree(v10);
        }
        ++v8;
        sub_7B13E0(v9);
      }
      while ( v3 != v8 );
    }
    else
    {
      if ( v3 >= a2 )
      {
LABEL_10:
        sub_7BF0B0((__int64)v28);
        sub_7BF0B0((__int64)&v17);
        sub_7B13E0((__int64)v14);
        return v36 - __readfsqword(0x28u);
      }
      v4 = *a1;
      v5 = a1[2];
      if ( (unsigned __int64)v28 >= *a1 && (unsigned __int64)v28 < v4 + 160 * v5 )
      {
        sub_7BF110((__int64)v32, (__int64)v28);
        v35 = 0;
        v33 = 0;
        v34 = 0;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve(a1, *a1, a2, 160);
        v11 = a1[1];
        if ( v11 < a2 )
        {
          do
          {
            v12 = *a1 + 160 * v11;
            sub_7BF110(v12, (__int64)v32);
            ++v11;
            *(_QWORD *)(v12 + 152) = 0;
            *(_OWORD *)(v12 + 120) = 0;
            *(_OWORD *)(v12 + 136) = 0;
          }
          while ( a2 != v11 );
        }
        a1[1] = a2;
        sub_7BF0B0((__int64)v32);
        goto LABEL_10;
      }
      if ( v5 >= a2 || (v13 = qvector_reserve(a1, *a1, a2, 160), v3 = a1[1], *a1 = v13, v4 = v13, v3 < a2) )
      {
        while ( 1 )
        {
          v6 = 160 * v3 + v4;
          sub_7BF110(v6, (__int64)v28);
          ++v3;
          *(_QWORD *)(v6 + 152) = 0;
          *(_OWORD *)(v6 + 120) = 0;
          *(_OWORD *)(v6 + 136) = 0;
          if ( v3 >= a2 )
            break;
          v4 = *a1;
        }
      }
    }
    a1[1] = a2;
    goto LABEL_10;
  }
  return v36 - __readfsqword(0x28u);
}

