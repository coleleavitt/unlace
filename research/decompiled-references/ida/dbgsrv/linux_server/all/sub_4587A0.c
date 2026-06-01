/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4587A0
// Address: 0x00000000004587A0

//----- (00000000004587A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4587A0(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  char *v5; // rsi
  unsigned __int64 v6; // rax
  __int128 i; // xmm0
  __int64 v8; // rbx
  int v9; // eax
  size_t v10; // r15
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  void *v14; // rdi
  void *v15; // rax
  void *v16; // rsi
  int v17; // [rsp+0h] [rbp-88h] BYREF
  void *ptr; // [rsp+8h] [rbp-80h]
  size_t n[2]; // [rsp+10h] [rbp-78h]
  int v20; // [rsp+20h] [rbp-68h] BYREF
  void *v21; // [rsp+28h] [rbp-60h]
  __int128 v22; // [rsp+30h] [rbp-58h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v2 = (unsigned __int64)a1[1];
  if ( v2 == a2 )
    return v23 - __readfsqword(0x28u);
  v17 = -2;
  ptr = (void *)-1LL;
  *(_OWORD *)n = 0;
  if ( a2 < v2 )
  {
    v12 = a2;
    do
    {
      v13 = (__int64)*a1 + 32 * v12;
      if ( *(int *)v13 >= -1 )
      {
        v14 = *(void **)(v13 + 8);
        if ( v14 )
        {
          *(_QWORD *)(v13 + 16) = 0;
          j__free(v14);
        }
      }
      ++v12;
    }
    while ( v2 != v12 );
  }
  else
  {
    v5 = (char *)*a1;
    v6 = (unsigned __int64)a1[2];
    if ( &v17 >= *a1 && &v17 < (int *)&v5[32 * v6] )
    {
      v20 = -2;
      v21 = (void *)-1LL;
      v22 = 0;
      sub_4586A0((__int64)a1, a2, (__int64)&v20);
      if ( v20 >= -1 && v21 )
      {
        *(_QWORD *)&v22 = 0;
        j__free(v21);
      }
      goto LABEL_14;
    }
    if ( v6 < a2 )
    {
      *a1 = sub_481540((__int64)a1, v5, a2, 0x20u);
      v2 = (unsigned __int64)a1[1];
    }
    for ( i = 0; v2 < a2; ++v2 )
    {
      v8 = (__int64)*a1 + 32 * v2;
      *(_DWORD *)v8 = -2;
      *(_QWORD *)(v8 + 24) = 0;
      *(_OWORD *)(v8 + 8) = i;
      if ( (int *)v8 != &v17 )
      {
        v9 = v17;
        if ( v17 < -1 )
        {
          *(_QWORD *)(v8 + 8) = ptr;
        }
        else
        {
          *(_QWORD *)(v8 + 8) = 0;
          *(_OWORD *)(v8 + 16) = 0;
          v10 = n[0];
          if ( n[0] )
          {
            v15 = sub_4814F0(n[0]);
            *(_QWORD *)(v8 + 8) = v15;
            v16 = ptr;
            *(_QWORD *)(v8 + 24) = v10;
            memcpy(v15, v16, v10);
            *(_QWORD *)(v8 + 16) = v10;
            v9 = v17;
            i = 0;
          }
        }
        *(_DWORD *)v8 = v9;
      }
    }
  }
  a1[1] = (void *)a2;
LABEL_14:
  if ( v17 >= -1 && ptr )
  {
    n[0] = 0;
    j__free(ptr);
  }
  return v23 - __readfsqword(0x28u);
}
