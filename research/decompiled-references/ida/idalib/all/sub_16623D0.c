__int64 __fastcall sub_16623D0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 (__fastcall *v9)(unsigned __int64); // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  void **v12; // r12
  unsigned __int64 v13; // rax
  void **v14; // r13
  void **v15; // rbx
  void **v16; // rdi
  void **v17; // rdi
  void **v18; // rbx
  void **v19; // r13
  __int64 v20; // rdx
  char v21[8]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  __int64 v24; // [rsp+38h] [rbp-60h]
  void *v25; // [rsp+40h] [rbp-58h]
  unsigned __int64 v26; // [rsp+48h] [rbp-50h]
  int v27; // [rsp+50h] [rbp-48h]
  char v28; // [rsp+58h] [rbp-40h]
  __int64 v29; // [rsp+60h] [rbp-38h]
  __int64 v30; // [rsp+68h] [rbp-30h]

  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) == 0 || !a3 )
    return 0;
  v4 = a4 & 3;
  if ( (a4 & 3) != 0 )
  {
    v23 = a3;
    v22 = a4 & 0xFFFFFFFFFFFFFFF8LL;
    v27 = 0;
    v28 &= 0xFCu;
    v21[0] = v4 | v21[0] & 0xFC | 4;
    v7 = a1[31];
    v24 = 0;
    v25 = nullptr;
    v26 = v7 + 2448;
    v29 = 0;
    v8 = sub_1654A20(a4 & 0xFFFFFFFFFFFFFFF8LL);
    v9 = *(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 32LL);
    v10 = v9 == sub_A01140 ? sub_B70A60(v8) : v9(v8);
    v30 = v10;
    v11 = sub_165D180(a1, a2, (__int64)v21);
    v12 = (void **)v25;
    v4 = v11;
    if ( v25 )
    {
      v13 = v26;
      if ( v26 )
      {
        if ( (unsigned __int64)v25 < v26 || (unsigned __int64)v25 > v26 + 14848 )
        {
          v14 = *((void ***)v25 + 66);
          v15 = &v14[8 * (unsigned __int64)*((unsigned int *)v25 + 134)];
          if ( v14 != v15 )
          {
            do
            {
              while ( 1 )
              {
                v15 -= 8;
                v16 = (void **)v15[3];
                if ( v16 == v15 + 5 )
                  break;
                operator delete(v16);
                if ( v14 == v15 )
                  goto LABEL_13;
              }
            }
            while ( v14 != v15 );
LABEL_13:
            v15 = (void **)v12[66];
          }
          if ( v15 != v12 + 68 )
            free(v15);
          v17 = (void **)v12[52];
          if ( v17 != v12 + 54 )
            free(v17);
          v18 = v12 + 48;
          v19 = v12 + 8;
          do
          {
            while ( *v18 != v18 + 2 )
            {
              operator delete(*v18);
              v18 -= 4;
              if ( v19 == v18 )
                goto LABEL_21;
            }
            v18 -= 4;
          }
          while ( v19 != v18 );
LABEL_21:
          operator delete(v12, 0x3A0u);
        }
        else
        {
          v20 = *(unsigned int *)(v26 + 14976);
          *(_DWORD *)(v26 + 14976) = v20 + 1;
          *(_QWORD *)(v13 + 8 * v20 + 14848) = v12;
        }
      }
    }
  }
  return v4;
}
