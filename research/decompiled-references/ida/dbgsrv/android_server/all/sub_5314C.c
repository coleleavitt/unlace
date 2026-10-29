/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5314C
// Address: 0x000000000005314C

//----- (000000000005314C) ----------------------------------------------------
__int64 __fastcall sub_5314C(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        __int64 a14,
        __int64 a15,
        int a16,
        int a17,
        int a18,
        int a19,
        void *a20,
        __int64 a21,
        __int64 a22,
        void *a23,
        __int64 a24,
        __int64 a25,
        void *ptr,
        __int64 a27,
        __int64 a28,
        int a29,
        int a30,
        int a31,
        int a32,
        void *a33,
        int a34,
        __int64 a35,
        void *a36,
        __int64 a37,
        __int64 a38,
        void *a39,
        __int64 a40,
        __int64 a41,
        int a42,
        __int64 a43,
        __int64 a44,
        char a45,
        __int64 a46,
        __int64 a47,
        int a48,
        __int64 a49,
        int a50,
        __int64 a51,
        int a52,
        __int64 a53,
        int a54,
        __int64 a55,
        int a56,
        __int64 a57)
{
  __int64 v60; // x24
  __int64 v61; // x27
  __int64 v62; // x8
  __int64 v63; // x26
  __int64 v64; // x20
  __int64 **v65; // x23
  __int64 **i; // x21
  __int64 *v67; // x8
  __int64 *v68; // x1
  __int64 v69; // x26
  unsigned __int64 v70; // x22
  __int64 **v71; // x23
  __int64 **v72; // x29
  __int64 *v73; // x8
  __int64 *v74; // x1
  __int64 v76; // [xsp+278h] [xbp-D0h]
  __int64 v77; // [xsp+288h] [xbp-C0h]
  __int64 v78; // [xsp+290h] [xbp-B8h] BYREF
  __int64 **v79; // [xsp+298h] [xbp-B0h] BYREF
  __int64 *v80; // [xsp+2A0h] [xbp-A8h] BYREF
  __int64 v81; // [xsp+2A8h] [xbp-A0h]
  __int64 v82; // [xsp+2B0h] [xbp-98h] BYREF
  unsigned int v83; // [xsp+2BCh] [xbp-8Ch]
  __int64 v84; // [xsp+2C0h] [xbp-88h]
  __int64 **v85; // [xsp+2C8h] [xbp-80h] BYREF
  __int64 *v86; // [xsp+2D0h] [xbp-78h] BYREF
  void *v87; // [xsp+2D8h] [xbp-70h]
  __int64 v88; // [xsp+2E0h] [xbp-68h]

  v88 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v60 = a1[1];
  v61 = a3 + a2;
  v62 = qlseek(*(_QWORD *)(v60 + 472), 0, 1) - *(_QWORD *)(v60 + 480);
  v86 = nullptr;
  v87 = nullptr;
  v76 = v62;
  v85 = &v86;
  if ( a3 + a2 > a2 )
  {
    v63 = 0;
    v64 = a2;
LABEL_12:
    v65 = &v86;
    i = &v86;
LABEL_13:
    if ( !*v65 )
    {
      do
      {
        v68 = (__int64 *)operator new(0x28u);
        v68[4] = v64;
        *v68 = 0;
        v68[1] = 0;
        v68[2] = (__int64)i;
        *v65 = v68;
        if ( *v85 )
        {
          v85 = (__int64 **)*v85;
          v68 = *v65;
        }
        sub_48ED8(v86, v68);
        v87 = (char *)v87 + 1;
        if ( qlseek(*(_QWORD *)(v60 + 472), *(_QWORD *)(v60 + 480) + v64, 0) == -1 || !sub_5C0FC((__int64)&v82, a1[1]) )
          break;
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64, __int64))*a1)(a1, &v82, v64 - a2, v63);
        v77 = v63;
        v80 = nullptr;
        v81 = 0;
        v79 = &v80;
        v69 = v64 + v83;
        if ( v69 < v61 )
        {
          v70 = 0;
LABEL_29:
          v71 = &v80;
          v72 = &v80;
LABEL_30:
          if ( !*v72 )
          {
            do
            {
              v74 = (__int64 *)operator new(0x28u);
              v74[4] = v69;
              *v74 = 0;
              v74[1] = 0;
              v74[2] = (__int64)v71;
              *v72 = v74;
              if ( *v79 )
              {
                v79 = (__int64 **)*v79;
                v74 = *v72;
              }
              sub_48ED8(v80, v74);
              ++v81;
              if ( v70 >= HIWORD(v82) )
                break;
              if ( qlseek(*(_QWORD *)(v60 + 472), *(_QWORD *)(v60 + 480) + v69, 0) == -1 )
                break;
              if ( !sub_5C270((__int64)&v78, a1[1]) )
                break;
              (*(void (__fastcall **)(__int64 *, __int64 *, __int64, unsigned __int64))(*a1 + 8))(
                a1,
                &v78,
                v69 - a2,
                v70);
              v69 += HIDWORD(v78);
              if ( v69 >= v61 )
                break;
              ++v70;
              if ( !v80 )
                goto LABEL_29;
              v71 = (__int64 **)v80;
              v72 = &v80;
              while ( 1 )
              {
                while ( 1 )
                {
                  v73 = v71[4];
                  if ( v69 < (__int64)v73 )
                    break;
                  if ( (__int64)v73 >= v69 )
                    goto LABEL_30;
                  v72 = v71 + 1;
                  if ( !v71[1] )
                    goto LABEL_30;
                  v71 = (__int64 **)v71[1];
                }
                if ( !*v71 )
                  break;
                v72 = v71;
                v71 = (__int64 **)*v71;
              }
              v72 = v71;
            }
            while ( !*v71 );
          }
        }
        v64 += (unsigned int)v84;
        sub_5C0C0((__int64)&v79, v80);
        if ( v64 >= v61 )
          break;
        v63 = v77 + 1;
        if ( !v86 )
          goto LABEL_12;
        v65 = &v86;
        for ( i = (__int64 **)v86; ; i = (__int64 **)*i )
        {
          while ( 1 )
          {
            v67 = i[4];
            if ( v64 < (__int64)v67 )
              break;
            if ( (__int64)v67 >= v64 )
              goto LABEL_13;
            v65 = i + 1;
            if ( !i[1] )
              goto LABEL_13;
            i = (__int64 **)i[1];
          }
          if ( !*i )
            break;
          v65 = i;
        }
        v65 = i;
      }
      while ( !*i );
    }
  }
  sub_5C0C0((__int64)&v85, v86);
  return qlseek(*(_QWORD *)(v60 + 472), *(_QWORD *)(v60 + 480) + v76, 0);
}
