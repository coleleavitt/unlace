unsigned __int64 __fastcall sub_6586E0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        char *a5,
        __int64 a6,
        double a7,
        double a8,
        __int64 a9)
{
  __int64 v11; // r12
  char *v14; // rbx
  __int64 v15; // r8
  char v16; // al
  char v17; // dl
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rdi
  const char *v21; // rsi
  __int64 v22; // rsi
  char v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v26; // r14
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rdi
  char *v30; // rdi
  __int64 i; // r12
  char *v32; // r15
  void *v33; // rdi
  void *v34; // rdi
  char *v35; // rdi
  int v36; // eax
  __int64 v37; // [rsp+0h] [rbp-98h]
  __int64 v38; // [rsp+0h] [rbp-98h]
  __int64 v39; // [rsp+0h] [rbp-98h]
  __int64 v41; // [rsp+8h] [rbp-90h]
  int v43[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v44; // [rsp+30h] [rbp-68h] BYREF
  __int16 v45; // [rsp+38h] [rbp-60h]
  char v46; // [rsp+3Ah] [rbp-5Eh]
  int v47[2]; // [rsp+40h] [rbp-58h] BYREF
  int v48[4]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v11 = a2;
  v49 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 != a1[1] )
      return v49 - __readfsqword(0x28u);
  }
  else
  {
    v11 = a1[1];
  }
  if ( (*(_BYTE *)(v11 + 32) & 0x10) != 0 )
  {
    LOBYTE(v14) = netnode_inited();
    if ( (_BYTE)v14 )
    {
      LOBYTE(v44) = 0;
      v15 = a9;
      *(_QWORD *)v47 = a4 + 1;
      v16 = *a4;
      v17 = *a4 & 0x3F;
      if ( v17 == 61 )
        goto LABEL_12;
      if ( (v16 & 0xF) == 0xD )
      {
        v28 = sub_6B38E0(v47, &v44);
        v15 = a9;
        if ( !v28 && !(_BYTE)v44 )
          goto LABEL_12;
        if ( (*a4 & 0x3F) != 0x2D )
        {
          if ( (*a4 & 0x2F) != 0xD )
            goto LABEL_11;
LABEL_36:
          v46 = 0;
          v29 = *a1;
          v45 = 0;
          v44 = 0;
          v14 = sub_653670(v29, v11, nullptr, a4, a5, nullptr, nullptr, nullptr);
          if ( !v14 )
            goto LABEL_13;
          sub_6C9970((int)a1);
          sub_6B91C0(&v44, v14);
          v30 = *(char **)v14;
          if ( *(_QWORD *)v14 )
          {
            v38 = *((_QWORD *)v14 + 1);
            if ( v38 )
            {
              for ( i = 0; i != v38; ++i )
              {
                v32 = &v30[144 * i];
                clear_tinfo_t(v32 + 64);
                v33 = *((void **)v32 + 5);
                if ( v33 )
                {
                  *((_QWORD *)v32 + 6) = 0;
                  qfree(v33);
                }
                v34 = *((void **)v32 + 2);
                if ( v34 )
                {
                  *((_QWORD *)v32 + 3) = 0;
                  qfree(v34);
                }
                v30 = *(char **)v14;
              }
            }
            *((_QWORD *)v14 + 1) = 0;
            qfree(v30);
          }
          v35 = v14;
          v23 = 0;
          LOBYTE(v14) = 0;
          qfree(v35);
LABEL_18:
          if ( !(unsigned __int8)sub_6BB290(a1) )
          {
            v24 = *(_QWORD *)(a6 + 24);
            if ( v24 != -1 )
            {
              sub_6C7CA0(a1, 0, v24, &v44, a6 + 64);
              sub_6BF220(a1, *(_QWORD *)(a6 + 24), 0);
              v25 = 0x200020002000LL;
              if ( !_bittest64(&v25, *(unsigned __int8 *)(a6 + 32)) )
                sub_3E34B0((__int64)a1, *(_QWORD *)(a6 + 24));
            }
            if ( !v23 )
            {
              *(_QWORD *)v43 = a4;
              v41 = sub_6B9860(a1, a3, 1, 1);
              if ( (*a4 & 0xF) == 0xB )
              {
                while ( 1 )
                {
                  v26 = (char)v14;
                  *(_QWORD *)v47 = 0;
                  *(_QWORD *)v48 = 0;
                  LOBYTE(v14) = sub_5685C0((char **)v43, v48, &v48[1]);
                  if ( !(_BYTE)v14
                    || **(_BYTE **)v43 == 0xFE && (unsigned __int8)sub_5383A0((unsigned __int8 **)v43, nullptr, nullptr) )
                  {
                    break;
                  }
                  clear_tinfo_t(v47);
                  if ( (**(_BYTE **)v43 & 0xF) != 0xB )
                    goto LABEL_31;
                }
                clear_tinfo_t(v47);
              }
              else
              {
                v26 = (char)v14;
              }
              if ( v26 )
              {
LABEL_31:
                v27 = sub_6584F0((__int64)a1, (char **)v43, 1, a7, a8);
                sub_6C0660(a1, v41, v27);
              }
            }
          }
          return v49 - __readfsqword(0x28u);
        }
      }
      else if ( v17 != 45 )
      {
        if ( (v16 & 0x2F) != 0xD )
        {
LABEL_11:
          LOBYTE(v14) = 0;
LABEL_12:
          v46 = 0;
          v44 = 0;
          v45 = 0;
LABEL_13:
          v18 = *(_QWORD *)(a6 + 40);
          v19 = v18;
          v37 = v18 + 32LL * *(_QWORD *)(a6 + 48);
          if ( v37 != v18 )
          {
            do
            {
              v20 = v19;
              v19 += 32;
              sub_6BF400(v20, *a1, 1);
            }
            while ( v37 != v19 );
          }
          v21 = haystack;
          if ( *(_QWORD *)(a6 + 8) )
            v21 = *(const char **)a6;
          sub_6BF450(a1, v21, a3, *(_QWORD *)(a6 + 24));
          v22 = v11;
          v23 = 0;
          sub_6B92B0(&v44, v22, a4, a5);
          goto LABEL_18;
        }
        goto LABEL_36;
      }
      v45 = 0;
      v39 = v15;
      v44 = 0;
      v46 = 0;
      sub_6C9970((int)a1);
      if ( v39 )
      {
        if ( (*(_BYTE *)(v39 + 52) & 7) != 0 )
          v36 = 1 << ((*(_BYTE *)(v39 + 52) & 7) - 1);
        else
          v36 = (unsigned __int8)getinf(61);
        v46 = 0;
        v44 = v36;
        v45 = 0;
      }
      v23 = (char)v14;
      LOBYTE(v14) = 0;
      goto LABEL_18;
    }
  }
  return v49 - __readfsqword(0x28u);
}
