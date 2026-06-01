__int64 __fastcall sub_869260(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int *v6; // r15
  __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // rax
  int *v10; // r13
  unsigned int v11; // r13d
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // r14
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  int *v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rdi
  int *v20; // r13
  int *v21; // rbp
  __int64 v22; // rax
  int *v23; // rcx
  int *v24; // r14
  __int64 v25; // rdi
  int *v26; // rcx
  unsigned int v27; // ecx
  _QWORD *v28; // rax
  int *v29; // [rsp+0h] [rbp-1F8h]
  unsigned int v30; // [rsp+0h] [rbp-1F8h]
  __int64 v31; // [rsp+8h] [rbp-1F0h]
  int *v32; // [rsp+8h] [rbp-1F0h]
  char v33; // [rsp+27h] [rbp-1D1h]
  __int64 v34; // [rsp+28h] [rbp-1D0h]
  void *ptr; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-1C0h]
  _BYTE v37[16]; // [rsp+40h] [rbp-1B8h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-1A8h] BYREF
  char v39; // [rsp+54h] [rbp-1A4h]
  __int64 v40; // [rsp+58h] [rbp-1A0h]
  unsigned int v41; // [rsp+90h] [rbp-168h] BYREF
  char v42; // [rsp+94h] [rbp-164h]
  _QWORD *v43; // [rsp+98h] [rbp-160h]
  unsigned int v44; // [rsp+A0h] [rbp-158h]
  int *v45; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-120h]
  _BYTE v47[280]; // [rsp+E0h] [rbp-118h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v39 &= ~1u;
  v38 = 0;
  v3 = sub_856400((__int64)&v38, a1, v2);
  v4 = v38;
  if ( !(_BYTE)v3 )
    goto LABEL_4;
  if ( v38 != 8 )
  {
    v3 = 0;
    goto LABEL_4;
  }
  ptr = v37;
  v36 = 0x400000000LL;
  sub_819B80(a2, (__int64)&ptr);
  if ( (_DWORD)v36 != 1 )
  {
    v6 = (int *)v47;
    v46 = 0x400000000LL;
    v45 = (int *)v47;
    if ( (_DWORD)v36 )
    {
      v7 = 0;
      v8 = 4;
      v9 = 0;
      while ( 1 )
      {
        v10 = (int *)(v40 + 56LL * *((unsigned int *)ptr + v7));
        if ( v8 < (unsigned __int64)(v9 + 1) )
        {
          if ( v10 < v6 || v10 >= &v6[14 * v9] )
          {
            v34 = -1;
            v33 = 0;
          }
          else
          {
            v33 = v3;
            v34 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v10 - (char *)v6) >> 3);
          }
          v22 = sub_25D5F70(&v45, v47, v9 + 1, 56, &v41);
          v23 = v45;
          v6 = (int *)v22;
          v24 = &v45[14 * (unsigned int)v46];
          if ( v45 != v24 )
          {
            v25 = v22;
            do
            {
              v32 = v23;
              sub_69F700(v25, v23);
              v23 = v32 + 14;
              v25 += 56;
            }
            while ( v24 != v32 + 14 );
            v26 = v45;
            v24 = &v45[14 * (unsigned int)v46];
            if ( v45 != v24 )
            {
              do
              {
                v24 -= 14;
                if ( (unsigned int)*v24 > 1 )
                {
                  v29 = v26;
                  sub_69F740((__int64)v24);
                  v26 = v29;
                }
              }
              while ( v26 != v24 );
              v24 = v45;
            }
          }
          v27 = v41;
          if ( v24 != (int *)v47 )
          {
            v30 = v41;
            free(v24);
            v27 = v30;
          }
          v45 = v6;
          HIDWORD(v46) = v27;
          v9 = (unsigned int)v46;
          if ( v33 )
            v10 = &v6[14 * v34];
        }
        ++v7;
        sub_6A4260((__int64)&v6[14 * v9], v10);
        v11 = v36;
        v6 = v45;
        v9 = (unsigned int)(v46 + 1);
        LODWORD(v46) = v46 + 1;
        if ( (unsigned int)v7 >= (unsigned int)v36 )
          break;
        v8 = HIDWORD(v46);
      }
      v42 &= ~1u;
      v43 = nullptr;
      v44 = 0;
      v41 = 8;
      v31 = 14LL * (unsigned int)v36;
      v12 = (_QWORD *)operator new[](v31 * 4 + 8);
      *v12 = v11;
      v13 = v12 + 1;
      if ( v11 )
      {
        v14 = v12 + 1;
        v15 = &v12[(unsigned __int64)v31 / 2 + 1];
        v16 = v13;
        do
        {
          *((_BYTE *)v16 + 4) &= ~1u;
          v16 += 7;
          *((_DWORD *)v16 - 14) = 0;
        }
        while ( v15 != v16 );
        v43 = v13;
        v17 = v6;
        v44 = v11;
        do
        {
          v18 = (__int64)v17;
          v19 = (__int64)v14;
          v17 += 14;
          v14 += 7;
          sub_6A63E0(v19, v18);
        }
        while ( &v6[v31] != v17 );
        goto LABEL_18;
      }
    }
    else
    {
      v42 &= ~1u;
      v43 = nullptr;
      v44 = 0;
      v41 = 8;
      v28 = (_QWORD *)operator new[](8u);
      *v28 = 0;
      v13 = v28 + 1;
    }
    v43 = v13;
    v44 = 0;
LABEL_18:
    if ( v41 > 1 )
      sub_69F740((__int64)&v41);
    v20 = v45;
    v21 = &v45[14 * (unsigned int)v46];
    if ( v45 != v21 )
    {
      do
      {
        v21 -= 14;
        if ( (unsigned int)*v21 > 1 )
          sub_69F740((__int64)v21);
      }
      while ( v20 != v21 );
      v21 = v45;
    }
    if ( v21 != (int *)v47 )
      free(v21);
  }
  if ( ptr != v37 )
    free(ptr);
  v4 = v38;
LABEL_4:
  if ( v4 > 1 )
    sub_69F740((__int64)&v38);
  return v3;
}

