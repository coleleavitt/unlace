/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C740
// Address: 0x000000000046C740

//----- (000000000046C740) ----------------------------------------------------
unsigned __int64 __fastcall sub_46C740(char **a1, char a2, unsigned __int64 *a3)
{
  int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  int v8; // r9d
  char *v9; // rsi
  unsigned __int64 v10; // rax
  __int128 i; // xmm0
  __int64 v12; // rbp
  size_t v13; // r14
  void *v14; // rax
  __int64 v15; // r12
  __int64 v16; // r14
  char *v17; // rbp
  int v18; // eax
  unsigned __int64 v19; // rdx
  size_t v20; // rbx
  const void *v21; // rsi
  unsigned __int64 v22; // rax
  void *v23; // rdi
  char *v25; // rsi
  char *v26; // rax
  unsigned __int64 v27; // rbp
  __int64 v28; // rax
  void *v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  char *v32; // rax
  char *v33; // rax
  int v35; // [rsp+Ch] [rbp-6Ch]
  int v36; // [rsp+Ch] [rbp-6Ch]
  int v37; // [rsp+Ch] [rbp-6Ch]
  __int64 v38; // [rsp+10h] [rbp-68h] BYREF
  void *src; // [rsp+18h] [rbp-60h]
  size_t n[3]; // [rsp+20h] [rbp-58h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v5 = sub_47FD50(a3, a3[1]);
  v6 = (unsigned __int64)a1[1];
  v7 = v5;
  v8 = v5;
  if ( v5 != v6 )
  {
    v38 = 0;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v5 < v6 )
    {
      v27 = v5;
      do
      {
        v28 = (__int64)&(*a1)[32 * v27];
        v29 = *(void **)(v28 + 8);
        if ( v29 )
        {
          *(_QWORD *)(v28 + 16) = 0;
          v36 = v8;
          j__free(v29);
          v8 = v36;
        }
        ++v27;
      }
      while ( v27 < v6 );
      a1[1] = (char *)v7;
    }
    else
    {
      v9 = *a1;
      v10 = (unsigned __int64)a1[2];
      if ( &v38 < (__int64 *)*a1 || &v38 >= (__int64 *)&v9[32 * v10] )
      {
        if ( v10 < v7 )
        {
          v37 = v8;
          v32 = (char *)sub_481540((__int64)a1, v9, v7, 0x20u);
          v6 = (unsigned __int64)a1[1];
          v8 = v37;
          *a1 = v32;
        }
        for ( i = 0; v6 < v7; i = 0 )
        {
          while ( 1 )
          {
            v12 = (__int64)&(*a1)[32 * v6];
            *(_QWORD *)v12 = v38;
            *(_QWORD *)(v12 + 8) = 0;
            *(_OWORD *)(v12 + 16) = i;
            v13 = n[0];
            if ( n[0] )
              break;
            if ( ++v6 >= v7 )
              goto LABEL_11;
          }
          v35 = v8;
          ++v6;
          v14 = sub_4814F0(n[0]);
          *(_QWORD *)(v12 + 24) = v13;
          *(_QWORD *)(v12 + 8) = v14;
          memcpy(v14, src, v13);
          *(_QWORD *)(v12 + 16) = v13;
          v8 = v35;
        }
      }
      else
      {
        if ( v10 < v7 )
        {
          v33 = (char *)sub_481540((__int64)a1, v9, v7, 0x20u);
          v6 = (unsigned __int64)a1[1];
          v8 = v7;
          *a1 = v33;
        }
        if ( v6 < v7 )
        {
          do
          {
            v30 = v6++;
            v31 = (__int64)&(*a1)[32 * v30];
            *(_QWORD *)v31 = 0;
            *(_QWORD *)(v31 + 8) = 0;
            *(_OWORD *)(v31 + 16) = 0;
          }
          while ( v7 != v6 );
        }
      }
LABEL_11:
      a1[1] = (char *)v7;
    }
  }
  v15 = 0;
  v16 = 32LL * (unsigned int)v8;
  if ( v8 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v17 = &(*a1)[v15];
        *(_DWORD *)v17 = sub_47FD50(a3, a3[1]);
        v18 = sub_47FD50(a3, a3[1]);
        v19 = *((_QWORD *)v17 + 2);
        v20 = v18;
        if ( v19 < v18 )
        {
          v25 = *((char **)v17 + 1);
          if ( *((_QWORD *)v17 + 3) < (unsigned __int64)v18 )
          {
            v26 = (char *)sub_481540((__int64)(v17 + 8), v25, v18, 1u);
            v19 = *((_QWORD *)v17 + 2);
            *((_QWORD *)v17 + 1) = v26;
            v25 = v26;
          }
          memset(&v25[v19], 0, v20 - v19);
          *((_QWORD *)v17 + 2) = v20;
        }
        else if ( v18 != v19 )
        {
          *((_QWORD *)v17 + 2) = v18;
        }
        if ( a2 )
        {
          *((_DWORD *)v17 + 1) = sub_47FD50(a3, a3[1]);
          v21 = (const void *)*a3;
          v22 = *a3 + v20;
          if ( a3[1] >= v22 && v22 >= (unsigned __int64)v21 )
            break;
        }
        v15 += 32;
        if ( v15 == v16 )
          return v41 - __readfsqword(0x28u);
      }
      v23 = *((void **)v17 + 1);
      *a3 = v22;
      v15 += 32;
      memcpy(v23, v21, v20);
    }
    while ( v15 != v16 );
  }
  return v41 - __readfsqword(0x28u);
}
