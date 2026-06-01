__int64 __fastcall sub_2DCCF0(__int64 a1, std::istream *a2, __int64 a3)
{
  char *v4; // rax
  void *v5; // r12
  __int128 v6; // kr00_16
  char *v7; // r13
  char *v8; // rbp
  char *v9; // r14
  void *v10; // rbx
  char *v11; // r14
  __int64 v12; // rsi
  void *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r13
  void *v17; // r12
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r12
  void *v21; // r15
  __int64 v22; // rsi
  void *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r12
  void *v28; // r13
  __int64 v29; // rsi
  __int64 result; // rax
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r13
  void *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // [rsp+0h] [rbp-C8h]
  int v37; // [rsp+8h] [rbp-C0h]
  __int64 v38; // [rsp+8h] [rbp-C0h]
  int v39; // [rsp+10h] [rbp-B8h]
  int v40; // [rsp+18h] [rbp-B0h]
  __int64 v41; // [rsp+18h] [rbp-B0h]
  int v42[2]; // [rsp+20h] [rbp-A8h] BYREF
  int v43; // [rsp+28h] [rbp-A0h]
  int v44; // [rsp+2Ch] [rbp-9Ch]
  __int64 v45[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v46[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v47; // [rsp+50h] [rbp-78h]
  __int64 v48; // [rsp+60h] [rbp-68h]
  __int128 v49; // [rsp+68h] [rbp-60h]
  void *ptr; // [rsp+78h] [rbp-50h]
  __int64 v51; // [rsp+80h] [rbp-48h]
  int v52; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v42 = a2;
  v44 = 0;
  v45[0] = a1;
  v43 = std::istream::get(a2);
  v45[1] = a3;
  v46[0] = 0;
  v46[1] = 0;
  v47 = 0;
  v49 = 0u;
  ptr = nullptr;
  LODWORD(v51) = 0;
  sub_2DFC10(v46, v42);
  v48 = 0;
  v4 = (char *)sub_186B270(0x140u);
  v4[32] = 0;
  *(_QWORD *)v4 = 0;
  *((_QWORD *)v4 + 3) = 0;
  *((_QWORD *)v4 + 5) = 0;
  *((_QWORD *)v4 + 8) = 0;
  v4[72] = 0;
  *((_QWORD *)v4 + 10) = 0;
  *((_QWORD *)v4 + 13) = 0;
  v4[112] = 0;
  *((_QWORD *)v4 + 15) = 0;
  *((_QWORD *)v4 + 18) = 0;
  v4[152] = 0;
  *((_QWORD *)v4 + 20) = 0;
  *((_QWORD *)v4 + 23) = 0;
  v4[192] = 0;
  *((_QWORD *)v4 + 25) = 0;
  *((_QWORD *)v4 + 28) = 0;
  v4[232] = 0;
  *((_QWORD *)v4 + 30) = 0;
  *((_QWORD *)v4 + 33) = 0;
  v4[272] = 0;
  *((_QWORD *)v4 + 35) = 0;
  *((_QWORD *)v4 + 38) = 0;
  v4[312] = 0;
  *(_OWORD *)(v4 + 8) = 0;
  *((_OWORD *)v4 + 3) = 0;
  *(_OWORD *)(v4 + 88) = 0;
  *((_OWORD *)v4 + 8) = 0;
  *(_OWORD *)(v4 + 168) = 0;
  *((_OWORD *)v4 + 13) = 0;
  *(_OWORD *)(v4 + 248) = 0;
  *((_OWORD *)v4 + 18) = 0;
  v52 = 0;
  ptr = v4;
  v51 = 8;
  v49 = 0;
  sub_2E7980(v45, v36, v37, v39, v40, v42[0], v43, v45[0]);
  v5 = ptr;
  v38 = v46[0];
  v41 = v47;
  v6 = v49;
  if ( ptr )
  {
    if ( (_DWORD)v51 )
    {
      v7 = (char *)ptr;
      v8 = (char *)ptr + 40 * (unsigned int)v51;
      do
      {
        while ( 1 )
        {
          v9 = *((char **)v7 + 3);
          if ( v9 )
          {
            v10 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, *((_QWORD *)v7 + 3));
            sub_182CBA0(v10, v9 + 16);
            sub_186B220(v9);
          }
          v11 = *((char **)v7 + 2);
          if ( !v11 )
            break;
          v12 = *((_QWORD *)v7 + 2);
          v7 += 40;
          v13 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v12);
          sub_182CBA0(v13, v11 + 16);
          sub_186B220(v11);
          if ( v7 == v8 )
            goto LABEL_8;
        }
        v7 += 40;
      }
      while ( v7 != v8 );
    }
LABEL_8:
    sub_186B220(v5);
  }
  if ( *((_QWORD *)&v6 + 1) )
  {
    v14 = *(unsigned int *)(*((_QWORD *)&v6 + 1) - 4LL);
    if ( (_DWORD)v14 )
    {
      v15 = *((_QWORD *)&v6 + 1);
      v16 = *((_QWORD *)&v6 + 1) + 96 * v14;
      do
      {
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15 + 64);
        sub_182CBA0(v17, v15 + 80);
        v18 = *(_QWORD *)(v15 + 48);
        if ( v18 )
        {
          v19 = *(unsigned int *)(v18 - 4);
          if ( (_DWORD)v19 )
          {
            v20 = v18 + 40 * v19;
            do
            {
              v21 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v18);
              v22 = v18 + 16;
              v18 += 40;
              sub_182CBA0(v21, v22);
            }
            while ( v18 != v20 );
            v18 = *(_QWORD *)(v15 + 48);
          }
          sub_186B220((void *)(v18 - 8));
        }
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15 + 16);
        v24 = v15 + 32;
        v15 += 96;
        sub_182CBA0(v23, v24);
      }
      while ( v16 != v15 );
    }
    sub_186B220((void *)(*((_QWORD *)&v6 + 1) - 8LL));
  }
  if ( (_QWORD)v6 )
  {
    v25 = *(unsigned int *)(v6 - 4);
    if ( (_DWORD)v25 )
    {
      v26 = v6;
      v27 = v6 + 40 * v25;
      do
      {
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v26);
        v29 = v26 + 16;
        v26 += 40;
        sub_182CBA0(v28, v29);
      }
      while ( v26 != v27 );
    }
    sub_186B220((void *)(v6 - 8));
  }
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  result = v38;
  if ( v38 )
  {
    v31 = *(unsigned int *)(v38 - 4);
    if ( (_DWORD)v31 )
    {
      v32 = v38;
      v33 = v38 + 56 * v31;
      do
      {
        v34 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v32 + 16);
        v35 = v32 + 32;
        v32 += 56;
        sub_182CBA0(v34, v35);
      }
      while ( v32 != v33 );
    }
    return sub_186B220((void *)(v38 - 8));
  }
  return result;
}

