/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DF3A
// Address: 0x0005DF3A

//----- (0005DF3A) --------------------------------------------------------
int __fastcall sub_5DF3A(
        int a1,
        int a2,
        char *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        char *s,
        unsigned int a37)
{
  char **v37; // r4
  char *v38; // r1
  int v40; // r6
  size_t v41; // r0
  void *v42; // r0
  int v43; // r1
  int v45; // [sp+40h] [bp+40h]
  size_t v46; // [sp+44h] [bp+44h]

  v38 = s;
  do
  {
    if ( (unsigned int)v38 >= a37 )
    {
      v38 = *v37;
      v40 = (int)(*v37 + 372);
      goto LABEL_11;
    }
    a3 = v38 + 1;
  }
  while ( *v38++ != 0 );
  v40 = (int)(*v37 + 372);
  if ( s )
  {
    v41 = strlen(s);
    if ( v41 )
    {
      if ( *((_DWORD *)*v37 + 95) >= v41 + 1 )
        sub_5EA72();
      v46 = v41;
      v45 = v41 + 1;
      v42 = qvector_reserve(v40, *(void **)v40, v41 + 1, 1u);
      *(_DWORD *)v40 = v42;
      sub_5EA74(v42, v43, v46, v45);
    }
  }
LABEL_11:
  *(_DWORD *)(v40 + 4) = 0;
  return sub_5DFA0(
           0,
           v38,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32);
}
// 5DF56: variable 'v37' is possibly undefined
// 5DF90: variable 'v43' is possibly undefined
// 5DF9F: variable 'v38' is possibly undefined
// 5DF9F: variable 'a3' is possibly undefined
// 5DF9F: variable 'a4' is possibly undefined
// 5DFA0: using guessed type int __fastcall sub_5DFA0(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 5EA72: using guessed type void __noreturn sub_5EA72(void);
