/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CC640
// Address: 0x080CC640

//----- (080CC640) --------------------------------------------------------
int *sub_80CC640()
{
  int v1; // eax
  size_t v2; // edi
  int v3; // edx
  char *v4; // eax
  __m128i v5; // xmm0
  char *v6; // eax
  void *v7; // [esp+0h] [ebp-3Ch]
  pthread_mutex_t *mutex; // [esp+10h] [ebp-2Ch] BYREF
  void *src; // [esp+14h] [ebp-28h] BYREF
  size_t n; // [esp+18h] [ebp-24h]
  int v11; // [esp+1Ch] [ebp-20h]
  unsigned int v12; // [esp+20h] [ebp-1Ch]

  v12 = __readgsdword(0x14u);
  sub_80D15D0(&mutex);
  if ( dword_811E874 )
    goto LABEL_6;
  src = nullptr;
  n = 0;
  v11 = 0;
  if ( !(unsigned __int8)sub_80D2000("IDAUSR", &src) )
  {
    if ( dword_811E874 )
      goto LABEL_4;
LABEL_8:
    if ( (unsigned __int8)sub_80CC210((int *)&src) )
    {
      v2 = n;
      v7 = nullptr;
      if ( n )
      {
        v7 = sub_80CF8B0(n);
        memcpy(v7, src, v2);
      }
      v3 = dword_811E874;
      v4 = (char *)dword_811E870;
      if ( dword_811E878 < (unsigned int)(dword_811E874 + 1) )
      {
        v4 = (char *)sub_80CF920((int)&dword_811E870, (void *)dword_811E870, dword_811E874 + 1, 0xCu);
        v3 = dword_811E874;
        dword_811E870 = (int)v4;
      }
      v5 = _mm_cvtsi32_si128(v2);
      v6 = &v4[12 * v3];
      *(_DWORD *)v6 = v7;
      *(_QWORD *)(v6 + 4) = _mm_unpacklo_epi32(v5, v5).m128i_u64[0];
      v1 = ++dword_811E874;
    }
    else
    {
      v1 = dword_811E874;
    }
    if ( !v1 )
    {
      if ( v12 == __readgsdword(0x14u) )
        sub_8058270(
          "IDA could not find a valid user directory.\n"
          "Please make sure that the HOME or IDAUSR environment variables are set.\n");
LABEL_20:
      sub_80D7AB0();
    }
    goto LABEL_4;
  }
  sub_80CC440((char **)&dword_811E870, (char *)src);
  if ( !dword_811E874 )
    goto LABEL_8;
LABEL_4:
  if ( src )
  {
    n = 0;
    sub_80CF780(src);
  }
LABEL_6:
  sub_80D1600(mutex);
  if ( v12 != __readgsdword(0x14u) )
    goto LABEL_20;
  return &dword_811E870;
}
// 811E870: using guessed type int dword_811E870;
// 811E874: using guessed type int dword_811E874;
// 811E878: using guessed type int dword_811E878;
