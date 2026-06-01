/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807B3D0
// Address: 0x0807B3D0

//----- (0807B3D0) --------------------------------------------------------
int __cdecl sub_807B3D0(char *a1, int a2, const void *a3, size_t n)
{
  pthread_mutex_t *v4; // edi
  int v5; // eax
  size_t v6; // eax
  char *v7; // edx
  char *v8; // ecx
  size_t v10; // ecx
  char *v11; // ebx
  _DWORD *v12; // [esp+4h] [ebp-34h]
  int *s; // [esp+Ch] [ebp-2Ch]
  char *sa; // [esp+Ch] [ebp-2Ch]
  unsigned __int8 sb; // [esp+Ch] [ebp-2Ch]
  char v16; // [esp+1Bh] [ebp-1Dh] BYREF
  unsigned int v17; // [esp+1Ch] [ebp-1Ch]

  v17 = __readgsdword(0x14u);
  v4 = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  s = (int *)sub_807F510();
  v5 = sub_8080740(s, a1);
  if ( v5 != -1 )
  {
    v16 = 0;
    sa = *(char **)(*s + 4 * v5);
    v6 = *((_DWORD *)sa + 5);
    v12 = sa + 16;
    v7 = *((char **)sa + 4);
    if ( n < v6 )
    {
      *((_DWORD *)sa + 5) = n;
LABEL_4:
      memcpy(v7, a3, n);
      sub_807FCA0(v12);
      v8 = sa;
      sb = 1;
      *((_DWORD *)v8 + 3) = a2;
      *((_DWORD *)v8 + 17) = 0;
      goto LABEL_5;
    }
    if ( v6 >= n )
      goto LABEL_4;
    v10 = *((_DWORD *)sa + 6);
    if ( &v16 < v7 || &v16 >= &v7[v10] )
    {
      v11 = sa;
      if ( v10 < n )
      {
        v11 = sa;
        v7 = (char *)sub_80CF920((int)v12, v7, n, 1u);
        *((_DWORD *)sa + 4) = v7;
        v6 = *((_DWORD *)sa + 5);
        if ( v6 >= n )
          goto LABEL_13;
      }
      do
      {
        v7[v6++] = 0;
        v7 = *((char **)v11 + 4);
      }
      while ( n != v6 );
    }
    else
    {
      v11 = sa;
      if ( v10 < n )
      {
        v11 = sa;
        v7 = (char *)sub_80CF920((int)v12, v7, n, 1u);
        *((_DWORD *)sa + 4) = v7;
        v6 = *((_DWORD *)sa + 5);
        if ( v6 >= n )
          goto LABEL_13;
      }
      do
      {
        v7[v6++] = 0;
        v7 = *((char **)v11 + 4);
      }
      while ( n != v6 );
    }
    sa = v11;
LABEL_13:
    *((_DWORD *)sa + 5) = n;
    goto LABEL_4;
  }
  sb = 0;
LABEL_5:
  sub_80D1600(v4);
  if ( v17 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return sb;
}
// 811E6F8: using guessed type int dword_811E6F8;
