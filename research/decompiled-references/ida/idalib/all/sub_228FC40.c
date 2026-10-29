__int64 __fastcall sub_228FC40(__int64 *a1, size_t a2, size_t a3, int *a4, _QWORD *a5, int a6, char a7)
{
  size_t v7; // r10
  size_t v8; // r11
  char *v9; // rax
  bool v13; // zf
  char v14; // dl
  char v15; // dl
  _BYTE *v16; // rax
  unsigned int v17; // r12d
  char *v19; // [rsp+0h] [rbp-188h] BYREF
  size_t v20; // [rsp+8h] [rbp-180h]
  char *v21; // [rsp+10h] [rbp-178h]
  __int16 v22; // [rsp+20h] [rbp-168h]
  size_t v23; // [rsp+30h] [rbp-158h]
  size_t v24; // [rsp+38h] [rbp-150h]
  size_t v25[4]; // [rsp+60h] [rbp-128h] BYREF
  __int16 v26; // [rsp+80h] [rbp-108h]
  _BYTE *v27; // [rsp+90h] [rbp-F8h] BYREF
  __int16 v28; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-C0h]
  _BYTE v31[176]; // [rsp+D8h] [rbp-B0h] BYREF

  v9 = "-%%%%%%";
  v13 = a3 == 0;
  v24 = a3;
  v14 = *((_BYTE *)a1 + 32);
  if ( !v13 )
    v9 = "-%%%%%%.";
  v23 = a2;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v19 = v9;
      v7 = v20;
      v15 = 3;
      v22 = 259;
    }
    else
    {
      if ( *((_BYTE *)a1 + 33) == 1 )
      {
        v8 = a1[1];
        a1 = (__int64 *)*a1;
      }
      else
      {
        v14 = 2;
      }
      v19 = (char *)a1;
      v20 = v8;
      HIBYTE(v22) = 3;
      v21 = v9;
      v9 = (char *)&v19;
      LOBYTE(v22) = v14;
      v15 = 2;
    }
    v25[0] = (size_t)v9;
    v25[1] = v7;
    v25[2] = a2;
    v25[3] = v24;
    LOBYTE(v26) = v15;
    HIBYTE(v26) = 5;
  }
  else
  {
    v22 = 256;
    v26 = 256;
  }
  ptr = v31;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v16 = (_BYTE *)sub_2253CC0(v25, &ptr);
  v28 = 257;
  if ( *v16 )
  {
    v27 = v16;
    LOBYTE(v28) = 3;
  }
  v17 = sub_228F900((std::_V2 *)&v27, a4, a5, 1, a6, a7, 0x1B6u);
  if ( ptr != v31 )
    free(ptr);
  return v17;
}
