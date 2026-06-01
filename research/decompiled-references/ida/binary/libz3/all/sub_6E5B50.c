void __fastcall sub_6E5B50(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        unsigned int *a7)
{
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rax
  _DWORD *v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // rax
  unsigned int *v21; // rbp
  unsigned int *v22; // r12
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rsi
  bool v26; // zf
  __int64 v27; // rbp
  __int64 v28; // r14
  __int64 v29; // rdi
  __int64 *v30; // r13
  __int64 v31; // rsi
  __int64 v32; // r12
  int v33; // r13d
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 *v36; // r10
  __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 *v41; // r10
  __int64 v42; // rsi
  __int64 v43; // [rsp+0h] [rbp-A8h]
  unsigned int v44; // [rsp+8h] [rbp-A0h]
  int v45; // [rsp+8h] [rbp-A0h]
  int v46; // [rsp+Ch] [rbp-9Ch]
  unsigned int v47; // [rsp+Ch] [rbp-9Ch]
  __int64 v48; // [rsp+10h] [rbp-98h]
  __int64 v49; // [rsp+10h] [rbp-98h]
  __int64 *v50; // [rsp+18h] [rbp-90h]
  __int64 *v51; // [rsp+18h] [rbp-90h]
  unsigned int *v55; // [rsp+40h] [rbp-68h]
  __int64 v56; // [rsp+48h] [rbp-60h]
  __int64 v57; // [rsp+48h] [rbp-60h]
  __int64 v58; // [rsp+58h] [rbp-50h] BYREF
  __int64 v59; // [rsp+60h] [rbp-48h] BYREF
  unsigned int *v60; // [rsp+68h] [rbp-40h] BYREF

  v10 = *(_QWORD *)(a3 + 8);
  if ( v10 && (v11 = *(_DWORD *)(v10 - 4)) != 0 )
    v12 = *(_QWORD *)(v10 + 8LL * (unsigned int)(v11 - 1));
  else
    v12 = sub_6DF7C0((__int64)a1, 0);
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  sub_6DE2A0(*a6, a6[1]);
  *a6 = v12;
  *a7 = 0;
  v13 = *(_QWORD *)(a2 + 8);
  if ( v13 )
    v14 = *(_DWORD *)(v13 - 4);
  else
    v14 = 0;
  v15 = *(_QWORD *)(a3 + 8);
  if ( v15 && (v16 = *(_DWORD *)(v15 - 4), v14 >= v16) && v16 )
  {
    v17 = *(_QWORD *)(v15 + 8LL * (v16 - 1));
    v43 = v17;
    if ( *(_WORD *)(v17 + 4) || (v18 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL)) == nullptr || *v18 != 5 || v18[1] )
    {
      v19 = v14 - v16 + 1;
      v44 = v14 - v16;
      *a7 = v19;
      v46 = v19;
      sub_41D160(a4);
      sub_41D160(a5);
      sub_3EE030((__int64)a5, a2);
      sub_6E0700(a4, v19);
      v56 = *a1;
      v20 = sub_6DF7C0((__int64)a1, 1u);
      v58 = v20;
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      v60 = nullptr;
      v59 = v56;
      sub_6DE970(&v60, &v58);
      v57 = v59;
      v55 = v60;
      if ( v44 + 2 > 1 )
      {
        v21 = v60 + 2;
        v22 = &v60[2 * v44 + 4];
        do
        {
          while ( 1 )
          {
            v23 = sub_6E1C90(a1, *((_QWORD *)v21 - 1), v43);
            v24 = v23;
            if ( v23 )
              ++*(_DWORD *)(v23 + 8);
            v25 = *(_QWORD *)v21;
            if ( *(_QWORD *)v21 )
            {
              v26 = (*(_DWORD *)(v25 + 8))-- == 1;
              if ( v26 )
                break;
            }
            *(_QWORD *)v21 = v23;
            v21 += 2;
            if ( v22 == v21 )
              goto LABEL_26;
          }
          sub_15D7BC0(v57, v25);
          *(_QWORD *)v21 = v24;
          v21 += 2;
        }
        while ( v22 != v21 );
      }
LABEL_26:
      if ( v46 > 0 )
      {
        v27 = (unsigned int)v46;
        v47 = v14 - 1;
        v45 = ~v44;
        do
        {
          v28 = sub_6E1C90(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * v47), *(_QWORD *)&v55[2 * v27 - 2]);
          v29 = *a4;
          v30 = (__int64 *)(a4[1] + 8 * v27 - 8);
          if ( v28 )
            ++*(_DWORD *)(v28 + 8);
          v31 = *v30;
          if ( *v30 )
          {
            v26 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v26 )
              sub_15D7BC0(v29, v31);
          }
          *v30 = v28;
          if ( (int)v47 > 0 )
          {
            v32 = 8LL * v47 - 8;
            v33 = v47 - v27;
            do
            {
              while ( 1 )
              {
                v34 = sub_6E1C90(a1, v43, *(_QWORD *)(a5[1] + v32));
                v35 = *a5;
                v36 = (__int64 *)(v32 + a5[1]);
                if ( v34 )
                  ++*(_DWORD *)(v34 + 8);
                v37 = *v36;
                if ( *v36 )
                {
                  v26 = (*(_DWORD *)(v37 + 8))-- == 1;
                  if ( v26 )
                  {
                    v50 = v36;
                    v48 = v34;
                    sub_15D7BC0(v35, v37);
                    v34 = v48;
                    v36 = v50;
                  }
                }
                *v36 = v34;
                if ( (int)v27 + v33 >= (int)v27 )
                  break;
                v32 -= 8;
                if ( v45 == --v33 )
                  goto LABEL_48;
              }
              v38 = sub_6E1C90(a1, *(_QWORD *)(a5[1] + 8LL * v47), *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL * v33));
              v39 = sub_6E10F0((__int64)a1, *(_QWORD *)(a5[1] + v32), v38);
              v40 = *a5;
              v41 = (__int64 *)(v32 + a5[1]);
              if ( v39 )
                ++*(_DWORD *)(v39 + 8);
              v42 = *v41;
              if ( *v41 )
              {
                v26 = (*(_DWORD *)(v42 + 8))-- == 1;
                if ( v26 )
                {
                  v51 = v41;
                  v49 = v39;
                  sub_15D7BC0(v40, v42);
                  v39 = v49;
                  v41 = v51;
                }
              }
              *v41 = v39;
              v32 -= 8;
              --v33;
            }
            while ( v45 != v33 );
          }
LABEL_48:
          --v27;
          --v47;
          ++v45;
        }
        while ( (int)v27 > 0 );
      }
      sub_2B4F40(&v59);
    }
    else
    {
      sub_6E2970(a1, a2, a3, a4, a5);
    }
  }
  else
  {
    sub_41D160(a4);
    sub_41D160(a5);
    sub_3EE030((__int64)a5, a2);
  }
}

