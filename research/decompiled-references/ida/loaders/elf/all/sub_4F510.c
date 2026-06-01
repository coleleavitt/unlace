__int64 __fastcall sub_4F510(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        char a9,
        char *s,
        _QWORD *a11,
        unsigned int a12)
{
  unsigned __int16 v13; // bp
  unsigned __int16 v14; // bx
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // r9
  unsigned int v18; // ebp
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rbx
  char *v22; // rsi
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  char v32; // dl
  __int64 qword; // rax
  __int16 flags; // ax
  __int64 v35; // rax
  unsigned __int64 v37; // rax
  unsigned __int16 v38; // [rsp+0h] [rbp-F8h]
  char v39; // [rsp+0h] [rbp-F8h]
  char v40; // [rsp+0h] [rbp-F8h]
  unsigned __int8 v41; // [rsp+0h] [rbp-F8h]
  unsigned int v42; // [rsp+Ch] [rbp-ECh]
  __int64 v44; // [rsp+18h] [rbp-E0h]
  _QWORD v45[2]; // [rsp+20h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+30h] [rbp-C8h]
  __int64 v47; // [rsp+40h] [rbp-B8h]
  __int16 v48; // [rsp+48h] [rbp-B0h]
  __int128 v49; // [rsp+50h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-98h]
  __int64 v51; // [rsp+68h] [rbp-90h]
  int v52; // [rsp+70h] [rbp-88h]
  __int64 v53; // [rsp+78h] [rbp-80h]
  int v54; // [rsp+80h] [rbp-78h]
  __int64 v55; // [rsp+88h] [rbp-70h]
  int v56; // [rsp+90h] [rbp-68h]
  __int64 v57; // [rsp+98h] [rbp-60h]
  int v58; // [rsp+A0h] [rbp-58h]
  __int64 v59; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+B8h] [rbp-40h]

  v13 = a3;
  v14 = a5;
  v38 = a6;
  v60 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_debugger_on(a1, a2, a3, a4, a5, a6) )
    return -1;
  v42 = v14;
  v15 = sub_41C90(a1[30], v13, v14);
  v18 = v15;
  if ( v15 == 4 )
    return -1;
  v19 = (int)v15;
  v20 = v16;
  v21 = &a1[5 * (int)v15];
  v22 = (char *)v21[6];
  if ( !v21[4] && !v21[5] && v22 != (char *)-1LL )
  {
    v44 = (int)v15;
    sub_41E20((__int64)&a1[5 * v15 + 2], (__int64)a1, a2, (int)v15, v16, v17, a7, a8);
    v22 = (char *)v21[6];
    v19 = v44;
    v20 = v42;
  }
  v23 = &a1[5 * v19];
  v28 = sub_4F0B0(a1, v22, a4, *((unsigned __int8 *)v23 + 26), v20, v38, a9, s, a11, a12);
  if ( v28 )
  {
    if ( v23[6] != -1 )
    {
      v29 = getinf(9, v22, v24, v25, v26, v27);
      v32 = v29;
      if ( v23[6] != v28 )
      {
        if ( a4 )
        {
          v39 = v29;
          if ( (_BYTE)v29 == 8 )
          {
            qword = get_qword(v28);
            v32 = 8;
            if ( qword )
              goto LABEL_13;
            put_qword(v28, a4);
            v32 = v39;
          }
          else
          {
            LODWORD(qword) = get_dword(v28, v22, v29, v30, v31);
            v32 = v39;
            qword = (unsigned int)qword;
            if ( (_DWORD)qword )
            {
LABEL_13:
              if ( a4 != qword && (debug & 0x10) != 0 )
              {
                v40 = v32;
                sub_E950((__int64)"Attempt to redeclare xtrn/abs/common '%s'\n", s);
                v32 = v40;
              }
              goto LABEL_16;
            }
            put_dword(v28, a4);
            v32 = v39;
          }
        }
LABEL_16:
        if ( !v18 )
        {
          v41 = v32;
          flags = get_flags_ex(v28, 4);
          if ( a9 )
          {
            v35 = flags & 0x600;
            if ( v35 != 1536 )
            {
              if ( v35 == 1024 )
              {
                if ( (debug & 0x10) != 0 )
                  sub_E950((__int64)"A symbol '%s' is declared as function and as data\n", s);
              }
              else
              {
                v45[0] = v28;
                v52 = 0;
                v45[1] = v28 + v41 - 1;
                v48 = 0;
                si128 = _mm_load_si128((const __m128i *)&xmmword_6C000);
                v47 = 0;
                v50 = 0xFFFFFFFFLL;
                v51 = 0;
                v53 = 0;
                v54 = 0;
                v55 = 0;
                v56 = 0;
                v57 = 0;
                v58 = 0;
                v59 = 0;
                v49 = 0;
                add_func_ex(v45);
              }
            }
          }
        }
        return v28;
      }
      v37 = v28 + (unsigned __int8)v29;
      v23[6] = v37;
      if ( v23[5] >= v37 )
        return v28;
      if ( under_debugger )
        BUG();
      interr(20091);
    }
    return 0;
  }
  return v28;
}

