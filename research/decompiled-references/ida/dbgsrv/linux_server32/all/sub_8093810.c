/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8093810
// Address: 0x08093810

//----- (08093810) --------------------------------------------------------
int __cdecl sub_8093810(int a1, char *a2, char a3)
{
  char *v3; // esi
  char *v4; // ecx
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  char *v8; // ebx
  void *v9; // edx
  const char *v10; // edi
  __int64 v11; // xmm0_8
  void *v12; // edi
  char *v13; // eax
  void *v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  char *v17; // eax
  void *v18; // edx
  int v19; // esi
  char *v21; // eax
  int v22; // edx
  int v23; // [esp+FD0h] [ebp-60h]
  char *s; // [esp+FD4h] [ebp-5Ch]
  pthread_mutex_t *mutex; // [esp+FD8h] [ebp-58h]
  size_t n; // [esp+FDCh] [ebp-54h]
  __int64 v27; // [esp+FE0h] [ebp-50h]
  int v28; // [esp+FE8h] [ebp-48h]
  char *accept; // [esp+FECh] [ebp-44h]
  char *p_ptr; // [esp+FF0h] [ebp-40h]
  int v31; // [esp+1004h] [ebp-2Ch] BYREF
  void *ptr; // [esp+1008h] [ebp-28h] BYREF
  __int64 v33; // [esp+100Ch] [ebp-24h]
  unsigned int v34; // [esp+1014h] [ebp-1Ch]

  v3 = (char *)a1;
  p_ptr = a2;
  v34 = __readgsdword(0x14u);
  mutex = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  if ( !a3 )
  {
    v4 = *(char **)(a1 + 12);
    if ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 16);
      if ( v5 )
      {
        accept = (char *)a1;
        v6 = 0;
        v7 = v5;
        do
        {
          v8 = &v4[12 * v6];
          v9 = *(void **)v8;
          if ( *(_DWORD *)v8 )
          {
            *((_DWORD *)v8 + 1) = 0;
            sub_80CF780(v9);
            v4 = *((char **)accept + 3);
          }
          ++v6;
        }
        while ( v7 != v6 );
        v3 = accept;
      }
      *((_DWORD *)v3 + 4) = 0;
      sub_80CF780(v4);
      *((_DWORD *)v3 + 3) = 0;
      *((_DWORD *)v3 + 5) = 0;
    }
  }
  if ( !p_ptr )
    goto LABEL_26;
  s = (char *)sub_80CF830(p_ptr);
  if ( s )
  {
    v28 = (int)&v31;
    accept = ":";
    v10 = sub_80D0690(s, ":", (const char **)&v31);
    v23 = (int)(v3 + 12);
    p_ptr = (char *)&ptr;
    while ( v10 )
    {
      if ( *v10 )
      {
        ptr = nullptr;
        v33 = 0;
        n = strlen(v10);
        LODWORD(v27) = n + 1;
        ptr = sub_80CF920((int)p_ptr, nullptr, n + 1, 1u);
        LODWORD(v33) = v27;
        LODWORD(v27) = n;
        memmove(ptr, v10, n);
        *((_BYTE *)ptr + v27) = 0;
        v22 = *((_DWORD *)v3 + 4);
        v21 = *((char **)v3 + 3);
        v15 = *((_DWORD *)v3 + 5);
        v16 = v22 + 1;
        if ( p_ptr < v21 || p_ptr >= &v21[12 * v15] )
        {
          if ( v15 < v16 )
          {
            v21 = (char *)sub_80CF920(v23, v21, v22 + 1, 0xCu);
            v22 = *((_DWORD *)v3 + 4);
            *((_DWORD *)v3 + 3) = v21;
          }
          v17 = &v21[12 * v22];
          v18 = ptr;
          *(_QWORD *)(v17 + 4) = v33;
          *(_DWORD *)v17 = v18;
          ++*((_DWORD *)v3 + 4);
        }
        else
        {
          v11 = v33;
          v12 = ptr;
          v33 = 0;
          ptr = nullptr;
          if ( v15 < v16 )
          {
            v27 = v11;
            v21 = (char *)sub_80CF920(v23, v21, v22 + 1, 0xCu);
            v22 = *((_DWORD *)v3 + 4);
            v11 = v27;
            *((_DWORD *)v3 + 3) = v21;
          }
          v13 = &v21[12 * v22];
          *(_DWORD *)v13 = v12;
          *(_QWORD *)(v13 + 4) = v11;
          v14 = ptr;
          ++*((_DWORD *)v3 + 4);
          if ( v14 )
          {
            LODWORD(v33) = 0;
            sub_80CF780(v14);
          }
        }
      }
      v10 = sub_80D0690(nullptr, accept, (const char **)v28);
    }
    sub_80CF780(s);
LABEL_26:
    v19 = 1;
    goto LABEL_27;
  }
  v19 = 0;
LABEL_27:
  sub_80D1600(mutex);
  if ( v34 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v19;
}
// 811E6F8: using guessed type int dword_811E6F8;
