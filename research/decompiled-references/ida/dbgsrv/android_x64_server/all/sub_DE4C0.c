/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DE4C0
// Address: 0x00000000000DE4C0

//----- (00000000000DE4C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_DE4C0(__int64 a1, void **a2)
{
  char *v2; // rcx
  char v4; // r9
  char v5; // dl
  char v6; // dl
  char v7; // r8
  char v8; // bl
  char v9; // dl
  char v10; // si
  char v11; // si
  char v12; // bl
  char v13; // si
  char v14; // si
  char v15; // bl
  char *v16; // rsi
  char v17; // r9
  int v18; // ecx
  char *v19; // rax
  char v20; // cl
  int v22; // eax
  size_t v23; // rbx
  char *v24; // rdi
  size_t v25; // rsi
  size_t v26; // rax
  char *v27; // rax
  size_t v28; // rsi
  float v30; // [rsp+8h] [rbp-40h] BYREF
  char s[16]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v32; // [rsp+20h] [rbp-28h]
  unsigned __int64 v33; // [rsp+30h] [rbp-18h]

  v33 = __readfsqword(0x28u);
  v2 = *(char **)(a1 + 16);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL - (_QWORD)v2) >= 9 )
  {
    v4 = 0;
    v5 = 0;
    if ( (unsigned int)(*v2 - 48) >= 0xA )
      v5 = 9;
    v6 = *v2 + v5;
    v7 = -48;
    v8 = -48;
    if ( (unsigned int)(v2[1] - 48) >= 0xA )
      v8 = -87;
    v9 = v2[1] + v8 + 16 * v6;
    v10 = 0;
    if ( (unsigned int)(v2[2] - 48) >= 0xA )
      v10 = 9;
    v11 = v2[2] + v10;
    v12 = -48;
    if ( (unsigned int)(v2[3] - 48) >= 0xA )
      v12 = -87;
    BYTE1(v30) = v2[3] + v12 + 16 * v11;
    v13 = 0;
    if ( (unsigned int)(v2[4] - 48) >= 0xA )
      v13 = 9;
    v14 = v2[4] + v13;
    v15 = -48;
    if ( (unsigned int)(v2[5] - 48) >= 0xA )
      v15 = -87;
    BYTE2(v30) = v2[5] + v15 + 16 * v14;
    if ( (unsigned int)(v2[6] - 48) >= 0xA )
      v4 = 9;
    v16 = (char *)&v30 + 2;
    v17 = v2[6] + v4;
    v18 = v2[7];
    if ( (unsigned int)(v18 - 48) >= 0xA )
      v7 = -87;
    LOBYTE(v30) = v18 + v7 + 16 * v17;
    HIBYTE(v30) = v9;
    v19 = (char *)&v30 + 2;
    do
    {
      v20 = *(v19 - 1);
      *(v19 - 1) = *v16;
      *v16-- = v20;
    }
    while ( v19++ < v16 );
    *(_OWORD *)s = 0;
    v32 = 0;
    v22 = snprintf(s, 0x18u, "%af", v30);
    if ( v22 )
    {
      v23 = v22;
      v24 = (char *)a2[1];
      v25 = (size_t)a2[2];
      v26 = (size_t)&v24[v22];
      if ( v26 >= v25 )
      {
        v28 = 2 * v25;
        if ( v28 < v26 )
          v28 = v26;
        a2[2] = (void *)v28;
        v27 = (char *)realloc(*a2, v28);
        *a2 = v27;
        v24 = (char *)a2[1];
      }
      else
      {
        v27 = (char *)*a2;
      }
      memmove(&v24[(_QWORD)v27], s, v23);
      a2[1] = (char *)a2[1] + v23;
    }
  }
  return __readfsqword(0x28u);
}
