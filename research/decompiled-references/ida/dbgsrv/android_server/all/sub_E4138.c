/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4138
// Address: 0x00000000000E4138

//----- (00000000000E4138) ----------------------------------------------------
void *__fastcall sub_E4138(void *result, char **a2)
{
  unsigned __int8 *v2; // x8
  int v3; // w9
  int v4; // w11
  char v5; // w14
  char v6; // w9
  char v7; // w14
  char v8; // w9
  int v9; // w11
  int v10; // w14
  char v12; // w15
  char v13; // w11
  char v14; // w15
  int v15; // w11
  int v16; // w14
  char v17; // w15
  char v18; // w11
  char v19; // w15
  int v20; // w11
  int v21; // w14
  char *v22; // x8
  char v23; // w10
  char v24; // w10
  char v25; // w11
  char *v26; // x9
  char v27; // w11
  char *v29; // x8
  unsigned __int64 v30; // x10
  size_t v31; // x20
  unsigned __int64 v32; // x9
  char *v33; // x0
  char *v34; // x0
  size_t v35; // x1
  float v36; // [xsp+8h] [xbp-48h] BYREF
  char s[8]; // [xsp+10h] [xbp-40h] BYREF
  __int64 v38; // [xsp+18h] [xbp-38h]
  __int64 v39; // [xsp+20h] [xbp-30h]
  __int64 v40; // [xsp+28h] [xbp-28h]

  v40 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((unsigned __int8 **)result + 2);
  if ( (unsigned __int64)(*((_QWORD *)result + 3) + 1LL - (_QWORD)v2) >= 9 )
  {
    v3 = *v2;
    v4 = v2[1];
    v5 = (unsigned int)(v3 - 48) >= 0xA ? 9 : 0;
    v6 = v5 + v3;
    v7 = (unsigned int)(v4 - 48) >= 0xA ? -87 : -48;
    v8 = v7 + v4 + 16 * v6;
    v9 = v2[2];
    v10 = v2[3];
    v12 = (unsigned int)(v9 - 48) >= 0xA ? 9 : 0;
    v13 = v12 + v9;
    v14 = (unsigned int)(v10 - 48) >= 0xA ? -87 : -48;
    BYTE1(v36) = v14 + v10 + 16 * v13;
    v15 = v2[4];
    v16 = v2[5];
    v17 = (unsigned int)(v15 - 48) >= 0xA ? 9 : 0;
    v18 = v17 + v15;
    v19 = (unsigned int)(v16 - 48) >= 0xA ? -87 : -48;
    BYTE2(v36) = v19 + v16 + 16 * v18;
    v20 = v2[6];
    v21 = v2[7];
    v22 = (char *)&v36 + 2;
    v23 = (unsigned int)(v20 - 48) >= 0xA ? 9 : 0;
    v24 = v23 + v20;
    v25 = (unsigned int)(v21 - 48) >= 0xA ? -87 : -48;
    HIBYTE(v36) = v8;
    v26 = (char *)&v36 + 2;
    LOBYTE(v36) = v25 + v21 + 16 * v24;
    do
    {
      v27 = *(v22 - 1);
      *(v22 - 1) = *v26;
      *v26-- = v27;
    }
    while ( v22++ < v26 );
    *(_QWORD *)s = 0;
    v38 = 0;
    v39 = 0;
    result = (void *)snprintf(s, 0x18u, "%af", v36);
    if ( (_DWORD)result )
    {
      v29 = a2[1];
      v30 = (unsigned __int64)a2[2];
      v31 = (int)result;
      v32 = (unsigned __int64)&v29[(int)result];
      if ( v32 >= v30 )
      {
        v34 = *a2;
        if ( 2 * v30 >= v32 )
          v35 = 2 * v30;
        else
          v35 = v32;
        a2[2] = (char *)v35;
        v33 = (char *)realloc(v34, v35);
        v29 = a2[1];
        *a2 = v33;
      }
      else
      {
        v33 = *a2;
      }
      result = memmove(&v29[(_QWORD)v33], s, v31);
      a2[1] += v31;
    }
  }
  return result;
}
