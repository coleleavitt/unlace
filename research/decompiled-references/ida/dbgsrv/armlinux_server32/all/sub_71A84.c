/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71A84
// Address: 0x00071A84

//----- (00071A84) --------------------------------------------------------
int __fastcall sub_71A84(int a1, int a2, _DWORD *a3, int a4)
{
  int v7; // r10
  int v8; // r12
  unsigned __int16 *v9; // r3
  char *v10; // r2
  unsigned __int16 *v11; // r4
  unsigned int v12; // r0
  unsigned int v13; // t1
  unsigned int v14; // t1
  bool v15; // cc
  int v17; // r7
  int v18; // r7
  _BOOL4 v19; // lr
  int v20; // r5
  unsigned int v21; // r3
  unsigned __int16 *v22; // r2
  int v23; // t1
  unsigned int v24; // r3
  int v25; // r2
  int v26; // t1
  unsigned int v27; // r3
  int v28; // r0
  int v29; // [sp+8h] [bp-2Ch]
  int v30; // [sp+8h] [bp-2Ch]
  int v31; // [sp+10h] [bp-24h]
  int v32; // [sp+1Ch] [bp-18h] BYREF
  int v33; // [sp+20h] [bp-14h]
  int v34; // [sp+24h] [bp-10h]
  int v35; // [sp+28h] [bp-Ch]
  int v36; // [sp+2Ch] [bp-8h]
  unsigned __int16 v37; // [sp+30h] [bp-4h] BYREF
  int v38; // [sp+34h] [bp+0h] BYREF
  int v39; // [sp+38h] [bp+4h]
  int v40; // [sp+3Ch] [bp+8h]
  int v41; // [sp+40h] [bp+Ch]
  int v42; // [sp+44h] [bp+10h]
  unsigned __int16 v43; // [sp+48h] [bp+14h] BYREF
  int v44; // [sp+4Ch] [bp+18h]
  int v45; // [sp+50h] [bp+1Ch]
  int v46; // [sp+54h] [bp+20h]
  int v47; // [sp+58h] [bp+24h]
  int v48; // [sp+5Ch] [bp+28h]
  __int16 v49; // [sp+60h] [bp+2Ch]

  sub_71698(a1, &v32);
  sub_71698(a2, &v38);
  if ( a4 )
    LOWORD(v38) = ~(_WORD)v38;
  v7 = HIWORD(v32);
  v8 = HIWORD(v38);
  v29 = HIWORD(v32) - HIWORD(v38);
  if ( v29 > 0 )
  {
    v29 = HIWORD(v38) - HIWORD(v32);
    v44 = v38;
    v45 = v39;
    v46 = v40;
    v47 = v41;
    v48 = v42;
    v49 = 0;
    v17 = v42;
    v38 = v32;
    v39 = v33;
    v40 = v34;
    v41 = v35;
    v42 = v36;
    v43 = 0;
    v32 = v44;
    v33 = v45;
    v34 = v46;
    v35 = v47;
    v36 = v17;
    v37 = 0;
  }
  else
  {
    if ( HIWORD(v32) == HIWORD(v38) )
    {
      v9 = (unsigned __int16 *)&v32 + 1;
      v10 = (char *)&v38 + 2;
      v11 = &v37;
      do
      {
        v13 = v9[1];
        ++v9;
        v12 = v13;
        v14 = *((unsigned __int16 *)v10 + 1);
        v10 += 2;
        v15 = v12 > v14;
        if ( v12 != v14 )
        {
          if ( v15 )
          {
            v44 = v38;
            v45 = v39;
            v46 = v40;
            v47 = v41;
            v30 = 0;
            v48 = v42;
            v31 = v42;
            v49 = 0;
            v38 = v32;
            v39 = v33;
            v40 = v34;
            v41 = v35;
            v42 = v36;
            v18 = 0;
            v19 = 0;
            v43 = 0;
            v32 = v44;
            v33 = v45;
            v34 = v46;
            v35 = v47;
            v36 = v31;
            v37 = 0;
          }
          else
          {
            v18 = v43;
            v19 = 0;
            v30 = v37;
          }
          goto LABEL_20;
        }
      }
      while ( v9 != &v37 );
      if ( (unsigned __int16)v32 != (unsigned __int16)v38 || !HIWORD(v38) )
      {
        *a3 = 0;
        a3[1] = 0;
        a3[2] = 0;
        a3[3] = 0;
        return 1;
      }
      if ( HIWORD(v38) + 1 > 32766 )
        goto LABEL_26;
      ++HIWORD(v38);
      goto LABEL_17;
    }
    v7 = HIWORD(v38);
  }
  if ( v29 < -113 )
    goto LABEL_17;
  v28 = sub_71560((int)&v32, v29);
  v8 = v7;
  v19 = v28 != 1;
  v18 = v43;
  v30 = v37;
  v11 = &v37;
LABEL_20:
  v20 = v30;
  v21 = 0;
  v22 = &v43;
  if ( (unsigned __int16)v32 == (unsigned __int16)v38 )
  {
    while ( 1 )
    {
      v27 = v21 + v20 + v18;
      *v22-- = v27;
      v21 = HIWORD(v27);
      if ( v22 == (unsigned __int16 *)((char *)&v38 + 2) )
        break;
      v26 = *--v11;
      v20 = v26;
      v18 = *v22;
    }
    v25 = 0;
  }
  else
  {
    while ( 1 )
    {
      v24 = v18 - v20 - v21;
      *v22-- = v24;
      v21 = HIWORD(v24) & 1;
      if ( v22 == (unsigned __int16 *)((char *)&v38 + 2) )
        break;
      v18 = *v22;
      v23 = *--v11;
      v20 = v23;
    }
    v25 = 1;
  }
  if ( sub_716CC((int)&v38, v19, v25, v8, 112) )
  {
LABEL_17:
    sub_71668(&v38, (int)a3);
    return 1;
  }
LABEL_26:
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
  return 2;
}
