/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400299B0
// Address: 0x00000001400299B0

//----- (00000001400299B0) ----------------------------------------------------
__int64 __fastcall sub_1400299B0(char *a1, char *a2, __int64 a3, unsigned __int64 a4, char a5)
{
  __int64 v6; // r14
  char *v7; // rbx
  char v9; // al
  char *v10; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  char *v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  size_t v20; // rdi
  const void *v21; // rsi
  void *v22; // rax
  __int64 v23; // rax
  __int64 **v24; // rbx
  __int64 *v25; // rbx
  __int64 *v26; // rdi
  char *v27; // rsi
  char *v28; // r14
  const char *v29; // rdx
  const char *v30; // rcx
  unsigned int v31; // eax
  __int64 *v32; // rcx
  char *v33; // rsi
  char *v34; // rdi
  char v35; // al
  bool v36; // sf
  unsigned int v37; // edi
  size_t v38; // rsi
  void *v39; // rax
  char *v40; // rax
  __int64 **v41; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int128 v44; // xmm2
  __int128 v45; // xmm3
  char *Str2[2]; // [rsp+20h] [rbp-81h] BYREF
  __int64 v47; // [rsp+30h] [rbp-71h]
  __int128 v48; // [rsp+38h] [rbp-69h] BYREF
  __int128 v49; // [rsp+48h] [rbp-59h]
  __int64 **v50; // [rsp+58h] [rbp-49h]
  __int64 v51; // [rsp+60h] [rbp-41h]
  unsigned __int64 v52; // [rsp+68h] [rbp-39h] BYREF
  void *Block[2]; // [rsp+70h] [rbp-31h] BYREF
  __int64 v54; // [rsp+80h] [rbp-21h]
  struct __crt_locale_pointers Src[2]; // [rsp+88h] [rbp-19h] BYREF

  v6 = a3;
  v51 = a3;
  v7 = a2;
  if ( !a1 || !a2 )
    return sub_1400640B0(0x620u);
  v9 = *a2;
  if ( *a2 == 5 )
  {
LABEL_8:
    if ( (a5 & 1) != 0 )
    {
      sub_14005B0A0(Src, 32, "%I64u", v6);
      return sub_140029410(a1, (__int64)v7, (char *)Src, 0);
    }
    else
    {
      LOBYTE(v48) = 2;
      v49 = 0u;
      *((_QWORD *)&v48 + 1) = 0;
      sub_140029390((__int64)&v48);
      LOBYTE(v48) = 5;
      v22 = operator new(0x18u);
      v52 = (unsigned __int64)v22;
      if ( v22 )
        v23 = sub_14002BC20((__int64)v22, 0);
      else
        v23 = 0;
      *((_QWORD *)&v48 + 1) = v23;
      v24 = *((__int64 ***)v7 + 1);
      v50 = v24;
      Str2[0] = nullptr;
      Str2[1] = nullptr;
      v47 = 0;
      Str2[0] = (char *)sub_14005ABE0((__int64)Str2, nullptr, 3u, 1u);
      Str2[1] = (char *)3;
      *(_WORD *)Str2[0] = -209;
      Str2[0][2] = 0;
      v25 = *v24;
      v26 = (__int64 *)v25[1];
      v27 = Str2[0];
      if ( !*((_BYTE *)v26 + 25) )
      {
        v28 = Str2[1];
        do
        {
          v29 = Str1;
          if ( v28 )
            v29 = v27;
          v30 = Str1;
          if ( v26[5] )
            v30 = (const char *)v26[4];
          v31 = (unsigned int)strcmp(v30, v29) >> 31;
          if ( !(_BYTE)v31 )
            v25 = v26;
          v32 = v26 + 2;
          if ( !(_BYTE)v31 )
            v32 = v26;
          v26 = (__int64 *)*v32;
        }
        while ( !*(_BYTE *)(*v32 + 25) );
        v6 = v51;
      }
      if ( v27 )
      {
        Str2[1] = nullptr;
        j_free(v27);
        Str2[0] = nullptr;
        v47 = 0;
      }
      if ( v25 != *v50 )
      {
        while ( 1 )
        {
          v33 = (char *)Str1;
          if ( v25[5] )
            v33 = (char *)v25[4];
          if ( strcmp(v33, ":") >= 0 )
            break;
          v34 = v33;
          v35 = *v33;
          if ( *v33 )
          {
            if ( v35 == 48 )
            {
              if ( !v33[1] )
              {
LABEL_63:
                sub_14005B0C0(v33, "%I64u", &v52);
                if ( v52 >= v6 && (a4 == 0x7FFFFFFF || v52 < a4) )
                {
                  sub_14005B0A0(Src, 32, "%I64u", v52 - v6);
                  if ( (_BYTE)v48 == 5 )
                  {
                    *(_OWORD *)Block = 0;
                    v54 = 0;
                    v38 = strlen((const char *)Src);
                    v39 = nullptr;
                    if ( v38 != -1 )
                    {
                      v39 = sub_14005ABE0((__int64)Block, nullptr, v38 + 1, 1u);
                      Block[0] = v39;
                    }
                    Block[1] = (void *)(v38 + 1);
                    memcpy(v39, Src, v38);
                    *((_BYTE *)Block[0] + v38) = 0;
                    v40 = (char *)sub_1400214F0(*((__int64 **)&v48 + 1), (__int64)Block);
                    sub_140028E70(v40, (char *)v25 + 56);
                    if ( Block[0] )
                    {
                      Block[1] = nullptr;
                      j_free(Block[0]);
                    }
                  }
                  else
                  {
                    v37 = sub_1400640B0(0x5FCu);
                    if ( v37 )
                    {
                      sub_140029390((__int64)&v48);
                      return v37;
                    }
                  }
                }
              }
            }
            else
            {
              v36 = v35 < 0;
              while ( !v36 && isdigit((unsigned __int8)v35) )
              {
                v35 = *++v34;
                v36 = *v34 < 0;
                if ( !*v34 )
                  goto LABEL_63;
              }
            }
          }
          v41 = (__int64 **)v25[2];
          if ( *((_BYTE *)v41 + 25) )
          {
            for ( i = (__int64 *)v25[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
            {
              if ( v25 != (__int64 *)i[2] )
                break;
              v25 = i;
            }
            v25 = i;
          }
          else
          {
            v25 = (__int64 *)v25[2];
            for ( j = *v41; !*((_BYTE *)j + 25); j = (__int64 *)*j )
              v25 = j;
          }
          if ( v25 == *v50 )
            break;
          v6 = v51;
        }
      }
      v44 = *(_OWORD *)a1;
      v45 = *((_OWORD *)a1 + 1);
      *(_OWORD *)a1 = v48;
      *((_OWORD *)a1 + 1) = v49;
      v48 = v44;
      v49 = v45;
      sub_140029390((__int64)&v48);
      return 0;
    }
  }
  else
  {
    while ( v9 != 7 )
    {
      if ( v9 != 10 )
        return sub_1400640B0(0x620u);
      v10 = sub_1400291D0(v7, 0);
      v7 = v10;
      if ( !v10 )
        return sub_140063DE0();
      v9 = *v10;
      if ( v9 == 5 )
        goto LABEL_8;
    }
    v12 = *((_QWORD *)v7 + 2);
    v13 = v12 - 1;
    v14 = nullptr;
    if ( !v12 )
      v13 = 0;
    v15 = v6 + v13;
    if ( v6 >= 0 )
      v15 = v6;
    v16 = 0;
    if ( v15 >= 0 )
      v16 = v15;
    if ( v16 > v13 )
      v16 = v13;
    if ( (a5 & 1) != 0 )
      a4 = v16 + 1;
    v17 = v13 + a4;
    if ( (a4 & 0x8000000000000000uLL) == 0LL )
      v17 = a4;
    v18 = 0;
    if ( v17 >= 0 )
      v18 = v17;
    if ( v18 > v13 )
      v18 = v13;
    v19 = v16;
    if ( v16 <= v18 )
      v19 = v18;
    v20 = v19 - v16;
    v21 = (const void *)(v16 + *((_QWORD *)v7 + 1));
    *(_OWORD *)Str2 = 0;
    v47 = 0;
    if ( v20 )
    {
      if ( v20 != -1 )
      {
        v14 = (char *)sub_14005ABE0((__int64)Str2, nullptr, v20 + 1, 1u);
        Str2[0] = v14;
      }
      Str2[1] = (char *)(v20 + 1);
      memcpy(v14, v21, v20);
      Str2[0][v20] = 0;
    }
    sub_140029390((__int64)a1);
    *a1 = 7;
    *((char **)a1 + 1) = Str2[0];
    *((char **)a1 + 2) = Str2[1];
    *((_QWORD *)a1 + 3) = v47;
    return 0;
  }
}
