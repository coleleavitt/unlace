std::_V2 *__fastcall sub_2230A30(
        std::_V2 *a1,
        __int64 a2,
        const void ***a3,
        size_t a4,
        size_t a5,
        __int64 a6,
        unsigned __int8 a7,
        unsigned int a8,
        unsigned __int16 a9)
{
  std::_V2 *v11; // r13
  unsigned __int8 v13; // r10
  unsigned __int8 v14; // r8
  int v15; // r8d
  char *v16; // rbp
  int v17; // eax
  _QWORD *v18; // rax
  char *v19; // r15
  size_t v20; // r14
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rdx
  int v25; // eax
  __int64 v26; // rdx
  char v27; // dl
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  size_t v31; // rcx
  unsigned __int8 v32; // r10
  unsigned __int8 v33; // r8
  int v34; // eax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  _BYTE *v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v42; // [rsp+8h] [rbp-D0h]
  size_t v43; // [rsp+8h] [rbp-D0h]
  int v44; // [rsp+8h] [rbp-D0h]
  __int64 v45; // [rsp+8h] [rbp-D0h]
  int v46; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v47; // [rsp+10h] [rbp-C8h]
  unsigned __int8 v48; // [rsp+10h] [rbp-C8h]
  size_t v49; // [rsp+10h] [rbp-C8h]
  unsigned __int8 v50; // [rsp+10h] [rbp-C8h]
  unsigned __int8 v51; // [rsp+18h] [rbp-C0h]
  unsigned __int8 v52; // [rsp+1Ch] [rbp-BCh]
  _QWORD *v53; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v54[2]; // [rsp+30h] [rbp-A8h] BYREF
  char v55; // [rsp+40h] [rbp-98h]
  __int128 v56; // [rsp+50h] [rbp-88h] BYREF
  __int128 v57; // [rsp+60h] [rbp-78h]
  __int128 v58; // [rsp+70h] [rbp-68h]
  __int128 v59; // [rsp+80h] [rbp-58h]
  __int64 v60; // [rsp+90h] [rbp-48h]

  v11 = a1;
  v13 = a7;
  v14 = a8;
  if ( !(_BYTE)byte_2D0AB58 )
  {
    a1 = (std::_V2 *)&byte_2D0AB58;
    v43 = a4;
    v29 = __cxa_guard_acquire(&byte_2D0AB58);
    a4 = v43;
    v13 = a7;
    v14 = a8;
    if ( v29 )
    {
      sub_2290910(&v56, a2, v30, v43, a8);
      v31 = v43;
      v32 = a7;
      v33 = a8;
      if ( (BYTE8(v56) & 1) != 0 )
      {
        v39 = (_QWORD *)v56;
        *(_QWORD *)&v56 = 0;
        v53 = v39;
        sub_A05760(v54, &v53);
        v31 = v43;
        v32 = a7;
        v33 = a8;
        if ( v53 )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD **, __int64, size_t, _QWORD))(*v53 + 8LL))(v53, &v53, v40, v43, a8);
          v33 = a8;
          v32 = a7;
          v31 = v43;
        }
        v34 = 4096;
      }
      else
      {
        v34 = v56;
      }
      v52 = v33;
      v51 = v32;
      v49 = v31;
      v44 = v34;
      sub_A0AE90((__int64 *)&v56);
      a1 = (std::_V2 *)&byte_2D0AB58;
      dword_2D0AB60 = v44;
      __cxa_guard_release(&byte_2D0AB58);
      v14 = v52;
      v13 = v51;
      a4 = v49;
    }
  }
  if ( a5 == -1 )
  {
    a5 = a4;
    if ( a4 == -1 )
    {
      a1 = (std::_V2 *)(unsigned int)a2;
      v48 = v14;
      v42 = v13;
      v58 = 0;
      v56 = 0;
      v57 = 0;
      v59 = 0;
      v60 = 0;
      HIDWORD(v58) = 0xFFFF;
      v25 = sub_228C5C0(a2);
      v13 = v42;
      v14 = v48;
      if ( v25 )
      {
        *((_BYTE *)v11 + 16) |= 1u;
        *(_DWORD *)v11 = v25;
        *((_QWORD *)v11 + 1) = v26;
        return v11;
      }
      if ( DWORD2(v58) != 2 && DWORD2(v58) != 5 )
      {
        sub_22305D0((__int64)v54, (unsigned int)a2, a3);
        v27 = v55 & 1;
        if ( (v55 & 1) != 0 )
        {
          *(_DWORD *)v11 = v54[0];
          *((_QWORD *)v11 + 1) = v54[1];
        }
        else
        {
          v28 = v54[0];
          v54[0] = 0;
          *(_QWORD *)v11 = v28;
        }
        *((_BYTE *)v11 + 16) = v27 | *((_BYTE *)v11 + 16) & 0xFE;
        sub_22307A0(v54);
        return v11;
      }
      a4 = v58;
      a5 = v58;
    }
  }
  if ( (v13 & v14) == 0 && a5 > 0x3FFF )
  {
    v15 = dword_2D0AB60;
    if ( a5 >= (unsigned int)dword_2D0AB60 )
    {
      if ( !v13 )
      {
LABEL_10:
        v47 = v13;
        LODWORD(v56) = 0;
        *((_QWORD *)&v56 + 1) = std::_V2::system_category(a1);
        v16 = sub_22301F0(48, a3);
        *(_QWORD *)v16 = off_2BEB1A0;
        v41 = a6 & (int)-sub_2290210();
        v17 = sub_2290210();
        sub_228C750(v16 + 24, (unsigned int)a2, 0, a5 + (a6 & (v17 - 1)), v41, &v56);
        if ( !(_DWORD)v56 )
        {
          v45 = sub_228B750(v16 + 24);
          v37 = v45 + (a6 & (int)(sub_2290210() - 1));
          v38 = (_BYTE *)(v37 + a5);
          *((_QWORD *)v16 + 1) = v37;
          LODWORD(v37) = v56;
          *((_QWORD *)v16 + 2) = v38;
          if ( !(_DWORD)v37 && (!v47 || !*v38) )
          {
            *((_BYTE *)v11 + 16) &= ~1u;
            *(_QWORD *)v11 = v16;
            return v11;
          }
        }
        *(_QWORD *)v16 = off_2BEB1A0;
        sub_228C800(v16 + 24);
        free(v16);
        goto LABEL_12;
      }
      if ( a4 == -1 )
      {
        a1 = (std::_V2 *)(unsigned int)a2;
        v46 = dword_2D0AB60;
        v58 = 0;
        v50 = v13;
        v56 = 0;
        v57 = 0;
        v59 = 0;
        v60 = 0;
        HIDWORD(v58) = 0xFFFF;
        if ( (unsigned int)sub_228C5C0(a2) )
          goto LABEL_12;
        a4 = v58;
        v13 = v50;
        v15 = v46;
      }
      if ( a6 + a5 == a4 && (a4 & (v15 - 1)) != 0 )
        goto LABEL_10;
    }
  }
