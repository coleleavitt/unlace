/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D7030
// Address: 0x080D7030

//----- (080D7030) --------------------------------------------------------
unsigned int __cdecl sub_80D7030(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v3; // ecx
  unsigned int v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // edi
  int v19; // esi
  int v20; // ebx
  int v21; // edx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // edx
  unsigned __int8 *v25; // eax
  int v26; // [esp+0h] [ebp-48h]
  int v27; // [esp+0h] [ebp-48h]
  int v28; // [esp+4h] [ebp-44h]
  int v29; // [esp+4h] [ebp-44h]
  int v30; // [esp+8h] [ebp-40h]
  int v31; // [esp+8h] [ebp-40h]
  int v32; // [esp+Ch] [ebp-3Ch]
  int v33; // [esp+Ch] [ebp-3Ch]
  int v34; // [esp+10h] [ebp-38h]
  int v35; // [esp+10h] [ebp-38h]
  int v36; // [esp+14h] [ebp-34h]
  int v37; // [esp+18h] [ebp-30h]
  int v38; // [esp+18h] [ebp-30h]
  int v39; // [esp+1Ch] [ebp-2Ch]
  int v40; // [esp+1Ch] [ebp-2Ch]
  int v41; // [esp+20h] [ebp-28h]
  int v42; // [esp+24h] [ebp-24h]
  unsigned __int8 *v43; // [esp+28h] [ebp-20h]
  unsigned int v44; // [esp+2Ch] [ebp-1Ch]
  unsigned __int8 *v45; // [esp+30h] [ebp-18h]
  unsigned int v46; // [esp+30h] [ebp-18h]
  unsigned int v47; // [esp+34h] [ebp-14h]

  v3 = a2;
  v4 = (unsigned __int16)a1;
  v44 = HIWORD(a1);
  if ( a3 == 1 )
  {
    v13 = (unsigned __int16)a1 + *a2;
    if ( v13 > 0xFFF0 )
      v13 -= 65521;
    v14 = v13 + v44;
    if ( v13 + v44 > 0xFFF0 )
      v14 = v13 + v44 - 65521;
    return v13 | (v14 << 16);
  }
  else if ( a2 )
  {
    if ( a3 > 0xF )
    {
      v45 = a2 + 5552;
      if ( a3 <= 0x15AF )
      {
        v47 = a3;
      }
      else
      {
        while ( 1 )
        {
          v3 = v45 - 5552;
          v47 = a3 - 5552;
          do
          {
            v5 = *v3;
            v3 += 16;
            v26 = v5 + v4;
            v28 = v5 + v4 + *(v3 - 15);
            v30 = v28 + *(v3 - 14);
            v32 = v30 + *(v3 - 13);
            v34 = v32 + *(v3 - 12);
            v36 = v34 + *(v3 - 11);
            v37 = v36 + *(v3 - 10);
            v39 = v37 + *(v3 - 9);
            v41 = v39 + *(v3 - 8);
            v42 = v41 + *(v3 - 7);
            v6 = v42 + *(v3 - 6);
            v7 = v6 + *(v3 - 5);
            v8 = v7 + *(v3 - 4);
            v9 = v8 + *(v3 - 3);
            v10 = v9 + *(v3 - 2);
            v4 = v10 + *(v3 - 1);
            v44 += v4 + v8 + v7 + v6 + v42 + v41 + v39 + v37 + v36 + v34 + v32 + v30 + v28 + v26 + v9 + v10;
          }
          while ( v3 != v45 );
          v4 %= 0xFFF1u;
          v45 = v3 + 5552;
          v44 %= 0xFFF1u;
          if ( v47 <= 0x15AF )
            break;
          a3 -= 5552;
        }
        if ( a3 == 5552 )
          return v4 | (v44 << 16);
        if ( v47 <= 0xF )
        {
          v43 = v3;
          v22 = a3 - 5553;
LABEL_27:
          v23 = v44;
          v24 = (int)&v43[v22 + 1];
          v25 = v43;
          do
          {
            v4 += *v25++;
            v23 += v4;
          }
          while ( v25 != (unsigned __int8 *)v24 );
          v44 = v23;
LABEL_30:
          v4 %= 0xFFF1u;
          v44 %= 0xFFF1u;
          return v4 | (v44 << 16);
        }
      }
      v46 = (v47 - 16) >> 4;
      v43 = &v3[16 * v46 + 16];
      do
      {
        v15 = *v3;
        v16 = v3[1];
        v3 += 16;
        v17 = v4 + v15;
        v18 = v17 + v16;
        v27 = *(v3 - 14) + v18;
        v29 = v27 + *(v3 - 13);
        v31 = v29 + *(v3 - 12);
        v33 = v31 + *(v3 - 11);
        v35 = v33 + *(v3 - 10);
        v38 = v35 + *(v3 - 9) + *(v3 - 8);
        v40 = v38 + *(v3 - 7);
        v19 = v40 + *(v3 - 6) + *(v3 - 5) + *(v3 - 4);
        v20 = v19 + *(v3 - 3);
        v21 = v20 + *(v3 - 2);
        v4 = v21 + *(v3 - 1);
        v44 += v4
             + v21
             + v20
             + v19
             + v40
             + *(v3 - 6)
             + *(v3 - 5)
             + v40
             + *(v3 - 6)
             + v40
             + v38
             + v35
             + *(v3 - 9)
             + v35
             + v33
             + v31
             + v29
             + v27
             + v18
             + v17;
      }
      while ( v3 != v43 );
      v22 = v47 - 16 * v46 - 17;
      if ( (v47 & 0xF) == 0 )
        goto LABEL_30;
      goto LABEL_27;
    }
    if ( a3 )
    {
      v11 = HIWORD(a1);
      do
      {
        v4 += *v3++;
        v11 += v4;
      }
      while ( v3 != &a2[a3] );
      v44 = v11;
    }
    if ( v4 > 0xFFF0 )
      v4 -= 65521;
    return v4 | ((v44 % 0xFFF1) << 16);
  }
  else
  {
    return 1;
  }
}
