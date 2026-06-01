unsigned __int64 __fastcall sub_A6A30(int a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int8 *v3; // r11
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int8 *v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // r10
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int8 *v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // [rsp+0h] [rbp-60h]
  __int64 v45; // [rsp+0h] [rbp-60h]
  __int64 v46; // [rsp+8h] [rbp-58h]
  unsigned __int64 v47; // [rsp+10h] [rbp-50h]
  unsigned __int8 *v48; // [rsp+18h] [rbp-48h]
  unsigned __int8 *v49; // [rsp+18h] [rbp-48h]
  unsigned __int64 v50; // [rsp+20h] [rbp-40h]
  unsigned __int64 v51; // [rsp+28h] [rbp-38h]
  unsigned __int64 v52; // [rsp+28h] [rbp-38h]

  v3 = a2;
  v4 = (unsigned __int16)a1;
  v51 = a3;
  v47 = HIWORD(a1);
  if ( a3 == 1 )
  {
    v23 = (unsigned __int16)a1 + (unsigned __int64)*a2;
    if ( v23 > 0xFFF0 )
      v23 -= 65521LL;
    v24 = v23 + HIWORD(a1);
    if ( v24 > 0xFFF0 )
      v24 = v23 + HIWORD(a1) - 65521;
    return v23 | (v24 << 16);
  }
  else if ( a2 )
  {
    if ( a3 > 0xF )
    {
      v48 = a2 + 5552;
      if ( a3 <= 0x15AF )
      {
        v50 = a3;
      }
      else
      {
        while ( 1 )
        {
          v3 = v48 - 5552;
          v50 = v51 - 5552;
          do
          {
            v5 = *v3;
            v6 = v3[1];
            v3 += 16;
            v7 = v4 + v5;
            v8 = v7 + v6;
            v9 = v8 + *(v3 - 14);
            v10 = v9 + *(v3 - 13);
            v11 = v10 + *(v3 - 12);
            v12 = v11 + *(v3 - 11);
            v13 = v12 + *(v3 - 10);
            v44 = *(v3 - 9) + v13;
            v46 = v44 + *(v3 - 8);
            v14 = v46 + *(v3 - 7);
            v15 = v14 + *(v3 - 6);
            v16 = v15 + *(v3 - 5);
            v17 = v16 + *(v3 - 4);
            v18 = v17 + *(v3 - 3);
            v19 = v18 + *(v3 - 2);
            v4 = v19 + *(v3 - 1);
            v47 += v4 + v46 + v44 + v11 + v10 + v9 + v8 + v7 + v12 + v13 + v14 + v15 + v16 + v17 + v18 + v19;
          }
          while ( v3 != v48 );
          v4 %= 0xFFF1u;
          v48 = v3 + 5552;
          v47 %= 0xFFF1u;
          if ( v50 <= 0x15AF )
            break;
          v51 -= 5552LL;
        }
        if ( v51 == 5552 )
          return v4 | (v47 << 16);
        if ( v50 <= 0xF )
        {
          v40 = v3;
          v41 = v51 - 5553;
LABEL_27:
          v42 = (__int64)&v40[v41 + 1];
          v43 = v47;
          do
          {
            v4 += *v40++;
            v43 += v4;
          }
          while ( v40 != (unsigned __int8 *)v42 );
          v47 = v43;
LABEL_30:
          v4 %= 0xFFF1u;
          v47 %= 0xFFF1u;
          return v4 | (v47 << 16);
        }
      }
      v52 = (v50 - 16) >> 4;
      v49 = &v3[16 * v52 + 16];
      do
      {
        v25 = *v3;
        v26 = v3[1];
        v3 += 16;
        v27 = v4 + v25;
        v28 = v27 + v26;
        v29 = v28 + *(v3 - 14);
        v30 = v29 + *(v3 - 13);
        v31 = v30 + *(v3 - 12);
        v32 = v31 + *(v3 - 11);
        v33 = v32 + *(v3 - 10);
        v34 = v33 + *(v3 - 9);
        v35 = v34 + *(v3 - 8);
        v36 = v35 + *(v3 - 7);
        v45 = *(v3 - 6) + v36;
        v37 = v45 + *(v3 - 5) + *(v3 - 4);
        v38 = v37 + *(v3 - 3);
        v39 = v38 + *(v3 - 2);
        v4 = v39 + *(v3 - 1);
        v47 += v4 + v39 + v38 + v37 + v45 + *(v3 - 5) + v45 + v36 + v35 + v34 + v33 + v32 + v31 + v30 + v29 + v28 + v27;
      }
      while ( v3 != v49 );
      v40 = v49;
      v41 = v50 - 16 * v52 - 17;
      if ( (v50 & 0xF) == 0 )
        goto LABEL_30;
      goto LABEL_27;
    }
    if ( a3 )
    {
      v20 = &a2[a3];
      v21 = HIWORD(a1);
      do
      {
        v4 += *v3++;
        v21 += v4;
      }
      while ( v3 != v20 );
      v47 = v21;
    }
    if ( v4 > 0xFFF0 )
      v4 -= 65521LL;
    return v4 | ((v47 % 0xFFF1) << 16);
  }
  else
  {
    return 1;
  }
}

