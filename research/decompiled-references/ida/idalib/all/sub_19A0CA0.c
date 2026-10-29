void __fastcall sub_19A0CA0(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 *v6; // r15
  char *v7; // rbx
  __int64 v8; // r13
  unsigned __int8 v9; // al
  bool v10; // r12
  __int64 v11; // rbp
  __int64 *v12; // rbx
  unsigned __int8 v13; // al
  int v14; // edx
  __int64 v15; // rbp
  __int64 *v16; // rbp
  __int64 v17; // r13
  __int64 v18; // r12
  unsigned __int8 v19; // al
  int v20; // edx
  bool v21; // bl
  unsigned __int8 v22; // al
  int v23; // edx
  unsigned __int8 v24; // dl
  int v25; // eax
  __int64 v26; // r13
  unsigned __int8 v27; // al
  bool v28; // bp
  __int64 v29; // r12
  __int64 *v30; // r14
  unsigned __int8 v31; // al
  int v32; // edx
  unsigned __int8 v33; // al
  int v34; // edx
  __int64 *v35; // [rsp+8h] [rbp-80h]
  char *v36; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+18h] [rbp-70h]
  __int64 v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+20h] [rbp-68h]
  __int64 v40; // [rsp+28h] [rbp-60h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  bool v42; // [rsp+33h] [rbp-55h]
  bool v43; // [rsp+33h] [rbp-55h]
  unsigned int v44; // [rsp+34h] [rbp-54h]
  unsigned int v45; // [rsp+34h] [rbp-54h]
  __int64 v46; // [rsp+38h] [rbp-50h]
  __int64 v47; // [rsp+40h] [rbp-48h]

  v35 = a1;
  v36 = a2;
  v37 = a4;
  if ( a5 && a4 )
  {
    v5 = a5;
    if ( a5 + a4 == 2 )
    {
      v16 = a1;
      v6 = (__int64 *)a2;
LABEL_19:
      v17 = *v6;
      v18 = *v16;
      v19 = *(_BYTE *)(*v6 + 28) & 0x7F;
      v20 = v19;
      if ( ((v19 + 52) & 0x7Fu) <= 1 || (unsigned int)v19 - 53 <= 1 )
        v20 = *(_BYTE *)(sub_B72ED0(*v6) + 28) & 0x7F;
      v21 = (unsigned int)(v20 - 58) <= 9;
      v22 = *(_BYTE *)(v18 + 28) & 0x7F;
      v23 = v22;
      if ( ((v22 + 52) & 0x7Fu) <= 1 || (unsigned int)v22 - 53 <= 1 )
        v23 = *(_BYTE *)(sub_B72ED0(v18) + 28) & 0x7F;
      if ( (unsigned __int8)v21 > (unsigned __int8)((unsigned int)(v23 - 58) <= 9) )
      {
        *v16 = v17;
        *v6 = v18;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( v37 <= v5 )
        {
          v7 = (char *)v35;
          v41 = v5 / 2;
          v46 = 8 * (v5 / 2);
          v6 = (__int64 *)&v36[v46];
          if ( v36 - (char *)v35 > 0 )
          {
            v47 = v5;
            v26 = (v36 - (char *)v35) >> 3;
            v39 = *v6;
            v27 = *(_BYTE *)(*v6 + 28) & 0x7F;
            v43 = ((v27 + 52) & 0x7Fu) > 1 && (unsigned int)v27 - 53 > 1;
            v45 = v27 - 58;
            do
            {
              if ( v43 )
              {
                while ( 1 )
                {
                  v29 = v26 >> 1;
                  v30 = (__int64 *)&v7[8 * (v26 >> 1)];
                  v33 = *(_BYTE *)(*v30 + 28) & 0x7F;
                  v34 = v33;
                  if ( ((v33 + 52) & 0x7Fu) <= 1 || (unsigned int)v33 - 53 <= 1 )
                    v34 = *(_BYTE *)(sub_B72ED0(*v30) + 28) & 0x7F;
                  if ( (unsigned __int8)(v45 <= 9) <= (unsigned __int8)((unsigned int)(v34 - 58) <= 9) )
                    break;
                  v26 >>= 1;
                  if ( !v29 )
                    goto LABEL_45;
                }
              }
              else
              {
                v28 = (*(_BYTE *)(sub_B72ED0(v39) + 28) & 0x7Fu) - 58 <= 9;
                while ( 1 )
                {
                  v29 = v26 >> 1;
                  v30 = (__int64 *)&v7[8 * (v26 >> 1)];
                  v31 = *(_BYTE *)(*v30 + 28) & 0x7F;
                  v32 = v31;
                  if ( (unsigned int)v31 - 53 <= 1 || ((v31 + 52) & 0x7Fu) <= 1 )
                    v32 = *(_BYTE *)(sub_B72ED0(*v30) + 28) & 0x7F;
                  if ( (unsigned __int8)((unsigned int)(v32 - 58) <= 9) >= (unsigned __int8)v28 )
                    break;
                  v26 >>= 1;
                  if ( !v29 )
                    goto LABEL_45;
                }
              }
              v7 = (char *)(v30 + 1);
              v26 = v26 - v29 - 1;
            }
            while ( v26 > 0 );
LABEL_45:
            v5 = v47;
          }
          v15 = v46;
          v38 = (v7 - (char *)v35) >> 3;
        }
        else
        {
          v6 = (__int64 *)v36;
          v7 = (char *)&v35[v37 / 2];
          v38 = v37 / 2;
          if ( a3 - (__int64)v36 > 0 )
          {
            v8 = (a3 - (__int64)v36) >> 3;
            v40 = *(_QWORD *)v7;
            v9 = *(_BYTE *)(*(_QWORD *)v7 + 28LL) & 0x7F;
            v42 = (unsigned int)v9 - 53 > 1 && ((v9 + 52) & 0x7Fu) > 1;
            v44 = v9 - 58;
            do
            {
              if ( v42 )
              {
                while ( 1 )
                {
                  v11 = v8 >> 1;
                  v12 = &v6[v8 >> 1];
                  v24 = *(_BYTE *)(*v12 + 28) & 0x7F;
                  v25 = v24;
                  if ( (unsigned int)v24 - 53 <= 1 || ((v24 + 52) & 0x7Fu) <= 1 )
                    v25 = *(_BYTE *)(sub_B72ED0(*v12) + 28) & 0x7F;
                  if ( (unsigned __int8)((unsigned int)(v25 - 58) <= 9) > (unsigned __int8)(v44 <= 9) )
                    break;
                  v8 >>= 1;
                  if ( !v11 )
                    goto LABEL_14;
                }
              }
              else
              {
                v10 = (*(_BYTE *)(sub_B72ED0(v40) + 28) & 0x7Fu) - 58 <= 9;
                while ( 1 )
                {
                  v11 = v8 >> 1;
                  v12 = &v6[v8 >> 1];
                  v13 = *(_BYTE *)(*v12 + 28) & 0x7F;
                  v14 = v13;
                  if ( (unsigned int)v13 - 53 <= 1 || ((v13 + 52) & 0x7Fu) <= 1 )
                    v14 = *(_BYTE *)(sub_B72ED0(*v12) + 28) & 0x7F;
                  if ( (unsigned __int8)v10 < (unsigned __int8)((unsigned int)(v14 - 58) <= 9) )
                    break;
                  v8 >>= 1;
                  if ( !v11 )
                    goto LABEL_14;
                }
              }
              v6 = v12 + 1;
              v8 = v8 - v11 - 1;
            }
            while ( v8 > 0 );
LABEL_14:
            v7 = (char *)&v35[v37 / 2];
          }
          v15 = (char *)v6 - v36;
          v41 = ((char *)v6 - v36) >> 3;
        }
        v16 = (__int64 *)&v7[v15];
        sub_199FA10(v7, v36, (char *)v6);
        v5 -= v41;
        sub_19A0CA0(v35, v7, v16, v38, v41);
        v37 -= v38;
        if ( !v37 || !v5 )
          break;
        v36 = (char *)v6;
        v35 = v16;
        if ( v5 + v37 == 2 )
          goto LABEL_19;
      }
    }
  }
}
