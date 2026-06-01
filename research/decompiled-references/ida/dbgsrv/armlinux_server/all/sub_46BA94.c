/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BA94
// Address: 0x000000000046BA94

//----- (000000000046BA94) ----------------------------------------------------
void __fastcall __noreturn sub_46BA94(
        int a1,
        int a2,
        int a3,
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
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        char *a51,
        __int64 a52,
        int a53,
        void *a54,
        __int64 a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        void *a62,
        __int64 a63,
        int a64,
        int a65,
        int a66,
        _QWORD *a67,
        __int64 a68,
        int a69,
        char *ptr,
        __int64 a71)
{
  char *v71; // x0
  __int64 i; // x20
  char *v73; // x2
  void *v74; // x1
  __int64 j; // x20
  _QWORD *v76; // x22
  void *v77; // x0
  void *v78; // x0
  char *v79; // x0
  __int64 k; // x20
  char *v81; // x2
  void *v82; // x1

  if ( ptr )
  {
    v71 = ptr;
    for ( i = 0; a71 != i; ++i )
    {
      v73 = &v71[24 * i];
      v74 = *(void **)v73;
      if ( *(_QWORD *)v73 )
      {
        *((_QWORD *)v73 + 1) = 0;
        j__free(v74);
        v71 = ptr;
      }
    }
    j__free(v71);
  }
  if ( a67 )
  {
    for ( j = 0; a68 != j; ++j )
    {
      v76 = &a67[9 * j];
      v77 = (void *)v76[3];
      if ( v77 )
      {
        v76[4] = 0;
        j__free(v77);
      }
      v78 = (void *)a67[9 * j];
      if ( v78 )
      {
        v76[1] = 0;
        j__free(v78);
      }
    }
    j__free(a67);
  }
  if ( a62 )
    j__free(a62);
  if ( a54 )
    j__free(a54);
  v79 = a51;
  if ( a51 )
  {
    for ( k = 0; a52 != k; ++k )
    {
      v81 = &v79[120 * k];
      v82 = *((void **)v81 + 2);
      if ( v82 )
      {
        *((_QWORD *)v81 + 3) = 0;
        j__free(v82);
        v79 = a51;
      }
    }
    j__free(v79);
  }
  JUMPOUT(0x46BA2C);
}
// 46BBAC: control flows out of bounds to 46BA2C
