/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051CC0
// Address: 0x0000000100051CC0

//----- (0000000100051CC0) ----------------------------------------------------
__int64 __fastcall sub_100051CC0(__m128i *a1, _BYTE *a2, const char *a3, int a4)
{
  unsigned int v6; // r12d
  _QWORD *v7; // rax
  __int64 v8; // rcx
  void *v9; // rdi
  __int64 v10; // rax
  __int128 v12; // [rsp+0h] [rbp-260h] BYREF
  __int64 v13; // [rsp+10h] [rbp-250h]
  void **p_p; // [rsp+20h] [rbp-240h]
  void *__p; // [rsp+28h] [rbp-238h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-230h] BYREF
  __int64 v17; // [rsp+40h] [rbp-220h] BYREF
  __int128 v18; // [rsp+48h] [rbp-218h]
  int v19; // [rsp+58h] [rbp-208h]
  char v20; // [rsp+5Ch] [rbp-204h]
  _QWORD *v21; // [rsp+60h] [rbp-200h]
  char v22; // [rsp+68h] [rbp-1F8h]
  __int128 v23; // [rsp+78h] [rbp-1E8h]
  __int128 v24; // [rsp+88h] [rbp-1D8h]
  __int64 v25; // [rsp+98h] [rbp-1C8h]
  char v26; // [rsp+A0h] [rbp-1C0h]
  __int64 v27; // [rsp+A8h] [rbp-1B8h]
  __int128 v28; // [rsp+B0h] [rbp-1B0h]
  __int128 v29; // [rsp+C0h] [rbp-1A0h]
  __int16 v30; // [rsp+D0h] [rbp-190h]
  __int128 v31; // [rsp+F8h] [rbp-168h]
  __int128 v32; // [rsp+108h] [rbp-158h]
  __int128 v33; // [rsp+118h] [rbp-148h]
  __int128 v34; // [rsp+128h] [rbp-138h]
  __int128 v35; // [rsp+138h] [rbp-128h]
  __int128 v36; // [rsp+148h] [rbp-118h]
  __int128 v37; // [rsp+158h] [rbp-108h]
  __int128 v38; // [rsp+168h] [rbp-F8h]
  __int128 v39; // [rsp+178h] [rbp-E8h]
  __int128 v40; // [rsp+188h] [rbp-D8h]
  __int128 v41; // [rsp+198h] [rbp-C8h]
  __int128 v42; // [rsp+1A8h] [rbp-B8h]
  __int128 v43; // [rsp+1B8h] [rbp-A8h]
  __int128 v44; // [rsp+1C8h] [rbp-98h]
  _BYTE v45[19]; // [rsp+1D8h] [rbp-88h] BYREF
  int v46; // [rsp+1ECh] [rbp-74h]
  __int128 v47; // [rsp+1F0h] [rbp-70h]
  __int128 v48; // [rsp+200h] [rbp-60h]
  int v49; // [rsp+210h] [rbp-50h]
  __int128 v50; // [rsp+218h] [rbp-48h]
  __int128 v51; // [rsp+228h] [rbp-38h]

  v6 = 0;
  v7 = open_linput(a3, 0);
  __p = v7;
  if ( v7 )
  {
    p_p = &__p;
    v16[0] = &off_1000A7F20;
    v16[1] = &v17;
    v17 = 0xFFFFFFFFLL;
    v18 = -1;
    v19 = 8;
    v20 = 1;
    v21 = v7;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = -1;
    v26 = 0;
    v27 = -1;
    v46 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    memset(v45, 0, sizeof(v45));
    v47 = -1;
    v48 = 0;
    v49 = 0;
    v51 = 0;
    v50 = 0;
    if ( (unsigned __int8)sub_10000FA10((__int64)v16) )
    {
      v12 = 0;
      v13 = 0;
      if ( (unsigned __int8)sub_1000171C0((__int64)&v12, (__int64)v16) )
      {
        v8 = *((_QWORD *)&v12 + 1);
        v9 = (void *)v12;
        if ( *((_QWORD *)&v12 + 1) )
        {
          v10 = v12;
          while ( *(_DWORD *)v10 != a4 )
          {
            v10 += 28;
            if ( !--v8 )
            {
              v6 = 0;
              goto LABEL_12;
            }
          }
          *a1 = _mm_loadu_si128((const __m128i *)(v10 + 8));
          LOBYTE(v6) = 1;
          if ( a2 )
            *a2 = *(_BYTE *)(v10 + 24) & 1;
          goto LABEL_12;
        }
      }
      else
      {
        v9 = (void *)v12;
      }
      v6 = 0;
      if ( v9 )
      {
LABEL_12:
        *((_QWORD *)&v12 + 1) = 0;
        qfree(v9);
      }
    }
    else
    {
      v6 = 0;
    }
    sub_10001CA40((__int64)v16);
    close_linput(__p);
  }
  return v6;
}
// 1000A7F20: using guessed type __int64 (__fastcall *off_1000A7F20)();
