__int64 __fastcall sub_1663F70(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        void (__fastcall *a7)(__int64, void **),
        __int64 a8,
        char a9,
        char a10)
{
  unsigned int v10; // r15d
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rax
  void **v15; // rbp
  unsigned __int64 v16; // rax
  void **v17; // r12
  void **v18; // rbx
  void **v19; // rdi
  void **v20; // rdi
  void **v21; // rbx
  void **v22; // r12
  __int64 v23; // rdx
  char v25[8]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-F0h]
  __int64 v27; // [rsp+20h] [rbp-E8h]
  __int64 v28; // [rsp+28h] [rbp-E0h]
  void *v29; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-D0h]
  int v31; // [rsp+40h] [rbp-C8h]
  char v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+50h] [rbp-B8h]
  __int64 v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  void *v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h]
  _BYTE v38[32]; // [rsp+78h] [rbp-90h] BYREF
  void *ptr; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h]
  _BYTE v41[96]; // [rsp+A8h] [rbp-60h] BYREF

  if ( a9 || (v10 = 0, (*(_BYTE *)(a1[29] + 46LL) & 0x20) != 0) )
  {
    v10 = *(_DWORD *)(a5 + 112);
    if ( v10 )
    {
      v27 = a4;
      v32 &= 0xFCu;
      v34 = a3;
      v12 = a1[31];
      v33 = 0;
      v25[0] = v25[0] & 0xF8 | v10 & 3;
      v26 = a3;
      v28 = 0;
      v29 = nullptr;
      v30 = v12 + 2448;
      v31 = 0;
      v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL);
      if ( v13 == sub_A01140 )
        v14 = sub_B70A60(a3);
      else
        v14 = v13(a3);
      v34 = v14;
      if ( a6 )
      {
        v31 = a6;
        a7(a8, &v29);
      }
      if ( a10 )
      {
        v35 = 0;
        v36 = v38;
        v37 = 0x400000000LL;
        ptr = v41;
        v40 = 0x400000000LL;
        v41[32] = 0;
        v10 = sub_165BA60((__int64)a1, &v35, a2, (__int64)v25);
        if ( ptr != v41 )
          free(ptr);
        if ( v36 != v38 )
          free(v36);
      }
      else
      {
        v10 = sub_165D180(a1, a2, (__int64)v25);
      }
      v15 = (void **)v29;
      if ( v29 )
      {
        v16 = v30;
        if ( v30 )
        {
          if ( (unsigned __int64)v29 >= v30 && (unsigned __int64)v29 <= v30 + 14848 )
          {
            v23 = *(unsigned int *)(v30 + 14976);
            *(_DWORD *)(v30 + 14976) = v23 + 1;
            *(_QWORD *)(v16 + 8 * v23 + 14848) = v15;
          }
          else
          {
            v17 = *((void ***)v29 + 66);
            v18 = &v17[8 * (unsigned __int64)*((unsigned int *)v29 + 134)];
            if ( v17 != v18 )
            {
              do
              {
                while ( 1 )
                {
                  v18 -= 8;
                  v19 = (void **)v18[3];
                  if ( v19 == v18 + 5 )
                    break;
                  operator delete(v19);
                  if ( v17 == v18 )
                    goto LABEL_21;
                }
              }
              while ( v17 != v18 );
LABEL_21:
              v18 = (void **)v15[66];
            }
            if ( v18 != v15 + 68 )
              free(v18);
            v20 = (void **)v15[52];
            if ( v20 != v15 + 54 )
              free(v20);
            v21 = v15 + 48;
            v22 = v15 + 8;
            do
            {
              while ( *v21 != v21 + 2 )
              {
                operator delete(*v21);
                v21 -= 4;
                if ( v22 == v21 )
                  goto LABEL_29;
              }
              v21 -= 4;
            }
            while ( v21 != v22 );
LABEL_29:
            operator delete(v15, 0x3A0u);
          }
        }
      }
    }
  }
  return v10;
}
