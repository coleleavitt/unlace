__int64 __fastcall sub_A080F0(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rax
  size_t v11; // r10
  const char *v12; // r9
  __int64 v13; // r15
  char v14; // dl
  __int64 v15; // r12
  __int64 v17; // rax
  __int64 v18; // r10
  const char *v19; // rax
  char v20; // dl
  char *v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-230h]
  __int64 v24; // [rsp+20h] [rbp-218h]
  const char *v25; // [rsp+28h] [rbp-210h]
  unsigned int v26; // [rsp+38h] [rbp-200h]
  _QWORD v27[4]; // [rsp+40h] [rbp-1F8h] BYREF
  __int16 v28; // [rsp+60h] [rbp-1D8h]
  _QWORD v29[4]; // [rsp+70h] [rbp-1C8h] BYREF
  __int16 v30; // [rsp+90h] [rbp-1A8h]
  _QWORD v31[4]; // [rsp+A0h] [rbp-198h] BYREF
  __int16 v32; // [rsp+C0h] [rbp-178h]
  _BYTE v33[32]; // [rsp+D0h] [rbp-168h] BYREF
  __int16 v34; // [rsp+F0h] [rbp-148h]
  _BYTE v35[32]; // [rsp+100h] [rbp-138h] BYREF
  __int16 v36; // [rsp+120h] [rbp-118h]
  __int64 v37[4]; // [rsp+130h] [rbp-108h] BYREF
  __int16 v38; // [rsp+150h] [rbp-E8h]
  void *ptr; // [rsp+160h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+168h] [rbp-D0h]
  _BYTE v41[192]; // [rsp+178h] [rbp-C0h] BYREF

  v10 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v41;
  v22 = v10;
  if ( a3 > 0x80 )
  {
    sub_2236E10(&ptr, v41, a3, 1);
    v21 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    v11 = a3;
    if ( !a3 )
      goto LABEL_3;
    v21 = v41;
  }
  memcpy(v21, a2, a3);
  v11 = si128.m128i_i64[0] + a3;
LABEL_3:
  v12 = &byte_22F0C30;
  si128.m128i_i64[0] = v11;
  if ( !a6 )
    v12 = "_private";
  v31[0] = "APINotes";
  v26 = v11;
  v25 = v12;
  v38 = 257;
  v36 = 257;
  v34 = 257;
  v32 = 259;
  sub_228A3B0(&ptr, v31, v33, v35, v37);
  v36 = 257;
  v34 = 257;
  v27[0] = a4;
  v27[3] = a6 == 0 ? 8 : 0;
  v28 = 1285;
  v29[0] = v27;
  v29[2] = ".";
  v30 = 770;
  v31[0] = v29;
  v31[2] = "apinotes";
  v27[1] = a5;
  v27[2] = v25;
  v38 = 257;
  v32 = 770;
  sub_228A3B0(&ptr, v31, v33, v35, v37);
  sub_FD9C70(v37, v22, ptr, si128.m128i_i64[0], 0, 1, 1);
  v13 = sub_A05DE0(v37);
  if ( !v14 )
  {
    sub_A04D90(v37);
LABEL_7:
    v15 = 0;
    goto LABEL_8;
  }
  sub_A04D90(v37);
  if ( !v13 )
    goto LABEL_7;
  v17 = si128.m128i_i64[0];
  v18 = v26;
  if ( si128.m128i_i64[0] != v26 )
  {
    if ( si128.m128i_i64[0] <= (unsigned __int64)v26 )
    {
      if ( (unsigned __int64)v26 > si128.m128i_i64[1] )
      {
        sub_2236E10(&ptr, v41, v26, 1);
        v17 = si128.m128i_i64[0];
        v18 = v26;
      }
      if ( (char *)ptr + v17 != (char *)ptr + v18 )
      {
        v24 = v18;
        memset((char *)ptr + v17, 0, v18 - v17);
        v18 = v24;
      }
    }
    si128.m128i_i64[0] = v18;
  }
  v38 = 257;
  v36 = 257;
  v19 = "Headers";
  if ( !a6 )
    v19 = "PrivateHeaders";
  v32 = 259;
  v34 = 257;
  v31[0] = v19;
  sub_228A3B0(&ptr, v31, v33, v35, v37);
  sub_FD9440(v37, v22, ptr, si128.m128i_i64[0], 1);
  v15 = sub_A05D80(v37);
  if ( !v20 )
  {
    sub_A04D70(v37);
    goto LABEL_7;
  }
  sub_A04D70(v37);
  if ( !v15 || (unsigned __int8)sub_A074A0(a1, *(_QWORD *)(v15 + 8), v13) )
    goto LABEL_7;
LABEL_8:
  if ( ptr != v41 )
    free(ptr);
  return v15;
}
