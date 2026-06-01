__int64 __fastcall sub_1662610(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 (*v14)(void); // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  void **v17; // r12
  unsigned __int64 v18; // rax
  void **v19; // r13
  void **v20; // rbp
  void **v21; // rdi
  void **v22; // rdi
  void **v23; // rbp
  void **v24; // r13
  __int64 v25; // rdx
  char v26; // al
  char v28[8]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  unsigned __int64 v31; // [rsp+38h] [rbp-60h]
  void *v32; // [rsp+40h] [rbp-58h]
  unsigned __int64 v33; // [rsp+48h] [rbp-50h]
  int v34; // [rsp+50h] [rbp-48h]
  char v35; // [rsp+58h] [rbp-40h]
  __int64 v36; // [rsp+60h] [rbp-38h]
  unsigned __int64 v37; // [rsp+68h] [rbp-30h]

  v6 = 0;
  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) == 0 )
    return v6;
  v6 = a4 & 3;
  if ( (a4 & 3) == 0 )
    return v6;
  v11 = sub_A7A9D0(a1[31], a3, a3, a4, a5, a6);
  v30 = a3;
  v12 = a1[31];
  v31 = v11;
  v13 = a4 & 0xFFFFFFFFFFFFFFF8LL;
  v29 = a4 & 0xFFFFFFFFFFFFFFF8LL;
  v32 = nullptr;
  v33 = v12 + 2448;
  v28[0] = a4 & 3 | v28[0] & 0xFC | 4;
  v34 = 0;
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v35 &= 0xFCu;
    v36 = 0;
LABEL_6:
    v13 = sub_1654A20(v13);
    goto LABEL_7;
  }
  v26 = sub_B72F20(v13);
  v13 = v29;
  v36 = 0;
  v35 = v26 & 1 | v35 & 0xFC;
  if ( (v28[0] & 4) != 0 )
    goto LABEL_6;
LABEL_7:
  v37 = v13;
  v14 = *(__int64 (**)(void))(*(_QWORD *)v13 + 32LL);
  if ( (char *)v14 == (char *)sub_A01140 )
    v15 = sub_B70A60(v13);
  else
    v15 = v14();
  v37 = v15;
  v34 = 3591;
  v16 = sub_165D180(a1, a2, (__int64)v28);
  v17 = (void **)v32;
  v6 = v16;
  if ( v32 )
  {
    v18 = v33;
    if ( v33 )
    {
      if ( (unsigned __int64)v32 < v33 || (unsigned __int64)v32 > v33 + 14848 )
      {
        v19 = *((void ***)v32 + 66);
        v20 = &v19[8 * (unsigned __int64)*((unsigned int *)v32 + 134)];
        if ( v19 != v20 )
        {
          do
          {
            while ( 1 )
            {
              v20 -= 8;
              v21 = (void **)v20[3];
              if ( v21 == v20 + 5 )
                break;
              operator delete(v21);
              if ( v19 == v20 )
                goto LABEL_15;
            }
          }
          while ( v19 != v20 );
LABEL_15:
          v20 = (void **)v17[66];
        }
        if ( v20 != v17 + 68 )
          free(v20);
        v22 = (void **)v17[52];
        if ( v22 != v17 + 54 )
          free(v22);
        v23 = v17 + 48;
        v24 = v17 + 8;
        do
        {
          while ( *v23 != v23 + 2 )
          {
            operator delete(*v23);
            v23 -= 4;
            if ( v24 == v23 )
              goto LABEL_23;
          }
          v23 -= 4;
        }
        while ( v24 != v23 );
LABEL_23:
        operator delete(v17, 0x3A0u);
      }
      else
      {
        v25 = *(unsigned int *)(v33 + 14976);
        *(_DWORD *)(v33 + 14976) = v25 + 1;
        *(_QWORD *)(v18 + 8 * v25 + 14848) = v17;
      }
    }
  }
  return v6;
}
