__int64 __fastcall sub_811880(__int64 a1, unsigned int a2)
{
  char **exception; // r12
  _QWORD *v4; // rax
  void *v5; // r12
  void *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // r13
  __int64 v12; // rax
  unsigned int v13; // r13d
  size_t v14; // rdi
  __int64 v15; // rax
  int *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rdx
  int *v19; // rax
  int *v20; // rdi
  int v21; // ecx
  char v22; // si
  __int64 v23; // rcx
  char v24; // si
  __int64 v25; // rcx
  __int64 v26; // r15
  void *v27; // r15
  int *v28; // rsi
  _QWORD *v30; // rax
  int *v31; // [rsp+8h] [rbp-A0h]
  _DWORD *v32; // [rsp+10h] [rbp-98h]
  unsigned int v34; // [rsp+1Ch] [rbp-8Ch]
  int v35; // [rsp+30h] [rbp-78h] BYREF
  char v36; // [rsp+34h] [rbp-74h]
  __int64 v37; // [rsp+38h] [rbp-70h]
  int v38; // [rsp+40h] [rbp-68h] BYREF
  char v39; // [rsp+44h] [rbp-64h]
  __int64 v40; // [rsp+48h] [rbp-60h]
  __int64 v41[11]; // [rsp+50h] [rbp-58h] BYREF

  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 664);
    if ( v9 )
      break;
    v10 = 0;
LABEL_6:
    sub_17F6290(&v35, v10);
    v11 = *(_QWORD **)(a1 + 664);
    if ( v11 )
    {
      v12 = *((unsigned int *)v11 - 1);
      if ( (_DWORD)v12 == *((_DWORD *)v11 - 2) )
      {
        v13 = (unsigned int)(3 * v12 + 1) >> 1;
        v34 = v13;
        v14 = 32 * v13 + 8;
        if ( 32 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v41, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v41);
          sub_233E40((__int64)v41);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = sub_186B270(v14);
        v16 = *(int **)(a1 + 664);
        v32 = (_DWORD *)v15;
        v11 = (_QWORD *)(v15 + 8);
        if ( v16 )
        {
          v17 = (unsigned int)*(v16 - 1);
          v18 = v15 + 8;
          *(_DWORD *)(v15 + 4) = v17;
          v19 = v16;
          v20 = &v16[8 * v17];
          if ( v16 != v20 )
          {
            do
            {
              v21 = *v19;
              v22 = *((_BYTE *)v19 + 4);
              v19 += 8;
              v18 += 32;
              *(_DWORD *)(v18 - 32) = v21;
              *(_BYTE *)(v18 - 28) = v22 & 3 | *(_BYTE *)(v18 - 28) & 0xFC;
              v23 = *((_QWORD *)v19 - 3);
              *((_QWORD *)v19 - 3) = 0;
              *(_QWORD *)(v18 - 24) = v23;
              v24 = *((_BYTE *)v19 - 12);
              *(_DWORD *)(v18 - 16) = *(v19 - 4);
              *(_BYTE *)(v18 - 12) = v24 & 3 | *(_BYTE *)(v18 - 12) & 0xFC;
              v25 = *((_QWORD *)v19 - 1);
              *((_QWORD *)v19 - 1) = 0;
              *(_QWORD *)(v18 - 8) = v25;
            }
            while ( v20 != v19 );
          }
          v26 = (unsigned int)*(v16 - 1);
          if ( (_DWORD)v26 )
          {
            v31 = &v16[8 * v26];
            do
            {
              v27 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v16);
              v28 = v16 + 4;
              v16 += 8;
              sub_182CBA0(v27, v28);
            }
            while ( v16 != v31 );
            v16 = *(int **)(a1 + 664);
          }
          sub_186B220(v16 - 2);
          v4 = &v11[4 * (unsigned int)v32[1]];
        }
        else
        {
          *(_DWORD *)(v15 + 4) = 0;
          v4 = (_QWORD *)(v15 + 8);
        }
        *(_QWORD *)(a1 + 664) = v11;
        *v32 = v34;
      }
      else
      {
        v4 = &v11[4 * v12];
      }
    }
    else
    {
      v30 = (_QWORD *)sub_186B270(0x48u);
      v11 = v30 + 1;
      *v30 = 2;
      *(_QWORD *)(a1 + 664) = v30 + 1;
      v4 = v30 + 1;
    }
    *(_DWORD *)v4 = v35;
    v5 = qword_1C7F2C0;
    v6 = qword_1C7F2C0;
    *((_BYTE *)v4 + 4) = v36 & 3 | *((_BYTE *)v4 + 4) & 0xFC;
    v7 = v37;
    v37 = 0;
    v4[1] = v7;
    *((_DWORD *)v4 + 4) = v38;
    *((_BYTE *)v4 + 20) = v39 & 3 | *((_BYTE *)v4 + 20) & 0xFC;
    v8 = v40;
    v40 = 0;
    v4[3] = v8;
    ++*((_DWORD *)v11 - 1);
    sub_182CBA0(v6, &v35);
    sub_182CBA0(v5, &v38);
  }
  v10 = *(unsigned int *)(v9 - 4);
  if ( a2 >= (unsigned int)v10 )
    goto LABEL_6;
  return 32LL * a2 + v9;
}

