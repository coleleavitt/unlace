unsigned __int64 __fastcall sub_6811C0(unsigned __int64 a1, void **a2, __int64 a3)
{
  void **v3; // rbx
  unsigned int v6; // eax
  unsigned int v7; // edx
  char v8; // al
  void **v9; // r12
  char v10; // r14
  __int64 v11; // rdx
  void **v12; // r15
  unsigned __int64 v13; // rbx
  void **v14; // rsi
  unsigned int v16; // edx
  unsigned int v17; // ecx
  bool v18; // al
  void **v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r14
  void *v22; // rdi
  bool v23; // cf
  bool v24; // al
  void *v25; // rax
  void *v26; // rax
  void *v27; // rdx
  void *v28; // rax
  __int64 v30; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h]
  void **v32; // [rsp+18h] [rbp-B0h]
  void *v33; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+28h] [rbp-A0h]
  void **v35; // [rsp+38h] [rbp-90h]
  __int64 v36; // [rsp+40h] [rbp-88h]
  void *v37; // [rsp+58h] [rbp-70h]
  char v38; // [rsp+79h] [rbp-4Fh]
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( (void **)a1 != a2 )
  {
    v3 = (void **)(a1 + 96);
    if ( a2 != (void **)(a1 + 96) )
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)*v3;
        v7 = **(_DWORD **)a1;
        if ( v6 == -1 )
        {
          if ( v7 != -1 )
            goto LABEL_10;
        }
        else
        {
          if ( (*(_BYTE *)(a3 + 12) & 8) != 0 )
          {
            if ( v7 == -1 )
              goto LABEL_16;
            v6 &= ~1u;
            v7 &= ~1u;
          }
          else if ( v7 == -1 )
          {
            goto LABEL_16;
          }
          if ( v7 != v6 )
          {
            if ( v6 >= v7 )
              goto LABEL_10;
            goto LABEL_16;
          }
        }
        v8 = *((_BYTE *)v3 + 89);
        if ( (v8 == 1) == (*(_BYTE *)(a1 + 89) == 1) )
        {
          v16 = *((_DWORD *)*v3 + 1);
          v17 = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
          if ( v16 != v17 )
          {
            v18 = v17 < v16;
            goto LABEL_27;
          }
          if ( v8 != 1 )
          {
            if ( v8 != 2 || (v25 = *(void **)(a1 + 32), v23 = v3[4] < v25, v3[4] == v25) )
              v23 = (unsigned __int64)v3 < a1;
            v24 = v23;
LABEL_43:
            if ( !v24 )
              goto LABEL_10;
            goto LABEL_16;
          }
          v26 = v3[4];
          v27 = *(void **)(a1 + 32);
          if ( v26 != v27 )
          {
            if ( !v26 )
              goto LABEL_16;
            if ( !v27 )
              goto LABEL_10;
          }
          v28 = v3[8];
          if ( v28 != *(void **)(a1 + 64) )
          {
            v18 = (unsigned __int64)v28 < *(_QWORD *)(a1 + 64);
LABEL_27:
            if ( !v18 )
              goto LABEL_10;
            goto LABEL_16;
          }
          if ( v28 )
          {
            v24 = *(_DWORD *)v3[7] < **(_DWORD **)(a1 + 56);
            goto LABEL_43;
          }
          if ( *((_DWORD *)v3 + 20) >= *(_DWORD *)(a1 + 80) )
            goto LABEL_10;
LABEL_16:
          v33 = nullptr;
          v35 = nullptr;
          v38 = 0;
          v34 = 0;
          sub_679080(&v33, v3);
          v9 = v3 + 12;
          v10 = v38;
          v11 = (__int64)v3 - a1;
          v12 = v3 + 12;
          ptr = v33;
          v32 = v35;
          v13 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v3 - a1) >> 5);
          if ( v11 > 0 )
          {
            do
            {
              v14 = v12 - 24;
              v12 -= 12;
              sub_679080(v12, v14);
              --v13;
            }
            while ( v13 );
          }
          sub_679080((void **)a1, &v33);
          if ( v10 == 2 )
          {
            v19 = v32;
            if ( !v32 )
              goto LABEL_20;
            v20 = v36;
            v21 = 0;
            if ( v36 )
            {
              do
              {
                v22 = *v19;
                if ( *v19 )
                {
                  v19[1] = nullptr;
                  v30 = v20;
                  qfree(v22);
                  v20 = v30;
                }
                ++v21;
                v19 += 5;
              }
              while ( v20 != v21 );
            }
LABEL_38:
            qfree(v32);
            goto LABEL_20;
          }
          if ( v10 == 1 )
          {
            if ( v37 )
              qfree(v37);
            if ( v32 )
              goto LABEL_38;
          }
LABEL_20:
          if ( !ptr )
            goto LABEL_11;
          qfree(ptr);
          v3 = v9;
          if ( a2 == v9 )
            return v39 - __readfsqword(0x28u);
        }
        else
        {
          if ( v8 == 1 )
            goto LABEL_16;
LABEL_10:
          v9 = v3 + 12;
          sub_680F20(v3, a3);
LABEL_11:
          v3 = v9;
          if ( a2 == v9 )
            return v39 - __readfsqword(0x28u);
        }
      }
    }
  }
  return v39 - __readfsqword(0x28u);
}