LABEL_12:
  sub_2230400(&v53, a5, a3, a9);
  v18 = v53;
  if ( v53 )
  {
    v19 = (char *)v53[1];
    v20 = v53[2] - (_QWORD)v19;
    if ( v20 )
    {
      while ( 1 )
      {
        sub_228D420(&v56, (unsigned int)a2, v19, v20, a6);
        if ( (BYTE8(v56) & 1) != 0 )
          break;
        if ( !(_QWORD)v56 )
        {
          memset(v19, 0, v20);
          sub_A0AE70((__int64 *)&v56);
          v36 = v53;
          *((_BYTE *)v11 + 16) &= ~1u;
          *(_QWORD *)v11 = v36;
          return v11;
        }
        v20 -= v56;
        v19 += v56;
        a6 += v56;
        sub_A0AE70((__int64 *)&v56);
        if ( !v20 )
        {
          v18 = v53;
          goto LABEL_24;
        }
      }
      v54[0] = v56;
      *(_QWORD *)&v56 = 0;
      v21 = sub_2220DB0((std::_V2 *)v54);
      v22 = v54[0];
      *((_BYTE *)v11 + 16) |= 1u;
      *(_DWORD *)v11 = v21;
      *((_QWORD *)v11 + 1) = v23;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      sub_A0AE70((__int64 *)&v56);
      if ( v53 )
        (*(void (__fastcall **)(_QWORD *))(*v53 + 8LL))(v53);
    }
    else
    {
LABEL_24:
      *((_BYTE *)v11 + 16) &= ~1u;
      *(_QWORD *)v11 = v18;
    }
  }
  else
  {
    v35 = std::_V2::generic_category((std::_V2 *)&v53);
    *((_BYTE *)v11 + 16) |= 1u;
    *(_DWORD *)v11 = 12;
    *((_QWORD *)v11 + 1) = v35;
  }
  return v11;
}
