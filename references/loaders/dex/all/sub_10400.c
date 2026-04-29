__int64 __fastcall sub_10400(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  const char *v14; // rcx
  const char *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  const char *v18; // rdx
  const char *v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rdi
  const char *v24; // r8
  const char *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdx
  const char *v37; // [rsp+0h] [rbp-388h] BYREF
  __int128 v38; // [rsp+8h] [rbp-380h]
  const char *v39; // [rsp+20h] [rbp-368h] BYREF
  __int128 v40; // [rsp+28h] [rbp-360h]
  char v41[28]; // [rsp+40h] [rbp-348h] BYREF
  char v42[84]; // [rsp+5Ch] [rbp-32Ch] BYREF
  __int64 v43; // [rsp+B0h] [rbp-2D8h]
  __int128 v44; // [rsp+B8h] [rbp-2D0h]
  _BYTE v45[32]; // [rsp+D0h] [rbp-2B8h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-298h]
  __int64 v47; // [rsp+F8h] [rbp-290h]
  __int64 v48; // [rsp+140h] [rbp-248h]
  __int64 v49; // [rsp+148h] [rbp-240h]
  __int64 v50; // [rsp+1F0h] [rbp-198h]
  __int64 v51; // [rsp+1F8h] [rbp-190h]
  __int64 (*v52)(); // [rsp+2C0h] [rbp-C8h]
  __int64 v53; // [rsp+310h] [rbp-78h]
  __int64 v54; // [rsp+318h] [rbp-70h]
  __int64 v55; // [rsp+328h] [rbp-60h]
  __int64 v56; // [rsp+330h] [rbp-58h]
  char v57; // [rsp+339h] [rbp-4Fh]
  _BYTE v58[2]; // [rsp+340h] [rbp-48h] BYREF
  char v59; // [rsp+342h] [rbp-46h]
  char v60; // [rsp+343h] [rbp-45h]
  char v61[4]; // [rsp+344h] [rbp-44h] BYREF
  unsigned __int64 v62; // [rsp+348h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  if ( (unsigned int)get_basic_file_type(a3) != 14 )
  {
    qlseek(a3, 0, 0);
    v37 = nullptr;
    v38 = 0;
    sub_AFB0((__int64)v45, a3, 0);
    v56 = 0;
    v52 = sub_5780;
    if ( (unsigned __int8)sub_B170((__int64)v45)
      && (unsigned __int8)sub_B550((__int64)v45)
      && (unsigned __int8)sub_F4E0((__int64)v45) )
    {
      v43 = 0;
      v44 = 0;
      if ( !(unsigned __int8)sub_E880((__int64)v41, (__int64)v45) || qlseek(a3, *(_QWORD *)(v43 + 32), 0) == -1 )
      {
        v32 = v43;
        if ( v43 )
        {
          v33 = v44;
          if ( (_QWORD)v44 )
          {
            v34 = 0;
            do
            {
              v35 = (__int64 *)(v32 + 48 * v34);
              v36 = *v35;
              if ( *v35 )
              {
                v35[1] = 0;
                qfree(v36);
                v32 = v43;
              }
              ++v34;
            }
            while ( v33 != v34 );
          }
          *(_QWORD *)&v44 = 0;
          qfree(v32);
        }
        goto LABEL_5;
      }
      sub_E4D0((__int64)&v39, (__int64)v45);
      v24 = s1;
      if ( (_QWORD)v40 )
        v24 = v39;
      v25 = "";
      if ( v57 )
        v25 = "64";
      sub_E410((__int64 *)&v37, (__int64)"ELF%s-OAT %s for %s: ", v25, v42, v24);
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
      v26 = v43;
      if ( v43 )
      {
        v27 = v44;
        v28 = 0;
        if ( (_QWORD)v44 )
        {
          do
          {
            v29 = (__int64 *)(v26 + 48 * v28);
            v30 = *v29;
            if ( *v29 )
            {
              v29[1] = 0;
              qfree(v30);
              v26 = v43;
            }
            ++v28;
          }
          while ( v27 != v28 );
        }
        *(_QWORD *)&v44 = 0;
        qfree(v26);
      }
    }
    if ( qlread(a3, v58, 8) == 8
      && v58[0] == 100
      && v58[1] == 101
      && (unsigned __int8)(v59 - 120) <= 1u
      && v60 == 10
      && (unsigned __int8)(v61[0] - 48) <= 9u
      && (unsigned __int8)(v61[1] - 48) <= 9u
      && (unsigned __int8)(v61[2] - 48) <= 9u
      && !v61[3] )
    {
      v14 = "";
      if ( v59 != 120 )
        v14 = "Optimized ";
      v15 = s1;
      if ( (_QWORD)v38 )
        v15 = v37;
      sub_E410(a1, (__int64)"%sAndroid %sDEX file version %s", v15, v14, v61);
      v16 = *a2;
      if ( (unsigned __int64)a2[2] <= 6 )
      {
        v31 = qvector_reserve(a2, v16, 7, 1);
        *a2 = v31;
        v16 = v31;
      }
      a2[1] = 7;
      *(_DWORD *)v16 = 1986814308;
      *(_WORD *)(v16 + 4) = 27497;
      v17 = *a2;
      v6 = 32785;
      *(_BYTE *)(v17 + 6) = 0;
      goto LABEL_6;
    }
LABEL_5:
    v6 = 0;
LABEL_6:
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
    if ( v53 )
    {
      v54 = 0;
      qfree(v53);
    }
    v7 = v50;
    if ( v50 )
    {
      v8 = v51;
      if ( v51 )
      {
        v9 = 0;
        do
        {
          v10 = (__int64 *)(v7 + 96 * v9);
          v11 = v10[3];
          if ( v11 )
          {
            v10[4] = 0;
            qfree(v11);
          }
          v12 = *v10;
          if ( *v10 )
          {
            v10[1] = 0;
            qfree(v12);
          }
          ++v9;
          v7 = v50;
        }
        while ( v8 != v9 );
      }
      v51 = 0;
      qfree(v7);
    }
    if ( v48 )
    {
      v49 = 0;
      qfree(v48);
    }
    if ( v46 )
    {
      v47 = 0;
      qfree(v46);
    }
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    return v6;
  }
  v39 = nullptr;
  v40 = 0;
  if ( (unsigned __int8)sub_1E840(&v39, a3) )
  {
    v18 = ", multidex";
    if ( (_QWORD)v40 == 1 )
      v18 = "";
    sub_E410(a1, (__int64)"APK Android Package%s", v18);
    v6 = 32785;
  }
  else
  {
    v6 = 0;
  }
  v19 = v39;
  if ( v39 )
  {
    v20 = v40;
    if ( (_QWORD)v40 )
    {
      v21 = 0;
      v22 = 0;
      do
      {
        v23 = *(_QWORD *)&v19[v21];
        if ( v23 )
        {
          *(_QWORD *)&v19[v21 + 8] = 0;
          qfree(v23);
          v19 = v39;
        }
        ++v22;
        v21 += 56;
      }
      while ( v20 != v22 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v19);
  }
  return v6;
}
